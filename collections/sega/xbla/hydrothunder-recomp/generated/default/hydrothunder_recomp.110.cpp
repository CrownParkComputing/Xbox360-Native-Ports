#include "hydrothunder_funcs.110.h"

DEFINE_REX_FUNC(sub_82125FC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82125FC8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// std r30,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// bl 0x82160340
	ctx.lr = 0x82125FE4;
	sub_82160340(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,6072(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// bl 0x8215ef60
	ctx.lr = 0x82125FF4;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// bl 0x8215f338
	ctx.lr = 0x82126000;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82126004;
	sub_8215FA30(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212601C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82126238
	ctx.lr = 0x8212602C;
	sub_82126238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82160388
	ctx.lr = 0x8212603C;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82126058;
	sub_82120AC0(ctx, base);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x82126084
	if (ctx.cr0.eq) goto loc_82126084;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82120ac0
	ctx.lr = 0x82126070;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82126078;
	sub_8215F0F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212607C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
loc_82126084:
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x822f6280
	ctx.lr = 0x8212608C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212609c
	if (ctx.cr0.eq) goto loc_8212609C;
	// bl 0x821614b8
	ctx.lr = 0x82126098;
	sub_821614B8(ctx, base);
	// b 0x821260a0
	goto loc_821260A0;
loc_8212609C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_821260A0:
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25068
	ctx.r4.s64 = ctx.r11.s64 + -25068;
	// bl 0x8215f670
	ctx.lr = 0x821260B4;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821615c8
	ctx.lr = 0x821260C0;
	sub_821615C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821260ec
	if (!ctx.cr0.eq) goto loc_821260EC;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_821260CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82120ac0
	ctx.lr = 0x821260DC;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x821260E4;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8212607c
	goto loc_8212607C;
loc_821260EC:
	// li r31,1
	r31.s64 = 1;
	// b 0x821260cc
	goto loc_821260CC;
}

DEFINE_REX_FUNC(sub_8212F670) {
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
	ctx.lr = 0x8212F678;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,1932(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 1932);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,224
	r30.s64 = ctx.r11.s64 + 224;
	// beq cr6,0x8212f6bc
	if (ctx.cr6.eq) goto loc_8212F6BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r30,112
	ctx.r5.s64 = r30.s64 + 112;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F6BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F6BC:
	// lwz r4,1936(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 1936);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212f6e8
	if (ctx.cr6.eq) goto loc_8212F6E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r30,176
	ctx.r5.s64 = r30.s64 + 176;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F6E8:
	// lwz r4,1940(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 1940);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212f714
	if (ctx.cr6.eq) goto loc_8212F714;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F714:
	// lwz r4,1944(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 1944);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212f740
	if (ctx.cr6.eq) goto loc_8212F740;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f1,444(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 444);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F740:
	// lwz r4,2036(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 2036);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212f76c
	if (ctx.cr6.eq) goto loc_8212F76C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f1,144(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212F76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212F76C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821376B0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x821376B8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2c98
	ctx.lr = 0x821376C0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173338
	ctx.lr = 0x821376E0;
	sub_82173338(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,6096(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,72(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bctrl 
	ctx.lr = 0x82137708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82137724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f31,f29
	f31.f64 = f29.f64;
	// ble cr6,0x82137824
	if (!ctx.cr6.gt) goto loc_82137824;
	// lfs f28,160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	f28.f64 = double(temp.f32);
	// lfs f27,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f27.f64 = double(temp.f32);
loc_8213776C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82135630
	ctx.lr = 0x82137774;
	sub_82135630(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	f26.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82139c28
	ctx.lr = 0x82137780;
	sub_82139C28(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f30,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	f30.f64 = double(temp.f32);
	// fmuls f26,f26,f30
	f26.f64 = double(float(f26.f64 * f30.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f25,f0,f30
	f25.f64 = double(float(ctx.f0.f64 * f30.f64));
	// bl 0x82135630
	ctx.lr = 0x82137798;
	sub_82135630(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82139c28
	ctx.lr = 0x821377A4;
	sub_82139C28(ctx, base);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmuls f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 * f28.f64));
	// stfs f25,100(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f12,f24,f30
	ctx.f12.f64 = double(float(f24.f64 * f30.f64));
	// stfs f26,96(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f26,132(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f25,136(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r7,12
	ctx.r7.s64 = 12;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213780C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64;
	// fadds f31,f31,f29
	f31.f64 = double(float(f31.f64 + f29.f64));
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213776c
	if (ctx.cr6.lt) goto loc_8213776C;
loc_82137824:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2ce4
	ctx.lr = 0x82137830;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82146EB8) {
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
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146EDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82146EF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6160(r10)
	REX_STORE_U32(ctx.r10.u32 + 6160, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82148A30) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82148b98
	if (!ctx.cr6.eq) goto loc_82148B98;
	// lbz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 28);
	// lbz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82148b98
	if (!ctx.cr6.eq) goto loc_82148B98;
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x82120780
	ctx.lr = 0x82148A78;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82148b98
	if (!ctx.cr0.eq) goto loc_82148B98;
	// lbz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 68);
	// lbz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 68);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82148b98
	if (!ctx.cr6.eq) goto loc_82148B98;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82120780
	ctx.lr = 0x82148A9C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82148b98
	if (!ctx.cr0.eq) goto loc_82148B98;
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82148b98
	if (!ctx.cr6.eq) goto loc_82148B98;
	// lbz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 104);
	// lbz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82148b98
	if (!ctx.cr6.eq) goto loc_82148B98;
	// lbz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 116);
	// lbz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82148b98
	if (!ctx.cr6.eq) goto loc_82148B98;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82148ae8
	if (!ctx.cr0.eq) goto loc_82148AE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82148b9c
	goto loc_82148B9C;
loc_82148AE8:
	// lwz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1);
	// lwz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lwz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 5);
	// lwz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lwz r11,9(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 9);
	// lwz r10,9(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lwz r11,13(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13);
	// lwz r10,13(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lwz r11,17(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 17);
	// lwz r10,17(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 17);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lfs f0,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82148b8c
	if (!ctx.cr6.eq) goto loc_82148B8C;
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82148b90
	if (ctx.cr6.eq) goto loc_82148B90;
loc_82148B8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82148B90:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82148b9c
	goto loc_82148B9C;
loc_82148B98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82148B9C:
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

DEFINE_REX_FUNC(sub_82154C08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82154C10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r11,-15392
	r30.s64 = ctx.r11.s64 + -15392;
	// lwz r4,-15392(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15392);
	// bl 0x82120600
	ctx.lr = 0x82154C30;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82154C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82154C60;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82154c94
	if (ctx.cr6.eq) goto loc_82154C94;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121ec8
	ctx.lr = 0x82154C74;
	sub_82121EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82154c94
	if (!ctx.cr0.eq) goto loc_82154C94;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-26528
	ctx.r4.s64 = ctx.r11.s64 + -26528;
	// addi r3,r10,-26456
	ctx.r3.s64 = ctx.r10.s64 + -26456;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x821231d0
	ctx.lr = 0x82154C94;
	sub_821231D0(ctx, base);
loc_82154C94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82158698) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r4,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(48));
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r9,r5,48
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(48));
	// ld r30,16(r11)
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x82120600
	ctx.lr = 0x821586D4;
	sub_82120600(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r31,16(r31)
	r31.u64 = REX_LOAD_U64(r31.u32 + 16);
	// bl 0x82120600
	ctx.lr = 0x821586E4;
	sub_82120600(ctx, base);
	// cmpd cr6,r31,r30
	ctx.cr6.compare<int64_t>(r31.s64, r30.s64, ctx.xer);
	// bge cr6,0x8215872c
	if (!ctx.cr6.lt) goto loc_8215872C;
	// li r31,1
	r31.s64 = 1;
loc_821586F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82158700;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82158710;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
loc_8215872C:
	// ble cr6,0x82158738
	if (!ctx.cr6.gt) goto loc_82158738;
	// li r31,0
	r31.s64 = 0;
	// b 0x821586f0
	goto loc_821586F0;
loc_82158738:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120780
	ctx.lr = 0x82158744;
	sub_82120780(ctx, base);
	// rlwinm r31,r3,1,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// b 0x821586f0
	goto loc_821586F0;
}

DEFINE_REX_FUNC(sub_8215CBF0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f66b0
	ctx.lr = 0x8215CC10;
	sub_822F66B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8215cc28
	if (!ctx.cr6.lt) goto loc_8215CC28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8215CC28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f6700
	ctx.lr = 0x8215CC30;
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

DEFINE_REX_FUNC(sub_8215EFB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215EFB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8215EFC8;
	sub_8215F0F0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215f0d8
	if (ctx.cr6.eq) goto loc_8215F0D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215f0cc
	if (ctx.cr6.eq) goto loc_8215F0CC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215f0c0
	if (ctx.cr6.eq) goto loc_8215F0C0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215f07c
	if (ctx.cr6.eq) goto loc_8215F07C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8215f044
	if (ctx.cr6.eq) goto loc_8215F044;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8215f018
	if (ctx.cr6.eq) goto loc_8215F018;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8215f0e0
	if (!ctx.cr6.eq) goto loc_8215F0E0;
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// b 0x8215f0e0
	goto loc_8215F0E0;
loc_8215F018:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8215F020;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215f030
	if (ctx.cr0.eq) goto loc_8215F030;
	// bl 0x8215dd30
	ctx.lr = 0x8215F02C;
	sub_8215DD30(ctx, base);
	// b 0x8215f034
	goto loc_8215F034;
loc_8215F030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215F034:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8215ff98
	ctx.lr = 0x8215F040;
	sub_8215FF98(ctx, base);
	// b 0x8215f0e0
	goto loc_8215F0E0;
loc_8215F044:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8215F04C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215f068
	if (ctx.cr0.eq) goto loc_8215F068;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8215f06c
	goto loc_8215F06C;
loc_8215F068:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215F06C:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8215fd40
	ctx.lr = 0x8215F078;
	sub_8215FD40(ctx, base);
	// b 0x8215f0e0
	goto loc_8215F0E0;
loc_8215F07C:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x8215F084;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8215f0a4
	if (ctx.cr0.eq) goto loc_8215F0A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8215F09C;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8215f0a8
	goto loc_8215F0A8;
loc_8215F0A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215F0A8:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82120b20
	ctx.lr = 0x8215F0BC;
	sub_82120B20(ctx, base);
	// b 0x8215f0e0
	goto loc_8215F0E0;
loc_8215F0C0:
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// b 0x8215f0e0
	goto loc_8215F0E0;
loc_8215F0CC:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x8215f0e0
	goto loc_8215F0E0;
loc_8215F0D8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8215F0E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82169DA0) {
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
	ctx.lr = 0x82169DA8;
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
	// bne cr6,0x82169dec
	if (!ctx.cr6.eq) goto loc_82169DEC;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_82169DD4:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82169DD8:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82169DE4:
	// bl 0x8216a1f0
	ctx.lr = 0x82169DE8;
	sub_8216A1F0(ctx, base);
	// b 0x82169f08
	goto loc_82169F08;
loc_82169DEC:
	// lwz r25,4(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82169e14
	if (!ctx.cr6.eq) goto loc_82169E14;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82169eec
	if (!ctx.cr6.lt) goto loc_82169EEC;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82169dd4
	goto loc_82169DD4;
loc_82169E14:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x82169e38
	if (!ctx.cr6.eq) goto loc_82169E38;
	// lwz r6,8(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82169eec
	if (!ctx.cr6.lt) goto loc_82169EEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82169dd8
	goto loc_82169DD8;
loc_82169E38:
	// lwz r27,12(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r26,12(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// ble cr6,0x82169e9c
	if (!ctx.cr6.gt) goto loc_82169E9C;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216a6c8
	ctx.lr = 0x82169E54;
	sub_8216A6C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bge cr6,0x82169e98
	if (!ctx.cr6.lt) goto loc_82169E98;
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
	// beq 0x82169e8c
	if (ctx.cr0.eq) goto loc_82169E8C;
loc_82169E84:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82169de4
	goto loc_82169DE4;
loc_82169E8C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82169E90:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82169de4
	goto loc_82169DE4;
loc_82169E98:
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
loc_82169E9C:
	// bge cr6,0x82169eec
	if (!ctx.cr6.lt) goto loc_82169EEC;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82169990
	ctx.lr = 0x82169EAC;
	sub_82169990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x82169ec8
	if (ctx.cr6.eq) goto loc_82169EC8;
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82169eec
	if (!ctx.cr6.lt) goto loc_82169EEC;
loc_82169EC8:
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
	// beq 0x82169e90
	if (ctx.cr0.eq) goto loc_82169E90;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82169e84
	goto loc_82169E84;
loc_82169EEC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8216a0d0
	ctx.lr = 0x82169EFC;
	sub_8216A0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82169F08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82175020) {
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
	ctx.lr = 0x82175028;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82175070
	if (!ctx.cr6.gt) goto loc_82175070;
loc_82175044:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82175050;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82175120
	if (ctx.cr6.eq) goto loc_82175120;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82175044
	if (ctx.cr6.lt) goto loc_82175044;
loc_82175070:
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(r28.s32, 10, ctx.xer);
	// bge cr6,0x82175108
	if (!ctx.cr6.lt) goto loc_82175108;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821750d8
	if (!ctx.cr6.gt) goto loc_821750D8;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bgt cr6,0x821750a4
	if (ctx.cr6.gt) goto loc_821750A4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821750A4:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821750d8
	if (!ctx.cr6.gt) goto loc_821750D8;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x821750B8;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821750C8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821750D0;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_821750D8:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x821750E8;
	sub_8228CA78(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lbz r11,1(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 1);
	// stb r11,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2);
	// stb r11,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 3);
	// stb r11,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
loc_82175108:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
loc_82175114:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82175120:
	// addis r11,r30,1
	ctx.r11.s64 = r30.s64 + 65536;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x82175114
	goto loc_82175114;
}

DEFINE_REX_FUNC(sub_8217C4C8) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x8217C4E8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217c54c
	if (ctx.cr0.eq) goto loc_8217C54C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// addi r10,r8,29032
	ctx.r10.s64 = ctx.r8.s64 + 29032;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r9,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r8,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// b 0x8217c550
	goto loc_8217C550;
loc_8217C54C:
	// li r31,0
	r31.s64 = 0;
loc_8217C550:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217c560
	if (!ctx.cr6.eq) goto loc_8217C560;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217c570
	goto loc_8217C570;
loc_8217C560:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217c430
	ctx.lr = 0x8217C56C;
	sub_8217C430(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8217C570:
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

DEFINE_REX_FUNC(sub_82183088) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x82183090;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f12,272(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f13,280(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bctrl 
	ctx.lr = 0x821830F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,368(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,372(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f13,376(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,304(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f13,312(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,444(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f12,436(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f13,440(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f11,212(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821831E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,344(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f11,248(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// stfs f31,412(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,408(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f13,404(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183288;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821832D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f12,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,224(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,232(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f11,256(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f13,264(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bctrl 
	ctx.lr = 0x82183378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,292(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f11,324(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f13,328(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821833C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f12,352(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f13,360(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f11,384(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f0,388(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f13,392(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82183418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f31,460(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f12,420(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f13,424(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f11,452(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f0,448(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f13,456(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// bctrl 
	ctx.lr = 0x82183468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821A65D8) {
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
	// addi r11,r11,-25316
	ctx.r11.s64 = ctx.r11.s64 + -25316;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82125e40
	ctx.lr = 0x821A6604;
	sub_82125E40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a6614
	if (ctx.cr0.eq) goto loc_821A6614;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A6614;
	sub_8269CE98(ctx, base);
loc_821A6614:
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

DEFINE_REX_FUNC(sub_821A7420) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821A7428;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A7444;
	sub_821613D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215d3f0
	ctx.lr = 0x821A744C;
	sub_8215D3F0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8215d448
	ctx.lr = 0x821A746C;
	sub_8215D448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a748c
	if (!ctx.cr0.eq) goto loc_821A748C;
	// li r31,0
	r31.s64 = 0;
loc_821A7478:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82125438
	ctx.lr = 0x821A7480;
	sub_82125438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d0c
	return;
loc_821A748C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82161448
	ctx.lr = 0x821A7498;
	sub_82161448(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// b 0x821a7478
	goto loc_821A7478;
}

DEFINE_REX_FUNC(sub_821AA598) {
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
	ctx.lr = 0x821AA5A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821AA5C0;
	sub_821626C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// rlwinm r29,r11,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821a8c10
	ctx.lr = 0x821AA5D4;
	sub_821A8C10(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r28,r29
	ctx.r4.u64 = r28.u64 + r29.u64;
	// bl 0x82125c20
	ctx.lr = 0x821AA5EC;
	sub_82125C20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AA5F8;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AA604;
	sub_826A1E70(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821AA618;
	sub_821626C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8228ca78
	ctx.lr = 0x821AA62C;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r28,r29
	ctx.r4.u64 = r28.u64 + r29.u64;
	// bl 0x82125c20
	ctx.lr = 0x821AA644;
	sub_82125C20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AA650;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AA65C;
	sub_826A1E70(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821AA670;
	sub_821626C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,120
	ctx.r3.s64 = r30.s64 + 120;
	// bl 0x82125c98
	ctx.lr = 0x821AA67C;
	sub_82125C98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r29,r28
	ctx.r4.u64 = r29.u64 + r28.u64;
	// bl 0x82125c20
	ctx.lr = 0x821AA698;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AA6A4;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AA6B0;
	sub_826A1E70(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x821AA6C4;
	sub_821626C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// mulli r29,r11,34
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(34));
	// bl 0x821aa988
	ctx.lr = 0x821AA6D8;
	sub_821AA988(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r4,r28,r29
	ctx.r4.u64 = r28.u64 + r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82125c20
	ctx.lr = 0x821AA6F0;
	sub_82125C20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AA6FC;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AA708;
	sub_826A1E70(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// lbz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 72);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// beq 0x821aa730
	if (ctx.cr0.eq) goto loc_821AA730;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x821aa734
	goto loc_821AA734;
loc_821AA730:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_821AA734:
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x822c1a70
	ctx.lr = 0x821AA744;
	sub_822C1A70(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 176);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AA76C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821AA778;
	sub_821626C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r4,r28,r27
	ctx.r4.u64 = r28.u64 + r27.u64;
	// bl 0x82125c20
	ctx.lr = 0x821AA78C;
	sub_82125C20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AA798;
	sub_82125C98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AA7A4;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821aa7d0
	if (ctx.cr6.eq) goto loc_821AA7D0;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -4);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,-19400(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821AA7D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821AA7D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,180(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 180);
	// bl 0x821da048
	ctx.lr = 0x821AA7DC;
	sub_821DA048(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// bl 0x82125c20
	ctx.lr = 0x821AA7EC;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AA7F8;
	sub_82125C98(ctx, base);
	// addi r4,r30,144
	ctx.r4.s64 = r30.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x821AA804;
	sub_826A1E70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821BBA18) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x821BBA2C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bba3c
	if (ctx.cr0.eq) goto loc_821BBA3C;
	// bl 0x821bba50
	ctx.lr = 0x821BBA38;
	sub_821BBA50(ctx, base);
	// b 0x821bba40
	goto loc_821BBA40;
loc_821BBA3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BBA40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BCF50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14976
	ctx.r3.s64 = ctx.r11.s64 + -14976;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BD488) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14968
	ctx.r3.s64 = ctx.r11.s64 + -14968;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BDBA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14960
	ctx.r3.s64 = ctx.r11.s64 + -14960;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BDE78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BDE80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821BDE90;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-18768
	ctx.r11.s64 = ctx.r11.s64 + -18768;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BDEA4;
	sub_822F6280(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bdec8
	if (ctx.cr0.eq) goto loc_821BDEC8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BDEC0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bdecc
	goto loc_821BDECC;
loc_821BDEC8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821BDECC:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BDED8;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BDEE0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bdf54
	if (ctx.cr0.eq) goto loc_821BDF54;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BDF04;
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
	ctx.lr = 0x821BDF18;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bdf44
	if (ctx.cr0.eq) goto loc_821BDF44;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-7640
	ctx.r10.s64 = ctx.r10.s64 + -7640;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bdf48
	goto loc_821BDF48;
loc_821BDF44:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BDF48:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bdf58
	goto loc_821BDF58;
loc_821BDF54:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BDF58:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BDF70;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BDF78;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821bdfb0
	if (ctx.cr0.eq) goto loc_821BDFB0;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-20020
	ctx.r4.s64 = ctx.r11.s64 + -20020;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BDFA4;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bdfb4
	goto loc_821BDFB4;
loc_821BDFB0:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BDFB4:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BDFCC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BDFD4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be004
	if (ctx.cr0.eq) goto loc_821BE004;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-20024
	ctx.r4.s64 = ctx.r11.s64 + -20024;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BDFF8;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821be008
	goto loc_821BE008;
loc_821BE004:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BE008:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE020;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BE028;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be058
	if (ctx.cr0.eq) goto loc_821BE058;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19164
	ctx.r4.s64 = ctx.r11.s64 + -19164;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE04C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821be05c
	goto loc_821BE05C;
loc_821BE058:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BE05C:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE074;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BE07C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be0ac
	if (ctx.cr0.eq) goto loc_821BE0AC;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21040
	ctx.r4.s64 = ctx.r11.s64 + -21040;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE0A0;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821be0b0
	goto loc_821BE0B0;
loc_821BE0AC:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BE0B0:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE0C8;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BE0D0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be100
	if (ctx.cr0.eq) goto loc_821BE100;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21044
	ctx.r4.s64 = ctx.r11.s64 + -21044;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE0F4;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821be104
	goto loc_821BE104;
loc_821BE100:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BE104:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE11C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BE124;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be154
	if (ctx.cr0.eq) goto loc_821BE154;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21048
	ctx.r4.s64 = ctx.r11.s64 + -21048;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE148;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821be158
	goto loc_821BE158;
loc_821BE154:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BE158:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE170;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BE178;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be1a8
	if (ctx.cr0.eq) goto loc_821BE1A8;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21052
	ctx.r4.s64 = ctx.r11.s64 + -21052;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE19C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821be1ac
	goto loc_821BE1AC;
loc_821BE1A8:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BE1AC:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE1C4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BE1CC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821be1fc
	if (ctx.cr0.eq) goto loc_821BE1FC;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-21056
	ctx.r4.s64 = ctx.r11.s64 + -21056;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BE1F0;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821be200
	goto loc_821BE200;
loc_821BE1FC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BE200:
	// lwz r10,112(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// bl 0x82264568
	ctx.lr = 0x821BE218;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821D8170) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821D8178;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x821eac60
	ctx.lr = 0x821D818C;
	sub_821EAC60(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821613d8
	ctx.lr = 0x821D819C;
	sub_821613D8(ctx, base);
	// addi r30,r28,144
	r30.s64 = r28.s64 + 144;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d8220
	ctx.lr = 0x821D81AC;
	sub_821D8220(ctx, base);
	// lwz r11,144(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 144);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d81e8
	goto loc_821D81E8;
loc_821D81B8:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x822f6280
	ctx.lr = 0x821D81C0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d81d0
	if (ctx.cr0.eq) goto loc_821D81D0;
	// bl 0x821eb768
	ctx.lr = 0x821D81CC;
	sub_821EB768(ctx, base);
	// b 0x821d81d4
	goto loc_821D81D4;
loc_821D81D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D81D4:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821ebaa8
	ctx.lr = 0x821D81E0;
	sub_821EBAA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821D81E8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d81b8
	if (!ctx.cr6.eq) goto loc_821D81B8;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d820c
	goto loc_821D820C;
loc_821D81F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821ebcd8
	ctx.lr = 0x821D8204;
	sub_821EBCD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821D820C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d81f8
	if (!ctx.cr6.eq) goto loc_821D81F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821DBEB0) {
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
	ctx.lr = 0x821DBEB8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r11,-6(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821dbf0c
	if (ctx.cr0.eq) goto loc_821DBF0C;
	// lwz r10,84(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821dbf0c
	if (ctx.cr0.eq) goto loc_821DBF0C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821dbf0c
	if (!ctx.cr6.gt) goto loc_821DBF0C;
loc_821DBF00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821dbf00
	if (ctx.cr6.lt) goto loc_821DBF00;
loc_821DBF0C:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821dbf74
	if (!ctx.cr6.eq) goto loc_821DBF74;
	// addi r31,r31,84
	r31.s64 = r31.s64 + 84;
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821dbfd8
	if (!ctx.cr0.gt) goto loc_821DBFD8;
loc_821DBF34:
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DBF50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821dbf34
	if (ctx.cr6.lt) goto loc_821DBF34;
	// b 0x821dbfd8
	goto loc_821DBFD8;
loc_821DBF74:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dbfd8
	if (ctx.cr0.eq) goto loc_821DBFD8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821dbfa8
	if (ctx.cr6.eq) goto loc_821DBFA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,11940
	ctx.r4.s64 = ctx.r11.s64 + 11940;
	// addi r3,r10,11992
	ctx.r3.s64 = ctx.r10.s64 + 11992;
	// li r5,159
	ctx.r5.s64 = 159;
	// bl 0x821231d0
	ctx.lr = 0x821DBFA8;
	sub_821231D0(ctx, base);
loc_821DBFA8:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DBFC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
loc_821DBFD8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821E4548) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e460c
	if (ctx.cr6.eq) goto loc_821E460C;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E457C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821e457c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E457C;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216d040
	ctx.lr = 0x821E4594;
	sub_8216D040(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r9,320(r11)
	REX_STORE_U64(ctx.r11.u32 + 320, ctx.r9.u64);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r10,328(r11)
	REX_STORE_U64(ctx.r11.u32 + 328, ctx.r10.u64);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// addi r8,r11,336
	ctx.r8.s64 = ctx.r11.s64 + 336;
	// std r10,336(r11)
	REX_STORE_U64(ctx.r11.u32 + 336, ctx.r10.u64);
	// std r9,344(r11)
	REX_STORE_U64(ctx.r11.u32 + 344, ctx.r9.u64);
	// bl 0x821c3ec8
	ctx.lr = 0x821E4600;
	sub_821C3EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 260);
	// bl 0x822c0f18
	ctx.lr = 0x821E460C;
	sub_822C0F18(ctx, base);
loc_821E460C:
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

DEFINE_REX_FUNC(sub_821EA278) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lfs f13,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 592);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// addi r11,r9,16592
	ctx.r11.s64 = ctx.r9.s64 + 16592;
	// fsubs f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// fsubs f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r9,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// lfsx f10,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f10,f10,f0,f1
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fsubs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
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
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r4,r9,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r3,r10,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// lfsx f9,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f9,f9,f0,f2
	ctx.f9.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// lfsx f7,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f10,f7,f12,f10
	ctx.f10.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// fsubs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f8,f13
	ctx.cr6.compare(ctx.f8.f64, ctx.f13.f64);
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fctiw f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// rlwinm r4,r9,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// or r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 | ctx.r4.u64;
	// lfsx f10,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f10,f10,f12,f9
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// fsel f0,f8,f0,f3
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fctiw f10,f10
	ctx.f10.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
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
	// rlwinm r8,r10,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lfsx f13,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f12,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82205808) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8220586c
	if (!ctx.cr6.gt) goto loc_8220586C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r11,40(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x8220586C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8220586C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208810) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208818) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82209C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A880) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8220a8b0
	if (ctx.cr6.eq) goto loc_8220A8B0;
	// bl 0x821971c0
	ctx.lr = 0x8220A89C;
	sub_821971C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,32304
	ctx.r11.s64 = ctx.r11.s64 + 32304;
	// stw r10,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8220A8B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C2C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8220C2C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8220c308
	if (ctx.cr6.eq) goto loc_8220C308;
	// lwz r29,36(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x8220c2f8
	goto loc_8220C2F8;
loc_8220C2E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8220C2F4;
	sub_82120AC0(ctx, base);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
loc_8220C2F8:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8220c2e4
	if (!ctx.cr6.eq) goto loc_8220C2E4;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8269ce98
	ctx.lr = 0x8220C308;
	sub_8269CE98(ctx, base);
loc_8220C308:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8220C328;
	sub_82120AC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8220F3F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r3,260
	ctx.r4.s64 = ctx.r3.s64 + 260;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
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

DEFINE_REX_FUNC(sub_8220FD50) {
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
	// li r3,232
	ctx.r3.s64 = 232;
	// bl 0x822f6280
	ctx.lr = 0x8220FD64;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220fd74
	if (ctx.cr0.eq) goto loc_8220FD74;
	// bl 0x8220fd88
	ctx.lr = 0x8220FD70;
	sub_8220FD88(ctx, base);
	// b 0x8220fd78
	goto loc_8220FD78;
loc_8220FD74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220FD78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212718) {
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
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x822f6280
	ctx.lr = 0x8221272C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221273c
	if (ctx.cr0.eq) goto loc_8221273C;
	// bl 0x82212750
	ctx.lr = 0x82212738;
	sub_82212750(ctx, base);
	// b 0x82212740
	goto loc_82212740;
loc_8221273C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212740:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822139C0) {
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
	ctx.lr = 0x822139C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x822e6ff8
	ctx.lr = 0x822139E4;
	sub_822E6FF8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82213a80
	if (ctx.cr0.eq) goto loc_82213A80;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lfs f12,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r7,16592
	ctx.r6.s64 = ctx.r7.s64 + 16592;
	// lwz r3,116(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 116);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32106
	ctx.r4.s64 = -2104098816;
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r9,112
	ctx.r9.s64 = 112;
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,16592(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,6096(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 6096);
	// lfs f6,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r29,44
	ctx.r7.s64 = r29.s64 + 44;
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmadds f1,f6,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f7,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82174318
	ctx.lr = 0x82213A80;
	sub_82174318(ctx, base);
loc_82213A80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8221F030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8221F038;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221F054;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8221F068;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221f08c
	if (ctx.cr0.eq) goto loc_8221F08C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r29,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r29.u64);
	// addi r10,r10,-19528
	ctx.r10.s64 = ctx.r10.s64 + -19528;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8221f090
	goto loc_8221F090;
loc_8221F08C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221F090:
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822233E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,976(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822233fc
	if (!ctx.cr6.gt) goto loc_822233FC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,976(r4)
	REX_STORE_U32(ctx.r4.u32 + 976, ctx.r11.u32);
loc_822233FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82224D90) {
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
	ctx.lr = 0x82224D98;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r27,r11,16492
	r27.s64 = ctx.r11.s64 + 16492;
	// addi r26,r10,1624
	r26.s64 = ctx.r10.s64 + 1624;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224DBC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82224DC8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224DCC;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224DDC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x82224DE8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224DEC;
	sub_8215FA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224DFC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x82224E08;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224E0C;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224E1C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r26,r11,20280
	r26.s64 = ctx.r11.s64 + 20280;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224E2C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224E30;
	sub_8215FA30(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x82224E40;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224e7c
	if (!ctx.cr0.eq) goto loc_82224E7C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213a1b0
	ctx.lr = 0x82224E5C;
	sub_8213A1B0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24604
	ctx.r4.s64 = ctx.r11.s64 + -24604;
	// bl 0x82121928
	ctx.lr = 0x82224E68;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120700
	ctx.lr = 0x82224E74;
	sub_82120700(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82224f9c
	goto loc_82224F9C;
loc_82224E7C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x82224E8C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224f04
	if (!ctx.cr0.eq) goto loc_82224F04;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8213a1b0
	ctx.lr = 0x82224EA8;
	sub_8213A1B0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r27,r11,-29556
	r27.s64 = ctx.r11.s64 + -29556;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82121928
	ctx.lr = 0x82224EB8;
	sub_82121928(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82224ECC;
	sub_82121DD0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82121928
	ctx.lr = 0x82224ED4;
	sub_82121928(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82224EE4;
	sub_82121DD0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24604
	ctx.r4.s64 = ctx.r11.s64 + -24604;
	// bl 0x82121928
	ctx.lr = 0x82224EF0;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120700
	ctx.lr = 0x82224EFC;
	sub_82120700(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82224f9c
	goto loc_82224F9C;
loc_82224F04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82125d00
	ctx.lr = 0x82224F14;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224f50
	if (!ctx.cr0.eq) goto loc_82224F50;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-24588
	ctx.r4.s64 = ctx.r11.s64 + -24588;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8213a1b0
	ctx.lr = 0x82224F30;
	sub_8213A1B0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24604
	ctx.r4.s64 = ctx.r11.s64 + -24604;
	// bl 0x82121928
	ctx.lr = 0x82224F3C;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120700
	ctx.lr = 0x82224F48;
	sub_82120700(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82224f9c
	goto loc_82224F9C;
loc_82224F50:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8213a1b0
	ctx.lr = 0x82224F64;
	sub_8213A1B0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-29556
	ctx.r4.s64 = ctx.r11.s64 + -29556;
	// bl 0x82121928
	ctx.lr = 0x82224F70;
	sub_82121928(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82224F80;
	sub_82121DD0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24604
	ctx.r4.s64 = ctx.r11.s64 + -24604;
	// bl 0x82121928
	ctx.lr = 0x82224F8C;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120700
	ctx.lr = 0x82224F98;
	sub_82120700(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_82224F9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82224FA8;
	sub_82120AC0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8222EA80) {
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
	ctx.lr = 0x8222EA88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,18440
	ctx.r4.s64 = ctx.r11.s64 + 18440;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x8222EAA8;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-21084
	ctx.r4.s64 = ctx.r11.s64 + -21084;
	// bl 0x8215f670
	ctx.lr = 0x8222EAB8;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-30428
	ctx.r4.s64 = ctx.r11.s64 + -30428;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x8222EACC;
	sub_8215F670(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8216b740
	ctx.lr = 0x8222EAE4;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x8222EAF0;
	sub_8215FBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8222EAF8;
	sub_8215F0F0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,3
	r29.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// ble cr6,0x8222eb40
	if (!ctx.cr6.gt) goto loc_8222EB40;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8222eb40
	if (!ctx.cr6.eq) goto loc_8222EB40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bf1e8
	ctx.lr = 0x8222EB2C;
	sub_821BF1E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8222EB38;
	sub_8215F0F0(ctx, base);
	// stb r27,8(r31)
	REX_STORE_U8(r31.u32 + 8, r27.u8);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_8222EB40:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,6040(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x8215fa30
	ctx.lr = 0x8222EB50;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c3cd8
	ctx.lr = 0x8222EB5C;
	sub_821C3CD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222eb74
	if (!ctx.cr0.eq) goto loc_8222EB74;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-21068
	ctx.r4.s64 = ctx.r11.s64 + -21068;
	// bl 0x8215fbf8
	ctx.lr = 0x8222EB74;
	sub_8215FBF8(ctx, base);
loc_8222EB74:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8222ed28
	ctx.lr = 0x8222EB7C;
	sub_8222ED28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82236450) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,708(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82236490
	if (ctx.cr6.eq) goto loc_82236490;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82236490
	if (!ctx.cr0.eq) goto loc_82236490;
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82236484
	if (ctx.cr6.eq) goto loc_82236484;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82236484
	if (ctx.cr6.eq) goto loc_82236484;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
loc_82236484:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
loc_82236490:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822380E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13484
	ctx.r3.s64 = ctx.r11.s64 + -13484;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822383E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// bne cr6,0x822383f0
	if (!ctx.cr6.eq) goto loc_822383F0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822383F0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// b 0x82146418
	sub_82146418(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822398D8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x822398E0;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f670
	ctx.lr = 0x82239904;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223990C;
	sub_8215F0F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// lbz r31,113(r27)
	r31.u64 = REX_LOAD_U8(r27.u32 + 113);
	// bl 0x8215f670
	ctx.lr = 0x82239920;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239928;
	sub_8215F0F0(ctx, base);
	// li r24,3
	r24.s64 = 3;
	// stb r31,8(r30)
	REX_STORE_U8(r30.u32 + 8, r31.u8);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223994C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r18,r11,-26752
	r18.s64 = ctx.r11.s64 + -26752;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239964;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x8223996C;
	sub_8215FC78(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x82239978;
	sub_8215DC10(ctx, base);
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// li r22,0
	r22.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r25,r11,-25716
	r25.s64 = ctx.r11.s64 + -25716;
	// addi r20,r10,-24944
	r20.s64 = ctx.r10.s64 + -24944;
	// li r21,2
	r21.s64 = 2;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// li r23,1
	r23.s64 = 1;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r17,r9,24552
	r17.s64 = ctx.r9.s64 + 24552;
	// addi r16,r8,-24932
	r16.s64 = ctx.r8.s64 + -24932;
	// addi r15,r7,-24968
	r15.s64 = ctx.r7.s64 + -24968;
	// ble 0x82239c5c
	if (!ctx.cr0.gt) goto loc_82239C5C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,-7872
	ctx.r11.s64 = ctx.r11.s64 + -7872;
	// addi r10,r10,-24748
	ctx.r10.s64 = ctx.r10.s64 + -24748;
	// addi r9,r9,-17788
	ctx.r9.s64 = ctx.r9.s64 + -17788;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// addi r11,r8,-26744
	ctx.r11.s64 = ctx.r8.s64 + -26744;
	// addi r10,r7,-24740
	ctx.r10.s64 = ctx.r7.s64 + -24740;
	// addi r9,r6,-26828
	ctx.r9.s64 = ctx.r6.s64 + -26828;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r19,0
	r19.s64 = 0;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r20,0
	r20.s64 = 0;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82239A20:
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239A38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3852(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3852);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,3828(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3828);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r29,r20,r10
	r29.u64 = r20.u64 + ctx.r10.u64;
	// lwzx r31,r19,r11
	r31.u64 = REX_LOAD_U32(r19.u32 + ctx.r11.u32);
	// bl 0x8215f670
	ctx.lr = 0x82239A58;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x82239A60;
	sub_8215F200(ctx, base);
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82239a80
	if (ctx.cr6.lt) goto loc_82239A80;
	// lwz r25,0(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82239a84
	goto loc_82239A84;
loc_82239A80:
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_82239A84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8215f670
	ctx.lr = 0x82239A90;
	sub_8215F670(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x82239A98;
	sub_8215FBF8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x82239AA8;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239AB0;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r25,16(r29)
	r25.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x8215f670
	ctx.lr = 0x82239AC8;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239AD0;
	sub_8215F0F0(ctx, base);
	// stw r25,8(r14)
	REX_STORE_U32(r14.u32 + 8, r25.u32);
	// stw r23,0(r14)
	REX_STORE_U32(r14.u32 + 0, r23.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x82239AE8;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239AF0;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r25.u32 + 8, temp.u32);
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f670
	ctx.lr = 0x82239B1C;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239B24;
	sub_8215F0F0(ctx, base);
	// stb r25,8(r14)
	REX_STORE_U8(r14.u32 + 8, r25.u8);
	// stw r24,0(r14)
	REX_STORE_U32(r14.u32 + 0, r24.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8215f670
	ctx.lr = 0x82239B50;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239B58;
	sub_8215F0F0(ctx, base);
	// stb r25,8(r14)
	REX_STORE_U8(r14.u32 + 8, r25.u8);
	// stw r24,0(r14)
	REX_STORE_U32(r14.u32 + 0, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r30,208
	r25.s64 = r30.s64 + 208;
	// bl 0x8215f670
	ctx.lr = 0x82239B70;
	sub_8215F670(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82239b84
	if (ctx.cr6.lt) goto loc_82239B84;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x82239b88
	goto loc_82239B88;
loc_82239B84:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82239B88:
	// bl 0x8215fbf8
	ctx.lr = 0x82239B8C;
	sub_8215FBF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r25,224(r29)
	r25.u64 = REX_LOAD_U8(r29.u32 + 224);
	// bl 0x8215f670
	ctx.lr = 0x82239B9C;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239BA4;
	sub_8215F0F0(ctx, base);
	// stb r25,8(r14)
	REX_STORE_U8(r14.u32 + 8, r25.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,0(r14)
	REX_STORE_U32(r14.u32 + 0, r24.u32);
	// addi r25,r30,236
	r25.s64 = r30.s64 + 236;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8215f670
	ctx.lr = 0x82239BBC;
	sub_8215F670(ctx, base);
	// lwz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 256);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82239bd0
	if (ctx.cr6.lt) goto loc_82239BD0;
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// b 0x82239bd4
	goto loc_82239BD4;
loc_82239BD0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_82239BD4:
	// bl 0x8215fbf8
	ctx.lr = 0x82239BD8;
	sub_8215FBF8(ctx, base);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239BFC;
	sub_8215F670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r25,112(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r30.u64);
	// lwz r31,304(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 304);
	// bl 0x8215f670
	ctx.lr = 0x82239C20;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239C28;
	sub_8215F0F0(ctx, base);
	// stw r23,0(r30)
	REX_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// addi r20,r20,320
	r20.s64 = r20.s64 + 320;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239C50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r22,r3
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82239a20
	if (ctx.cr6.lt) goto loc_82239A20;
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82239C5C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r30,r11,-31444
	r30.s64 = ctx.r11.s64 + -31444;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239C70;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x82239C78;
	sub_8215FC78(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x82239C84;
	sub_8215DC10(ctx, base);
	// lwz r11,3868(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3868);
	// lwz r10,3872(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3872);
	// li r29,0
	r29.s64 = 0;
	// addi r22,r1,112
	r22.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_82239CA4:
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x82239d58
	if (!ctx.cr6.lt) goto loc_82239D58;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239CBC;
	sub_8215F670(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215f200
	ctx.lr = 0x82239CC4;
	sub_8215F200(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239CD0;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239CD8;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239CEC;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239CF4;
	sub_8215F0F0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// stw r23,0(r18)
	REX_STORE_U32(r18.u32 + 0, r23.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r31,8(r18)
	REX_STORE_U32(r18.u32 + 8, r31.u32);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239D0C;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239D14;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stw r21,0(r18)
	REX_STORE_U32(r18.u32 + 0, r21.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239D28;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239D30;
	sub_8215F0F0(ctx, base);
	// stw r24,0(r18)
	REX_STORE_U32(r18.u32 + 0, r24.u32);
	// stb r31,8(r18)
	REX_STORE_U8(r18.u32 + 8, r31.u8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239D44;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239D4C;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// b 0x82239e3c
	goto loc_82239E3C;
loc_82239D58:
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3852(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 3852);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,3828(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 3828);
	// mulli r9,r31,320
	ctx.r9.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(320));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r31,r8,r9
	r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r19,r10,r11
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8215f670
	ctx.lr = 0x82239D94;
	sub_8215F670(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215f200
	ctx.lr = 0x82239D9C;
	sub_8215F200(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lfs f30,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	f30.f64 = double(temp.f32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x8215f670
	ctx.lr = 0x82239DAC;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239DB4;
	sub_8215F0F0(ctx, base);
	// stfs f30,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stw r21,0(r18)
	REX_STORE_U32(r18.u32 + 0, r21.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r18,16(r31)
	r18.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8215f670
	ctx.lr = 0x82239DCC;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239DD4;
	sub_8215F0F0(ctx, base);
	// stw r18,8(r14)
	REX_STORE_U32(r14.u32 + 8, r18.u32);
	// stw r23,0(r14)
	REX_STORE_U32(r14.u32 + 0, r23.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lfs f30,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	f30.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x82239DEC;
	sub_8215F670(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239DF4;
	sub_8215F0F0(ctx, base);
	// stfs f30,8(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r18.u32 + 8, temp.u32);
	// stw r21,0(r18)
	REX_STORE_U32(r18.u32 + 0, r21.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lbz r18,224(r31)
	r18.u64 = REX_LOAD_U8(r31.u32 + 224);
	// bl 0x8215f670
	ctx.lr = 0x82239E0C;
	sub_8215F670(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239E14;
	sub_8215F0F0(ctx, base);
	// stb r18,8(r14)
	REX_STORE_U8(r14.u32 + 8, r18.u8);
	// stw r24,0(r14)
	REX_STORE_U32(r14.u32 + 0, r24.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r31,304(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 304);
	// bl 0x8215f670
	ctx.lr = 0x82239E2C;
	sub_8215F670(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82239E34;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r19)
	REX_STORE_U32(r19.u32 + 8, r31.u32);
	// stw r23,0(r19)
	REX_STORE_U32(r19.u32 + 0, r23.u32);
loc_82239E3C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// blt cr6,0x82239ca4
	if (ctx.cr6.lt) goto loc_82239CA4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82260F40) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82260f9c
	if (!ctx.cr0.eq) goto loc_82260F9C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x82260f9c
	if (!ctx.cr6.eq) goto loc_82260F9C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6200(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6200);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// li r4,13
	ctx.r4.s64 = 13;
	// beq cr6,0x82260f98
	if (ctx.cr6.eq) goto loc_82260F98;
	// li r4,15
	ctx.r4.s64 = 15;
loc_82260F98:
	// bl 0x8225b1c8
	ctx.lr = 0x82260F9C;
	sub_8225B1C8(ctx, base);
loc_82260F9C:
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

DEFINE_REX_FUNC(sub_82264568) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822645a0
	if (!ctx.cr6.lt) goto loc_822645A0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x822645a4
	if (!ctx.cr6.gt) goto loc_822645A4;
loc_822645A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822645A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822645e8
	if (ctx.cr0.eq) goto loc_822645E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// bne cr6,0x822645cc
	if (!ctx.cr6.eq) goto loc_822645CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8c0
	ctx.lr = 0x822645CC;
	sub_8212A8C0(ctx, base);
loc_822645CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82264610
	if (ctx.cr6.eq) goto loc_82264610;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x8226460c
	goto loc_8226460C;
loc_822645E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822645fc
	if (!ctx.cr6.eq) goto loc_822645FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8c0
	ctx.lr = 0x822645FC;
	sub_8212A8C0(ctx, base);
loc_822645FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82264610
	if (ctx.cr6.eq) goto loc_82264610;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8226460C:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82264610:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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

DEFINE_REX_FUNC(sub_822695B0) {
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
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821678f0
	ctx.lr = 0x822695D8;
	sub_821678F0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822695F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,636(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 636);
	// addi r3,r31,572
	ctx.r3.s64 = r31.s64 + 572;
	// stb r11,620(r31)
	REX_STORE_U8(r31.u32 + 620, ctx.r11.u8);
	// bl 0x8226a4e8
	ctx.lr = 0x82269600;
	sub_8226A4E8(ctx, base);
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

DEFINE_REX_FUNC(sub_8226C290) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x8226C298;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2ca0
	ctx.lr = 0x8226C2A0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fadds f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f26,f1
	f26.f64 = ctx.f1.f64;
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fadds f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// ble cr6,0x8226c4dc
	if (!ctx.cr6.gt) goto loc_8226C4DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r23,0
	r23.s64 = 0;
	// li r25,255
	r25.s64 = 255;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lis r22,-32106
	r22.s64 = -2104098816;
	// lfs f31,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f27,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f27.f64 = double(temp.f32);
loc_8226C300:
	// lwz r11,208(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 208);
	// li r31,0
	r31.s64 = 0;
	// add r26,r23,r11
	r26.u64 = r23.u64 + ctx.r11.u64;
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c400
	if (ctx.cr6.eq) goto loc_8226C400;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x822e6ff8
	ctx.lr = 0x8226C320;
	sub_822E6FF8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8226c400
	if (ctx.cr0.eq) goto loc_8226C400;
	// lwz r3,6140(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6140);
	// addi r4,r26,28
	ctx.r4.s64 = r26.s64 + 28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226C340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * f28.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// blt cr6,0x8226c390
	if (ctx.cr6.lt) goto loc_8226C390;
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8226c394
	goto loc_8226C394;
loc_8226C390:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_8226C394:
	// lwz r11,6096(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 6096);
	// addi r30,r29,72
	r30.s64 = r29.s64 + 72;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// li r9,113
	ctx.r9.s64 = 113;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82174318
	ctx.lr = 0x8226C3BC;
	sub_82174318(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226c3d0
	if (ctx.cr6.lt) goto loc_8226C3D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8226c3d4
	goto loc_8226C3D4;
loc_8226C3D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8226C3D4:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x82174798
	ctx.lr = 0x8226C3EC;
	sub_82174798(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f0,f1,f29
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f1.f64, -f29.f64)));
	// lfs f13,120(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// li r31,1
	r31.s64 = 1;
	// fsubs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8226C400:
	// lwz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 56);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226c4b8
	if (ctx.cr6.eq) goto loc_8226C4B8;
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8226c4b8
	if (ctx.cr6.eq) goto loc_8226C4B8;
	// lwa r10,16(r5)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 16));
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// lwa r11,12(r5)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 12));
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stb r25,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r25.u8);
	// stb r25,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r25.u8);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stb r25,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r25.u8);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stb r25,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6096);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f29,f29,f12
	f29.f64 = double(float(f29.f64 - ctx.f12.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fnmsubs f10,f11,f27,f28
	ctx.f10.f64 = double(float(-std::fma(ctx.f11.f64, f27.f64, -f28.f64)));
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82136128
	ctx.lr = 0x8226C4B4;
	sub_82136128(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_8226C4B8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226c4c8
	if (ctx.cr0.eq) goto loc_8226C4C8;
	// lfs f0,124(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f29,f0
	f29.f64 = double(float(f29.f64 - ctx.f0.f64));
loc_8226C4C8:
	// lwz r11,200(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 200);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r23,r23,60
	r23.s64 = r23.s64 + 60;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226c300
	if (ctx.cr6.lt) goto loc_8226C300;
loc_8226C4DC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cec
	ctx.lr = 0x8226C4E8;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8227EF58) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x8227EF60;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f30.f64 = double(temp.f32);
	// beq cr6,0x8227f0cc
	if (ctx.cr6.eq) goto loc_8227F0CC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227EFB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120d70
	ctx.lr = 0x8227EFC4;
	sub_82120D70(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25848
	ctx.r4.s64 = ctx.r11.s64 + 25848;
	// bl 0x82125d00
	ctx.lr = 0x8227EFD4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227effc
	if (!ctx.cr0.eq) goto loc_8227EFFC;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227f05c
	if (ctx.cr6.eq) goto loc_8227F05C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
	// addi r4,r10,3976
	ctx.r4.s64 = ctx.r10.s64 + 3976;
	// b 0x8227f030
	goto loc_8227F030;
loc_8227EFFC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25816
	ctx.r4.s64 = ctx.r11.s64 + 25816;
	// bl 0x82125d00
	ctx.lr = 0x8227F00C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227f05c
	if (!ctx.cr0.eq) goto loc_8227F05C;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8227f05c
	if (ctx.cr6.eq) goto loc_8227F05C;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// addi r4,r10,4336
	ctx.r4.s64 = ctx.r10.s64 + 4336;
loc_8227F030:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227F048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82120b20
	ctx.lr = 0x8227F05C;
	sub_82120B20(ctx, base);
loc_8227F05C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// beq 0x8227f07c
	if (ctx.cr0.eq) goto loc_8227F07C;
	// addi r10,r10,-19380
	ctx.r10.s64 = ctx.r10.s64 + -19380;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8227f080
	goto loc_8227F080;
loc_8227F07C:
	// lfs f0,-19380(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19380);
	ctx.f0.f64 = double(temp.f32);
loc_8227F080:
	// lfs f13,272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r29,256
	ctx.r10.s64 = r29.s64 + 256;
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - f29.f64));
	// lfs f12,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f29,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f12.f64)));
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f13,272(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f0,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f13,f30
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : f30.f64;
	// stfs f0,272(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 272, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x8227F0CC;
	sub_82120AC0(ctx, base);
loc_8227F0CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r4,r10,-13316
	ctx.r4.s64 = ctx.r10.s64 + -13316;
	// lwz r3,460(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x821fd140
	ctx.lr = 0x8227F0E0;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227f254
	if (ctx.cr0.eq) goto loc_8227F254;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,460(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 460);
	// lbz r9,244(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 244);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8227f108
	if (ctx.cr0.eq) goto loc_8227F108;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// b 0x8227f10c
	goto loc_8227F10C;
loc_8227F108:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
loc_8227F10C:
	// fsubs f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lbz r7,192(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 192);
	// addi r9,r29,256
	ctx.r9.s64 = r29.s64 + 256;
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r8,r29,256
	ctx.r8.s64 = r29.s64 + 256;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// mfcr r7
	ctx.r7.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r7.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r7.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r7.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r7.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r7.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r7.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r7.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r7.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r7.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r7.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r7.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r7.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r7.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r7.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r7.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r7.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r7.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r7.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r7.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r7.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r7.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r7.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r7.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r7.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r7.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r7.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r7.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r7.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r7.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r7.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r7.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lfsx f13,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f30,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfsx f13,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// beq 0x8227f178
	if (ctx.cr0.eq) goto loc_8227F178;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8227f184
	if (ctx.cr6.gt) goto loc_8227F184;
	// stb r27,192(r31)
	REX_STORE_U8(r31.u32 + 192, r27.u8);
	// b 0x8227f184
	goto loc_8227F184;
loc_8227F178:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x8227f184
	if (ctx.cr6.lt) goto loc_8227F184;
	// stb r28,192(r31)
	REX_STORE_U8(r31.u32 + 192, r28.u8);
loc_8227F184:
	// lbz r9,1008(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1008);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8227f1ac
	if (!ctx.cr0.eq) goto loc_8227F1AC;
	// lbz r9,705(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 705);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8227f1ac
	if (!ctx.cr0.eq) goto loc_8227F1AC;
	// lbz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 244);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// beq 0x8227f1b0
	if (ctx.cr0.eq) goto loc_8227F1B0;
loc_8227F1AC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8227F1B0:
	// lbz r10,698(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 698);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227f1d8
	if (ctx.cr0.eq) goto loc_8227F1D8;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// b 0x8227f1dc
	goto loc_8227F1DC;
loc_8227F1D8:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
loc_8227F1DC:
	// fsubs f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lbz r9,193(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 193);
	// addi r11,r29,256
	ctx.r11.s64 = r29.s64 + 256;
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r10,r29,256
	ctx.r10.s64 = r29.s64 + 256;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// mfcr r9
	ctx.r9.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r9.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r9.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r9.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r9.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r9.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r9.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r9.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r9.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r9.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r9.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r9.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r9.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r9.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r9.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r9.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r9.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r9.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r9.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r9.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r9.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r9.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r9.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r9.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r9.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r9.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r9.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r9.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r9.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r9.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r9.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r9.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f30,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
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
	// rlwinm r9,r11,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// beq 0x8227f248
	if (ctx.cr0.eq) goto loc_8227F248;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8227f254
	if (ctx.cr6.gt) goto loc_8227F254;
	// stb r27,193(r31)
	REX_STORE_U8(r31.u32 + 193, r27.u8);
	// b 0x8227f254
	goto loc_8227F254;
loc_8227F248:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// blt cr6,0x8227f254
	if (ctx.cr6.lt) goto loc_8227F254;
	// stb r28,193(r31)
	REX_STORE_U8(r31.u32 + 193, r28.u8);
loc_8227F254:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822A50A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,6296
	ctx.r3.s64 = ctx.r11.s64 + 6296;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A5318) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x822A5320;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f30,100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	f30.f64 = double(temp.f32);
	// ble cr6,0x822a541c
	if (!ctx.cr6.gt) goto loc_822A541C;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_822A5350:
	// stfsu f30,16(r10)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822a5350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A5350;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x822a541c
	if (!ctx.cr6.gt) goto loc_822A541C;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f29,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	f29.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// subf r29,r5,r4
	r29.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r28,r11,5148
	r28.s64 = ctx.r11.s64 + 5148;
	// addi r27,r10,6420
	r27.s64 = ctx.r10.s64 + 6420;
loc_822A5388:
	// add r11,r29,r31
	ctx.r11.u64 = r29.u64 + r31.u64;
	// ldx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + r31.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,112(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 112);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A53F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x822a5388
	if (!ctx.cr0.eq) goto loc_822A5388;
loc_822A541C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822B0630) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x822B0638;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// li r30,0
	r30.s64 = 0;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f30,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
loc_822B066C:
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfsx f30,r30,r28
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + r28.u32, temp.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B06A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfsx f29,r30,r28
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + r28.u32, temp.u32);
	// add r28,r30,r11
	r28.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfsx f13,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B06D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(r30.s32, 12, ctx.xer);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfsu f0,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// blt cr6,0x822b066c
	if (ctx.cr6.lt) goto loc_822B066C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-64(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822BC100) {
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
	ctx.lr = 0x822BC108;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bc184
	if (!ctx.cr6.gt) goto loc_822BC184;
	// li r31,0
	r31.s64 = 0;
loc_822BC12C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,240(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 240);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822bc170
	if (ctx.cr6.eq) goto loc_822BC170;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bc170
	if (ctx.cr6.eq) goto loc_822BC170;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bc170
	if (ctx.cr0.eq) goto loc_822BC170;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c06d0
	ctx.lr = 0x822BC170;
	sub_822C06D0(ctx, base);
loc_822BC170:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc12c
	if (ctx.cr6.lt) goto loc_822BC12C;
loc_822BC184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822BE4D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822BE4E0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7420
	ctx.r4.s64 = ctx.r11.s64 + 7420;
	// bl 0x82180150
	ctx.lr = 0x822BE500;
	sub_82180150(ctx, base);
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822be564
	if (!ctx.cr6.gt) goto loc_822BE564;
	// li r30,0
	r30.s64 = 0;
loc_822BE514:
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 212);
	// lwzx r31,r30,r11
	r31.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822be550
	if (!ctx.cr0.eq) goto loc_822BE550;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c0dc8
	ctx.lr = 0x822BE534;
	sub_822C0DC8(ctx, base);
	// bl 0x822c08b8
	ctx.lr = 0x822BE538;
	sub_822C08B8(ctx, base);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r5,r31,336
	ctx.r5.s64 = r31.s64 + 336;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x822afa30
	ctx.lr = 0x822BE550;
	sub_822AFA30(ctx, base);
loc_822BE550:
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822be514
	if (ctx.cr6.lt) goto loc_822BE514;
loc_822BE564:
	// bl 0x821800b8
	ctx.lr = 0x822BE568;
	sub_821800B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822C1C90) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x822C1C98;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c1cc8
	if (!ctx.cr6.gt) goto loc_822C1CC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C1CC8;
	sub_822D5B28(ctx, base);
loc_822C1CC8:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c1cdc
	if (ctx.cr0.eq) goto loc_822C1CDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c1d6c
	goto loc_822C1D6C;
loc_822C1CDC:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c1d64
	if (ctx.cr0.eq) goto loc_822C1D64;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r10,12904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c1cfc
	if (ctx.cr6.eq) goto loc_822C1CFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c1d64
	if (!ctx.cr6.eq) goto loc_822C1D64;
loc_822C1CFC:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c1d14
	if (ctx.cr6.eq) goto loc_822C1D14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c1d64
	if (!ctx.cr6.eq) goto loc_822C1D64;
loc_822C1D14:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c1d2c
	if (ctx.cr6.eq) goto loc_822C1D2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c1d64
	if (!ctx.cr6.eq) goto loc_822C1D64;
loc_822C1D2C:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c1d44
	if (ctx.cr6.eq) goto loc_822C1D44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c1d64
	if (!ctx.cr6.eq) goto loc_822C1D64;
loc_822C1D44:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c1d5c
	if (ctx.cr6.eq) goto loc_822C1D5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c1d64
	if (!ctx.cr6.eq) goto loc_822C1D64;
loc_822C1D5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c1d68
	goto loc_822C1D68;
loc_822C1D64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C1D68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822C1D6C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x822c1db0
	if (!ctx.cr0.eq) goto loc_822C1DB0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// rlwinm r9,r24,16,2,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0x3FFF0000;
	// ori r11,r11,8320
	ctx.r11.u64 = ctx.r11.u64 | 8320;
	// rlwinm r8,r22,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0x3FFF0000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r25,18
	ctx.r11.u64 = r25.u32 & 0x3FFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r23,18
	ctx.r9.u64 = r23.u32 & 0x3FFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// b 0x822c1f74
	goto loc_822C1F74;
loc_822C1DB0:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// li r27,0
	r27.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,24576
	r26.u64 = ctx.r9.u64 | 24576;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,12924(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822c1ef4
	if (!ctx.cr6.gt) goto loc_822C1EF4;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,12932
	r30.s64 = r31.s64 + 12932;
	// addi r28,r31,13172
	r28.s64 = r31.s64 + 13172;
loc_822C1DE8:
	// lwz r10,-4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -4);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r6,-4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + -4);
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822c1e04
	if (ctx.cr6.gt) goto loc_822C1E04;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_822C1E04:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822c1e18
	if (ctx.cr6.gt) goto loc_822C1E18;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_822C1E18:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r23,r9
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822c1e28
	if (!ctx.cr6.lt) goto loc_822C1E28;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_822C1E28:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822c1e38
	if (!ctx.cr6.lt) goto loc_822C1E38;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822C1E38:
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822c1e48
	if (!ctx.cr6.lt) goto loc_822C1E48;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822c1e58
	if (ctx.cr6.lt) goto loc_822C1E58;
loc_822C1E48:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822C1E58:
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// slw r3,r3,r29
	ctx.r3.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// lis r4,-16381
	ctx.r4.s64 = -1073545216;
	// lis r21,4
	r21.s64 = 262144;
	// ori r4,r4,11521
	ctx.r4.u64 = ctx.r4.u64 | 11521;
	// neg r6,r6
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// neg r5,r5
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// ori r21,r21,128
	r21.u64 = r21.u64 | 128;
	// rlwinm r5,r5,16,1,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF0000;
	// clrlwi r6,r6,17
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r11.u32 = ea;
	// clrlwi r7,r7,18
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFF;
	// rlwinm r10,r10,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x822c1ed8
	if (!ctx.cr6.gt) goto loc_822C1ED8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C1ED4;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C1ED8:
	// lwz r10,12924(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12924);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822c1de8
	if (ctx.cr6.lt) goto loc_822C1DE8;
loc_822C1EF4:
	// lbz r10,10943(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c1f54
	if (ctx.cr0.eq) goto loc_822C1F54;
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c1f54
	if (ctx.cr0.eq) goto loc_822C1F54;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// ori r10,r8,11521
	ctx.r10.u64 = ctx.r8.u64 | 11521;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// clrlwi r6,r25,18
	ctx.r6.u64 = r25.u32 & 0x3FFF;
	// ori r8,r7,129
	ctx.r8.u64 = ctx.r7.u64 | 129;
	// rlwinm r7,r24,16,2,15
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0x3FFF0000;
	// rlwinm r5,r22,16,2,15
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0x3FFF0000;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// clrlwi r9,r23,18
	ctx.r9.u64 = r23.u32 & 0x3FFF;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_822C1F54:
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,12884(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12884);
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
	// lwz r10,12888(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12888);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_822C1F74:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_822D51F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D51F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15112);
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r10,10896(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10896);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// and r30,r9,r11
	r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bge cr6,0x822d5234
	if (!ctx.cr6.lt) goto loc_822D5234;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822d52ac
	if (!ctx.cr6.lt) goto loc_822D52AC;
loc_822D5228:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x822d523c
	if (!ctx.cr6.gt) goto loc_822D523C;
	// b 0x822d52ac
	goto loc_822D52AC;
loc_822D5234:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822d5228
	if (!ctx.cr6.lt) goto loc_822D5228;
loc_822D523C:
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822D5268:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5318
	ctx.lr = 0x822D5270;
	sub_822C5318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d52a4
	if (ctx.cr0.eq) goto loc_822D52A4;
	// lwz r11,10896(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 10896);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bge cr6,0x822d5294
	if (!ctx.cr6.lt) goto loc_822D5294;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822d52a4
	if (!ctx.cr6.lt) goto loc_822D52A4;
	// b 0x822d529c
	goto loc_822D529C;
loc_822D5294:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d5268
	if (ctx.cr6.lt) goto loc_822D5268;
loc_822D529C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x822d5268
	if (!ctx.cr6.gt) goto loc_822D5268;
loc_822D52A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5250
	ctx.lr = 0x822D52AC;
	sub_822C5250(ctx, base);
loc_822D52AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822DAFE8) {
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
	ctx.lr = 0x822DAFF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_822DB008:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw. r11,r11,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x822db074
	if (!ctx.cr0.gt) goto loc_822DB074;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x822db044
	if (ctx.cr6.lt) goto loc_822DB044;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822DB044:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// beq cr6,0x822db070
	if (ctx.cr6.eq) goto loc_822DB070;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822DB064:
	// lwzu r10,4(r27)
	ea = 4 + r27.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r27.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x822db064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DB064;
loc_822DB070:
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
loc_822DB074:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822db090
	if (ctx.cr6.eq) goto loc_822DB090;
	// stw r4,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DB088;
	sub_822D5B28(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 48);
	// b 0x822db008
	goto loc_822DB008;
loc_822DB090:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822E1110) {
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
	// bgt cr6,0x822e15d8
	if (ctx.cr6.gt) goto loc_822E15D8;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r31,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,16544
	ctx.r12.s64 = ctx.r12.s64 + 16544;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// addi r12,r12,4460
	ctx.r12.s64 = ctx.r12.s64 + 4460;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r31.u32) {
	case 0:
		goto loc_822E116C;
	case 1:
		goto loc_822E118C;
	case 2:
		goto loc_822E11B8;
	case 3:
		goto loc_822E11D0;
	case 4:
		goto loc_822E1234;
	case 5:
		goto loc_822E1258;
	case 6:
		goto loc_822E12A4;
	case 7:
		goto loc_822E1344;
	case 8:
		goto loc_822E13D0;
	case 9:
		goto loc_822E1430;
	case 10:
		goto loc_822E1490;
	case 11:
		goto loc_822E14C4;
	case 12:
		goto loc_822E1508;
	case 13:
		goto loc_822E1534;
	case 14:
		goto loc_822E155C;
	case 15:
		goto loc_822E1584;
	case 16:
		goto loc_822E15B8;
	case 17:
		goto loc_822E1334;
	case 18:
		goto loc_822E1344;
	case 19:
		goto loc_822E116C;
	case 20:
		goto loc_822E116C;
	case 21:
		goto loc_822E116C;
	case 22:
		goto loc_822E116C;
	case 23:
		goto loc_822E116C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822E116C:
	// lwz r11,21788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21788);
	// lfs f0,21804(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 21804);
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
	// b 0x822e15dc
	goto loc_822E15DC;
loc_822E118C:
	// lwz r11,21788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21788);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,21800(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 21800);
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
	// b 0x822e15dc
	goto loc_822E15DC;
loc_822E11B8:
	// lwz r11,16772(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16772);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_822E11C4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x822e15dc
	goto loc_822E15DC;
loc_822E11D0:
	// lwz r11,21824(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21824);
	// lwz r9,21788(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 21788);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
loc_822E11F0:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r10,15048
	ctx.r11.s64 = ctx.r10.s64 + 15048;
	// lfs f0,-22312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_822E1204:
	// fdivs f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
loc_822E1208:
	// lfs f12,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
loc_822E120C:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822e1220
	if (!ctx.cr6.lt) goto loc_822E1220;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x822e122c
	goto loc_822E122C;
loc_822E1220:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822e122c
	if (ctx.cr6.gt) goto loc_822E122C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_822E122C:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x822e15dc
	goto loc_822E15DC;
loc_822E1234:
	// lwz r9,21828(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 21828);
	// lwz r11,21788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21788);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// b 0x822e11f0
	goto loc_822E11F0;
loc_822E1258:
	// lwz r11,21788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21788);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,21828(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 21828);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r8,21824(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 21824);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addi r9,r10,15048
	ctx.r9.s64 = ctx.r10.s64 + 15048;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822e1204
	goto loc_822E1204;
loc_822E12A4:
	// lwz r11,21832(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21832);
	// lwz r8,10896(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10896);
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
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// stw r11,21832(r3)
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r11.u32);
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(r30.u64, 0, ctx.xer);
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpld cr6,r10,r30
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r30.u64, ctx.xer);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x822e1318
	if (ctx.cr6.gt) goto loc_822E1318;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822E1318:
	// cmpld cr6,r31,r10
	ctx.cr6.compare<uint64_t>(r31.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x822e1324
	if (ctx.cr6.gt) goto loc_822E1324;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
loc_822E1324:
	// subf r3,r10,r31
	ctx.r3.u64 = r31.u64 - ctx.r10.u64;
	// bl 0x826a2d40
	ctx.lr = 0x822E132C;
	sub_826A2D40(ctx, base);
	// subf r3,r30,r31
	ctx.r3.u64 = r31.u64 - r30.u64;
	// b 0x822e140c
	goto loc_822E140C;
loc_822E1334:
	// lwz r11,23560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 23560);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x822e11c4
	goto loc_822E11C4;
loc_822E1344:
	// bl 0x822e0ab0
	ctx.lr = 0x822E1348;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-836
	ctx.r7.s64 = ctx.r11.s64 + -836;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// lwz r9,-836(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -836);
	// ld r11,36(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 36);
	// ld r10,-556(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + -556);
	// ld r8,44(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 44);
	// ld r7,-548(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + -548);
	// subf r31,r11,r10
	r31.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// subf r3,r8,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r8.u64;
	// bne cr6,0x822e1390
	if (!ctx.cr6.eq) goto loc_822E1390;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_822E1390:
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// bl 0x826a2d40
	ctx.lr = 0x822E139C;
	sub_826A2D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x826a2d40
	ctx.lr = 0x822E13A8;
	sub_826A2D40(ctx, base);
	// fdiv f11,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = f31.f64 / ctx.f1.f64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r10,15048
	ctx.r9.s64 = ctx.r10.s64 + 15048;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// b 0x822e1208
	goto loc_822E1208;
loc_822E13D0:
	// bl 0x822e0ab0
	ctx.lr = 0x822E13D4;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// ld r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 156);
	// ld r9,-436(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + -436);
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// ld r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 164);
	// ld r11,-428(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + -428);
loc_822E1400:
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x826a2d40
	ctx.lr = 0x822E1408;
	sub_826A2D40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822E140C:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x826a2d40
	ctx.lr = 0x822E1414;
	sub_826A2D40(ctx, base);
	// fdiv f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 / ctx.f1.f64;
loc_822E1418:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// frsp f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r10,r11,15048
	ctx.r10.s64 = ctx.r11.s64 + 15048;
	// lfs f12,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-22312(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -22312);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822e120c
	goto loc_822E120C;
loc_822E1430:
	// bl 0x822e0ab0
	ctx.lr = 0x822E1434;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,-836
	r31.s64 = ctx.r11.s64 + -836;
	// ld r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 156);
	// ld r10,-436(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + -436);
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// bl 0x826a2d40
	ctx.lr = 0x822E145C;
	sub_826A2D40(ctx, base);
	// ld r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 164);
	// ld r10,-428(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + -428);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x826a2d40
	ctx.lr = 0x822E1470;
	sub_826A2D40(ctx, base);
	// ld r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 172);
	// ld r10,-420(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + -420);
	// fsub f30,f31,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64 - ctx.f1.f64;
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x826a2d40
	ctx.lr = 0x822E1484;
	sub_826A2D40(ctx, base);
	// fsub f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f30.f64 - ctx.f1.f64;
	// fdiv f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 / f31.f64;
	// b 0x822e1418
	goto loc_822E1418;
loc_822E1490:
	// bl 0x822e0ab0
	ctx.lr = 0x822E1494;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,-836
	ctx.r11.s64 = ctx.r11.s64 + -836;
	// ld r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 156);
	// ld r9,-436(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + -436);
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(r31.u64, 0, ctx.xer);
	// beq cr6,0x822e15d8
	if (ctx.cr6.eq) goto loc_822E15D8;
	// ld r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 172);
	// ld r11,-420(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + -420);
	// b 0x822e1400
	goto loc_822E1400;
loc_822E14C4:
	// bl 0x822e0ab0
	ctx.lr = 0x822E14C8;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r8,r11,-836
	ctx.r8.s64 = ctx.r11.s64 + -836;
	// ld r11,476(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 476);
	// ld r10,-116(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + -116);
	// ld r9,468(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 468);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 36);
	// ld r10,-556(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + -556);
	// ld r8,-124(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + -124);
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_822E14FC:
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_822E1500:
	// bl 0x822e0be8
	ctx.lr = 0x822E1504;
	sub_822E0BE8(ctx, base);
	// b 0x822e15dc
	goto loc_822E15DC;
loc_822E1508:
	// bl 0x822e0ab0
	ctx.lr = 0x822E150C;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r8,r11,-836
	ctx.r8.s64 = ctx.r11.s64 + -836;
	// ld r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 36);
	// ld r10,-556(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + -556);
	// ld r9,484(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 484);
	// ld r8,-108(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + -108);
loc_822E152C:
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x822e14fc
	goto loc_822E14FC;
loc_822E1534:
	// bl 0x822e0ab0
	ctx.lr = 0x822E1538;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r8,r11,-836
	ctx.r8.s64 = ctx.r11.s64 + -836;
	// ld r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 36);
	// ld r10,-556(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + -556);
	// ld r9,268(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 268);
	// ld r8,-324(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + -324);
	// b 0x822e152c
	goto loc_822E152C;
loc_822E155C:
	// bl 0x822e0ab0
	ctx.lr = 0x822E1560;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r8,r11,-836
	ctx.r8.s64 = ctx.r11.s64 + -836;
	// ld r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 36);
	// ld r10,-556(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + -556);
	// ld r9,124(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 124);
	// ld r8,-468(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + -468);
	// b 0x822e152c
	goto loc_822E152C;
loc_822E1584:
	// bl 0x822e0ab0
	ctx.lr = 0x822E1588;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r8,r11,-836
	ctx.r8.s64 = ctx.r11.s64 + -836;
	// ld r11,492(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 492);
	// ld r10,-100(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + -100);
loc_822E15A0:
	// ld r9,36(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 36);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ld r8,-556(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + -556);
	// rldicr r3,r11,1,62
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// subf r4,r9,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r9.u64;
	// b 0x822e1500
	goto loc_822E1500;
loc_822E15B8:
	// bl 0x822e0ab0
	ctx.lr = 0x822E15BC;
	sub_822E0AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e15d8
	if (ctx.cr0.eq) goto loc_822E15D8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r8,r11,-836
	ctx.r8.s64 = ctx.r11.s64 + -836;
	// ld r11,500(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 500);
	// ld r10,-92(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + -92);
	// b 0x822e15a0
	goto loc_822E15A0;
loc_822E15D8:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_822E15DC:
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

DEFINE_REX_FUNC(sub_823003B0) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x823003B8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ca8
	ctx.lr = 0x823003C0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// rlwinm r30,r11,0,26,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// bl 0x822f7a98
	ctx.lr = 0x823003F4;
	sub_822F7A98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82300d90
	if (!ctx.cr0.eq) goto loc_82300D90;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(r30.u32, 16, ctx.xer);
	// bne cr6,0x823005a8
	if (!ctx.cr6.eq) goto loc_823005A8;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lwz r11,-10820(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82300428
	if (!ctx.cr0.eq) goto loc_82300428;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82300d78
	if (ctx.cr0.eq) goto loc_82300D78;
loc_82300428:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r3,-10820(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8230049c
	if (ctx.cr0.eq) goto loc_8230049C;
	// lfs f0,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
loc_82300494:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x82300590
	goto loc_82300590;
loc_8230049C:
	// lwz r3,-10820(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823004B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f11,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f11,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// ble cr6,0x82300590
	if (!ctx.cr6.gt) goto loc_82300590;
loc_82300508:
	// lwz r3,-10820(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f10,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f10,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82300580
	if (!ctx.cr6.lt) goto loc_82300580;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_82300580:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82300508
	if (ctx.cr6.lt) goto loc_82300508;
loc_82300590:
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
loc_82300594:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff4a8
	ctx.lr = 0x8230059C;
	sub_822FF4A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82300d78
	if (ctx.cr0.eq) goto loc_82300D78;
	// b 0x82300d94
	goto loc_82300D94;
loc_823005A8:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// bne cr6,0x82300958
	if (!ctx.cr6.eq) goto loc_82300958;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,-10820(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823005CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82300648
	if (ctx.cr0.eq) goto loc_82300648;
	// lfs f0,3716(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r5,12
	ctx.r5.s64 = 12;
	// lfs f13,3704(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r11,176
	ctx.r4.s64 = ctx.r11.s64 + 176;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
	// bl 0x823ef2f8
	ctx.lr = 0x8230061C;
	sub_823EF2F8(ctx, base);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// fsqrts f31,f13
	f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// b 0x823007e0
	goto loc_823007E0;
loc_82300648:
	// lwz r3,-10820(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f11,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f0,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f13.f64)));
	// fsqrts f31,f13
	f31.f64 = double(float(sqrt(ctx.f13.f64)));
	// ble cr6,0x823007b0
	if (!ctx.cr6.gt) goto loc_823007B0;
loc_823006CC:
	// lwz r3,-10820(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823006F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82300794
	if (!ctx.cr6.lt) goto loc_82300794;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r6,184(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r5,192(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r3,200(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
loc_82300794:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823006cc
	if (ctx.cr6.lt) goto loc_823006CC;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
loc_823007B0:
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f7,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f6,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmsubs f30,f12,f6,f5
	f30.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, -ctx.f5.f64)));
	// fmsubs f29,f8,f9,f4
	f29.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f4.f64)));
	// fmsubs f28,f13,f7,f3
	f28.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f3.f64)));
loc_823007E0:
	// lwz r11,-10820(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -10820);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823007f8
	if (ctx.cr0.eq) goto loc_823007F8;
	// fneg f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_823007F8:
	// lfs f13,3716(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// bgt cr6,0x82300810
	if (ctx.cr6.gt) goto loc_82300810;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82300824
	goto loc_82300824;
loc_82300810:
	// lfs f13,3704(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f8,f13,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 / f31.f64));
	// fmuls f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
loc_82300824:
	// fmuls f11,f12,f6
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f12,4112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4112);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f11.f64)));
	// fmadds f0,f0,f28,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f10.f64)));
	// fmadds f11,f13,f7,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f11.f64)));
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82300874
	if (!ctx.cr6.eq) goto loc_82300874;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82300920
	if (ctx.cr6.eq) goto loc_82300920;
loc_82300874:
	// rlwinm r9,r10,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm. r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt 0x823008c0
	if (ctx.cr0.lt) goto loc_823008C0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(804));
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subfic r11,r10,804
	ctx.xer.ca = ctx.r10.u32 <= 804;
	ctx.r11.u64 = static_cast<uint64_t>(804) - ctx.r10.u64;
	// b 0x823008ec
	goto loc_823008EC;
loc_823008C0:
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r8,r8,10
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 10;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r10,804
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(804));
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// srawi r10,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 10;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subfic r11,r10,2412
	ctx.xer.ca = ctx.r10.u32 <= 2412;
	ctx.r11.u64 = static_cast<uint64_t>(2412) - ctx.r10.u64;
loc_823008EC:
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x823008fc
	if (!ctx.cr6.lt) goto loc_823008FC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823008FC:
	// mulli r11,r11,180
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(180));
	// li r10,3216
	ctx.r10.s64 = 3216;
	// divw. r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82300914
	if (!ctx.cr0.lt) goto loc_82300914;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// b 0x82300920
	goto loc_82300920;
loc_82300914:
	// cmpwi cr6,r11,360
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 360, ctx.xer);
	// blt cr6,0x82300920
	if (ctx.cr6.lt) goto loc_82300920;
	// addi r11,r11,-360
	ctx.r11.s64 = ctx.r11.s64 + -360;
loc_82300920:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f13,3792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82300590
	if (ctx.cr6.lt) goto loc_82300590;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3740(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3740);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82300494
	goto loc_82300494;
loc_82300958:
	// cmplwi cr6,r30,48
	ctx.cr6.compare<uint32_t>(r30.u32, 48, ctx.xer);
	// bne cr6,0x82300bd8
	if (!ctx.cr6.eq) goto loc_82300BD8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfs f0,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,3716(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82300998
	if (!ctx.cr6.eq) goto loc_82300998;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ff4a8
	ctx.lr = 0x82300994;
	sub_822FF4A8(ctx, base);
	// b 0x82300d94
	goto loc_82300D94;
loc_82300998:
	// lis r30,-32126
	r30.s64 = -2105409536;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,-10820(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823009B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm. r10,r10,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82300a00
	if (ctx.cr0.eq) goto loc_82300A00;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,3788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f29,f29
	ctx.f0.f64 = double(float(f29.f64 * f29.f64));
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f0.f64)));
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, f28.f64, ctx.f0.f64)));
	// fsqrts f30,f0
	f30.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x82300b2c
	goto loc_82300B2C;
loc_82300A00:
	// lwz r3,-10820(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f11,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f29,f0,f11
	f29.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f29,f29
	ctx.f0.f64 = double(float(f29.f64 * f29.f64));
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f0.f64)));
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, f28.f64, ctx.f0.f64)));
	// fsqrts f30,f0
	f30.f64 = double(float(sqrt(ctx.f0.f64)));
	// ble cr6,0x82300b2c
	if (!ctx.cr6.gt) goto loc_82300B2C;
loc_82300A78:
	// lwz r3,-10820(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82300AA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f11,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f11,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x82300b1c
	if (!ctx.cr6.lt) goto loc_82300B1C;
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// lwz r9,160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r8,164(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lfs f31,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	f31.f64 = double(temp.f32);
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lfs f28,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	f28.f64 = double(temp.f32);
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lfs f29,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	f29.f64 = double(temp.f32);
loc_82300B1C:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82300a78
	if (ctx.cr6.lt) goto loc_82300A78;
loc_82300B2C:
	// lwz r10,-10820(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -10820);
	// lwz r10,168(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 168);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82300b40
	if (ctx.cr0.eq) goto loc_82300B40;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_82300B40:
	// lfs f0,3716(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x82300b58
	if (ctx.cr6.gt) goto loc_82300B58;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x82300b70
	goto loc_82300B70;
loc_82300B58:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 / f30.f64));
	// fmuls f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * f28.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
loc_82300B70:
	// lfs f11,204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f11,208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f1,f10,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x8269d438
	ctx.lr = 0x82300B90;
	sub_8269D438(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3716(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82300bb4
	if (ctx.cr6.gt) goto loc_82300BB4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82300BB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f13,3792(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82300bcc
	if (ctx.cr6.lt) goto loc_82300BCC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82300BCC:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x82300594
	goto loc_82300594;
loc_82300BD8:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82300c60
	if (ctx.cr0.eq) goto loc_82300C60;
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfs f11,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfs f12,4104(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4104);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// ble cr6,0x82300c34
	if (!ctx.cr6.gt) goto loc_82300C34;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82300c48
	if (!ctx.cr6.gt) goto loc_82300C48;
	// b 0x82300c44
	goto loc_82300C44;
loc_82300C34:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82300c48
	if (!ctx.cr6.lt) goto loc_82300C48;
loc_82300C44:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
loc_82300C48:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82300d78
	if (!ctx.cr6.eq) goto loc_82300D78;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x82300d78
	goto loc_82300D78;
loc_82300C60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x82300d78
	if (ctx.cr6.eq) goto loc_82300D78;
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfs f13,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f9,f0
	ctx.f9.f64 = double(float(ctx.f0.f64));
	// lfs f0,4104(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f0,f0,f12,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82300ce8
	if (!ctx.cr6.gt) goto loc_82300CE8;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm. r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82300cc8
	if (ctx.cr0.eq) goto loc_82300CC8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x82300d00
	goto loc_82300D00;
loc_82300CC8:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82300cd8
	if (ctx.cr0.eq) goto loc_82300CD8;
	// stfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x82300d2c
	goto loc_82300D2C;
loc_82300CD8:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82300d2c
	if (ctx.cr0.eq) goto loc_82300D2C;
	// stfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x82300d28
	goto loc_82300D28;
loc_82300CE8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82300d2c
	if (!ctx.cr6.lt) goto loc_82300D2C;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm. r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82300d10
	if (ctx.cr0.eq) goto loc_82300D10;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_82300D00:
	// ori r11,r9,4
	ctx.r11.u64 = ctx.r9.u64 | 4;
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// b 0x82300d2c
	goto loc_82300D2C;
loc_82300D10:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82300d20
	if (ctx.cr0.eq) goto loc_82300D20;
	// stfs f11,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// b 0x82300d2c
	goto loc_82300D2C;
loc_82300D20:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82300d2c
	if (ctx.cr0.eq) goto loc_82300D2C;
loc_82300D28:
	// li r30,1
	r30.s64 = 1;
loc_82300D2C:
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82300d54
	if (ctx.cr6.eq) goto loc_82300D54;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823002a0
	ctx.lr = 0x82300D4C;
	sub_823002A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300d94
	if (!ctx.cr0.eq) goto loc_82300D94;
loc_82300D54:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82300d78
	if (ctx.cr0.eq) goto loc_82300D78;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82300d78
	if (!ctx.cr0.eq) goto loc_82300D78;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_82300D78:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82300d90
	if (ctx.cr6.eq) goto loc_82300D90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ffb98
	ctx.lr = 0x82300D90;
	sub_822FFB98(ctx, base);
loc_82300D90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82300D94:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cf4
	ctx.lr = 0x82300DA0;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8235F260) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8235F268;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8234a990
	ctx.lr = 0x8235F27C;
	sub_8234A990(ctx, base);
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r30,r11,10752
	r30.s64 = ctx.r11.s64 + 10752;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235f2b4
	if (ctx.cr6.eq) goto loc_8235F2B4;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,98
	ctx.r6.s64 = 98;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235F2AC;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
loc_8235F2B4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f2dc
	if (ctx.cr6.eq) goto loc_8235F2DC;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,121
	ctx.r6.s64 = 121;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8235F2DC;
	sub_82330D00(ctx, base);
loc_8235F2DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823622C8) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823622fc
	if (ctx.cr6.lt) goto loc_823622FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8388);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82362300
	if (!ctx.cr6.gt) goto loc_82362300;
loc_823622FC:
	// stfs f13,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 32, temp.u32);
loc_82362300:
	// lwz r10,1768(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1768);
	// lfs f0,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r11,312
	ctx.r3.s64 = ctx.r11.s64 + 312;
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lwz r7,1768(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 1768);
	// lwz r6,1904(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1904);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfs f13,32(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfs f12,24(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f3,11228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11228);
	ctx.f3.f64 = double(temp.f32);
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// lfs f2,11224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 11224);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// bl 0x823bbaf8
	ctx.lr = 0x8236234C;
	sub_823BBAF8(ctx, base);
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

DEFINE_REX_FUNC(sub_823678F0) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r9,r10,49480
	ctx.r9.u64 = ctx.r10.u64 | 49480;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236793c
	if (ctx.cr6.eq) goto loc_8236793C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,49488
	ctx.r8.u64 = ctx.r10.u64 | 49488;
	// ori r7,r9,16444
	ctx.r7.u64 = ctx.r9.u64 | 16444;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// bl 0x82331a00
	ctx.lr = 0x8236793C;
	sub_82331A00(ctx, base);
loc_8236793C:
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

DEFINE_REX_FUNC(sub_8236AED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236aee8
	if (!ctx.cr6.eq) goto loc_8236AEE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236AEE8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,332(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 332, temp.u32);
	// stfs f0,328(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 328, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236C5D0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236c5e0
	if (!ctx.cr6.eq) goto loc_8236C5E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236C5E0:
	// b 0x8236c378
	sub_8236C378(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D388) {
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
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236d3a4
	if (!ctx.cr6.eq) goto loc_8236D3A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236D3A4:
	// lwz r3,328(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,340(r11)
	REX_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236d3c4
	if (ctx.cr6.eq) goto loc_8236D3C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,336(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 336);
	// bl 0x823ef5f0
	ctx.lr = 0x8236D3C4;
	sub_823EF5F0(ctx, base);
loc_8236D3C4:
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

DEFINE_REX_FUNC(sub_8236F950) {
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
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r5,152
	ctx.r5.s64 = 152;
	// addi r31,r11,9416
	r31.s64 = ctx.r11.s64 + 9416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8236F978;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,16948
	ctx.r4.s64 = ctx.r10.s64 + 16948;
	// bl 0x82331480
	ctx.lr = 0x8236F988;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// addi r9,r11,9176
	ctx.r9.s64 = ctx.r11.s64 + 9176;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,-2008
	ctx.r10.s64 = ctx.r10.s64 + -2008;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r5,-32201
	ctx.r5.s64 = -2110324736;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r6,-32201
	ctx.r6.s64 = -2110324736;
	// addi r9,r4,-1984
	ctx.r9.s64 = ctx.r4.s64 + -1984;
	// addi r11,r5,-1864
	ctx.r11.s64 = ctx.r5.s64 + -1864;
	// addi r10,r6,-1784
	ctx.r10.s64 = ctx.r6.s64 + -1784;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r8,-32201
	ctx.r8.s64 = -2110324736;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r7,-1760
	ctx.r11.s64 = ctx.r7.s64 + -1760;
	// addi r10,r8,-1736
	ctx.r10.s64 = ctx.r8.s64 + -1736;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,388
	ctx.r10.s64 = 388;
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82375630) {
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
	// bl 0x826a1cac
	ctx.lr = 0x82375638;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r29
	r31.u64 = r29.u64;
	// bl 0x82340e38
	ctx.lr = 0x8237565C;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759b0
	if (!ctx.cr6.eq) goto loc_823759B0;
loc_82375664:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375670;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759ac
	if (!ctx.cr6.eq) goto loc_823759AC;
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(r31.s32, 512, ctx.xer);
	// bge cr6,0x823759ac
	if (!ctx.cr6.lt) goto loc_823759AC;
	// lbz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r4,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82375428
	ctx.lr = 0x82375698;
	sub_82375428(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82375664
	if (ctx.cr6.eq) goto loc_82375664;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,17724
	ctx.r4.s64 = ctx.r11.s64 + 17724;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x823756B8;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759ac
	if (!ctx.cr6.eq) goto loc_823759AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// bl 0x823753a0
	ctx.lr = 0x823756D0;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759a0
	if (!ctx.cr6.eq) goto loc_823759A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r28,r11,17716
	r28.s64 = ctx.r11.s64 + 17716;
	// addi r26,r10,9028
	r26.s64 = ctx.r10.s64 + 9028;
	// addi r27,r9,17708
	r27.s64 = ctx.r9.s64 + 17708;
	// addi r25,r8,17700
	r25.s64 = ctx.r8.s64 + 17700;
loc_823756F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375704;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375730
	if (!ctx.cr6.eq) goto loc_82375730;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(r31.s32, 512, ctx.xer);
	// bge cr6,0x82375724
	if (!ctx.cr6.lt) goto loc_82375724;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r11,r31,r10
	REX_STORE_U8(r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82375724:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x823756f8
	if (!ctx.cr6.eq) goto loc_823756F8;
loc_82375730:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82375740;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759ac
	if (!ctx.cr6.eq) goto loc_823759AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823753a0
	ctx.lr = 0x82375754;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759a0
	if (!ctx.cr6.eq) goto loc_823759A0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82375760:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8237576C;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375798
	if (!ctx.cr6.eq) goto loc_82375798;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,511
	ctx.cr6.compare<int32_t>(r31.s32, 511, ctx.xer);
	// bge cr6,0x8237578c
	if (!ctx.cr6.lt) goto loc_8237578C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r11,r31,r10
	REX_STORE_U8(r31.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8237578C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82375760
	if (!ctx.cr6.eq) goto loc_82375760;
loc_82375798:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stb r29,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, r29.u8);
	// bl 0x826a08a0
	ctx.lr = 0x823757AC;
	sub_826A08A0(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x823757D0;
	sub_8239E6B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823753a0
	ctx.lr = 0x823757DC;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759a0
	if (!ctx.cr6.eq) goto loc_823759A0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_823757E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823757F4;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375884
	if (!ctx.cr6.eq) goto loc_82375884;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82375828
	if (ctx.cr6.eq) goto loc_82375828;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82375828
	if (ctx.cr6.eq) goto loc_82375828;
	// cmpwi cr6,r31,511
	ctx.cr6.compare<int32_t>(r31.s32, 511, ctx.xer);
	// bge cr6,0x82375828
	if (!ctx.cr6.lt) goto loc_82375828;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r10,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82375828:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82375874
	if (ctx.cr6.eq) goto loc_82375874;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82375844
	if (ctx.cr6.eq) goto loc_82375844;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82375878
	goto loc_82375878;
loc_82375844:
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375850;
	sub_82340C58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82375860;
	sub_82340E38(ctx, base);
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82375878
	goto loc_82375878;
loc_82375874:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82375878:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823757e8
	if (ctx.cr6.eq) goto loc_823757E8;
loc_82375884:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r31,1
	ctx.r7.s64 = r31.s64 + 1;
	// stbx r29,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, r29.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x823758AC;
	sub_8239E6B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823753a0
	ctx.lr = 0x823758B8;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823759a0
	if (!ctx.cr6.eq) goto loc_823759A0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_823758C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x823758D0;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375960
	if (!ctx.cr6.eq) goto loc_82375960;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82375904
	if (ctx.cr6.eq) goto loc_82375904;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// beq cr6,0x82375904
	if (ctx.cr6.eq) goto loc_82375904;
	// cmpwi cr6,r31,511
	ctx.cr6.compare<int32_t>(r31.s32, 511, ctx.xer);
	// bge cr6,0x82375904
	if (!ctx.cr6.lt) goto loc_82375904;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r10,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82375904:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82375950
	if (ctx.cr6.eq) goto loc_82375950;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82375920
	if (ctx.cr6.eq) goto loc_82375920;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x82375954
	goto loc_82375954;
loc_82375920:
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x8237592C;
	sub_82340C58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,256(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x8237593C;
	sub_82340E38(ctx, base);
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82375954
	goto loc_82375954;
loc_82375950:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82375954:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823758c4
	if (ctx.cr6.eq) goto loc_823758C4;
loc_82375960:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// stbx r29,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, r29.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x82375988;
	sub_8239E6B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// bl 0x823753a0
	ctx.lr = 0x82375998;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823756f8
	if (ctx.cr6.eq) goto loc_823756F8;
loc_823759A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826a1cfc
	return;
loc_823759AC:
	// li r3,25
	ctx.r3.s64 = 25;
loc_823759B0:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8239B898) {
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
	// addi r31,r3,-28
	r31.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8239b8b8
	if (!ctx.cr6.eq) goto loc_8239B8B8;
	// li r31,0
	r31.s64 = 0;
loc_8239B8B8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// lwz r4,676(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 676);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239b8e8
	if (ctx.cr6.eq) goto loc_8239B8E8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,20580
	ctx.r5.s64 = ctx.r10.s64 + 20580;
	// li r6,221
	ctx.r6.s64 = 221;
	// bl 0x82330d00
	ctx.lr = 0x8239B8E8;
	sub_82330D00(ctx, base);
loc_8239B8E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,676(r31)
	REX_STORE_U32(r31.u32 + 676, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8239DBC8) {
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
	ctx.lr = 0x8239DBD0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r23,r9,24
	r23.u64 = ctx.r9.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8239dc34
	if (ctx.cr6.eq) goto loc_8239DC34;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8239dc34
	if (ctx.cr6.eq) goto loc_8239DC34;
loc_8239DC08:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823315e8
	ctx.lr = 0x8239DC14;
	sub_823315E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239dc28
	if (!ctx.cr6.eq) goto loc_8239DC28;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// beq cr6,0x8239dce4
	if (ctx.cr6.eq) goto loc_8239DCE4;
loc_8239DC28:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8239dc08
	if (!ctx.cr6.eq) goto loc_8239DC08;
loc_8239DC34:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,20848
	ctx.r5.s64 = ctx.r10.s64 + 20848;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,495
	ctx.r6.s64 = 495;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8239DC5C;
	sub_82330A38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239dcf8
	if (ctx.cr6.eq) goto loc_8239DCF8;
	// li r29,0
	r29.s64 = 0;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r29.u32);
	// stw r29,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// stb r22,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, r22.u8);
	// stb r29,37(r3)
	REX_STORE_U8(ctx.r3.u32 + 37, r29.u8);
	// stw r29,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// bl 0x8239d5e0
	ctx.lr = 0x8239DCB4;
	sub_8239D5E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r31.u32);
loc_8239DCD0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8239dcdc
	if (ctx.cr6.eq) goto loc_8239DCDC;
	// stb r22,37(r31)
	REX_STORE_U8(r31.u32 + 37, r22.u8);
loc_8239DCDC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_8239DCE4:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d748
	ctx.lr = 0x8239DCF4;
	sub_8239D748(ctx, base);
	// b 0x8239dcd0
	goto loc_8239DCD0;
loc_8239DCF8:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823A3370) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x823A3378;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r25,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r25.u16);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// li r29,16
	r29.s64 = 16;
	// bl 0x826a2e60
	ctx.lr = 0x823A33B0;
	sub_826A2E60(ctx, base);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r25,2044(r31)
	REX_STORE_U8(r31.u32 + 2044, r25.u8);
	// mr r28,r25
	r28.u64 = r25.u64;
	// addi r10,r31,1743
	ctx.r10.s64 = r31.s64 + 1743;
	// addi r11,r31,1252
	ctx.r11.s64 = r31.s64 + 1252;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823A33C8:
	// stb r25,-7(r10)
	REX_STORE_U8(ctx.r10.u32 + -7, r25.u8);
	// stbu r25,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, r25.u8);
	ctx.r10.u32 = ea;
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r25.u32);
	// stw r25,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, r25.u32);
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823a33c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A33C8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// lwz r4,308(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r30,r11,5992
	r30.s64 = ctx.r11.s64 + 5992;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x823a3498
	if (ctx.cr6.eq) goto loc_823A3498;
	// bl 0x823ef2f8
	ctx.lr = 0x823A3400;
	sub_823EF2F8(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x823a348c
	if (!ctx.cr6.lt) goto loc_823A348C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823a348c
	if (ctx.cr6.lt) goto loc_823A348C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x823a348c
	if (!ctx.cr6.lt) goto loc_823A348C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823a348c
	if (ctx.cr6.lt) goto loc_823A348C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x823a348c
	if (!ctx.cr6.lt) goto loc_823A348C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823a348c
	if (ctx.cr6.lt) goto loc_823A348C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x823a348c
	if (!ctx.cr6.lt) goto loc_823A348C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823a348c
	if (ctx.cr6.lt) goto loc_823A348C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x823a348c
	if (!ctx.cr6.lt) goto loc_823A348C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823a348c
	if (ctx.cr6.lt) goto loc_823A348C;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bge cr6,0x823a348c
	if (!ctx.cr6.lt) goto loc_823A348C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823a348c
	if (ctx.cr6.lt) goto loc_823A348C;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bge cr6,0x823a348c
	if (!ctx.cr6.lt) goto loc_823A348C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823a34a4
	if (!ctx.cr6.lt) goto loc_823A34A4;
loc_823A348C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_823A3498:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823A34A0;
	sub_823EF5F0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
loc_823A34A4:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x823a34f8
	if (ctx.cr6.gt) goto loc_823A34F8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823a34d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823A34D4;
	// bdzf 4*cr6+eq,0x823a34dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823A34DC;
	// bdzf 4*cr6+eq,0x823a34e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823A34E4;
	// bdzf 4*cr6+eq,0x823a34ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823A34EC;
	// bdzf 4*cr6+eq,0x823a34cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823A34CC;
	// bne cr6,0x823a34f4
	if (!ctx.cr6.eq) goto loc_823A34F4;
loc_823A34CC:
	// li r29,16
	r29.s64 = 16;
	// b 0x823a34f8
	goto loc_823A34F8;
loc_823A34D4:
	// li r29,1
	r29.s64 = 1;
	// b 0x823a34f8
	goto loc_823A34F8;
loc_823A34DC:
	// li r29,2
	r29.s64 = 2;
	// b 0x823a34f8
	goto loc_823A34F8;
loc_823A34E4:
	// li r29,4
	r29.s64 = 4;
	// b 0x823a34f8
	goto loc_823A34F8;
loc_823A34EC:
	// li r29,8
	r29.s64 = 8;
	// b 0x823a34f8
	goto loc_823A34F8;
loc_823A34F4:
	// li r29,32
	r29.s64 = 32;
loc_823A34F8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a350c
	if (ctx.cr6.eq) goto loc_823A350C;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
	// b 0x823a356c
	goto loc_823A356C;
loc_823A350C:
	// addi r30,r31,676
	r30.s64 = r31.s64 + 676;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260dca0
	ctx.lr = 0x823A3520;
	sub_8260DCA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823a3534
	if (!ctx.cr6.lt) goto loc_823A3534;
loc_823A3528:
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_823A3534:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r31,680
	ctx.r4.s64 = r31.s64 + 680;
	// stw r3,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A3564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823a3528
	if (ctx.cr6.lt) goto loc_823A3528;
loc_823A356C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823a35e4
	if (ctx.cr6.gt) goto loc_823A35E4;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13712
	ctx.r12.s64 = ctx.r12.s64 + 13712;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A35E0;
	case 1:
		goto loc_823A35C0;
	case 2:
		goto loc_823A35C8;
	case 3:
		goto loc_823A35D0;
	case 4:
		goto loc_823A35D8;
	case 5:
		goto loc_823A35D8;
	case 6:
		goto loc_823A35E0;
	case 7:
		goto loc_823A35E0;
	case 8:
		goto loc_823A35E0;
	case 9:
		goto loc_823A35E0;
	case 10:
		goto loc_823A35E0;
	case 11:
		goto loc_823A35E0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A35C0:
	// li r28,8
	r28.s64 = 8;
	// b 0x823a35e4
	goto loc_823A35E4;
loc_823A35C8:
	// li r28,16
	r28.s64 = 16;
	// b 0x823a35e4
	goto loc_823A35E4;
loc_823A35D0:
	// li r28,24
	r28.s64 = 24;
	// b 0x823a35e4
	goto loc_823A35E4;
loc_823A35D8:
	// li r28,32
	r28.s64 = 32;
	// b 0x823a35e4
	goto loc_823A35E4;
loc_823A35E0:
	// mr r28,r25
	r28.u64 = r25.u64;
loc_823A35E4:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x823A35F4;
	sub_823EF5F0(ctx, base);
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// clrlwi r10,r22,16
	ctx.r10.u64 = r22.u32 & 0xFFFF;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// sth r11,94(r1)
	REX_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// li r8,-2
	ctx.r8.s64 = -2;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// li r6,22
	ctx.r6.s64 = 22;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r6,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r6.u16);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// sth r11,92(r1)
	REX_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x823a3658
	if (!ctx.cr6.eq) goto loc_823A3658;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,21676
	ctx.r4.s64 = ctx.r11.s64 + 21676;
	// b 0x823a3660
	goto loc_823A3660;
loc_823A3658:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,21660
	ctx.r4.s64 = ctx.r11.s64 + 21660;
loc_823A3660:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823ef2f8
	ctx.lr = 0x823A366C;
	sub_823EF2F8(ctx, base);
	// lwz r3,672(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 672);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r31,684
	r29.s64 = r31.s64 + 684;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,3804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3804);
	ctx.f1.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823A36A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823a3528
	if (ctx.cr6.lt) goto loc_823A3528;
	// mullw r11,r24,r23
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(r23.s32);
	// stw r11,728(r31)
	REX_STORE_U32(r31.u32 + 728, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x823a37e8
	if (ctx.cr6.gt) goto loc_823A37E8;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14040
	ctx.r12.s64 = ctx.r12.s64 + 14040;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823A373C;
	case 1:
		goto loc_823A3708;
	case 2:
		goto loc_823A3710;
	case 3:
		goto loc_823A3718;
	case 4:
		goto loc_823A3720;
	case 5:
		goto loc_823A3720;
	case 6:
		goto loc_823A373C;
	case 7:
		goto loc_823A373C;
	case 8:
		goto loc_823A373C;
	case 9:
		goto loc_823A373C;
	case 10:
		goto loc_823A373C;
	case 11:
		goto loc_823A373C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A3708:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x823a3724
	goto loc_823A3724;
loc_823A3710:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823a3724
	goto loc_823A3724;
loc_823A3718:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x823a3724
	goto loc_823A3724;
loc_823A3720:
	// li r10,32
	ctx.r10.s64 = 32;
loc_823A3724:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mulld r8,r10,r9
	ctx.r8.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r9.u64);
	// rldicl r7,r8,61,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// stw r7,732(r31)
	REX_STORE_U32(r31.u32 + 732, ctx.r7.u32);
	// b 0x823a37dc
	goto loc_823A37DC;
loc_823A373C:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14164
	ctx.r12.s64 = ctx.r12.s64 + 14164;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823A37D8;
	case 1:
		goto loc_823A37E8;
	case 2:
		goto loc_823A37E8;
	case 3:
		goto loc_823A37E8;
	case 4:
		goto loc_823A37E8;
	case 5:
		goto loc_823A37E8;
	case 6:
		goto loc_823A3784;
	case 7:
		goto loc_823A379C;
	case 8:
		goto loc_823A37B8;
	case 9:
		goto loc_823A37D0;
	case 10:
		goto loc_823A37D0;
	case 11:
		goto loc_823A37D0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A3784:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,732(r31)
	REX_STORE_U32(r31.u32 + 732, ctx.r8.u32);
	// b 0x823a37dc
	goto loc_823A37DC;
loc_823A379C:
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,732(r31)
	REX_STORE_U32(r31.u32 + 732, ctx.r9.u32);
	// b 0x823a37dc
	goto loc_823A37DC;
loc_823A37B8:
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r11,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,732(r31)
	REX_STORE_U32(r31.u32 + 732, ctx.r8.u32);
	// b 0x823a37dc
	goto loc_823A37DC;
loc_823A37D0:
	// stw r11,732(r31)
	REX_STORE_U32(r31.u32 + 732, ctx.r11.u32);
	// b 0x823a37e8
	goto loc_823A37E8;
loc_823A37D8:
	// stw r25,732(r31)
	REX_STORE_U32(r31.u32 + 732, r25.u32);
loc_823A37DC:
	// lwz r11,732(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 732);
	// mullw r10,r11,r22
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r22.s32);
	// stw r10,732(r31)
	REX_STORE_U32(r31.u32 + 732, ctx.r10.u32);
loc_823A37E8:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,732(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 732);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,21608
	ctx.r5.s64 = ctx.r10.s64 + 21608;
	// li r6,331
	ctx.r6.s64 = 331;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823A380C;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,724(r31)
	REX_STORE_U32(r31.u32 + 724, ctx.r3.u32);
	// bne cr6,0x823a3824
	if (!ctx.cr6.eq) goto loc_823A3824;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_823A3824:
	// addi r30,r31,688
	r30.s64 = r31.s64 + 688;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823A3838;
	sub_823EF5F0(ctx, base);
	// lwz r10,732(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 732);
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 724);
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,716(r31)
	REX_STORE_U32(r31.u32 + 716, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,692(r31)
	REX_STORE_U32(r31.u32 + 692, ctx.r10.u32);
	// stw r9,696(r31)
	REX_STORE_U32(r31.u32 + 696, ctx.r9.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,84(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 84);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823A386C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823a3528
	if (ctx.cr6.lt) goto loc_823A3528;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r25,736(r31)
	REX_STORE_U8(r31.u32 + 736, r25.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,744(r31)
	REX_STORE_U32(r31.u32 + 744, r25.u32);
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823CD368) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823CD370;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cd3bc
	if (ctx.cr6.eq) goto loc_823CD3BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823cd3bc
	if (ctx.cr6.eq) goto loc_823CD3BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823cd3bc
	if (ctx.cr6.eq) goto loc_823CD3BC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823cd3bc
	if (ctx.cr6.eq) goto loc_823CD3BC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823cd3bc
	if (ctx.cr6.eq) goto loc_823CD3BC;
loc_823CD3B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823CD3BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cd3b0
	if (ctx.cr6.eq) goto loc_823CD3B0;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823cd3ec
	if (ctx.cr6.eq) goto loc_823CD3EC;
	// ld r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 304);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x823cd3ec
	if (!ctx.cr6.gt) goto loc_823CD3EC;
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(r29.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x823cd3b0
	if (!ctx.cr6.lt) goto loc_823CD3B0;
loc_823CD3EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,3624(r11)
	REX_STORE_U32(ctx.r11.u32 + 3624, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3616(r9)
	REX_STORE_U32(ctx.r9.u32 + 3616, r30.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,52(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823CD420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cd43c
	if (ctx.cr6.eq) goto loc_823CD43C;
loc_823CD428:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,3624(r11)
	REX_STORE_U32(ctx.r11.u32 + 3624, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823CD43C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cd454
	if (ctx.cr6.eq) goto loc_823CD454;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823cd49c
	if (!ctx.cr6.eq) goto loc_823CD49C;
loc_823CD454:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cbee0
	ctx.lr = 0x823CD460;
	sub_823CBEE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cd428
	if (ctx.cr6.eq) goto loc_823CD428;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,248(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cd49c
	if (ctx.cr6.eq) goto loc_823CD49C;
	// ld r11,304(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 304);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// ble cr6,0x823cd49c
	if (!ctx.cr6.gt) goto loc_823CD49C;
	// cmpld cr6,r29,r11
	ctx.cr6.compare<uint64_t>(r29.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x823cd49c
	if (ctx.cr6.lt) goto loc_823CD49C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,3624(r10)
	REX_STORE_U32(ctx.r10.u32 + 3624, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823CD49C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cce78
	ctx.lr = 0x823CD4B0;
	sub_823CCE78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r30,3624(r11)
	REX_STORE_U32(ctx.r11.u32 + 3624, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823D1878) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D2310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823d2324
	if (!ctx.cr6.eq) goto loc_823D2324;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D2324:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823D36E8) {
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
	// bl 0x823d17e8
	ctx.lr = 0x823D3700;
	sub_823D17E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-28664
	ctx.r9.s64 = ctx.r10.s64 + -28664;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
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

DEFINE_REX_FUNC(sub_823D6838) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x823d68c4
	if (ctx.cr6.lt) goto loc_823D68C4;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// subf r7,r4,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r4.u64;
	// subf r31,r4,r5
	r31.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r30,r5,r3
	r30.u64 = ctx.r3.u64 - ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D6878:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfsx f11,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfsx f9,r31,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823d6878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6878;
loc_823D68C4:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823d68fc
	if (!ctx.cr6.lt) goto loc_823D68FC;
	// subf r7,r8,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823D68E4:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d68e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D68E4;
loc_823D68FC:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DB7B0) {
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
	ctx.lr = 0x823DB7B8;
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// subfic r10,r4,16
	ctx.xer.ca = ctx.r4.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r4.u64;
	// stw r5,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r6,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r11,-5528(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5528);
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// addi r4,r8,-5248
	ctx.r4.s64 = ctx.r8.s64 + -5248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r9,-5232
	ctx.r5.s64 = ctx.r9.s64 + -5232;
	// addi r9,r7,-32016
	ctx.r9.s64 = ctx.r7.s64 + -32016;
	// rlwinm r8,r11,2,26,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x30;
	// li r7,2
	ctx.r7.s64 = 2;
	// lvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r7,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r7.u32);
	// lvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,16
	r29.s64 = 16;
	// lvx128 v0,r8,r9
	ea = (ctx.r8.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,32
	r30.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r26,64
	r26.s64 = 64;
	// li r27,160
	r27.s64 = 160;
	// li r28,176
	r28.s64 = 176;
	// li r31,192
	r31.s64 = 192;
	// li r3,144
	ctx.r3.s64 = 144;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r17,320
	r17.s64 = 320;
	// li r18,416
	r18.s64 = 416;
	// li r19,432
	r19.s64 = 432;
	// li r20,448
	r20.s64 = 448;
	// li r21,224
	r21.s64 = 224;
	// li r22,240
	r22.s64 = 240;
	// li r23,400
	r23.s64 = 400;
	// li r24,208
	r24.s64 = 208;
	// li r25,384
	r25.s64 = 384;
loc_823DB854:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823DB860:
	// lvx128 v61,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v60,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,112
	ctx.r4.s64 = 112;
	// lvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v56,v59,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v54,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v53,v60,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r16,80
	r16.s64 = 80;
	// lvx128 v48,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r15,304
	r15.s64 = 304;
	// lvx128 v46,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v54,v51
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vmulfp128 v47,v53,v50
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v50.f32)));
	// lvx128 v59,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v45,v57,v48
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v48.f32)));
	// lvx128 v58,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v43,v56,v46
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvx128 v61,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v52,v59,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v39,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v40,v61,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v38,v58,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v44,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v37,v39,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v36,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r10,r16
	ea = (ctx.r10.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v52,v44
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v44.f32)));
	// lvx128 v34,r10,r26
	ea = (ctx.r10.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,256
	ctx.r4.s64 = 256;
	// vmulfp128 v32,v40,v35
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v35.f32)));
	// li r16,288
	r16.s64 = 288;
	// vmulfp128 v33,v38,v36
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vmsum4fp128 v58,v49,v62
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v57,v37,v34
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v34.f32)));
	// vmsum4fp128 v56,v47,v62
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// std r8,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r8.u64);
	// vmsum4fp128 v55,v45,v62
	simde_mm_store_ps(ctx.v55.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// std r6,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// vmsum4fp128 v54,v43,v62
	simde_mm_store_ps(ctx.v54.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// std r30,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, r30.u64);
	// addi r14,r1,-288
	r14.s64 = ctx.r1.s64 + -288;
	// lvx128 v61,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-272
	ctx.r8.s64 = ctx.r1.s64 + -272;
	// lvx128 v60,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-304
	ctx.r6.s64 = ctx.r1.s64 + -304;
	// lvx128 v52,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-320
	r30.s64 = ctx.r1.s64 + -320;
	// vperm128 v51,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v50,v52,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-288
	ctx.r5.s64 = ctx.r1.s64 + -288;
	// vperm128 v49,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r16,r1,-272
	r16.s64 = ctx.r1.s64 + -272;
	// lvx128 v48,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-304
	ctx.r4.s64 = ctx.r1.s64 + -304;
	// lvx128 v47,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v53,v42,v62
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// lvx128 v59,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v46,v33,v62
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvx128 v58,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v45,v32,v62
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v43,v57,v62
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvx128 v55,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v51,v48
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v48.f32)));
	// stvx128 v54,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v41,v61,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f0,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f0.f64 = double(temp.f32);
	// vperm128 v40,v60,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f13,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lvx128 v44,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-320
	ctx.r5.s64 = ctx.r1.s64 + -320;
	// stvx128 v46,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,-320
	r16.s64 = ctx.r1.s64 + -320;
	// lfs f11,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f11.f64 = double(temp.f32);
	// addi r15,r1,-304
	r15.s64 = ctx.r1.s64 + -304;
	// stvx128 v45,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-272
	ctx.r4.s64 = ctx.r1.s64 + -272;
	// lfs f10,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f10.f64 = double(temp.f32);
	// vmulfp128 v37,v50,v44
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v44.f32)));
	// stvx128 v43,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-288
	ctx.r5.s64 = ctx.r1.s64 + -288;
	// lvx128 v38,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r14,r1,-288
	r14.s64 = ctx.r1.s64 + -288;
	// lvx128 v33,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v36,v41,v38
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v61,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v59,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v39,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v35,v49,v39
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v39.f32)));
	// lvx128 v56,r10,r21
	ea = (ctx.r10.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v54,v58,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v55,r10,r22
	ea = (ctx.r10.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v52,v40,v56
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v53,r10,r24
	ea = (ctx.r10.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v51,v59,v55
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v55.f32)));
	// lvx128 v50,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v57,v53
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v48,v54,v50
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v50.f32)));
	// lfs f9,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r1,-272
	ctx.r8.s64 = ctx.r1.s64 + -272;
	// lfs f7,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f7.f64 = double(temp.f32);
	// vmsum4fp128 v34,v37,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// lfs f6,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f6.f64 = double(temp.f32);
	// vmsum4fp128 v47,v42,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvx128 v34,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v32,v36,v62
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v46,v35,v62
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// fadds f4,f9,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// vmsum4fp128 v45,v52,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvx128 v32,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v44,v51,v62
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// addi r4,r1,-304
	ctx.r4.s64 = ctx.r1.s64 + -304;
	// vmsum4fp128 v43,v49,v62
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// addi r16,r1,-320
	r16.s64 = ctx.r1.s64 + -320;
	// vmsum4fp128 v42,v48,v62
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvx128 v47,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f5,f12,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fadds f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stvx128 v46,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f2.f64 = double(temp.f32);
	// fadds f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// lfs f0,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stvx128 v45,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stvx128 v44,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stvx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stvx128 v42,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f4.f64 = double(temp.f32);
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f8,8(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fadds f1,f2,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f1,12(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lvx128 v41,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v40,v41,15
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_set1_ps(32768))));
	// stvx128 v40,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r8,-168(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// ld r6,-176(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// ld r30,-224(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// bdnz 0x823db860
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823DB860;
	// lwz r9,36(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// addi r5,r1,-192
	ctx.r5.s64 = ctx.r1.s64 + -192;
	// addi r4,r1,-208
	ctx.r4.s64 = ctx.r1.s64 + -208;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823dbb34
	if (!ctx.cr6.eq) goto loc_823DBB34;
	// lvx128 v39,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,-252(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lvx128 v38,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v37,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v37.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.s32), simde_mm_load_si128((simde__m128i*)ctx.v38.s32)));
	// addi r16,r9,16
	r16.s64 = ctx.r9.s64 + 16;
	// stw r16,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, r16.u32);
	// stvx128 v37,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823dbb98
	goto loc_823DBB98;
loc_823DBB34:
	// lvx128 v36,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,-240
	r16.s64 = ctx.r1.s64 + -240;
	// lvx128 v35,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// vpkswss128 v34,v35,v36
	simde_mm_store_si128((simde__m128i*)ctx.v34.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v36.s32), simde_mm_load_si128((simde__m128i*)ctx.v35.s32)));
	// std r11,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r11.u64);
	// stvx128 v34,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,-240(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// rlwinm r16,r5,16,16,31
	r16.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// sth r16,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, r16.u16);
	// sthux r5,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r6.u32 = ea;
	// lwz r4,-236(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r16,-232(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// rlwinm r15,r4,16,16,31
	r15.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// lwz r5,-228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// rlwinm r14,r16,16,16,31
	r14.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 16) & 0xFFFF;
	// sthux r15,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, r15.u16);
	ctx.r6.u32 = ea;
	// rlwinm r11,r5,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// sthux r4,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r6.u32 = ea;
	// sthux r14,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, r14.u16);
	ctx.r6.u32 = ea;
	// sthux r16,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, r16.u16);
	ctx.r6.u32 = ea;
	// sthux r11,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r6.u32 = ea;
	// ld r11,-224(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// sthux r5,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r6.u32 = ea;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
loc_823DBB98:
	// lwz r9,-256(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r9.u32);
	// bne 0x823db854
	if (!ctx.cr0.eq) goto loc_823DB854;
	// lwz r9,28(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32128
	ctx.r7.s64 = -2105540608;
	// addi r5,r9,-16
	ctx.r5.s64 = ctx.r9.s64 + -16;
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r3,-48
	ctx.r3.s64 = -48;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f12,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// li r4,-64
	ctx.r4.s64 = -64;
	// lfs f10,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// li r31,-32
	r31.s64 = -32;
	// lfs f9,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// li r25,-144
	r25.s64 = -144;
	// lfs f8,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// li r26,-160
	r26.s64 = -160;
	// lfs f7,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r5,r7,-32080
	ctx.r5.s64 = ctx.r7.s64 + -32080;
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r28,r11,2,26,27
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x30;
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// li r7,-16
	ctx.r7.s64 = -16;
	// fmadds f5,f4,f13,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f5.f64)));
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// li r9,-128
	ctx.r9.s64 = -128;
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,-288
	r24.s64 = ctx.r1.s64 + -288;
	// lvx128 v61,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,-304
	r21.s64 = ctx.r1.s64 + -304;
	// lvx128 v0,r28,r5
	ea = (r28.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,-320
	r17.s64 = ctx.r1.s64 + -320;
	// lvx128 v33,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v32,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f1,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// vperm128 v60,v33,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f0,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// addi r18,r1,-272
	r18.s64 = ctx.r1.s64 + -272;
	// lfs f6,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// li r27,-176
	r27.s64 = -176;
	// lfs f4,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// lvx128 v61,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f3,f3,f12,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f5.f64)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v57,v61,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v62,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,-192
	r28.s64 = -192;
	// lvx128 v56,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v55,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v32,v56
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v56.f32)));
	// lvx128 v50,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v52,v59,v54
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v48,v57,v50
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v50.f32)));
	// lvx128 v51,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v60,v51
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v51.f32)));
	// lvx128 v47,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v45,v62,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f2,f2,f11,f3
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f3.f64)));
	// lvx128 v44,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-288
	ctx.r5.s64 = -288;
	// vmulfp128 v43,v55,v46
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v46.f32)));
	// li r22,-272
	r22.s64 = -272;
	// li r20,-304
	r20.s64 = -304;
	// vmulfp128 v38,v45,v44
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v44.f32)));
	// li r19,-320
	r19.s64 = -320;
	// li r23,-112
	r23.s64 = -112;
	// vmsum4fp128 v42,v53,v63
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v41,v52,v63
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v39,v48,v63
	simde_mm_store_ps(ctx.v39.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v40,v49,v63
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// fmadds f1,f1,f10,f2
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f2.f64)));
	// stvx128 v42,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v39,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,-256
	r24.s64 = -256;
	// lvx128 v62,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f0,f0,f9,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f1.f64)));
	// lvx128 v37,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v36,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v35,v37,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v34,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r18,-96
	r18.s64 = -96;
	// li r21,-80
	r21.s64 = -80;
	// lvx128 v61,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v32,v36,v34
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v34.f32)));
	// lvx128 v62,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v35,v33
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v33.f32)));
	// lvx128 v60,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v55,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v54,v58,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum4fp128 v49,v43,v63
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vperm128 v52,v60,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r10,r18
	ea = (ctx.r10.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r10,r23
	ea = (ctx.r10.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v47,v38,v63
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v50,r10,r21
	ea = (ctx.r10.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmadds f13,f6,f8,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f0.f64)));
	// lvx128 v48,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r17,-400
	r17.s64 = -400;
	// li r15,-416
	r15.s64 = -416;
	// vmulfp128 v46,v57,v53
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v53.f32)));
	// li r5,-432
	ctx.r5.s64 = -432;
	// vmulfp128 v45,v55,v51
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vmulfp128 v44,v54,v50
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v50.f32)));
	// li r16,-384
	r16.s64 = -384;
	// vmsum4fp128 v42,v32,v63
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v43,v52,v48
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vmsum4fp128 v41,v59,v63
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// addi r20,r1,-304
	r20.s64 = ctx.r1.s64 + -304;
	// lfs f12,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f12.f64 = double(temp.f32);
	// addi r19,r1,-320
	r19.s64 = ctx.r1.s64 + -320;
	// lfs f11,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f11.f64 = double(temp.f32);
	// addi r18,r1,-272
	r18.s64 = ctx.r1.s64 + -272;
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f9.f64 = double(temp.f32);
	// lvx128 v62,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,-288
	r17.s64 = ctx.r1.s64 + -288;
	// lvx128 v61,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r6,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// lvx128 v60,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v39,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v40,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r5,r1,-320
	ctx.r5.s64 = ctx.r1.s64 + -320;
	// lvx128 v37,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,-288
	r16.s64 = ctx.r1.s64 + -288;
	// lfs f8,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f8.f64 = double(temp.f32);
	// addi r15,r1,-272
	r15.s64 = ctx.r1.s64 + -272;
	// addi r14,r1,-304
	r14.s64 = ctx.r1.s64 + -304;
	// lvx128 v38,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-288
	ctx.r6.s64 = ctx.r1.s64 + -288;
	// lvx128 v36,r10,r26
	ea = (ctx.r10.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,-304
	r20.s64 = ctx.r1.s64 + -304;
	// fadds f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stw r5,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r5.u32);
	// fmadds f7,f4,f7,f13
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f13.f64)));
	// vperm128 v34,v62,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stfs f7,-208(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// li r5,-448
	ctx.r5.s64 = -448;
	// stvx128 v47,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v35,v46,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v42,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v33,v39,v38
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vmsum4fp128 v32,v45,v63
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v41,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v62,v44,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v61,v40,v36
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vmsum4fp128 v59,v43,v63
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// fadds f5,f6,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// stfs f5,-204(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// lvx128 v56,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,-320
	r19.s64 = ctx.r1.s64 + -320;
	// lvx128 v52,r10,r25
	ea = (ctx.r10.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// lfs f4,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f4.f64 = double(temp.f32);
	// addi r18,r1,-272
	r18.s64 = ctx.r1.s64 + -272;
	// lfs f3,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f3.f64 = double(temp.f32);
	// std r24,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, r24.u64);
	// stvx128 v62,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r30.u64);
	// stvx128 v32,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,-288
	r16.s64 = ctx.r1.s64 + -288;
	// lvx128 v43,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r15,r1,-272
	r15.s64 = ctx.r1.s64 + -272;
	// lfs f1,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f1.f64 = double(temp.f32);
	// addi r24,r1,-304
	r24.s64 = ctx.r1.s64 + -304;
	// addi r30,r1,-320
	r30.s64 = ctx.r1.s64 + -320;
	// stvx128 v35,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f13.f64 = double(temp.f32);
	// lwz r14,-256(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// stvx128 v59,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// vmsum4fp128 v58,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v57,v33,v63
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v55,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v54,v34,v56
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vperm128 v53,v55,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f11,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,-208
	ctx.r5.s64 = ctx.r1.s64 + -208;
	// lfs f10,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// addi r17,r1,-208
	r17.s64 = ctx.r1.s64 + -208;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// vmulfp128 v51,v53,v52
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// stfs f12,-200(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// stvx128 v58,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f8.f64 = double(temp.f32);
	// vmsum4fp128 v45,v54,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v57,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f7,f9,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v36,v51,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v61,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f6.f64 = double(temp.f32);
	// vperm128 v49,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stvx128 v45,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v48,v50,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v41,v49,v43
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v43.f32)));
	// lvx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v46,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v44,v61,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v42,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v39,v48,v42
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v42.f32)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v37,v46,v40
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v40.f32)));
	// stfs f5,-196(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// vmulfp128 v35,v44,v38
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v59,v60,15
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_set1_ps(32768))));
	// lvx128 v60,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v34,v41,v63
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vperm128 v57,v60,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v58,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v33,v39,v63
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v36,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v32,v37,v63
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f4,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f4.f64 = double(temp.f32);
	// vmsum4fp128 v61,v35,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f3,-288(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f3.f64 = double(temp.f32);
	// vperm128 v56,v58,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v57,v55
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v55.f32)));
	// fadds f2,f4,f3
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// vmulfp128 v52,v56,v54
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lfs f1,-304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f1.f64 = double(temp.f32);
	// addi r20,r1,-288
	r20.s64 = ctx.r1.s64 + -288;
	// stvx128 v59,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,-272
	r19.s64 = ctx.r1.s64 + -272;
	// stvx128 v34,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,-304
	r18.s64 = ctx.r1.s64 + -304;
	// stvx128 v32,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,-320
	r17.s64 = ctx.r1.s64 + -320;
	// addi r16,r1,-320
	r16.s64 = ctx.r1.s64 + -320;
	// vmsum4fp128 v51,v53,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v51.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// addi r15,r1,-304
	r15.s64 = ctx.r1.s64 + -304;
	// lvx128 v48,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r14,r1,-288
	r14.s64 = ctx.r1.s64 + -288;
	// ld r24,-224(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// addi r6,r1,-272
	ctx.r6.s64 = ctx.r1.s64 + -272;
	// lvx128 v47,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-288
	ctx.r5.s64 = -288;
	// lvx128 v45,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r10,r23
	ea = (ctx.r10.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f13,f2,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// lvx128 v40,r10,r21
	ea = (ctx.r10.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v50,v52,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v39,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stvx128 v61,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stvx128 v50,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v49,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v62,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v46,v61,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v43,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v36,v62,v39,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r5,-304
	ctx.r5.s64 = -304;
	// vmulfp128 v44,v49,v48
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v48.f32)));
	// stfs f0,-192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// vmulfp128 v41,v46,v45
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vmulfp128 v37,v43,v42
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v32,v36,v35
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v35.f32)));
	// lvx128 v60,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-320
	ctx.r5.s64 = -320;
	// vperm128 v38,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v34,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-96
	ctx.r5.s64 = -96;
	// vperm128 v33,v34,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum4fp128 v62,v44,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v60,v41,v63
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f9,-304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f9.f64 = double(temp.f32);
	// vmulfp128 v61,v33,v40
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v40.f32)));
	// stvx128 v62,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v58,v37,v63
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f7,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f7.f64 = double(temp.f32);
	// vmsum4fp128 v57,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v60,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v56,v32,v63
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f3,-304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f3.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lvx128 v55,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// vmulfp128 v54,v38,v55
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v55.f32)));
	// lfs f6,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// vmsum4fp128 v53,v54,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// fadds f2,f4,f3
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// lfs f1,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stvx128 v56,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stvx128 v58,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stvx128 v53,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f9.f64 = double(temp.f32);
	// addi r20,r1,-192
	r20.s64 = ctx.r1.s64 + -192;
	// lfs f8,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f8.f64 = double(temp.f32);
	// addi r19,r1,-192
	r19.s64 = ctx.r1.s64 + -192;
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f11,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f10.f64 = double(temp.f32);
	// ld r6,-176(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// stfs f13,-188(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// ld r30,-168(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// stfs f12,-184(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,-180(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// lvx128 v52,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v62,v52,15
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_set1_ps(32768))));
	// stvx128 v62,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x823dc118
	if (!ctx.cr6.eq) goto loc_823DC118;
	// vpkswss128 v51,v59,v62
	simde_mm_store_si128((simde__m128i*)ctx.v51.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// lwz r5,-252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// addi r20,r5,16
	r20.s64 = ctx.r5.s64 + 16;
	// stw r20,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, r20.u32);
	// stvx128 v51,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823dc16c
	goto loc_823DC16C;
loc_823DC118:
	// vpkswss128 v50,v59,v62
	simde_mm_store_si128((simde__m128i*)ctx.v50.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// addi r20,r1,-240
	r20.s64 = ctx.r1.s64 + -240;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v50,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r19,-236(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// lwz r20,-240(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// rlwinm r18,r20,16,16,31
	r18.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 16) & 0xFFFF;
	// sth r18,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, r18.u16);
	// rlwinm r17,r19,16,16,31
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFFFF;
	// sthux r20,r6,r5
	ea = ctx.r6.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r20.u16);
	ctx.r6.u32 = ea;
	// lwz r18,-232(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r20,-228(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// rlwinm r16,r18,16,16,31
	r16.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0xFFFF;
	// rlwinm r15,r20,16,16,31
	r15.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 16) & 0xFFFF;
	// sthux r17,r6,r5
	ea = ctx.r6.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r17.u16);
	ctx.r6.u32 = ea;
	// sthux r19,r6,r5
	ea = ctx.r6.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r19.u16);
	ctx.r6.u32 = ea;
	// sthux r16,r6,r5
	ea = ctx.r6.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r16.u16);
	ctx.r6.u32 = ea;
	// sthux r18,r6,r5
	ea = ctx.r6.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r18.u16);
	ctx.r6.u32 = ea;
	// sthux r15,r6,r5
	ea = ctx.r6.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r15.u16);
	ctx.r6.u32 = ea;
	// sthux r20,r6,r5
	ea = ctx.r6.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, r20.u16);
	ctx.r6.u32 = ea;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_823DC16C:
	// li r17,-448
	r17.s64 = -448;
	// lvx128 v49,r10,r26
	ea = (ctx.r10.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r18,-384
	r18.s64 = -384;
	// lvx128 v48,r10,r25
	ea = (ctx.r10.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-416
	ctx.r5.s64 = -416;
	// lvx128 v47,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r20,-432
	r20.s64 = -432;
	// lvx128 v46,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r19,-400
	r19.s64 = -400;
	// std r29,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r29.u64);
	// lvx128 v45,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// lvx128 v42,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,-288
	r16.s64 = ctx.r1.s64 + -288;
	// lvx128 v62,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,-272
	r18.s64 = ctx.r1.s64 + -272;
	// lvx128 v61,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,-304
	r17.s64 = ctx.r1.s64 + -304;
	// lvx128 v60,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v44,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v41,v62,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// vperm128 v43,v45,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v38,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v40,v60,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v57,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v39,v44,v49
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v49.f32)));
	// lvx128 v54,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v36,v41,v47
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v55,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v37,v43,v48
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v48.f32)));
	// lvx128 v61,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v35,v40,v46
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v32,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v33,v34,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v59,v62,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v58,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v62,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v32,v57
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v57.f32)));
	// lvx128 v46,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v56,v33,v38
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v38.f32)));
	// addi r15,r1,-320
	r15.s64 = ctx.r1.s64 + -320;
	// vmulfp128 v51,v59,v54
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v59,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v49,v58,v55
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v55.f32)));
	// li r29,-288
	r29.s64 = -288;
	// vmsum4fp128 v52,v39,v63
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vperm128 v45,v62,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum4fp128 v48,v36,v63
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vperm128 v44,v59,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum4fp128 v50,v37,v63
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v61,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v47,v35,v63
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v43,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r6,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r6.u64);
	// std r8,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r8.u64);
	// addi r14,r1,-288
	r14.s64 = ctx.r1.s64 + -288;
	// std r30,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, r30.u64);
	// addi r6,r1,-272
	ctx.r6.s64 = ctx.r1.s64 + -272;
	// addi r8,r1,-304
	ctx.r8.s64 = ctx.r1.s64 + -304;
	// vperm128 v41,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r30,r1,-320
	r30.s64 = ctx.r1.s64 + -320;
	// lvx128 v40,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v39,v56,v63
	simde_mm_store_ps(ctx.v39.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v60,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v37,v53,v63
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v38,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v36,v51,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v35,v45,v42
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmsum4fp128 v34,v49,v63
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v33,v44,v43
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v43.f32)));
	// stvx128 v52,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v47,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f0.f64 = double(temp.f32);
	// vperm128 v61,v40,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f13,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f13.f64 = double(temp.f32);
	// li r16,-304
	r16.s64 = -304;
	// stvx128 v37,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v56,v62,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v39,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v54,v60,v38,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v59,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r15,-320
	r15.s64 = -320;
	// lvx128 v58,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v57,v41,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v59.f32)));
	// lvx128 v59,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v55,v61,v58
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v58.f32)));
	// lvx128 v60,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r14,-96
	r14.s64 = -96;
	// lvx128 v61,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r19,-384
	r19.s64 = -384;
	// li r5,-448
	ctx.r5.s64 = -448;
	// vperm128 v52,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v62,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r18,r1,-304
	r18.s64 = ctx.r1.s64 + -304;
	// lvx128 v47,r10,r23
	ea = (ctx.r10.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,-320
	r17.s64 = ctx.r1.s64 + -320;
	// addi r20,r1,-288
	r20.s64 = ctx.r1.s64 + -288;
	// vperm128 v51,v59,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v49,v62,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v45,v56,v47
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v50,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r16,r1,-272
	r16.s64 = ctx.r1.s64 + -272;
	// lvx128 v44,r10,r14
	ea = (ctx.r10.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r15,r1,-272
	r15.s64 = ctx.r1.s64 + -272;
	// lvx128 v59,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,-288
	r19.s64 = ctx.r1.s64 + -288;
	// lvx128 v56,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r14,r1,-304
	r14.s64 = ctx.r1.s64 + -304;
	// addi r5,r1,-320
	ctx.r5.s64 = ctx.r1.s64 + -320;
	// fadds f12,f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r6,r1,-304
	ctx.r6.s64 = ctx.r1.s64 + -304;
	// vperm128 v48,v50,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v32,v35,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v32.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v42,r10,r21
	ea = (ctx.r10.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v53,v33,v63
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v39,r10,r26
	ea = (ctx.r10.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v40,v57,v63
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f11,-304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f11.f64 = double(temp.f32);
	// vmulfp128 v43,v54,v46
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v46.f32)));
	// stvx128 v36,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-288
	ctx.r8.s64 = ctx.r1.s64 + -288;
	// lfs f9,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f9.f64 = double(temp.f32);
	// vmulfp128 v41,v52,v44
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v44.f32)));
	// stvx128 v34,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v37,v48,v42
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v42.f32)));
	// lvx128 v38,r10,r27
	ea = (ctx.r10.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v33,v49,v39
	simde_mm_store_ps(ctx.v33.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v61,v51,v38
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v38.f32)));
	// fadds f10,f12,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// vperm128 v58,v60,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v57,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v35,v55,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v35.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v55,r10,r25
	ea = (ctx.r10.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v54,v45,v63
	simde_mm_store_ps(ctx.v54.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vperm128 v48,v56,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmulfp128 v51,v58,v57
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v52,v43,v63
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v50,v41,v63
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// fadds f8,f10,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,-208(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// lfs f5,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f5.f64 = double(temp.f32);
	// vmsum4fp128 v49,v37,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v49.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f7,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// lfs f3,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f3.f64 = double(temp.f32);
	// vmsum4fp128 v47,v33,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f6,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f6.f64 = double(temp.f32);
	// vmsum4fp128 v46,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v32,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f2,f4,f3
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stvx128 v53,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,-320
	r20.s64 = ctx.r1.s64 + -320;
	// addi r18,r1,-272
	r18.s64 = ctx.r1.s64 + -272;
	// stw r8,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r8.u32);
	// addi r30,r1,-320
	r30.s64 = ctx.r1.s64 + -320;
	// ld r8,-176(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// addi r10,r10,-256
	ctx.r10.s64 = ctx.r10.s64 + -256;
	// ld r29,-160(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// stw r30,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, r30.u32);
	// addi r17,r1,-288
	r17.s64 = ctx.r1.s64 + -288;
	// ld r30,-224(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// addi r16,r1,-272
	r16.s64 = ctx.r1.s64 + -272;
	// addi r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -512;
	// vmulfp128 v44,v48,v55
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v55.f32)));
	// fadds f1,f2,f6
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// vmsum4fp128 v45,v51,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v39,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-288
	ctx.r8.s64 = ctx.r1.s64 + -288;
	// lvx128 v33,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-304
	r29.s64 = ctx.r1.s64 + -304;
	// lvx128 v40,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-272
	r30.s64 = ctx.r1.s64 + -272;
	// lvx128 v61,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v42,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v41,v43,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v34,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v32,v61,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v38,v42,v40
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v40.f32)));
	// lvx128 v62,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v36,v44,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v35,v41,v39
	simde_mm_store_ps(ctx.v35.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v59,v34,v33
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v33.f32)));
	// lvx128 v61,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v57,v32,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v60.f32)));
	// lfs f13,-288(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f13.f64 = double(temp.f32);
	// vperm128 v56,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v50,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stvx128 v49,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r15,r1,-304
	r15.s64 = ctx.r1.s64 + -304;
	// lvx128 v58,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,-208
	r19.s64 = ctx.r1.s64 + -208;
	// lvx128 v60,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v55,v58,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v53,v62,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f1,-204(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// vmsum4fp128 v50,v38,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v43,v55,v51
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vmsum4fp128 v48,v35,v63
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v42,v53,v49
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v49.f32)));
	// vmsum4fp128 v41,v59,v63
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v40,v57,v63
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f11,-304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v54,r0,r14
	ea = (r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lvx128 v54,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v44,v56,v54
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lfs f9,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v52,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,-256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,-200(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// lfs f7,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f6.f64 = double(temp.f32);
	// stvx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f4,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f4.f64 = double(temp.f32);
	// stvx128 v46,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f2,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stvx128 v36,r0,r18
	ea = (r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v45,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f0.f64 = double(temp.f32);
	// li r7,-288
	ctx.r7.s64 = -288;
	// lfs f13,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f13.f64 = double(temp.f32);
	// li r5,-304
	ctx.r5.s64 = -304;
	// lfs f11,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,-320
	ctx.r3.s64 = ctx.r1.s64 + -320;
	// stvx128 v50,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r20,-168(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lvx128 v33,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,-320
	ctx.r4.s64 = -320;
	// lvx128 v62,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v38,v44,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v61,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-304
	ctx.r7.s64 = ctx.r1.s64 + -304;
	// lvx128 v32,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v56,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v58,v62,v32,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v48,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r15
	ea = (r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v36,v43,v63
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v62,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,-288
	ctx.r5.s64 = ctx.r1.s64 + -288;
	// lvx128 v37,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v34,v42,v63
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lvx128 v57,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-320
	ctx.r9.s64 = ctx.r1.s64 + -320;
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,-272
	ctx.r4.s64 = ctx.r1.s64 + -272;
	// vperm128 v35,v60,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r31,-96
	r31.s64 = -96;
	// vperm128 v54,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v52,r10,r23
	ea = (ctx.r10.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v53,v55,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v49,r10,r21
	ea = (ctx.r10.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v50,v58,v57
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v57.f32)));
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// vmulfp128 v60,v35,v33
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v33.f32)));
	// stfs f1,-196(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// lvx128 v51,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v48,v56,v52
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vmulfp128 v47,v54,v51
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v51.f32)));
	// lwz r11,36(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// vmulfp128 v46,v53,v49
	simde_mm_store_ps(ctx.v46.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v49.f32)));
	// addi r10,r1,-192
	ctx.r10.s64 = ctx.r1.s64 + -192;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f9,-320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v40,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f7,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f7.f64 = double(temp.f32);
	// vmsum4fp128 v45,v60,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f6,-272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f6.f64 = double(temp.f32);
	// vmsum4fp128 v44,v50,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v38,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v43,v48,v63
	simde_mm_store_ps(ctx.v43.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v36,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v42,v47,v63
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// lfs f4,-304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f4.f64 = double(temp.f32);
	// vmsum4fp128 v41,v46,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// stvx128 v34,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f10,f12,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// lvx128 v39,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f2.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v59,v39,15
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_set1_ps(32768))));
	// lfs f0,-304(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f13,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stvx128 v44,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v43,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f8,-192(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f1,-188(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-320(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -320);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,-288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -288);
	ctx.f5.f64 = double(temp.f32);
	// fadds f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f4,-272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -272);
	ctx.f4.f64 = double(temp.f32);
	// ld r6,-240(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f6,-184(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,-180(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// lvx128 v40,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v40,15
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_set1_ps(32768))));
	// bne cr6,0x823dc6bc
	if (!ctx.cr6.eq) goto loc_823DC6BC;
	// vpkswss128 v39,v59,v63
	simde_mm_store_si128((simde__m128i*)ctx.v39.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// lwz r11,-252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// stvx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1cd0
	return;
loc_823DC6BC:
	// vpkswss128 v38,v59,v63
	simde_mm_store_si128((simde__m128i*)ctx.v38.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// addi r10,r1,-240
	ctx.r10.s64 = ctx.r1.s64 + -240;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,-240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// sth r7,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r7.u16);
	// lwz r9,-236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// sthux r5,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r6.u32 = ea;
	// rlwinm r4,r9,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// lwz r8,-232(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r10,-228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -228);
	// rlwinm r9,r8,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r10,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sthux r4,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r6.u32 = ea;
	// sthux r3,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r6.u32 = ea;
	// sthux r9,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r6.u32 = ea;
	// sthux r8,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r6.u32 = ea;
	// sthux r7,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r6.u32 = ea;
	// sthx r10,r11,r6
	REX_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u16);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824D1CF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D1D00;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r29,284(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r28,276(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x824d1a80
	ctx.lr = 0x824D1D5C;
	sub_824D1A80(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824D40B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r11,3716
	ctx.r11.s64 = ctx.r11.s64 + 3716;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,20992
	ctx.r10.s64 = ctx.r10.s64 + 20992;
	// addi r9,r9,20976
	ctx.r9.s64 = ctx.r9.s64 + 20976;
	// vupkd3d128 v61,v62,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v62.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v61 = vTemp;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lvlx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// vrlimi128 v63,v60,4,3
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 4));
	// addi r8,r8,20960
	ctx.r8.s64 = ctx.r8.s64 + 20960;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,20944
	ctx.r11.s64 = ctx.r11.s64 + 20944;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// vspltw128 v61,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vperm128 v63,v63,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// addi r10,r10,20928
	ctx.r10.s64 = ctx.r10.s64 + 20928;
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,20912
	ctx.r9.s64 = ctx.r9.s64 + 20912;
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// vcuxwfp128 v8,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v8.f32, rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v8,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v63,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vspltw128 v0,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v8,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v7,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vmaddfp v0,v0,v11,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v8,v9,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v7,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor128 v60,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaxfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v62,v62,v60
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vminfp128 v62,v61,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DBD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DBD88;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824dbdd4
	if (ctx.cr6.lt) goto loc_824DBDD4;
	// lwz r30,104(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dbdd4
	if (ctx.cr6.gt) goto loc_824DBDD4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dbdcc
	if (!ctx.cr6.gt) goto loc_824DBDCC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d81a8
	ctx.lr = 0x824DBDCC;
	sub_824D81A8(ctx, base);
loc_824DBDCC:
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_824DBDD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DD580) {
	REX_FUNC_PROLOGUE();
	// b 0x824dd2b0
	sub_824DD2B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD6F8) {
	REX_FUNC_PROLOGUE();
	// b 0x824dd630
	sub_824DD630(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD7B8) {
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
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x824ea240
	ctx.lr = 0x824DD7D8;
	sub_824EA240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824dd7ec
	if (!ctx.cr0.eq) goto loc_824DD7EC;
	// bl 0x824e8f20
	ctx.lr = 0x824DD7E4;
	sub_824E8F20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824dd7f4
	goto loc_824DD7F4;
loc_824DD7EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_824DD7F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DE918) {
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
	ctx.lr = 0x824DE920;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x824f08f8
	ctx.lr = 0x824DE940;
	sub_824F08F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x824ef7f8
	ctx.lr = 0x824DE948;
	sub_824EF7F8(ctx, base);
	// b 0x824de9c4
	goto loc_824DE9C4;
loc_824DE94C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824efba8
	ctx.lr = 0x824DE954;
	sub_824EFBA8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1978
	ctx.r11.s64 = ctx.r11.s64 + -1978;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x824de9b4
	if (ctx.cr6.gt) goto loc_824DE9B4;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,23424
	ctx.r12.s64 = ctx.r12.s64 + 23424;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32178
	ctx.r12.s64 = -2108817408;
	// nop 
	// addi r12,r12,-5744
	ctx.r12.s64 = ctx.r12.s64 + -5744;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824DE990;
	case 1:
		goto loc_824DEA48;
	case 2:
		goto loc_824DE9AC;
	case 3:
		goto loc_824DEA60;
	case 4:
		goto loc_824DEA6C;
	case 5:
		goto loc_824DEA84;
	case 6:
		goto loc_824DEA00;
	case 7:
		goto loc_824DEA18;
	case 8:
		goto loc_824DEA9C;
	case 9:
		goto loc_824DEA30;
	case 10:
		goto loc_824DE9B4;
	case 11:
		goto loc_824DEAD4;
	case 12:
		goto loc_824DE9B4;
	case 13:
		goto loc_824DEAB4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824DE990:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824de99c
	if (ctx.cr0.eq) goto loc_824DE99C;
	// bl 0x826b40a0
	ctx.lr = 0x824DE99C;
	sub_826B40A0(ctx, base);
loc_824DE99C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r11,r31,0,0,25
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DE9AC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824de9b8
	if (ctx.cr0.eq) goto loc_824DE9B8;
loc_824DE9B4:
	// bl 0x826b40a0
	ctx.lr = 0x824DE9B8;
	sub_826B40A0(ctx, base);
loc_824DE9B8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824efaf8
	ctx.lr = 0x824DE9C4;
	sub_824EFAF8(ctx, base);
loc_824DE9C4:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824de94c
	if (!ctx.cr0.eq) goto loc_824DE94C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822cd828
	ctx.lr = 0x824DE9DC;
	sub_822CD828(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824de9e8
	if (ctx.cr6.eq) goto loc_824DE9E8;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
loc_824DE9E8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x824de9f4
	if (ctx.cr6.eq) goto loc_824DE9F4;
	// stw r27,0(r23)
	REX_STORE_U32(r23.u32 + 0, r27.u32);
loc_824DE9F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_824DEA00:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824dea0c
	if (ctx.cr0.eq) goto loc_824DEA0C;
	// bl 0x826b40a0
	ctx.lr = 0x824DEA0C;
	sub_826B40A0(ctx, base);
loc_824DEA0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,20,8,11
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000) | (r31.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEA18:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824dea24
	if (ctx.cr0.eq) goto loc_824DEA24;
	// bl 0x826b40a0
	ctx.lr = 0x824DEA24;
	sub_826B40A0(ctx, base);
loc_824DEA24:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,24,5,7
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7000000) | (r31.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEA30:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824dea3c
	if (ctx.cr0.eq) goto loc_824DEA3C;
	// bl 0x826b40a0
	ctx.lr = 0x824DEA3C;
	sub_826B40A0(ctx, base);
loc_824DEA3C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,31,0,0
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (r31.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEA48:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824dea54
	if (!ctx.cr0.eq) goto loc_824DEA54;
	// bl 0x826b40a0
	ctx.lr = 0x824DEA54;
	sub_826B40A0(ctx, base);
loc_824DEA54:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,8,18,23
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F00) | (r31.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEA60:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824de9b8
	if (!ctx.cr0.eq) goto loc_824DE9B8;
	// b 0x824de9b4
	goto loc_824DE9B4;
loc_824DEA6C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824dea78
	if (!ctx.cr0.eq) goto loc_824DEA78;
	// bl 0x826b40a0
	ctx.lr = 0x824DEA78;
	sub_826B40A0(ctx, base);
loc_824DEA78:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,18,13,13
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x40000) | (r31.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEA84:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824dea90
	if (!ctx.cr0.eq) goto loc_824DEA90;
	// bl 0x826b40a0
	ctx.lr = 0x824DEA90;
	sub_826B40A0(ctx, base);
loc_824DEA90:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,19,12,12
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x80000) | (r31.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEA9C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824deaa8
	if (!ctx.cr0.eq) goto loc_824DEAA8;
	// bl 0x826b40a0
	ctx.lr = 0x824DEAA8;
	sub_826B40A0(ctx, base);
loc_824DEAA8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,27,1,4
	r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x78000000) | (r31.u64 & 0xFFFFFFFF87FFFFFF);
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEAB4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824deac0
	if (!ctx.cr0.eq) goto loc_824DEAC0;
	// bl 0x826b40a0
	ctx.lr = 0x824DEAC0;
	sub_826B40A0(ctx, base);
loc_824DEAC0:
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 7);
	// rlwinm r10,r27,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r27,r11,r10
	r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x824de9b8
	goto loc_824DE9B8;
loc_824DEAD4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824deae0
	if (!ctx.cr0.eq) goto loc_824DEAE0;
	// bl 0x826b40a0
	ctx.lr = 0x824DEAE0;
	sub_826B40A0(ctx, base);
loc_824DEAE0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r27,r11,1,30,30
	r27.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (r27.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x824de9b8
	goto loc_824DE9B8;
}

DEFINE_REX_FUNC(sub_824EEC18) {
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
	ctx.lr = 0x824EEC20;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-26736
	r28.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824eec60
	if (!ctx.cr6.eq) goto loc_824EEC60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26292
	ctx.r5.s64 = ctx.r11.s64 + -26292;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEC60;
	sub_824EA978(ctx, base);
loc_824EEC60:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824eec74
	if (!ctx.cr6.eq) goto loc_824EEC74;
	// li r30,0
	r30.s64 = 0;
	// b 0x824eec80
	goto loc_824EEC80;
loc_824EEC74:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824eec9c
	if (!ctx.cr6.eq) goto loc_824EEC9C;
loc_824EEC80:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26368
	ctx.r5.s64 = ctx.r11.s64 + -26368;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1427
	ctx.r7.s64 = 1427;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEC9C;
	sub_824EA978(ctx, base);
loc_824EEC9C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ee408
	ctx.lr = 0x824EECAC;
	sub_824EE408(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824eecb8
	if (!ctx.cr0.eq) goto loc_824EECB8;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_824EECB8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r30,16(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824eed00
	if (ctx.cr6.eq) goto loc_824EED00;
	// bl 0x824ee070
	ctx.lr = 0x824EECCC;
	sub_824EE070(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824eece4
	if (!ctx.cr6.eq) goto loc_824EECE4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_824EECE4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824eecf4
	if (ctx.cr6.eq) goto loc_824EECF4;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EECF4;
	sub_825A28C0(ctx, base);
loc_824EECF4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824EED00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F19F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824F19F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824f1a54
	if (ctx.cr6.eq) goto loc_824F1A54;
loc_824F1A14:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824f1a38
	if (ctx.cr6.gt) goto loc_824F1A38;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824ee4d0
	ctx.lr = 0x824F1A30;
	sub_824EE4D0(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x824f1a14
	if (!ctx.cr6.eq) goto loc_824F1A14;
loc_824F1A38:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f1a54
	if (ctx.cr6.eq) goto loc_824F1A54;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f1a54
	if (ctx.cr6.eq) goto loc_824F1A54;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f1a78
	if (!ctx.cr6.gt) goto loc_824F1A78;
loc_824F1A54:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-24720
	ctx.r6.s64 = ctx.r11.s64 + -24720;
	// addi r5,r10,-24780
	ctx.r5.s64 = ctx.r10.s64 + -24780;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1A78;
	sub_824EA978(ctx, base);
loc_824F1A78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 72);
	// bl 0x824ee580
	ctx.lr = 0x824F1A84;
	sub_824EE580(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824F7908) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x822cded0
	ctx.lr = 0x824F7924;
	sub_822CDED0(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,20480
	ctx.r11.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
	// rlwimi r11,r31,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824FD6A8) {
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
	ctx.lr = 0x824FD6B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r27,160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r4,r6,0,19,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1FFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r7,r9,0,20,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwimi r4,r27,0,11,15
	ctx.r4.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1F0000) | (ctx.r4.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwimi r7,r9,0,16,19
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r4,r27,0,18,18
	ctx.r4.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
loc_824FD708:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fd728
	if (!ctx.cr0.eq) goto loc_824FD728;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x824fd708
	if (!ctx.cr6.eq) goto loc_824FD708;
loc_824FD728:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fd7c4
	if (!ctx.cr0.eq) goto loc_824FD7C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r31,r10,16,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r28,r10,19,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// blt 0x824fd7c4
	if (ctx.cr0.lt) goto loc_824FD7C4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bge cr6,0x824fd7c4
	if (!ctx.cr6.lt) goto loc_824FD7C4;
	// clrlwi r4,r27,19
	ctx.r4.u64 = r27.u32 & 0x1FFF;
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// ble cr6,0x824fd7c4
	if (!ctx.cr6.gt) goto loc_824FD7C4;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824fd7c4
	if (!ctx.cr6.lt) goto loc_824FD7C4;
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824fc808
	ctx.lr = 0x824FD788;
	sub_824FC808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fd7c4
	if (ctx.cr0.lt) goto loc_824FD7C4;
	// rlwinm r11,r27,16,27,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x1F;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// addi r4,r26,1
	ctx.r4.s64 = r26.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824fc918
	ctx.lr = 0x824FD7B0;
	sub_824FC918(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x824fd7cc
	goto loc_824FD7CC;
loc_824FD7C4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824FD7CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825058A0) {
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
	// rlwinm r4,r4,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82504128
	ctx.lr = 0x825058CC;
	sub_82504128(ctx, base);
	// and r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 & r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825058f0
	if (ctx.cr0.eq) goto loc_825058F0;
	// rlwimi r11,r31,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x82504228
	ctx.lr = 0x825058F0;
	sub_82504228(ctx, base);
loc_825058F0:
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

DEFINE_REX_FUNC(sub_8250AD28) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250ad60
	if (ctx.cr6.eq) goto loc_8250AD60;
	// rlwinm r11,r4,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x82503da0
	ctx.lr = 0x8250AD5C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8250AD60:
	// stw r31,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, r31.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_8250E748) {
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
	// bl 0x826a1c98
	ctx.lr = 0x8250E750;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r4,48
	r26.s64 = ctx.r4.s64 + 48;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r9,40(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// li r21,1
	r21.s64 = 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x8250e790
	goto loc_8250E790;
loc_8250E784:
	// lwz r28,52(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 52);
	// addi r10,r28,48
	ctx.r10.s64 = r28.s64 + 48;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
loc_8250E790:
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r21,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250e784
	if (ctx.cr0.eq) goto loc_8250E784;
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_8250E7B8:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8250e87c
	if (ctx.cr6.eq) goto loc_8250E87C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r7,r11,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r6,40(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// slw r5,r21,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// and. r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8250e7f8
	if (!ctx.cr0.eq) goto loc_8250E7F8;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x8250e7b8
	goto loc_8250E7B8;
loc_8250E7F8:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e87c
	if (!ctx.cr0.eq) goto loc_8250E87C;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250e870
	if (!ctx.cr0.eq) goto loc_8250E870;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	r28.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8250e870
	if (ctx.cr0.eq) goto loc_8250E870;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e870
	if (!ctx.cr0.eq) goto loc_8250E870;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250e854
	if (ctx.cr0.eq) goto loc_8250E854;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8250e860
	goto loc_8250E860;
loc_8250E854:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_8250E860:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// beq cr6,0x8250e87c
	if (ctx.cr6.eq) goto loc_8250E87C;
loc_8250E870:
	// li r4,3535
	ctx.r4.s64 = 3535;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250E87C;
	sub_824E4368(ctx, base);
loc_8250E87C:
	// lwz r11,36(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250ea04
	if (!ctx.cr0.eq) goto loc_8250EA04;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250ea04
	if (ctx.cr0.eq) goto loc_8250EA04;
loc_8250E894:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8448
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8448, ctx.xer);
	// bne cr6,0x8250e9e8
	if (!ctx.cr6.eq) goto loc_8250E9E8;
	// lwz r31,28(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e9e8
	if (!ctx.cr0.eq) goto loc_8250E9E8;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8250e9e8
	if (ctx.cr0.eq) goto loc_8250E9E8;
loc_8250E8B8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x8250e8d8
	if (ctx.cr6.eq) goto loc_8250E8D8;
	// cmplwi cr6,r11,66
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 66, ctx.xer);
	// bne cr6,0x8250e9d0
	if (!ctx.cr6.eq) goto loc_8250E9D0;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250e9d0
	if (ctx.cr0.eq) goto loc_8250E9D0;
loc_8250E8D8:
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r3,44(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 44);
	// bl 0x824f7010
	ctx.lr = 0x8250E8E4;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250e9d0
	if (ctx.cr0.eq) goto loc_8250E9D0;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250e9d0
	if (!ctx.cr0.eq) goto loc_8250E9D0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250e9d0
	if (ctx.cr6.eq) goto loc_8250E9D0;
loc_8250E90C:
	// lwz r9,40(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r10,r8,13
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r8,r21,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250e9c8
	if (ctx.cr0.eq) goto loc_8250E9C8;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250e9a8
	if (!ctx.cr0.eq) goto loc_8250E9A8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250e9ac
	if (ctx.cr0.eq) goto loc_8250E9AC;
loc_8250E964:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8320, ctx.xer);
	// bne cr6,0x8250e988
	if (!ctx.cr6.eq) goto loc_8250E988;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x8250E980;
	sub_8250A7B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8250eb74
	if (ctx.cr6.eq) goto loc_8250EB74;
loc_8250E988:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250e9a8
	if (!ctx.cr0.eq) goto loc_8250E9A8;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250e964
	if (!ctx.cr6.eq) goto loc_8250E964;
	// b 0x8250e9ac
	goto loc_8250E9AC;
loc_8250E9A8:
	// li r30,0
	r30.s64 = 0;
loc_8250E9AC:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250e9c8
	if (!ctx.cr0.eq) goto loc_8250E9C8;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250e90c
	if (!ctx.cr6.eq) goto loc_8250E90C;
loc_8250E9C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8250eb74
	if (!ctx.cr6.eq) goto loc_8250EB74;
loc_8250E9D0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250e9e8
	if (!ctx.cr0.eq) goto loc_8250E9E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250e8b8
	if (!ctx.cr6.eq) goto loc_8250E8B8;
loc_8250E9E8:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250ea04
	if (!ctx.cr0.eq) goto loc_8250EA04;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250e894
	if (!ctx.cr6.eq) goto loc_8250E894;
loc_8250EA04:
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// mr r31,r23
	r31.u64 = r23.u64;
	// b 0x8250ea38
	goto loc_8250EA38;
loc_8250EA10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250EA18;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// beq 0x8250ea80
	if (ctx.cr0.eq) goto loc_8250EA80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x8250EA2C;
	sub_8250A7B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8250ea88
	if (ctx.cr0.eq) goto loc_8250EA88;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
loc_8250EA38:
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r21,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ea10
	if (ctx.cr0.eq) goto loc_8250EA10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250EA6C;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne 0x8250ea94
	if (!ctx.cr0.eq) goto loc_8250EA94;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8250EA80;
	sub_824E4368(ctx, base);
loc_8250EA80:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8250EA88;
	sub_824E4368(ctx, base);
loc_8250EA88:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824e4368
	ctx.lr = 0x8250EA94;
	sub_824E4368(ctx, base);
loc_8250EA94:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x8250EA9C;
	sub_8250A7B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne 0x8250eab0
	if (!ctx.cr0.eq) goto loc_8250EAB0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8250EAB0;
	sub_824E4368(ctx, base);
loc_8250EAB0:
	// addi r31,r28,24
	r31.s64 = r28.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250EACC;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,109
	ctx.r6.s64 = 109;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250EAEC;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8250EB00;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250EB0C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250ac70
	ctx.lr = 0x8250EB20;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250EB2C;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r22,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250eb54
	if (ctx.cr0.eq) goto loc_8250EB54;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8250eb5c
	goto loc_8250EB5C;
loc_8250EB54:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
loc_8250EB5C:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,66
	ctx.r7.s64 = 66;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250e208
	ctx.lr = 0x8250EB74;
	sub_8250E208(ctx, base);
loc_8250EB74:
	// lwz r30,36(r20)
	r30.u64 = REX_LOAD_U32(r20.u32 + 36);
	// addi r29,r20,32
	r29.s64 = r20.s64 + 32;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ebc8
	if (!ctx.cr0.eq) goto loc_8250EBC8;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8250ebc8
	if (ctx.cr0.eq) goto loc_8250EBC8;
loc_8250EB8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8320
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8320, ctx.xer);
	// bne cr6,0x8250ebb0
	if (!ctx.cr6.eq) goto loc_8250EBB0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250a7b0
	ctx.lr = 0x8250EBA8;
	sub_8250A7B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8250ed40
	if (ctx.cr6.eq) goto loc_8250ED40;
loc_8250EBB0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ebc8
	if (!ctx.cr0.eq) goto loc_8250EBC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8250eb8c
	if (!ctx.cr6.eq) goto loc_8250EB8C;
loc_8250EBC8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,65
	ctx.r6.s64 = 65;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250EBE4;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8250EC00;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250EC0C;
	sub_8250AD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8250EC14;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250ec28
	if (ctx.cr0.eq) goto loc_8250EC28;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8250EC28:
	// mr r31,r20
	r31.u64 = r20.u64;
loc_8250EC2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250ec48
	if (ctx.cr6.eq) goto loc_8250EC48;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// bne cr6,0x8250ec4c
	if (!ctx.cr6.eq) goto loc_8250EC4C;
loc_8250EC48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250EC4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250ec80
	if (!ctx.cr0.eq) goto loc_8250EC80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x8250EC60;
	sub_8250B3D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8250ec80
	if (ctx.cr0.eq) goto loc_8250EC80;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x8250ec80
	if (!ctx.cr6.eq) goto loc_8250EC80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2510
	ctx.lr = 0x8250EC80;
	sub_825C2510(ctx, base);
loc_8250EC80:
	// lwz r31,52(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250ec2c
	if (!ctx.cr6.eq) goto loc_8250EC2C;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,-36
	ctx.r10.s64 = r29.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r4,96(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 96);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8250ed00
	if (!ctx.cr6.eq) goto loc_8250ED00;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r5,r20,24
	ctx.r5.s64 = r20.s64 + 24;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250ECE8;
	sub_825BB860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8250ED00:
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82503400
	ctx.lr = 0x8250ED08;
	sub_82503400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250ED14;
	sub_8250AD28(ctx, base);
	// lwz r5,96(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8250ed30
	if (ctx.cr6.eq) goto loc_8250ED30;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x8250ED30;
	sub_8250B4D8(ctx, base);
loc_8250ED30:
	// stw r30,96(r20)
	REX_STORE_U32(r20.u32 + 96, r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_8250ED40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_825541D8) {
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
	ctx.lr = 0x825541E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8255420C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq cr6,0x82554230
	if (ctx.cr6.eq) goto loc_82554230;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8255422C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82554230:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554238;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ffc30
	ctx.lr = 0x82554250;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82555318) {
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
	ctx.lr = 0x82555320;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82555354;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82555378
	if (ctx.cr6.eq) goto loc_82555378;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82555374;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82555378:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82555380;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x825553a4
	if (ctx.cr6.eq) goto loc_825553A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825553A0;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825553A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825553AC;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825553BC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825553C8;
	sub_8250AD28(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x824ffc30
	ctx.lr = 0x825553F8;
	sub_824FFC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82561878) {
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
	ctx.lr = 0x82561880;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825618b8
	if (!ctx.cr6.eq) goto loc_825618B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825618c4
	goto loc_825618C4;
loc_825618B8:
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r10,14(r29)
	REX_STORE_U16(r29.u32 + 14, ctx.r10.u16);
loc_825618C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561974
	if (ctx.cr0.eq) goto loc_82561974;
	// lwz r31,16(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82561948
	if (ctx.cr6.eq) goto loc_82561948;
loc_825618D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825618f0
	if (ctx.cr6.eq) goto loc_825618F0;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825618d8
	if (!ctx.cr6.eq) goto loc_825618D8;
loc_825618F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82561948
	if (ctx.cr6.eq) goto loc_82561948;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b85e8
	ctx.lr = 0x82561908;
	sub_825B85E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561948
	if (ctx.cr0.eq) goto loc_82561948;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f13,r11,r31
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8256192c
	if (!ctx.cr6.gt) goto loc_8256192C;
	// stfdx f0,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.f0.u64);
loc_8256192C:
	// addi r11,r30,5
	ctx.r11.s64 = r30.s64 + 5;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f13,r11,r31
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + r31.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82561948
	if (!ctx.cr6.lt) goto loc_82561948;
	// stfdx f0,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, ctx.f0.u64);
loc_82561948:
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8256194C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82561974
	if (ctx.cr6.eq) goto loc_82561974;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8256196c
	if (ctx.cr6.eq) goto loc_8256196C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8255e698
	ctx.lr = 0x8256196C;
	sub_8255E698(ctx, base);
loc_8256196C:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8256194c
	goto loc_8256194C;
loc_82561974:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8257BAF8) {
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
	ctx.lr = 0x8257BB00;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8257BB1C;
	sub_824F71B8(ctx, base);
	// addi r10,r27,-8
	ctx.r10.s64 = r27.s64 + -8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r24,r3,r10
	r24.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi r25,r10,17
	r25.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r23,r25,40
	r23.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257bcb0
	if (!ctx.cr0.eq) goto loc_8257BCB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8257bb64
	if (!ctx.cr6.eq) goto loc_8257BB64;
	// lwz r10,28(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257bb6c
	if (ctx.cr0.eq) goto loc_8257BB6C;
loc_8257BB64:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8257bcb0
	if (!ctx.cr6.eq) goto loc_8257BCB0;
loc_8257BB6C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,564(r30)
	REX_STORE_U32(r30.u32 + 564, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r6,r11,17,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// bl 0x825c21d8
	ctx.lr = 0x8257BB9C;
	sub_825C21D8(ctx, base);
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8257BBA4:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257bc7c
	if (ctx.cr6.eq) goto loc_8257BC7C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257bc68
	if (ctx.cr6.eq) goto loc_8257BC68;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x8257bc68
	if (ctx.cr6.eq) goto loc_8257BC68;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584dd0
	ctx.lr = 0x8257BBD8;
	sub_82584DD0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8257bbf0
	goto loc_8257BBF0;
loc_8257BBE8:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8257BBF0:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8257bbe8
	if (!ctx.cr6.eq) goto loc_8257BBE8;
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
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,30,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// rlwinm r11,r11,0,27,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
	// rlwinm r7,r10,26,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// ori r11,r11,228
	ctx.r11.u64 = ctx.r11.u64 | 228;
	// srw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwinm r9,r10,28,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8257BC68:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8257bba4
	if (!ctx.cr6.eq) goto loc_8257BBA4;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x8257bba4
	goto loc_8257BBA4;
loc_8257BC7C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7708
	ctx.lr = 0x8257BC84;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bcb0
	if (ctx.cr0.eq) goto loc_8257BCB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257bcb0
	if (!ctx.cr6.eq) goto loc_8257BCB0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c2288
	ctx.lr = 0x8257BCAC;
	sub_825C2288(ctx, base);
	// b 0x8257bebc
	goto loc_8257BEBC;
loc_8257BCB0:
	// lwz r26,28(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 28);
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lwz r31,8(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257bcec
	if (!ctx.cr0.eq) goto loc_8257BCEC;
loc_8257BCC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257bebc
	if (ctx.cr6.eq) goto loc_8257BEBC;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b6d0
	ctx.lr = 0x8257BCE4;
	sub_8257B6D0(ctx, base);
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x8257bcc4
	goto loc_8257BCC4;
loc_8257BCEC:
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_8257BCF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257bd4c
	if (ctx.cr6.eq) goto loc_8257BD4C;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
loc_8257BD04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257bd30
	if (ctx.cr6.eq) goto loc_8257BD30;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r9,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8257bd24
	if (!ctx.cr0.eq) goto loc_8257BD24;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8257bd04
	goto loc_8257BD04;
loc_8257BD24:
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x8257bd44
	goto loc_8257BD44;
loc_8257BD30:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b6d0
	ctx.lr = 0x8257BD44;
	sub_8257B6D0(ctx, base);
loc_8257BD44:
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// b 0x8257bcf4
	goto loc_8257BCF4;
loc_8257BD4C:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257bdd4
	if (ctx.cr6.eq) goto loc_8257BDD4;
loc_8257BD60:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257bdd4
	if (ctx.cr6.eq) goto loc_8257BDD4;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257bdcc
	if (!ctx.cr0.eq) goto loc_8257BDCC;
	// rlwinm. r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bdcc
	if (ctx.cr0.eq) goto loc_8257BDCC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257bda0
	if (!ctx.cr0.eq) goto loc_8257BDA0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_8257BD98:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8257bdc0
	goto loc_8257BDC0;
loc_8257BDA0:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8257bd98
	if (ctx.cr6.eq) goto loc_8257BD98;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8257BDC0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b6d0
	ctx.lr = 0x8257BDCC;
	sub_8257B6D0(ctx, base);
loc_8257BDCC:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8257bd60
	goto loc_8257BD60;
loc_8257BDD4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257bebc
	if (!ctx.cr6.eq) goto loc_8257BEBC;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
loc_8257BDE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257be08
	if (ctx.cr6.eq) goto loc_8257BE08;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257be50
	if (!ctx.cr0.eq) goto loc_8257BE50;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8257bde4
	goto loc_8257BDE4;
loc_8257BE08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x8257BE10;
	sub_824FFCC0(ctx, base);
	// rlwinm r9,r26,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bl 0x825c69a0
	ctx.lr = 0x8257BE48;
	sub_825C69A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x8257BE50;
	sub_8257DFD8(ctx, base);
loc_8257BE50:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bb860
	ctx.lr = 0x8257BE6C;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8257BE84;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r25,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwimi r9,r10,0,17,2
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE0007FFF) | (ctx.r9.u64 & 0x1FFF8000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x8250ab60
	ctx.lr = 0x8257BEB0;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8257BEBC;
	sub_8250AD28(ctx, base);
loc_8257BEBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8258B028) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x8258B030;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8258b05c
	if (!ctx.cr6.eq) goto loc_8258B05C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258b250
	goto loc_8258B250;
loc_8258B05C:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r24,0
	r24.s64 = 0;
	// bl 0x824f7678
	ctx.lr = 0x8258B070;
	sub_824F7678(ctx, base);
	// addi r25,r3,4
	r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = r25.u64 | 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8258B088:
	// lwz r30,8(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8258b12c
	if (ctx.cr6.eq) goto loc_8258B12C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8258b0a4
	if (ctx.cr6.eq) goto loc_8258B0A4;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// b 0x8258b12c
	goto loc_8258B12C;
loc_8258B0A4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258b0c0
	if (ctx.cr0.eq) goto loc_8258B0C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_8258B0C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8258b12c
	if (ctx.cr6.eq) goto loc_8258B12C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8258b128
	if (ctx.cr6.eq) goto loc_8258B128;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258b100
	if (!ctx.cr0.eq) goto loc_8258B100;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8258b100
	if (ctx.cr0.eq) goto loc_8258B100;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8258b10c
	if (!ctx.cr6.gt) goto loc_8258B10C;
loc_8258B100:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8258B10C;
	sub_8251FE00(ctx, base);
loc_8258B10C:
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
	// b 0x8258b12c
	goto loc_8258B12C;
loc_8258B128:
	// mr r24,r30
	r24.u64 = r30.u64;
loc_8258B12C:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258b144
	if (ctx.cr6.eq) goto loc_8258B144;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258b1dc
	if (!ctx.cr6.eq) goto loc_8258B1DC;
loc_8258B144:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258b088
	if (!ctx.cr6.eq) goto loc_8258B088;
loc_8258B150:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258b23c
	if (!ctx.cr0.eq) goto loc_8258B23C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8258b23c
	if (ctx.cr0.eq) goto loc_8258B23C;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r4
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// beq 0x8258b1e8
	if (ctx.cr0.eq) goto loc_8258B1E8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8258b1cc
	if (!ctx.cr0.eq) goto loc_8258B1CC;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x8258B1CC;
	sub_824E4308(ctx, base);
loc_8258B1CC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8258a018
	ctx.lr = 0x8258B1D8;
	sub_8258A018(ctx, base);
	// b 0x8258b150
	goto loc_8258B150;
loc_8258B1DC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B1E8;
	sub_824E4368(ctx, base);
loc_8258B1E8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8258b22c
	if (!ctx.cr0.eq) goto loc_8258B22C;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x8258B22C;
	sub_824E4308(ctx, base);
loc_8258B22C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82589f98
	ctx.lr = 0x8258B238;
	sub_82589F98(ctx, base);
	// b 0x8258b150
	goto loc_8258B150;
loc_8258B23C:
	// lwz r10,976(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 976);
	// addi r11,r26,972
	ctx.r11.s64 = r26.s64 + 972;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,976(r26)
	REX_STORE_U32(r26.u32 + 976, r31.u32);
loc_8258B250:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_825A6828) {
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
	ctx.lr = 0x825A6830;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-8552
	r28.s64 = ctx.r10.s64 + -8552;
	// ble cr6,0x825a6874
	if (!ctx.cr6.gt) goto loc_825A6874;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-8332
	ctx.r5.s64 = ctx.r11.s64 + -8332;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1461
	ctx.r7.s64 = 1461;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A6874;
	sub_824EA978(ctx, base);
loc_825A6874:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a6898
	if (!ctx.cr6.eq) goto loc_825A6898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-8372
	ctx.r5.s64 = ctx.r11.s64 + -8372;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1462
	ctx.r7.s64 = 1462;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A6898;
	sub_824EA978(ctx, base);
loc_825A6898:
	// addi r11,r31,4196
	ctx.r11.s64 = r31.s64 + 4196;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a68e8
	if (!ctx.cr6.eq) goto loc_825A68E8;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// bne cr6,0x825a68f0
	if (!ctx.cr6.eq) goto loc_825A68F0;
loc_825A68B8:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_825A68BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r11.u32);
loc_825A68C4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,13152
	ctx.r4.s64 = r30.s64 + 13152;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825a6210
	ctx.lr = 0x825A68DC;
	sub_825A6210(ctx, base);
	// lwz r11,13164(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 13164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13164(r30)
	REX_STORE_U32(r30.u32 + 13164, ctx.r11.u32);
loc_825A68E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_825A68F0:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// bne cr6,0x825a6904
	if (!ctx.cr6.eq) goto loc_825A6904;
	// lwz r11,23204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 23204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x825a68b8
	goto loc_825A68B8;
loc_825A6904:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// bne cr6,0x825a68bc
	if (!ctx.cr6.eq) goto loc_825A68BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x825a68c4
	goto loc_825A68C4;
}

DEFINE_REX_FUNC(sub_825B2E30) {
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
	ctx.lr = 0x825B2E38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,22852
	r31.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-8552
	r29.s64 = ctx.r10.s64 + -8552;
	// bne cr6,0x825b2e7c
	if (!ctx.cr6.eq) goto loc_825B2E7C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-5840
	ctx.r5.s64 = ctx.r11.s64 + -5840;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,16240
	ctx.r7.s64 = 16240;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B2E7C;
	sub_824EA978(ctx, base);
loc_825B2E7C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x825b2ea0
	if (!ctx.cr6.eq) goto loc_825B2EA0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-23044
	ctx.r5.s64 = ctx.r11.s64 + -23044;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,16241
	ctx.r7.s64 = 16241;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B2EA0;
	sub_824EA978(ctx, base);
loc_825B2EA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B2EAC;
	sub_824F02C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x824f2b60
	ctx.lr = 0x825B2EB8;
	sub_824F2B60(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x825b2edc
	if (!ctx.cr0.eq) goto loc_825B2EDC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-5864
	ctx.r5.s64 = ctx.r11.s64 + -5864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,16251
	ctx.r7.s64 = 16251;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B2EDC;
	sub_824EA978(ctx, base);
loc_825B2EDC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825B2EE8;
	sub_824F02C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x824f2b60
	ctx.lr = 0x825B2EF4;
	sub_824F2B60(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x825b2f18
	if (!ctx.cr0.eq) goto loc_825B2F18;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-5888
	ctx.r5.s64 = ctx.r11.s64 + -5888;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,16261
	ctx.r7.s64 = 16261;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B2F18;
	sub_824EA978(ctx, base);
loc_825B2F18:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,1760
	ctx.r4.s64 = 1760;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1760
	ctx.r11.s64 = 1760;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825B2F44:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x825b2f44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B2F44;
	// li r10,1600
	ctx.r10.s64 = 1600;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825B2F5C:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x825b2f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825B2F5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r4,23380
	ctx.r4.s64 = 23380;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r8,1656(r31)
	REX_STORE_U32(r31.u32 + 1656, ctx.r8.u32);
	// stw r9,1652(r31)
	REX_STORE_U32(r31.u32 + 1652, ctx.r9.u32);
	// stw r7,1668(r31)
	REX_STORE_U32(r31.u32 + 1668, ctx.r7.u32);
	// stw r9,1692(r31)
	REX_STORE_U32(r31.u32 + 1692, ctx.r9.u32);
	// stw r10,1672(r31)
	REX_STORE_U32(r31.u32 + 1672, ctx.r10.u32);
	// stw r9,1676(r31)
	REX_STORE_U32(r31.u32 + 1676, ctx.r9.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825b3020
	if (ctx.cr6.eq) goto loc_825B3020;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,12000
	ctx.r4.s64 = 12000;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B2FE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b2d18
	ctx.lr = 0x825B2FFC;
	sub_825B2D18(ctx, base);
	// rlwinm r4,r3,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b7108
	ctx.lr = 0x825B300C;
	sub_825B7108(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B3020:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825b3074
	if (ctx.cr6.eq) goto loc_825B3074;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r4,12000
	ctx.r4.s64 = 12000;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B303C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b2d18
	ctx.lr = 0x825B3050;
	sub_825B2D18(ctx, base);
	// rlwinm r4,r3,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b70a8
	ctx.lr = 0x825B3060;
	sub_825B70A8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3074;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825B3074:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B309C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825B85E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi. r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825b85f8
	if (!ctx.cr0.eq) goto loc_825B85F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_825B85F8:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8634
	if (ctx.cr0.eq) goto loc_825B8634;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// beq 0x825b8618
	if (ctx.cr0.eq) goto loc_825B8618;
	// lfd f0,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// stfd f0,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// b 0x825b862c
	goto loc_825B862C;
loc_825B8618:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_825B862C:
	// stfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// b 0x825b8650
	goto loc_825B8650;
loc_825B8634:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f0,-3744(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// stfd f0,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// lfs f0,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
loc_825B8650:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BB658) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825bb730
	if (ctx.cr6.lt) goto loc_825BB730;
	// beq cr6,0x825bb6f4
	if (ctx.cr6.eq) goto loc_825BB6F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825bb6b8
	if (ctx.cr6.lt) goto loc_825BB6B8;
	// beq cr6,0x825bb67c
	if (ctx.cr6.eq) goto loc_825BB67C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_825BB67C:
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r10,-36
	ctx.r9.s64 = ctx.r10.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_825BB6B8:
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// blr 
	return;
loc_825BB6F4:
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r7,40(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,40(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r6,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r6.u32);
	// blr 
	return;
loc_825BB730:
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 + 36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r9,-36
	ctx.r8.s64 = ctx.r9.s64 + -36;
	// lwz r7,36(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,36(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C33F8) {
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
	ctx.lr = 0x825C3400;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,28(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r29,64(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825c36c4
	if (ctx.cr6.eq) goto loc_825C36C4;
	// li r26,1
	r26.s64 = 1;
loc_825C3424:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825c3470
	if (ctx.cr6.eq) goto loc_825C3470;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// beq cr6,0x825c3464
	if (ctx.cr6.eq) goto loc_825C3464;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r10,40(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 40);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne 0x825c3468
	if (!ctx.cr0.eq) goto loc_825C3468;
loc_825C3464:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C3468:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c36c4
	if (!ctx.cr0.eq) goto loc_825C36C4;
loc_825C3470:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c34f0
	if (ctx.cr0.eq) goto loc_825C34F0;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c34b8
	if (ctx.cr0.eq) goto loc_825C34B8;
	// b 0x825c349c
	goto loc_825C349C;
loc_825C3490:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c34a8
	if (ctx.cr0.eq) goto loc_825C34A8;
loc_825C349C:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c3490
	if (!ctx.cr6.eq) goto loc_825C3490;
loc_825C34A8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c349c
	if (!ctx.cr0.eq) goto loc_825C349C;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
loc_825C34B8:
	// lwz r31,112(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 112);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825C34C8;
	sub_8250B3D0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825c3510
	if (ctx.cr0.eq) goto loc_825C3510;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c3510
	if (ctx.cr0.eq) goto loc_825C3510;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c34f0
	if (!ctx.cr0.eq) goto loc_825C34F0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c5730
	ctx.lr = 0x825C34F0;
	sub_825C5730(ctx, base);
loc_825C34F0:
	// lbz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c3604
	if (ctx.cr0.eq) goto loc_825C3604;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c35dc
	if (ctx.cr0.eq) goto loc_825C35DC;
	// b 0x825c35c0
	goto loc_825C35C0;
loc_825C3510:
	// lwz r31,96(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c34f0
	if (ctx.cr6.eq) goto loc_825C34F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c34f0
	if (!ctx.cr0.eq) goto loc_825C34F0;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x825c3590
	if (ctx.cr6.eq) goto loc_825C3590;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c3568
	if (!ctx.cr0.eq) goto loc_825C3568;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c3568
	if (ctx.cr0.eq) goto loc_825C3568;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c3574
	if (!ctx.cr6.gt) goto loc_825C3574;
loc_825C3568:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C3574;
	sub_8251FE00(ctx, base);
loc_825C3574:
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
	// b 0x825c34f0
	goto loc_825C34F0;
loc_825C3590:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_825C3594:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825c34f0
	if (ctx.cr6.eq) goto loc_825C34F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c4c28
	ctx.lr = 0x825C35AC;
	sub_825C4C28(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825c3594
	goto loc_825C3594;
loc_825C35B4:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c35cc
	if (ctx.cr0.eq) goto loc_825C35CC;
loc_825C35C0:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c35b4
	if (!ctx.cr6.eq) goto loc_825C35B4;
loc_825C35CC:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c35c0
	if (!ctx.cr0.eq) goto loc_825C35C0;
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
loc_825C35DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// bl 0x8250b3d0
	ctx.lr = 0x825C35E8;
	sub_8250B3D0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c3604
	if (!ctx.cr0.eq) goto loc_825C3604;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c5730
	ctx.lr = 0x825C3604;
	sub_825C5730(ctx, base);
loc_825C3604:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c3620
	if (ctx.cr6.eq) goto loc_825C3620;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne cr6,0x825c3624
	if (!ctx.cr6.eq) goto loc_825C3624;
loc_825C3620:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825C3624:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c3678
	if (ctx.cr0.eq) goto loc_825C3678;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b3d0
	ctx.lr = 0x825C3638;
	sub_8250B3D0(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x825c3658
	if (ctx.cr6.eq) goto loc_825C3658;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825c365c
	if (!ctx.cr6.eq) goto loc_825C365C;
loc_825C3658:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_825C365C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c3678
	if (!ctx.cr0.eq) goto loc_825C3678;
	// rlwinm. r11,r10,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c3678
	if (!ctx.cr0.eq) goto loc_825C3678;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c5730
	ctx.lr = 0x825C3678;
	sub_825C5730(ctx, base);
loc_825C3678:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c36c4
	if (ctx.cr6.eq) goto loc_825C36C4;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 40);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r26,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825c36b4
	if (ctx.cr0.eq) goto loc_825C36B4;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_825C36B4:
	// lwz r29,64(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x825c3424
	if (!ctx.cr6.eq) goto loc_825C3424;
loc_825C36C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825D22C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D22D0;
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
	// bne cr6,0x825d230c
	if (!ctx.cr6.eq) goto loc_825D230C;
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
	// li r7,1208
	ctx.r7.s64 = 1208;
	// bl 0x824ea978
	ctx.lr = 0x825D230C;
	sub_824EA978(ctx, base);
loc_825D230C:
	// li r4,935
	ctx.r4.s64 = 935;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D2318;
	sub_824F02C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x825d237c
	if (ctx.cr0.eq) goto loc_825D237C;
	// beq cr6,0x825d233c
	if (ctx.cr6.eq) goto loc_825D233C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D233C;
	sub_824F0950(ctx, base);
loc_825D233C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2374
	if (ctx.cr6.eq) goto loc_825D2374;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2374
	if (ctx.cr6.eq) goto loc_825D2374;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bctrl 
	ctx.lr = 0x825D2374;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2374:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d23d0
	goto loc_825D23D0;
loc_825D237C:
	// beq cr6,0x825d2394
	if (ctx.cr6.eq) goto loc_825D2394;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2394;
	sub_824F0950(ctx, base);
loc_825D2394:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d23cc
	if (ctx.cr6.eq) goto loc_825D23CC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d23cc
	if (ctx.cr6.eq) goto loc_825D23CC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5608
	ctx.r4.s64 = ctx.r10.s64 + 5608;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bctrl 
	ctx.lr = 0x825D23CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D23CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D23D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D5410) {
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
	ctx.lr = 0x825D5418;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d5458
	if (!ctx.cr6.eq) goto loc_825D5458;
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
	// li r7,3721
	ctx.r7.s64 = 3721;
	// bl 0x824ea978
	ctx.lr = 0x825D5458;
	sub_824EA978(ctx, base);
loc_825D5458:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6778
	ctx.lr = 0x825D5468;
	sub_825A6778(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d54b0
	if (ctx.cr6.eq) goto loc_825D54B0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d54b0
	if (ctx.cr6.eq) goto loc_825D54B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D5484;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,74
	ctx.r6.s64 = 74;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,296(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// bctrl 
	ctx.lr = 0x825D54B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D54B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D9010) {
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
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825D9034;
	sub_825F9AD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f3,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D906C;
	sub_825FAAB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825D9078;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// bl 0x825fcb18
	ctx.lr = 0x825D9084;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D908C;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d90b8
	if (!ctx.cr0.eq) goto loc_825D90B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9792
	ctx.r6.s64 = ctx.r11.s64 + 9792;
	// addi r5,r10,10184
	ctx.r5.s64 = ctx.r10.s64 + 10184;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1445
	ctx.r7.s64 = 1445;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D90B8;
	sub_824EA978(ctx, base);
loc_825D90B8:
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

DEFINE_REX_FUNC(sub_825DEEF8) {
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
	ctx.lr = 0x825DEF00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r30,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r30,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r30.u32);
	// stw r30,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r30.u32);
	// lwz r28,1456(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DEF40;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825def60
	if (ctx.cr0.eq) goto loc_825DEF60;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825DEF5C;
	sub_825D7A48(ctx, base);
	// b 0x825def64
	goto loc_825DEF64;
loc_825DEF60:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825DEF64:
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DEF7C;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825def9c
	if (ctx.cr0.eq) goto loc_825DEF9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825DEF98;
	sub_825D7A48(ctx, base);
	// b 0x825defa0
	goto loc_825DEFA0;
loc_825DEF9C:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825DEFA0:
	// stw r29,64(r31)
	REX_STORE_U32(r31.u32 + 64, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DEFB8;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825defdc
	if (ctx.cr0.eq) goto loc_825DEFDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825DEFD4;
	sub_825D7A48(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x825defe0
	goto loc_825DEFE0;
loc_825DEFDC:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_825DEFE0:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825DEFF8;
	sub_825B33A0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r28,r10,19324
	r28.s64 = ctx.r10.s64 + 19324;
	// addi r27,r9,10912
	r27.s64 = ctx.r9.s64 + 10912;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stb r30,4(r8)
	REX_STORE_U8(ctx.r8.u32 + 4, r30.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x825df054
	if (ctx.cr6.eq) goto loc_825DF054;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x825df06c
	goto loc_825DF06C;
loc_825DF054:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DF06C;
	sub_824EA978(ctx, base);
loc_825DF06C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825df084
	if (ctx.cr0.eq) goto loc_825DF084;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x825df088
	if (!ctx.cr6.eq) goto loc_825DF088;
loc_825DF084:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_825DF088:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825df0e4
	if (ctx.cr6.eq) goto loc_825DF0E4;
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825df0ac
	if (!ctx.cr0.eq) goto loc_825DF0AC;
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825df0c8
	if (ctx.cr6.eq) goto loc_825DF0C8;
loc_825DF0AC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,11016
	ctx.r5.s64 = ctx.r11.s64 + 11016;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,139
	ctx.r7.s64 = 139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DF0C8;
	sub_824EA978(ctx, base);
loc_825DF0C8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x825dea00
	ctx.lr = 0x825DF0D4;
	sub_825DEA00(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x825df0fc
	goto loc_825DF0FC;
loc_825DF0E4:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,144
	ctx.r7.s64 = 144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DF0FC;
	sub_824EA978(ctx, base);
loc_825DF0FC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825F37A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,244
	ctx.r11.s64 = ctx.r4.s64 + 244;
	// addi r10,r5,244
	ctx.r10.s64 = ctx.r5.s64 + 244;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825f37d0
	if (!ctx.cr6.lt) goto loc_825F37D0;
loc_825F37C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_825F37D0:
	// ble cr6,0x825f37dc
	if (!ctx.cr6.gt) goto loc_825F37DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825F37DC:
	// addi r11,r4,260
	ctx.r11.s64 = ctx.r4.s64 + 260;
	// addi r10,r5,260
	ctx.r10.s64 = ctx.r5.s64 + 260;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x825f37c8
	if (ctx.cr6.gt) goto loc_825F37C8;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// eqv r11,r10,r11
	ctx.r11.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F4F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x825f4f24
	if (ctx.cr6.lt) goto loc_825F4F24;
	// lis r3,2047
	ctx.r3.s64 = 134152192;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_825F4F24:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,19524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x825f4f3c
	if (ctx.cr6.gt) goto loc_825F4F3C;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// blr 
	return;
loc_825F4F3C:
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r11,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 23;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,129
	ctx.xer.ca = ctx.r11.u32 <= 129;
	ctx.r11.u64 = static_cast<uint64_t>(129) - ctx.r11.u64;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x825f4f5c
	if (!ctx.cr6.gt) goto loc_825F4F5C;
	// li r11,15
	ctx.r11.s64 = 15;
loc_825F4F5C:
	// addi r10,r11,25
	ctx.r10.s64 = ctx.r11.s64 + 25;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rlwinm r10,r11,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// sld r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F7C38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F7C40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825f7c94
	if (!ctx.cr6.gt) goto loc_825F7C94;
	// li r31,0
	r31.s64 = 0;
loc_825F7C5C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f7c80
	if (ctx.cr6.eq) goto loc_825F7C80;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825f7c80
	if (ctx.cr6.eq) goto loc_825F7C80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825e18c0
	ctx.lr = 0x825F7C80;
	sub_825E18C0(ctx, base);
loc_825F7C80:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825f7c5c
	if (ctx.cr6.lt) goto loc_825F7C5C;
loc_825F7C94:
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x825b3528
	ctx.lr = 0x825F7CA0;
	sub_825B3528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825F9348) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x825F9350;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x825f8a50
	ctx.lr = 0x825F9364;
	sub_825F8A50(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,28700
	ctx.r11.s64 = ctx.r11.s64 + 28700;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r5,r10,15992
	ctx.r5.s64 = ctx.r10.s64 + 15992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,1536(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// lwz r25,2736(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 2736);
	// bl 0x825d4308
	ctx.lr = 0x825F938C;
	sub_825D4308(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// addi r24,r11,29440
	r24.s64 = ctx.r11.s64 + 29440;
	// addi r23,r10,22852
	r23.s64 = ctx.r10.s64 + 22852;
	// addi r22,r9,19324
	r22.s64 = ctx.r9.s64 + 19324;
	// addi r21,r8,28336
	r21.s64 = ctx.r8.s64 + 28336;
	// beq cr6,0x825f93f4
	if (ctx.cr6.eq) goto loc_825F93F4;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(r28.s32, 13, ctx.xer);
	// beq cr6,0x825f93ec
	if (ctx.cr6.eq) goto loc_825F93EC;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// beq cr6,0x825f93e4
	if (ctx.cr6.eq) goto loc_825F93E4;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,757
	ctx.r7.s64 = 757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F93DC;
	sub_824EA978(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x825f9404
	goto loc_825F9404;
loc_825F93E4:
	// addi r10,r24,8
	ctx.r10.s64 = r24.s64 + 8;
	// b 0x825f93f8
	goto loc_825F93F8;
loc_825F93EC:
	// addi r10,r24,24
	ctx.r10.s64 = r24.s64 + 24;
	// b 0x825f93f8
	goto loc_825F93F8;
loc_825F93F4:
	// addi r10,r24,16
	ctx.r10.s64 = r24.s64 + 16;
loc_825F93F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_825F9404:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,28936
	ctx.r10.s64 = ctx.r10.s64 + 28936;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r5,6
	ctx.r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r25
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825f94a0
	if (!ctx.cr6.eq) goto loc_825F94A0;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825F9434;
	sub_825E7538(ctx, base);
	// lwz r30,1452(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1452);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F9448;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825f946c
	if (ctx.cr0.eq) goto loc_825F946C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825fb008
	ctx.lr = 0x825F9464;
	sub_825FB008(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825f9470
	goto loc_825F9470;
loc_825F946C:
	// li r30,0
	r30.s64 = 0;
loc_825F9470:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 164);
	// bl 0x825fcb60
	ctx.lr = 0x825F947C;
	sub_825FCB60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F948C;
	sub_825F9F38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F9498;
	sub_825F80C0(ctx, base);
	// stwx r30,r26,r25
	REX_STORE_U32(r26.u32 + r25.u32, r30.u32);
	// b 0x825f94a4
	goto loc_825F94A4;
loc_825F94A0:
	// lwz r29,28(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_825F94A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825fb9b8
	ctx.lr = 0x825F94B0;
	sub_825FB9B8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F94C0;
	sub_825F9F38(ctx, base);
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// beq cr6,0x825f9504
	if (ctx.cr6.eq) goto loc_825F9504;
	// cmpwi cr6,r28,13
	ctx.cr6.compare<int32_t>(r28.s32, 13, ctx.xer);
	// beq cr6,0x825f94fc
	if (ctx.cr6.eq) goto loc_825F94FC;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// beq cr6,0x825f94f4
	if (ctx.cr6.eq) goto loc_825F94F4;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,788
	ctx.r7.s64 = 788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F94F0;
	sub_824EA978(ctx, base);
	// b 0x825f9518
	goto loc_825F9518;
loc_825F94F4:
	// addi r10,r24,12
	ctx.r10.s64 = r24.s64 + 12;
	// b 0x825f9508
	goto loc_825F9508;
loc_825F94FC:
	// addi r10,r24,28
	ctx.r10.s64 = r24.s64 + 28;
	// b 0x825f9508
	goto loc_825F9508;
loc_825F9504:
	// addi r10,r24,20
	ctx.r10.s64 = r24.s64 + 20;
loc_825F9508:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_825F9518:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F9528;
	sub_825F9F38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F9534;
	sub_825F80C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825F9540;
	sub_825FCB18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8260A788) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x8260a7d8
	if (ctx.cr6.eq) goto loc_8260A7D8;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8260a7dc
	if (!ctx.cr6.eq) goto loc_8260A7DC;
loc_8260A7D8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8260A7DC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260B9B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8260B9C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,16032
	r28.s64 = ctx.r3.s64 + 16032;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82611700
	ctx.lr = 0x8260B9E0;
	sub_82611700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8260ba8c
	if (ctx.cr0.eq) goto loc_8260BA8C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x823ed040
	ctx.lr = 0x8260B9F0;
	sub_823ED040(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x823ecfc0
	ctx.lr = 0x8260BA00;
	sub_823ECFC0(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BA14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BA2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260BA2C:
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BA44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82611700
	ctx.lr = 0x8260BA50;
	sub_82611700(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8260ba2c
	if (!ctx.cr0.eq) goto loc_8260BA2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BA6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260BA80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x823ecfc0
	ctx.lr = 0x8260BA8C;
	sub_823ECFC0(ctx, base);
loc_8260BA8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260F370) {
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
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// li r30,0
	r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8260f3ac
	if (!ctx.cr6.lt) goto loc_8260F3AC;
	// bl 0x82793a84
	ctx.lr = 0x8260F3A0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8260f3ac
	if (ctx.cr6.eq) goto loc_8260F3AC;
	// li r30,1
	r30.s64 = 1;
loc_8260F3AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260f3c0
	if (ctx.cr6.eq) goto loc_8260F3C0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x8260f440
	if (ctx.cr6.eq) goto loc_8260F440;
loc_8260F3C0:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8260f430
	if (ctx.cr6.gt) goto loc_8260F430;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x8260b5b8
	ctx.lr = 0x8260F3EC;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260f440
	if (ctx.cr0.eq) goto loc_8260F440;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8260F400:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x8260f400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8260F400;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// b 0x8260f440
	goto loc_8260F440;
loc_8260F430:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x823ecbd8
	ctx.lr = 0x8260F43C;
	sub_823ECBD8(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_8260F440:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260f458
	if (ctx.cr6.eq) goto loc_8260F458;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8260f45c
	goto loc_8260F45C;
loc_8260F458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260F45C:
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

DEFINE_REX_FUNC(sub_826147C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826147D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8260f510
	ctx.lr = 0x826147DC;
	sub_8260F510(ctx, base);
	// lwz r3,468(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 468);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826147f4
	if (ctx.cr6.eq) goto loc_826147F4;
	// bl 0x82611208
	ctx.lr = 0x826147F0;
	sub_82611208(ctx, base);
	// stw r29,468(r30)
	REX_STORE_U32(r30.u32 + 468, r29.u32);
loc_826147F4:
	// lwz r4,448(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 448);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82614844
	if (ctx.cr6.eq) goto loc_82614844;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r9,16244(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16244);
loc_82614808:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82614820
	if (ctx.cr6.eq) goto loc_82614820;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82614824
	goto loc_82614824;
loc_82614820:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82614824:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82614808
	if (ctx.cr6.lt) goto loc_82614808;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82614808
	if (!ctx.cr6.lt) goto loc_82614808;
	// bl 0x82614440
	ctx.lr = 0x82614844;
	sub_82614440(ctx, base);
loc_82614844:
	// addi r31,r30,496
	r31.s64 = r30.s64 + 496;
	// b 0x82614858
	goto loc_82614858;
loc_8261484C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82614858
	if (ctx.cr6.eq) goto loc_82614858;
	// bl 0x8264c3d0
	ctx.lr = 0x82614858;
	sub_8264C3D0(ctx, base);
loc_82614858:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x82614860;
	sub_8260C0A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8261484c
	if (!ctx.cr0.eq) goto loc_8261484C;
	// addi r31,r30,536
	r31.s64 = r30.s64 + 536;
	// b 0x8261487c
	goto loc_8261487C;
loc_82614870:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261487c
	if (ctx.cr6.eq) goto loc_8261487C;
	// bl 0x8264c3d0
	ctx.lr = 0x8261487C;
	sub_8264C3D0(ctx, base);
loc_8261487C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x82614884;
	sub_8260C0A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82614870
	if (!ctx.cr0.eq) goto loc_82614870;
	// lwz r3,476(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826148a0
	if (ctx.cr6.eq) goto loc_826148A0;
	// bl 0x8264c3d0
	ctx.lr = 0x8261489C;
	sub_8264C3D0(ctx, base);
	// stw r29,476(r30)
	REX_STORE_U32(r30.u32 + 476, r29.u32);
loc_826148A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82618EF0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// beq cr6,0x82618f0c
	if (ctx.cr6.eq) goto loc_82618F0C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82618F0C:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,252(r11)
	REX_STORE_U32(ctx.r11.u32 + 252, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,256(r11)
	REX_STORE_U32(ctx.r11.u32 + 256, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261B440) {
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
	// bl 0x826a1c90
	ctx.lr = 0x8261B448;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261b470
	if (ctx.cr6.eq) goto loc_8261B470;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// b 0x8261b484
	goto loc_8261B484;
loc_8261B470:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_8261B484:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r20,0
	r20.s64 = 0;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r26,120(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r25,60(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// ble cr6,0x8261b694
	if (!ctx.cr6.gt) goto loc_8261B694;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// li r23,0
	r23.s64 = 0;
	// ori r19,r9,14
	r19.u64 = ctx.r9.u64 | 14;
	// addi r22,r11,-15776
	r22.s64 = ctx.r11.s64 + -15776;
	// addi r18,r10,20576
	r18.s64 = ctx.r10.s64 + 20576;
loc_8261B4BC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8261b70c
	if (ctx.cr6.lt) goto loc_8261B70C;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r31,r11,r23
	r31.u64 = ctx.r11.u64 + r23.u64;
	// lwzx r3,r11,r23
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B4E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r30,1048(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1048);
	// bl 0x823f0350
	ctx.lr = 0x8261B510;
	sub_823F0350(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8261b540
	if (!ctx.cr0.eq) goto loc_8261B540;
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261b548
	if (ctx.cr0.eq) goto loc_8261B548;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8261b548
	if (!ctx.cr6.eq) goto loc_8261B548;
loc_8261B540:
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x8261b574
	goto loc_8261B574;
loc_8261B548:
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,64(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// addi r3,r11,592
	ctx.r3.s64 = ctx.r11.s64 + 592;
	// bl 0x8260e310
	ctx.lr = 0x8261B568;
	sub_8260E310(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8261b57c
	if (!ctx.cr0.eq) goto loc_8261B57C;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8261B574:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8261b678
	if (ctx.cr6.lt) goto loc_8261B678;
loc_8261B57C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,4(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// bl 0x8261bec8
	ctx.lr = 0x8261B5A0;
	sub_8261BEC8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt 0x8261b678
	if (ctx.cr0.lt) goto loc_8261B678;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8261b5d8
	if (!ctx.cr6.eq) goto loc_8261B5D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B5D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8261B5D8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8261b668
	if (ctx.cr6.lt) goto loc_8261B668;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8260b5b8
	ctx.lr = 0x8261B5F8;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261b618
	if (ctx.cr0.eq) goto loc_8261B618;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8261b61c
	goto loc_8261B61C;
loc_8261B618:
	// li r30,0
	r30.s64 = 0;
loc_8261B61C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8261b62c
	if (!ctx.cr6.eq) goto loc_8261B62C;
	// mr r27,r19
	r27.u64 = r19.u64;
	// b 0x8261b668
	goto loc_8261B668;
loc_8261B62C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
	// bl 0x82613af8
	ctx.lr = 0x8261B638;
	sub_82613AF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8261b65c
	if (ctx.cr0.eq) goto loc_8261B65C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r27,0
	r27.s64 = 0;
	// lwz r25,8(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r26,r29
	r26.u64 = r29.u64;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// stw r11,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r11.u32);
	// b 0x8261b678
	goto loc_8261B678;
loc_8261B65C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261B668;
	sub_8264C3D0(ctx, base);
loc_8261B668:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8260b9b0
	ctx.lr = 0x8261B678;
	sub_8260B9B0(ctx, base);
loc_8261B678:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r23,r23,12
	r23.s64 = r23.s64 + 12;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8261b4bc
	if (ctx.cr6.lt) goto loc_8261B4BC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// blt cr6,0x8261b70c
	if (ctx.cr6.lt) goto loc_8261B70C;
loc_8261B694:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r26
	ea = r26.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r26
	ea = r26.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8261b694
	if (!ctx.cr0.eq) goto loc_8261B694;
	// lwz r3,16(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r26,8(r28)
	REX_STORE_U32(r28.u32 + 8, r26.u32);
	// stw r25,0(r28)
	REX_STORE_U32(r28.u32 + 0, r25.u32);
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8261b6dc
	if (!ctx.cr6.eq) goto loc_8261B6DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B6D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261b6e4
	goto loc_8261B6E4;
loc_8261B6DC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82615088
	ctx.lr = 0x8261B6E4;
	sub_82615088(ctx, base);
loc_8261B6E4:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r3,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8261b70c
	if (ctx.cr6.eq) goto loc_8261B70C;
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r4,r4,61441
	ctx.r4.u64 = ctx.r4.u64 | 61441;
	// bl 0x8261b0b8
	ctx.lr = 0x8261B708;
	sub_8261B0B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8261B70C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82635A90) {
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
	ctx.lr = 0x82635A98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82635b78
	if (!ctx.cr6.gt) goto loc_82635B78;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82635AB8:
	// mulli r11,r30,1776
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(1776));
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r29,180(r28)
	REX_STORE_U8(r28.u32 + 180, r29.u8);
	// bl 0x82637858
	ctx.lr = 0x82635AD0;
	sub_82637858(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// stfs f1,196(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 196, temp.u32);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82635ab8
	if (ctx.cr6.lt) goto loc_82635AB8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82635b78
	if (!ctx.cr6.gt) goto loc_82635B78;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82635AF8:
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stw r29,444(r11)
	REX_STORE_U32(ctx.r11.u32 + 444, r29.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
	// stw r9,436(r11)
	REX_STORE_U32(ctx.r11.u32 + 436, ctx.r9.u32);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82635af8
	if (ctx.cr6.lt) goto loc_82635AF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82635b78
	if (!ctx.cr6.gt) goto loc_82635B78;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82635B2C:
	// lwz r9,256(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mulli r11,r10,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// sth r8,122(r11)
	REX_STORE_U16(ctx.r11.u32 + 122, ctx.r8.u16);
	// sth r8,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r8.u16);
	// lwz r6,256(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// sth r6,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
	// sth r29,116(r11)
	REX_STORE_U16(ctx.r11.u32 + 116, r29.u16);
	// lhz r4,34(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 34);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82635b2c
	if (ctx.cr6.lt) goto loc_82635B2C;
loc_82635B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82639E58) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x82639E60;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca0
	ctx.lr = 0x82639E68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82639fd4
	if (!ctx.cr6.gt) goto loc_82639FD4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f29,8312(r9)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 8312);
	// lfd f30,32424(r8)
	f30.u64 = REX_LOAD_U64(ctx.r8.u32 + 32424);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f31,6136(r7)
	f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 6136);
	// addi r28,r11,-12408
	r28.s64 = ctx.r11.s64 + -12408;
	// lfs f28,3804(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3804);
	f28.f64 = double(temp.f32);
loc_82639EB0:
	// lwz r9,584(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 584);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 124);
	// lhz r10,122(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 122);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82639ee4
	if (!ctx.cr6.lt) goto loc_82639EE4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82639EE4:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x82639f48
	if (ctx.cr6.lt) goto loc_82639F48;
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// bgt cr6,0x82639f48
	if (ctx.cr6.gt) goto loc_82639F48;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82639f48
	if (!ctx.cr6.eq) goto loc_82639F48;
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// lfs f10,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,84(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f9,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * f28.f64));
	// stfs f8,88(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// b 0x82639fb8
	goto loc_82639FB8;
loc_82639F48:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fdiv f27,f31,f13
	f27.f64 = f31.f64 / ctx.f13.f64;
	// fmul f26,f27,f30
	f26.f64 = f27.f64 * f30.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82639F68;
	sub_826A14E0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x826a15c0
	ctx.lr = 0x82639F78;
	sub_826A15C0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82639F88;
	sub_826A14E0(ctx, base);
	// fneg f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,80(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x826a15c0
	ctx.lr = 0x82639F9C;
	sub_826A15C0(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,84(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x826a14e0
	ctx.lr = 0x82639FAC;
	sub_826A14E0(ctx, base);
	// fmul f7,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f1.f64 * f29.f64;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
loc_82639FB8:
	// lhz r10,580(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82639eb0
	if (ctx.cr6.lt) goto loc_82639EB0;
loc_82639FD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cec
	ctx.lr = 0x82639FE4;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82642AE0) {
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
	// beq cr6,0x82642b28
	if (ctx.cr6.eq) goto loc_82642B28;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82642b28
	if (ctx.cr6.eq) goto loc_82642B28;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
loc_82642B28:
	// lwz r3,264(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
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

DEFINE_REX_FUNC(sub_82646530) {
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
	ctx.lr = 0x82646538;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8264671c
	if (ctx.cr6.eq) goto loc_8264671C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8264671c
	if (ctx.cr6.eq) goto loc_8264671C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// clrlwi r26,r7,16
	r26.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// li r27,1
	r27.s64 = 1;
	// li r28,128
	r28.s64 = 128;
	// addi r29,r11,-26936
	r29.s64 = ctx.r11.s64 + -26936;
loc_82646564:
	// cmplw cr6,r4,r26
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x82646574
	if (ctx.cr6.lt) goto loc_82646574;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82646574:
	// stb r27,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, r27.u8);
	// addic. r6,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// sthu r28,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r5.u32 = ea;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// addi r10,r11,-128
	ctx.r10.s64 = ctx.r11.s64 + -128;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// beq 0x826465b8
	if (ctx.cr0.eq) goto loc_826465B8;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r10,-128
	ctx.r8.s64 = ctx.r10.s64 + -128;
	// rlwinm r30,r8,8,0,23
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x826465bc
	goto loc_826465BC;
loc_826465B8:
	// li r30,0
	r30.s64 = 0;
loc_826465BC:
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r30.u16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// beq cr6,0x8264670c
	if (ctx.cr6.eq) goto loc_8264670C;
loc_826465D0:
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r8,r30,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// divw r31,r8,r7
	r31.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(r31.s32, 7, ctx.xer);
	// ble cr6,0x82646604
	if (!ctx.cr6.gt) goto loc_82646604;
	// li r31,7
	r31.s64 = 7;
	// b 0x82646610
	goto loc_82646610;
loc_82646604:
	// cmpwi cr6,r31,-8
	ctx.cr6.compare<int32_t>(r31.s32, -8, ctx.xer);
	// bge cr6,0x82646610
	if (!ctx.cr6.lt) goto loc_82646610;
	// li r31,-8
	r31.s64 = -8;
loc_82646610:
	// mullw r10,r31,r7
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x82646628
	if (!ctx.cr6.gt) goto loc_82646628;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82646634
	goto loc_82646634;
loc_82646628:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82646634
	if (!ctx.cr6.lt) goto loc_82646634;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82646634:
	// rlwinm r10,r31,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3C;
	// lwzx r9,r10,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// srawi r10,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x82646650
	if (!ctx.cr6.lt) goto loc_82646650;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82646650:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826466f4
	if (ctx.cr6.eq) goto loc_826466F4;
	// lbzu r8,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// divw r11,r7,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r7.s32 / ctx.r10.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82646698
	if (!ctx.cr6.gt) goto loc_82646698;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x826466a4
	goto loc_826466A4;
loc_82646698:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x826466a4
	if (!ctx.cr6.lt) goto loc_826466A4;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_826466A4:
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// ble cr6,0x826466bc
	if (!ctx.cr6.gt) goto loc_826466BC;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x826466c8
	goto loc_826466C8;
loc_826466BC:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bge cr6,0x826466c8
	if (!ctx.cr6.lt) goto loc_826466C8;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_826466C8:
	// rlwinm r9,r11,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r7,r9,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x826466e4
	if (!ctx.cr6.lt) goto loc_826466E4;
	// li r10,16
	ctx.r10.s64 = 16;
loc_826466E4:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// b 0x826466f8
	goto loc_826466F8;
loc_826466F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826466F8:
	// rlwimi r11,r31,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x826465d0
	if (!ctx.cr6.eq) goto loc_826465D0;
loc_8264670C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82646564
	if (!ctx.cr6.eq) goto loc_82646564;
	// subf r3,r25,r5
	ctx.r3.u64 = ctx.r5.u64 - r25.u64;
	// b 0x826a1cfc
	return;
loc_8264671C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8264FEB0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// b 0x8265c708
	sub_8265C708(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826500F8) {
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
	// li r30,4
	r30.s64 = 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7d8
	ctx.lr = 0x82650134;
	sub_8265D7D8(ctx, base);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7d8
	ctx.lr = 0x82650154;
	sub_8265D7D8(ctx, base);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7d8
	ctx.lr = 0x82650174;
	sub_8265D7D8(ctx, base);
	// li r30,2
	r30.s64 = 2;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// ori r6,r6,6
	ctx.r6.u64 = ctx.r6.u64 | 6;
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7d8
	ctx.lr = 0x8265019C;
	sub_8265D7D8(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x826501C0;
	sub_8265D7B8(ctx, base);
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x826501DC;
	sub_8265D7B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x82650200;
	sub_8265D7B8(ctx, base);
	// li r11,1536
	ctx.r11.s64 = 1536;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r6,r6,6
	ctx.r6.u64 = ctx.r6.u64 | 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8265d7b8
	ctx.lr = 0x8265022C;
	sub_8265D7B8(ctx, base);
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

DEFINE_REX_FUNC(sub_82657648) {
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
	// bl 0x826a1c90
	ctx.lr = 0x82657650;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,37
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 37, ctx.xer);
	// blt cr6,0x82657ac0
	if (ctx.cr6.lt) goto loc_82657AC0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r4,37
	ctx.r8.s64 = ctx.r4.s64 + 37;
	// addi r7,r5,-37
	ctx.r7.s64 = ctx.r5.s64 + -37;
	// lhz r23,28(r4)
	r23.u64 = REX_LOAD_U16(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lhz r22,30(r4)
	r22.u64 = REX_LOAD_U16(ctx.r4.u32 + 30);
	// lwz r26,4(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// ld r25,8(r4)
	r25.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// lwz r19,16(r4)
	r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r24,20(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r21,24(r4)
	r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lbz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 32);
	// lbz r28,33(r4)
	r28.u64 = REX_LOAD_U8(ctx.r4.u32 + 33);
	// lbz r27,34(r4)
	r27.u64 = REX_LOAD_U8(ctx.r4.u32 + 34);
	// lbz r10,35(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 35);
	// lbz r9,36(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 36);
	// stw r8,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// stw r7,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// beq cr6,0x826576c4
	if (ctx.cr6.eq) goto loc_826576C4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1306
	ctx.r3.u64 = ctx.r3.u64 | 1306;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_826576C4:
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x826576dc
	if (ctx.cr6.eq) goto loc_826576DC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_826576DC:
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r5,r28,24
	ctx.r5.u64 = r28.u32 & 0xFF;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82657ac0
	if (ctx.cr6.gt) goto loc_82657AC0;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r4,r27,24
	ctx.r4.u64 = r27.u32 & 0xFF;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82657ac0
	if (ctx.cr6.gt) goto loc_82657AC0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8265770c
	if (!ctx.cr6.eq) goto loc_8265770C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82657ac0
	if (ctx.cr6.eq) goto loc_82657AC0;
loc_8265770C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8265771c
	if (!ctx.cr6.eq) goto loc_8265771C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82657ac0
	if (ctx.cr6.eq) goto loc_82657AC0;
loc_8265771C:
	// rlwinm. r10,r26,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265772c
	if (ctx.cr0.eq) goto loc_8265772C;
	// rlwinm. r11,r26,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657ac0
	if (!ctx.cr0.eq) goto loc_82657AC0;
loc_8265772C:
	// rlwinm. r20,r26,0,27,27
	r20.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8265773c
	if (ctx.cr0.eq) goto loc_8265773C;
	// rlwinm. r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657ac0
	if (!ctx.cr0.eq) goto loc_82657AC0;
loc_8265773C:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x8265774c
	if (!ctx.cr6.eq) goto loc_8265774C;
	// rlwinm. r11,r26,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657ac0
	if (ctx.cr0.eq) goto loc_82657AC0;
loc_8265774C:
	// cmplwi cr6,r23,1020
	ctx.cr6.compare<uint32_t>(r23.u32, 1020, ctx.xer);
	// bgt cr6,0x82657ac0
	if (ctx.cr6.gt) goto loc_82657AC0;
	// cmplwi cr6,r22,31
	ctx.cr6.compare<uint32_t>(r22.u32, 31, ctx.xer);
	// bgt cr6,0x82657ac0
	if (ctx.cr6.gt) goto loc_82657AC0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x8265798c
	if (ctx.cr6.eq) goto loc_8265798C;
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// beq 0x82657784
	if (ctx.cr0.eq) goto loc_82657784;
	// rlwinm. r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265778c
	if (!ctx.cr0.eq) goto loc_8265778C;
loc_82657778:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,21001
	ctx.r3.u64 = ctx.r3.u64 | 21001;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_82657784:
	// rlwinm. r9,r11,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82657894
	if (!ctx.cr0.eq) goto loc_82657894;
loc_8265778C:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x826577ec
	if (!ctx.cr6.eq) goto loc_826577EC;
	// clrlwi. r9,r26,31
	ctx.r9.u64 = r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826577a8
	if (ctx.cr0.eq) goto loc_826577A8;
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826577b0
	if (!ctx.cr0.eq) goto loc_826577B0;
	// b 0x8265782c
	goto loc_8265782C;
loc_826577A8:
	// rlwinm. r9,r11,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265782c
	if (!ctx.cr0.eq) goto loc_8265782C;
loc_826577B0:
	// rlwinm. r9,r26,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826577c4
	if (ctx.cr0.eq) goto loc_826577C4;
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826577cc
	if (!ctx.cr0.eq) goto loc_826577CC;
	// b 0x8265782c
	goto loc_8265782C;
loc_826577C4:
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8265782c
	if (!ctx.cr0.eq) goto loc_8265782C;
loc_826577CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826577dc
	if (ctx.cr6.eq) goto loc_826577DC;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x826577e8
	goto loc_826577E8;
loc_826577DC:
	// rlwinm. r10,r26,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265781c
	if (ctx.cr0.eq) goto loc_8265781C;
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_826577E8:
	// beq 0x8265782c
	if (ctx.cr0.eq) goto loc_8265782C;
loc_826577EC:
	// addi r29,r31,380
	r29.s64 = r31.s64 + 380;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_826577F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82657840
	if (ctx.cr6.eq) goto loc_82657840;
	// lwz r9,396(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 396);
	// rlwinm. r8,r26,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82657838
	if (ctx.cr0.eq) goto loc_82657838;
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82657778
	if (ctx.cr0.eq) goto loc_82657778;
	// b 0x82657840
	goto loc_82657840;
loc_8265781C:
	// rlwinm. r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8265782c
	if (!ctx.cr0.eq) goto loc_8265782C;
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826577ec
	if (ctx.cr0.eq) goto loc_826577EC;
loc_8265782C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1610
	ctx.r3.u64 = ctx.r3.u64 | 1610;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_82657838:
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82657894
	if (!ctx.cr0.eq) goto loc_82657894;
loc_82657840:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x826577f8
	if (ctx.cr6.lt) goto loc_826577F8;
	// lbz r9,170(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 170);
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82657888
	if (ctx.cr6.lt) goto loc_82657888;
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82657a18
	if (!ctx.cr6.lt) goto loc_82657A18;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826578a0
	if (!ctx.cr6.lt) goto loc_826578A0;
loc_82657888:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,20994
	ctx.r3.u64 = ctx.r3.u64 | 20994;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_82657894:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1365
	ctx.r3.u64 = ctx.r3.u64 | 1365;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_826578A0:
	// li r30,0
	r30.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r6,r31,392
	ctx.r6.s64 = r31.s64 + 392;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826578B0:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82657914
	if (ctx.cr6.eq) goto loc_82657914;
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r5,r9,0,2,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82657914
	if (ctx.cr0.eq) goto loc_82657914;
	// rlwinm r9,r9,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,396(r10)
	REX_STORE_U32(ctx.r10.u32 + 396, ctx.r9.u32);
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// lbz r9,170(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 170);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r10,171(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 171);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r5,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r5.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stb r10,171(r31)
	REX_STORE_U8(r31.u32 + 171, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r9,170(r31)
	REX_STORE_U8(r31.u32 + 170, ctx.r9.u8);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82657920
	if (!ctx.cr6.lt) goto loc_82657920;
loc_82657914:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// bne 0x826578b0
	if (!ctx.cr0.eq) goto loc_826578B0;
loc_82657920:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8264de98
	ctx.lr = 0x82657934;
	sub_8264DE98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8265795c
	if (!ctx.cr0.eq) goto loc_8265795C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8264dd38
	ctx.lr = 0x82657954;
	sub_8264DD38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82657978
	if (ctx.cr0.eq) goto loc_82657978;
loc_8265795C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ede70
	ctx.lr = 0x82657964;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657c2c
	if (ctx.cr0.lt) goto loc_82657C2C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_82657978:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654388
	ctx.lr = 0x82657980;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657c2c
	if (ctx.cr0.lt) goto loc_82657C2C;
	// b 0x82657a18
	goto loc_82657A18;
loc_8265798C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82657c28
	if (ctx.cr6.eq) goto loc_82657C28;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82657c28
	if (ctx.cr6.eq) goto loc_82657C28;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826579b8
	if (ctx.cr0.eq) goto loc_826579B8;
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826579c0
	if (!ctx.cr0.eq) goto loc_826579C0;
	// b 0x82657ac0
	goto loc_82657AC0;
loc_826579B8:
	// rlwinm. r11,r26,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657ac0
	if (!ctx.cr0.eq) goto loc_82657AC0;
loc_826579C0:
	// addi r29,r31,380
	r29.s64 = r31.s64 + 380;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_826579CC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826579ec
	if (!ctx.cr6.eq) goto loc_826579EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x826579cc
	if (ctx.cr6.lt) goto loc_826579CC;
	// b 0x82657a18
	goto loc_82657A18;
loc_826579EC:
	// addi r11,r11,95
	ctx.r11.s64 = ctx.r11.s64 + 95;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657a10
	if (ctx.cr0.eq) goto loc_82657A10;
	// rlwinm. r11,r26,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657a18
	if (!ctx.cr0.eq) goto loc_82657A18;
	// b 0x82657ac0
	goto loc_82657AC0;
loc_82657A10:
	// rlwinm. r11,r26,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657ac0
	if (!ctx.cr0.eq) goto loc_82657AC0;
loc_82657A18:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r10,740(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 740);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stb r28,168(r31)
	REX_STORE_U8(r31.u32 + 168, r28.u8);
	// rlwimi r11,r26,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// std r25,40(r31)
	REX_STORE_U64(r31.u32 + 40, r25.u64);
	// rlwinm r8,r26,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x8;
	// stb r27,169(r31)
	REX_STORE_U8(r31.u32 + 169, r27.u8);
	// rlwimi r9,r11,2,27,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// rlwinm r11,r10,0,6,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC3FFFFFF;
	// rlwinm r9,r9,2,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x70;
	// addi r28,r31,228
	r28.s64 = r31.s64 + 228;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r8,23,0,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0xFF800000;
	// li r9,0
	ctx.r9.s64 = 0;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,276
	ctx.r6.s64 = ctx.r1.s64 + 276;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8265d278
	ctx.lr = 0x82657A7C;
	sub_8265D278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657c2c
	if (ctx.cr0.lt) goto loc_82657C2C;
	// addi r27,r31,240
	r27.s64 = r31.s64 + 240;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,276
	ctx.r6.s64 = ctx.r1.s64 + 276;
	// addi r5,r1,268
	ctx.r5.s64 = ctx.r1.s64 + 268;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8265c810
	ctx.lr = 0x82657AAC;
	sub_8265C810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657c2c
	if (ctx.cr0.lt) goto loc_82657C2C;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82657acc
	if (!ctx.cr6.gt) goto loc_82657ACC;
loc_82657AC0:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82657c2c
	goto loc_82657C2C;
loc_82657ACC:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650540
	ctx.lr = 0x82657ADC;
	sub_82650540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657c2c
	if (ctx.cr0.lt) goto loc_82657C2C;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r4,r23,r11
	ctx.r4.u64 = r23.u64 + ctx.r11.u64;
	// subf r11,r23,r10
	ctx.r11.u64 = ctx.r10.u64 - r23.u64;
	// stw r4,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// beq cr6,0x82657b1c
	if (ctx.cr6.eq) goto loc_82657B1C;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8265de90
	ctx.lr = 0x82657B10;
	sub_8265DE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657c2c
	if (ctx.cr0.lt) goto loc_82657C2C;
	// lwz r4,268(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
loc_82657B1C:
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// add r10,r22,r4
	ctx.r10.u64 = r22.u64 + ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// subf r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	// stw r10,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
loc_82657B34:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657b60
	if (ctx.cr6.eq) goto loc_82657B60;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8265d0d8
	ctx.lr = 0x82657B50;
	sub_8265D0D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8265c758
	ctx.lr = 0x82657B60;
	sub_8265C758(ctx, base);
loc_82657B60:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82657b34
	if (ctx.cr6.lt) goto loc_82657B34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826558c0
	ctx.lr = 0x82657B78;
	sub_826558C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657c2c
	if (ctx.cr0.lt) goto loc_82657C2C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82657bc4
	if (ctx.cr6.lt) goto loc_82657BC4;
	// beq cr6,0x82657bb8
	if (ctx.cr6.eq) goto loc_82657BB8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82657bb0
	if (!ctx.cr6.eq) goto loc_82657BB0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82657bb0
	if (ctx.cr6.eq) goto loc_82657BB0;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82657bb8
	if (!ctx.cr0.eq) goto loc_82657BB8;
loc_82657BB0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82657bbc
	goto loc_82657BBC;
loc_82657BB8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82657BBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650370
	ctx.lr = 0x82657BC4;
	sub_82650370(ctx, base);
loc_82657BC4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82657c28
	if (!ctx.cr6.eq) goto loc_82657C28;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82657bf8
	if (ctx.cr6.eq) goto loc_82657BF8;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8265d088
	ctx.lr = 0x82657BE0;
	sub_8265D088(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82657c28
	if (ctx.cr0.eq) goto loc_82657C28;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// b 0x82657c20
	goto loc_82657C20;
loc_82657BF8:
	// rlwinm. r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82657c28
	if (ctx.cr0.eq) goto loc_82657C28;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8265c708
	ctx.lr = 0x82657C0C;
	sub_8265C708(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82657c28
	if (ctx.cr0.eq) goto loc_82657C28;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_82657C20:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657C28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82657C28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82657C2C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8267B2C8) {
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
	// lwz r11,1048(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1048);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8267b3e4
	if (ctx.cr6.eq) goto loc_8267B3E4;
	// lhz r11,336(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 336);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267b388
	if (!ctx.cr0.eq) goto loc_8267B388;
	// lis r4,-32646
	ctx.r4.s64 = -2139488256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,4108
	ctx.r4.u64 = ctx.r4.u64 | 4108;
	// bl 0x82681d60
	ctx.lr = 0x8267B30C;
	sub_82681D60(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267B338;
	sub_82676D18(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// bl 0x82676d18
	ctx.lr = 0x8267B364;
	sub_82676D18(ctx, base);
	// lhz r11,1076(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 1076);
	// lwz r10,1204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1204);
	// addi r3,r30,688
	ctx.r3.s64 = r30.s64 + 688;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r11,1076(r30)
	REX_STORE_U16(r30.u32 + 1076, ctx.r11.u16);
	// stw r10,1204(r30)
	REX_STORE_U32(r30.u32 + 1204, ctx.r10.u32);
	// bl 0x82684280
	ctx.lr = 0x8267B384;
	sub_82684280(ctx, base);
	// b 0x8267b3e4
	goto loc_8267B3E4;
loc_8267B388:
	// lhz r11,334(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 334);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8267b3e4
	if (ctx.cr0.lt) goto loc_8267B3E4;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8267b3e4
	if (!ctx.cr6.lt) goto loc_8267B3E4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// bl 0x82679178
	ctx.lr = 0x8267B3E4;
	sub_82679178(ctx, base);
loc_8267B3E4:
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

DEFINE_REX_FUNC(sub_826823D0) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82682420
	if (ctx.cr6.eq) goto loc_82682420;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826824a8
	if (!ctx.cr6.eq) goto loc_826824A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x826824a8
	goto loc_826824A8;
loc_82682420:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82682490
	if (!ctx.cr6.eq) goto loc_82682490;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8268244c
	if (!ctx.cr6.lt) goto loc_8268244C;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82682454
	goto loc_82682454;
loc_8268244C:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82682454:
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82682468
	if (ctx.cr6.lt) goto loc_82682468;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8268246c
	if (!ctx.cr6.gt) goto loc_8268246C;
loc_82682468:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8268246C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826822d0
	ctx.lr = 0x82682478;
	sub_826822D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8268248c
	if (!ctx.cr0.eq) goto loc_8268248C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826824d0
	goto loc_826824D0;
loc_8268248C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_82682490:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r11,4(r10)
	REX_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_826824A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rotlwi r10,r9,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 24);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_826824D0:
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

DEFINE_REX_FUNC(sub_82687AD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82687af0
	if (ctx.cr6.eq) goto loc_82687AF0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82687AE4:
	// lwzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x82687ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82687AE4;
loc_82687AF0:
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687b14
	if (ctx.cr0.eq) goto loc_82687B14;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// rlwinm. r10,r5,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// beq 0x82687b18
	if (ctx.cr0.eq) goto loc_82687B18;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82687b18
	goto loc_82687B18;
loc_82687B14:
	// addi r11,r9,96
	ctx.r11.s64 = ctx.r9.s64 + 96;
loc_82687B18:
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268A2F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268A300;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,232
	r29.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x8268A31C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826896a0
	ctx.lr = 0x8268A328;
	sub_826896A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268a33c
	if (!ctx.cr0.eq) goto loc_8268A33C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8268a348
	goto loc_8268A348;
loc_8268A33C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8268d7f8
	ctx.lr = 0x8268A344;
	sub_8268D7F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8268A348:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x8268A350;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268CF98) {
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
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bl 0x82692220
	ctx.lr = 0x8268CFAC;
	sub_82692220(ctx, base);
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

DEFINE_REX_FUNC(sub_8268E128) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8268E130;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268e188
	if (!ctx.cr6.gt) goto loc_8268E188;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
loc_8268E14C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82689c10
	ctx.lr = 0x8268E168;
	sub_82689C10(ctx, base);
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8268ea18
	ctx.lr = 0x8268E178;
	sub_8268EA18(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e14c
	if (ctx.cr6.lt) goto loc_8268E14C;
loc_8268E188:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268e1c0
	if (!ctx.cr6.gt) goto loc_8268E1C0;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_8268E19C:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E1B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e19c
	if (ctx.cr6.lt) goto loc_8268E19C;
loc_8268E1C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82694528) {
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
	ctx.lr = 0x82694530;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r3,0,28,28
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// subf r5,r29,r3
	ctx.r5.u64 = ctx.r3.u64 - r29.u64;
	// addi r3,r11,-3072
	ctx.r3.s64 = ctx.r11.s64 + -3072;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82693de8
	ctx.lr = 0x8269455C;
	sub_82693DE8(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82694570
	if (!ctx.cr6.eq) goto loc_82694570;
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x82694574
	goto loc_82694574;
loc_82694570:
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82694574:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82696B18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82696B34:
	// lfsx f13,r10,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// bdnz 0x82696b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82696B34;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82698DB0) {
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
	// extsh. r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82698dc8
	if (ctx.cr0.gt) goto loc_82698DC8;
	// li r4,176
	ctx.r4.s64 = 176;
loc_82698DC8:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,5436(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5440(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5440);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82698e04
	if (ctx.cr6.gt) goto loc_82698E04;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82698e28
	if (!ctx.cr6.lt) goto loc_82698E28;
loc_82698E04:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82698e14
	if (!ctx.cr6.lt) goto loc_82698E14;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x82698e18
	goto loc_82698E18;
loc_82698E14:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82698E18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82698e30
	if (!ctx.cr6.eq) goto loc_82698E30;
loc_82698E28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82698ee0
	goto loc_82698EE0;
loc_82698E30:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f1,10608(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// bge cr6,0x82698e94
	if (!ctx.cr6.lt) goto loc_82698E94;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,8964(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8964);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x82698E50;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,8960(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8960);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82698e6c
	if (!ctx.cr6.lt) goto loc_82698E6C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82698E6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,9004(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// b 0x82698ee0
	goto loc_82698EE0;
loc_82698E94:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,8956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8956);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x82698EA4;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,8952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8952);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82698ebc
	if (!ctx.cr6.gt) goto loc_82698EBC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82698EBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,9004(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
loc_82698EE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269F008) {
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
	// bl 0x826aa800
	ctx.lr = 0x8269F018;
	sub_826AA800(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269f028
	if (ctx.cr0.eq) goto loc_8269F028;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x826aa818
	ctx.lr = 0x8269F028;
	sub_826AA818(ctx, base);
loc_8269F028:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r11,25688(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 25688);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269f04c
	if (ctx.cr0.eq) goto loc_8269F04C;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8269cb58
	ctx.lr = 0x8269F04C;
	sub_8269CB58(ctx, base);
loc_8269F04C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x826a38b8
	ctx.lr = 0x8269F054;
	sub_826A38B8(ctx, base);
}

DEFINE_REX_FUNC(sub_826A11E8) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x826a10d8
	sub_826A10D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A18E8) {
	REX_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x826a1914
	if (!ctx.cr6.eq) goto loc_826A1914;
	// lwz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826a191c
	if (!ctx.cr0.eq) goto loc_826A191C;
	// lwz r10,20(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826a191c
	if (!ctx.cr6.eq) goto loc_826A191C;
loc_826A1914:
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x826a1924
	if (!ctx.cr6.eq) goto loc_826A1924;
loc_826A191C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826A1924:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A2830) {
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
	// bne cr6,0x826a28ac
	if (!ctx.cr6.eq) goto loc_826A28AC;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826a28ac
	if (!ctx.cr6.eq) goto loc_826A28AC;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826a2898
	if (ctx.cr6.eq) goto loc_826A2898;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826a2898
	if (ctx.cr6.eq) goto loc_826A2898;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826a28ac
	if (!ctx.cr6.eq) goto loc_826A28AC;
loc_826A2898:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826a28b4
	goto loc_826A28B4;
loc_826A28AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826A28B4:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x826a3a68
	ctx.lr = 0x826A28BC;
	sub_826A3A68(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x826a3a68
	ctx.lr = 0x826A28C8;
	sub_826A3A68(ctx, base);
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

DEFINE_REX_FUNC(__savevmx_113) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_103) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AA7A8) {
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
	// lwz r30,164(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x826aa7e0
	goto loc_826AA7E0;
loc_826AA7E0:
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

DEFINE_REX_FUNC(sub_826AD438) {
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
	// bl 0x826a1cac
	ctx.lr = 0x826AD440;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// rlwinm. r4,r5,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq 0x826ad498
	if (ctx.cr0.eq) goto loc_826AD498;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,143
	r27.u64 = r27.u64 | 143;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x826ad49c
	goto loc_826AD49C;
loc_826AD498:
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826AD49C:
	// rlwinm. r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad4bc
	if (ctx.cr0.eq) goto loc_826AD4BC;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,147
	r27.u64 = r27.u64 | 147;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826AD4BC:
	// clrlwi. r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad4dc
	if (ctx.cr0.eq) goto loc_826AD4DC;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,145
	r27.u64 = r27.u64 | 145;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826AD4DC:
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad4fc
	if (ctx.cr0.eq) goto loc_826AD4FC;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,142
	r27.u64 = r27.u64 | 142;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826AD4FC:
	// rlwinm. r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad51c
	if (ctx.cr0.eq) goto loc_826AD51C;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,144
	r27.u64 = r27.u64 | 144;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_826AD51C:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,20,4,4
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,24,3,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x10000000) | (ctx.r9.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,23,2,2
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x20000000) | (ctx.r9.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,25,1,1
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x40000000) | (ctx.r9.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r10,28,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bl 0x826adf30
	ctx.lr = 0x826AD598;
	sub_826ADF30(ctx, base);
	// rlwinm. r11,r3,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad5b0
	if (ctx.cr0.eq) goto loc_826AD5B0;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_826AD5B0:
	// rlwinm. r11,r3,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad5c8
	if (ctx.cr0.eq) goto loc_826AD5C8;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_826AD5C8:
	// rlwinm. r11,r3,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad5e0
	if (ctx.cr0.eq) goto loc_826AD5E0;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_826AD5E0:
	// rlwinm. r11,r3,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad5f8
	if (ctx.cr0.eq) goto loc_826AD5F8;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_826AD5F8:
	// rlwinm. r11,r3,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad610
	if (ctx.cr0.eq) goto loc_826AD610;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_826AD610:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ad664
	if (ctx.cr6.lt) goto loc_826AD664;
	// beq cr6,0x826ad654
	if (ctx.cr6.eq) goto loc_826AD654;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826ad644
	if (ctx.cr6.lt) goto loc_826AD644;
	// bne cr6,0x826ad674
	if (!ctx.cr6.eq) goto loc_826AD674;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x826ad670
	goto loc_826AD670;
loc_826AD644:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,31,0,1
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x826ad670
	goto loc_826AD670;
loc_826AD654:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 3221225472;
	// b 0x826ad670
	goto loc_826AD670;
loc_826AD664:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
loc_826AD670:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_826AD674:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,27,2,4
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r28,15,5,16
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0x7FF8000) | (ctx.r10.u64 & 0xFFFFFFFFF8007FFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x826ad6f8
	if (ctx.cr6.eq) goto loc_826AD6F8;
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r10,r10,0,5,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF87FFFFFF;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f0,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// b 0x826ad738
	goto loc_826AD738;
loc_826AD6F8:
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r29.u32 + 0);
	// stfd f0,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.f0.u64);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwimi r10,r30,27,1,4
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x78000000) | (ctx.r10.u64 & 0xFFFFFFFF87FFFFFF);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lfd f0,0(r26)
	ctx.f0.u64 = REX_LOAD_U64(r26.u32 + 0);
	// stfd f0,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, ctx.f0.u64);
loc_826AD738:
	// bl 0x826a4408
	ctx.lr = 0x826AD73C;
	sub_826A4408(ctx, base);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b4250
	ctx.lr = 0x826AD750;
	sub_826B4250(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad76c
	if (ctx.cr0.eq) goto loc_826AD76C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826AD76C:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad784
	if (ctx.cr0.eq) goto loc_826AD784;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826AD784:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad79c
	if (ctx.cr0.eq) goto loc_826AD79C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826AD79C:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad7b4
	if (ctx.cr0.eq) goto loc_826AD7B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826AD7B4:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad7cc
	if (ctx.cr0.eq) goto loc_826AD7CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826AD7CC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x826ad810
	if (ctx.cr6.lt) goto loc_826AD810;
	// beq cr6,0x826ad804
	if (ctx.cr6.eq) goto loc_826AD804;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x826ad7f8
	if (ctx.cr6.lt) goto loc_826AD7F8;
	// bne cr6,0x826ad81c
	if (!ctx.cr6.eq) goto loc_826AD81C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r30,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x826ad818
	goto loc_826AD818;
loc_826AD7F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r30,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x826ad818
	goto loc_826AD818;
loc_826AD804:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// b 0x826ad818
	goto loc_826AD818;
loc_826AD810:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_826AD818:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826AD81C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x826ad830
	if (ctx.cr6.eq) goto loc_826AD830;
	// lfs f0,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// b 0x826ad838
	goto loc_826AD838;
loc_826AD830:
	// lfd f0,80(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 80);
	// stfd f0,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.f0.u64);
loc_826AD838:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826D85E0) {
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
	ctx.lr = 0x826D85E8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// li r26,15
	r26.s64 = 15;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// ori r27,r10,22
	r27.u64 = ctx.r10.u64 | 22;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r23,24
	r23.s64 = 24;
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// li r22,16
	r22.s64 = 16;
	// addi r25,r11,13784
	r25.s64 = ctx.r11.s64 + 13784;
loc_826D862C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x826d88e4
	if (ctx.cr6.eq) goto loc_826D88E4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x826d8840
	if (ctx.cr6.eq) goto loc_826D8840;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x826d862c
	if (!ctx.cr6.eq) goto loc_826D862C;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r30,r28
	r30.u64 = r28.u64;
	// ld r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 104);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// addi r8,r25,16
	ctx.r8.s64 = r25.s64 + 16;
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// rotlwi r29,r4,0
	r29.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r5,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// stw r3,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
loc_826D8688:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826d86a8
	if (!ctx.cr0.eq) goto loc_826D86A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826d8688
	if (!ctx.cr6.eq) goto loc_826D8688;
loc_826D86A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826d8804
	if (!ctx.cr6.eq) goto loc_826D8804;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x826c6d18
	ctx.lr = 0x826D86C4;
	sub_826C6D18(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x826d8724
	if (ctx.cr6.eq) goto loc_826D8724;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
loc_826D86D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826d8700
	if (!ctx.cr6.eq) goto loc_826D8700;
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 152);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x826d8720
	if (ctx.cr6.eq) goto loc_826D8720;
loc_826D8700:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826c6d80
	ctx.lr = 0x826D8714;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// bne cr6,0x826d86d4
	if (!ctx.cr6.eq) goto loc_826D86D4;
	// b 0x826d8724
	goto loc_826D8724;
loc_826D8720:
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
loc_826D8724:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x826c6de8
	ctx.lr = 0x826D8730;
	sub_826C6DE8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d8778
	if (!ctx.cr6.eq) goto loc_826D8778;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,-24
	r30.s64 = r29.s64 + -24;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D8758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// b 0x826d862c
	goto loc_826D862C;
loc_826D8778:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d87d0
	if (!ctx.cr6.eq) goto loc_826D87D0;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D879C;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r28.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r8.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826D87D0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,72(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d8380
	ctx.lr = 0x826D87E4;
	sub_826D8380(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r10.u16);
	// b 0x826d862c
	goto loc_826D862C;
loc_826D8804:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r29,-24
	r30.s64 = r29.s64 + -24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D8820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// b 0x826d862c
	goto loc_826D862C;
loc_826D8840:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D885C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d4080
	ctx.lr = 0x826D887C;
	sub_826D4080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826d3eb0
	ctx.lr = 0x826D889C;
	sub_826D3EB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// addi r9,r31,84
	ctx.r9.s64 = r31.s64 + 84;
	// cmpldi cr6,r11,24
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 24, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// stw r8,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r6.u32);
	// stw r5,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// blt cr6,0x826d892c
	if (ctx.cr6.lt) goto loc_826D892C;
	// stw r22,80(r31)
	REX_STORE_U32(r31.u32 + 80, r22.u32);
	// b 0x826d862c
	goto loc_826D862C;
loc_826D88E4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// ld r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 8);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x826d8920
	if (ctx.cr6.eq) goto loc_826D8920;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D8918;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d8934
	if (ctx.cr6.lt) goto loc_826D8934;
loc_826D8920:
	// std r30,8(r31)
	REX_STORE_U64(r31.u32 + 8, r30.u64);
	// stw r26,80(r31)
	REX_STORE_U32(r31.u32 + 80, r26.u32);
	// b 0x826d862c
	goto loc_826D862C;
loc_826D892C:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
loc_826D8934:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,1
	r30.u64 = ctx.r11.u64 | 1;
loc_826D893C:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x826d8974
	if (!ctx.cr6.eq) goto loc_826D8974;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D895C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d893c
	if (ctx.cr6.lt) goto loc_826D893C;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_826D8974:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_826F02F8) {
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
	// bl 0x826a1cac
	ctx.lr = 0x826F0300;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x826f0334
	if (ctx.cr6.gt) goto loc_826F0334;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826F0334:
	// lhz r11,580(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 580);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826f037c
	if (!ctx.cr6.eq) goto loc_826F037C;
	// lwz r11,584(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 320);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r26,180(r31)
	REX_STORE_U8(r31.u32 + 180, r26.u8);
	// bl 0x826e38e0
	ctx.lr = 0x826F036C;
	sub_826E38E0(ctx, base);
	// stfs f1,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826F037C:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x826f03b4
	if (!ctx.cr6.eq) goto loc_826F03B4;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826F039C;
	sub_826E58B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f04c0
	if (ctx.cr6.lt) goto loc_826F04C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_826F03B4:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,580(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 580);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x826f04c0
	if (!ctx.cr6.lt) goto loc_826F04C0;
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// li r25,1
	r25.s64 = 1;
loc_826F03D4:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,584(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r10,320(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826f1f78
	ctx.lr = 0x826F0408;
	sub_826F1F78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f04c0
	if (ctx.cr6.lt) goto loc_826F04C0;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F0428;
	sub_826E58B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f04c0
	if (ctx.cr6.lt) goto loc_826F04C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826f044c
	if (!ctx.cr6.eq) goto loc_826F044C;
	// stb r26,180(r29)
	REX_STORE_U8(r29.u32 + 180, r26.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826f0490
	goto loc_826F0490;
loc_826F044C:
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x826f0464
	if (!ctx.cr6.eq) goto loc_826F0464;
	// stb r25,180(r29)
	REX_STORE_U8(r29.u32 + 180, r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826f0490
	goto loc_826F0490;
loc_826F0464:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F0474;
	sub_826E58B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f04c0
	if (ctx.cr6.lt) goto loc_826F04C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// stb r3,180(r29)
	REX_STORE_U8(r29.u32 + 180, ctx.r3.u8);
loc_826F0490:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826e38e0
	ctx.lr = 0x826F0498;
	sub_826E38E0(ctx, base);
	// stfs f1,196(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 196, temp.u32);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r10.u16);
	// lhz r8,580(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + 580);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826f03d4
	if (ctx.cr6.lt) goto loc_826F03D4;
loc_826F04C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826FC858) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fc884
	if (!ctx.cr6.eq) goto loc_826FC884;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826FC884:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,22260(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22260);
	// slw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// and r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fc8ac
	if (!ctx.cr6.eq) goto loc_826FC8AC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826FC8AC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r9,22256(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22256);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r8,r10,39848
	ctx.r8.u64 = ctx.r10.u64 | 39848;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82716ae0
	ctx.lr = 0x826FC8E0;
	sub_82716AE0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827035C8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,15504(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15504);
	// stw r4,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r4.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x82703694
	if (ctx.cr6.lt) goto loc_82703694;
	// lwz r10,252(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,6576(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6576);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r8.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// lwz r10,-16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// stw r10,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// lwz r9,-20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -20);
	// stw r9,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,2992(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2992);
	// stw r11,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stw r11,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8270365c
	if (ctx.cr6.eq) goto loc_8270365C;
	// lwz r11,1900(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1900);
	// sth r8,16(r11)
	REX_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// lwz r10,1900(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1900);
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lwz r9,1904(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// sth r8,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r8.u16);
	// lwz r7,1904(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// sth r8,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// blr 
	return;
loc_8270365C:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r9,1900(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1900);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r10,1024
	ctx.r8.s64 = ctx.r10.s64 + 1024;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r7,r8,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// sth r6,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r6.u16);
	// lwz r4,1900(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1900);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// sth r6,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// b 0x827037a8
	goto loc_827037A8;
loc_82703694:
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// li r11,8
	ctx.r11.s64 = 8;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// subf r7,r8,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r8.u64;
	// stw r8,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r8.u32);
	// stw r10,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r7,316(r3)
	REX_STORE_U32(ctx.r3.u32 + 316, ctx.r7.u32);
	// stw r11,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// bge cr6,0x827036cc
	if (!ctx.cr6.lt) goto loc_827036CC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_827036CC:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgt cr6,0x827036f8
	if (ctx.cr6.gt) goto loc_827036F8;
	// lwz r8,14788(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14788);
	// stw r11,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// beq cr6,0x82703768
	if (ctx.cr6.eq) goto loc_82703768;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgt cr6,0x82703768
	if (ctx.cr6.gt) goto loc_82703768;
	// stw r10,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r10.u32);
	// b 0x82703764
	goto loc_82703764;
loc_827036F8:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x82703714
	if (ctx.cr6.lt) goto loc_82703714;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r11,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// stw r11,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r11.u32);
	// b 0x82703768
	goto loc_82703768;
loc_82703714:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgt cr6,0x82703734
	if (ctx.cr6.gt) goto loc_82703734;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r10.u32);
	// stw r8,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r8.u32);
	// b 0x82703768
	goto loc_82703768;
loc_82703734:
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// bgt cr6,0x82703754
	if (ctx.cr6.gt) goto loc_82703754;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r10.u32);
	// stw r8,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r8.u32);
	// b 0x82703768
	goto loc_82703768;
loc_82703754:
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// addi r10,r4,-6
	ctx.r10.s64 = ctx.r4.s64 + -6;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r8.u32);
loc_82703764:
	// stw r10,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
loc_82703768:
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r10,296(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r9,1900(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 1900);
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// divw r7,r8,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// sth r6,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, ctx.r6.u16);
	// andc r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r11,1900(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1900);
	// sth r6,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
loc_827037A8:
	// lwz r9,300(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r10,1904(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r8,r11,1024
	ctx.r8.s64 = ctx.r11.s64 + 1024;
	// divw r7,r8,r9
	ctx.r7.u64 = uint32_t((ctx.r9.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r8.s32 / ctx.r9.s32 : 0);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r5,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r5.u16);
	// andc r4,r9,r6
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r3,1904(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1904);
	// sth r5,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827202E8) {
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
	ctx.lr = 0x827202F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,276(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82720388
	if (!ctx.cr6.gt) goto loc_82720388;
	// lwz r27,260(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// subf r30,r11,r6
	r30.u64 = ctx.r6.u64 - ctx.r11.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82720328:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8272034c
	if (!ctx.cr6.gt) goto loc_8272034C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8272033C:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8272033c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272033C;
loc_8272034C:
	// bl 0x8271ff48
	ctx.lr = 0x82720350;
	sub_8271FF48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8272037c
	if (!ctx.cr6.gt) goto loc_8272037C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
loc_82720368:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// bdnz 0x82720368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720368;
loc_8272037C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82720328
	if (!ctx.cr0.eq) goto loc_82720328;
loc_82720388:
	// lwz r29,252(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// mr r31,r28
	r31.u64 = r28.u64;
	// lwz r27,268(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r4,244(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82720408
	if (!ctx.cr6.gt) goto loc_82720408;
	// subf r30,r28,r26
	r30.u64 = r26.u64 - r28.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_827203A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x827203cc
	if (!ctx.cr6.gt) goto loc_827203CC;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_827203BC:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x827203bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827203BC;
loc_827203CC:
	// bl 0x8271ff48
	ctx.lr = 0x827203D0;
	sub_8271FF48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x827203fc
	if (!ctx.cr6.gt) goto loc_827203FC;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
loc_827203E8:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// bdnz 0x827203e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827203E8;
loc_827203FC:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x827203a8
	if (!ctx.cr0.eq) goto loc_827203A8;
loc_82720408:
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82720478
	if (!ctx.cr6.gt) goto loc_82720478;
	// subf r30,r25,r24
	r30.u64 = r24.u64 - r25.u64;
loc_82720418:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8272043c
	if (!ctx.cr6.gt) goto loc_8272043C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8272042C:
	// lbzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8272042c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272042C;
loc_8272043C:
	// bl 0x8271ff48
	ctx.lr = 0x82720440;
	sub_8271FF48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8272046c
	if (!ctx.cr6.gt) goto loc_8272046C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
loc_82720458:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, ctx.r8.u8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// bdnz 0x82720458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720458;
loc_8272046C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// bne 0x82720418
	if (!ctx.cr0.eq) goto loc_82720418;
loc_82720478:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82725F80) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827260e0
	if (ctx.cr6.eq) goto loc_827260E0;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// sld r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf. r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// bge 0x827260e0
	if (!ctx.cr0.lt) goto loc_827260E0;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82726048
	if (ctx.cr6.lt) goto loc_82726048;
loc_82725FD0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82726020
	if (ctx.cr6.gt) goto loc_82726020;
loc_82725FDC:
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
	// ble cr6,0x82725fdc
	if (!ctx.cr6.gt) goto loc_82725FDC;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x827260e0
	if (!ctx.cr6.lt) goto loc_827260E0;
loc_82726020:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827260b4
	if (!ctx.cr6.eq) goto loc_827260B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725a90
	ctx.lr = 0x82726034;
	sub_82725A90(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82725fd0
	if (!ctx.cr6.lt) goto loc_82725FD0;
loc_82726048:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rldicr r6,r9,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// neg r3,r10
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r4,r10,48
	ctx.r4.s64 = ctx.r10.s64 + 48;
	// rldicr r6,r6,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// stw r4,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rldicr r10,r10,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rldicr r10,r7,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sld r10,r6,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r6.u64 << (ctx.r3.u8 & 0x7F));
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
	// b 0x827260dc
	goto loc_827260DC;
loc_827260B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,-16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -16, ctx.xer);
	// bge cr6,0x827260dc
	if (!ctx.cr6.lt) goto loc_827260DC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827260d4
	if (!ctx.cr6.eq) goto loc_827260D4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
loc_827260D4:
	// li r10,127
	ctx.r10.s64 = 127;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_827260DC:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_827260E0:
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

DEFINE_REX_FUNC(sub_82736DE8) {
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
	// bl 0x826a1c9c
	ctx.lr = 0x82736DF0;
	// addi r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 + 224;
	// vspltisw128 v63,11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xB)));
	// li r26,32
	r26.s64 = 32;
	// lvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltisw128 v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x3)));
	// li r27,48
	r27.s64 = 48;
	// vspltisw128 v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x8)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vslw128 v11,v62,v63
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v63.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,96
	r28.s64 = 96;
	// lvx128 v58,r4,r26
	ea = (ctx.r4.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v13,v59,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v10,v58,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// lvx128 v56,r4,r27
	ea = (ctx.r4.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v8,v57,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v9,v56,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lvx128 v53,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,160
	r30.s64 = 160;
	// addi r11,r11,31856
	ctx.r11.s64 = ctx.r11.s64 + 31856;
	// vslw128 v7,v53,v63
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v53.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v63.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
	}
	// li r29,112
	r29.s64 = 112;
	// lvx128 v55,r4,r28
	ea = (ctx.r4.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,176
	r31.s64 = 176;
	// vcsxwfp128 v3,v55,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// vspltisw128 v52,14
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_set1_epi32(int(0xE)));
	// lvx128 v54,r4,r30
	ea = (ctx.r4.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,128
	ctx.r3.s64 = 128;
	// lvx128 v12,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,-32
	ctx.r9.s64 = -32;
	// lvx128 v50,r4,r29
	ea = (ctx.r4.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v1,v54,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// lvx128 v48,r4,r31
	ea = (ctx.r4.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,144
	ctx.r5.s64 = 144;
	// vaddfp128 v49,v10,v13
	simde_mm_store_ps(ctx.v49.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)));
	// li r24,80
	r24.s64 = 80;
	// vcsxwfp128 v2,v50,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// li r23,96
	r23.s64 = 96;
	// vaddfp128 v47,v9,v8
	simde_mm_store_ps(ctx.v47.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v30,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcsxwfp128 v31,v48,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// li r6,64
	ctx.r6.s64 = 64;
	// lvx128 v45,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,80
	ctx.r7.s64 = 80;
	// lvx128 v44,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,192
	ctx.r8.s64 = 192;
	// vaddsws v6,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r9,208
	ctx.r9.s64 = 208;
	// lvx128 v11,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r22,32
	r22.s64 = 32;
	// vslw128 v5,v45,v63
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v45.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v63.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v4,v44,v63
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v44.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v63.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sllv_epi32(a, shift));
	}
	// lvx128 v43,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v51,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_set1_epi32(int(0x2)));
	// lvx128 v41,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v46,v1,v3
	simde_mm_store_ps(ctx.v46.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v7,v12,v49
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v49.f32)));
	// lvx128 v39,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw128 v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_set1_epi32(int(0x4)));
	// vaddsws v18,v6,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vmulfp128 v29,v12,v47
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vaddsws v15,v30,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcsxwfp128 v25,v41,0
	simde_mm_store_ps(v25.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// li r4,112
	ctx.r4.s64 = 112;
	// vaddfp128 v38,v31,v2
	simde_mm_store_ps(ctx.v38.f32, simde_mm_add_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v2.f32)));
	// li r24,128
	r24.s64 = 128;
	// vcsxwfp128 v24,v39,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// li r21,48
	r21.s64 = 48;
	// vcsxwfp128 v23,v43,0
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vcsxwfp128 v22,v42,0
	simde_mm_store_ps(v22.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vmaddfp v28,v11,v10,v7
	simde_mm_store_ps(v28.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v10,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v26,v10,v13,v7
	simde_mm_store_ps(v26.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v27,v11,v9,v29
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(v29.f32)));
	// lvx128 v9,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v13,v9,v46
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvx128 v7,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v19,v10,v8,v29
	simde_mm_store_ps(v19.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(v29.f32)));
	// lvx128 v8,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v29,v9,v38
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v38.f32)));
	// vsubsws v21,v6,v5
	temp.s64 = int64_t(ctx.v6.s32[0]) - int64_t(ctx.v5.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[1]) - int64_t(ctx.v5.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[2]) - int64_t(ctx.v5.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v6.s32[3]) - int64_t(ctx.v5.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddfp128 v37,v23,v25
	simde_mm_store_ps(ctx.v37.f32, simde_mm_add_ps(simde_mm_load_ps(v23.f32), simde_mm_load_ps(v25.f32)));
	// lvx128 v6,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v36,v22,v24
	simde_mm_store_ps(ctx.v36.f32, simde_mm_add_ps(simde_mm_load_ps(v22.f32), simde_mm_load_ps(v24.f32)));
	// vsubsws v20,v30,v4
	temp.s64 = int64_t(v30.s32[0]) - int64_t(ctx.v4.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[1]) - int64_t(ctx.v4.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[2]) - int64_t(ctx.v4.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[3]) - int64_t(ctx.v4.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vctsxs v30,v28,0
	simde_mm_store_si128((simde__m128i*)v30.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v28.f32)));
	// li r4,144
	ctx.r4.s64 = 144;
	// vctsxs v28,v26,0
	simde_mm_store_si128((simde__m128i*)v28.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v26.f32)));
	// vor v26,v18,v18
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vctsxs v27,v27,0
	simde_mm_store_si128((simde__m128i*)v27.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v27.f32)));
	// li r24,160
	r24.s64 = 160;
	// lvx128 v5,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v1,v8,v1,v13
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v4,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v17,v7,v3,v13
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v35,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmaddfp v16,v8,v31,v29
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(v29.f32)));
	// vor v31,v15,v15
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vmaddfp v29,v7,v2,v29
	simde_mm_store_ps(v29.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v29.f32)));
	// vctsxs v13,v19,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v19.f32)));
	// vmulfp128 v19,v6,v37
	simde_mm_store_ps(v19.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vmulfp128 v18,v6,v36
	simde_mm_store_ps(v18.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vctsxs v3,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vctsxs v1,v17,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v17.f32)));
	// vctsxs v2,v16,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v16.f32)));
	// vctsxs v29,v29,0
	simde_mm_store_si128((simde__m128i*)v29.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v29.f32)));
	// vmaddfp v17,v5,v25,v19
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v25.f32)), simde_mm_load_ps(v19.f32)));
	// vmaddfp v19,v4,v23,v19
	simde_mm_store_ps(v19.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(v19.f32)));
	// vmaddfp v16,v5,v24,v18
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(v18.f32)));
	// vmaddfp v18,v4,v22,v18
	simde_mm_store_ps(v18.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v22.f32)), simde_mm_load_ps(v18.f32)));
	// vsubsws v14,v30,v3
	temp.s64 = int64_t(v30.s32[0]) - int64_t(ctx.v3.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[1]) - int64_t(ctx.v3.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[2]) - int64_t(ctx.v3.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[3]) - int64_t(ctx.v3.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v23,v28,v1
	temp.s64 = int64_t(v28.s32[0]) - int64_t(ctx.v1.s32[0]);
	v23.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v28.s32[1]) - int64_t(ctx.v1.s32[1]);
	v23.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v28.s32[2]) - int64_t(ctx.v1.s32[2]);
	v23.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v28.s32[3]) - int64_t(ctx.v1.s32[3]);
	v23.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v15,v27,v2
	temp.s64 = int64_t(v27.s32[0]) - int64_t(ctx.v2.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(ctx.v2.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(ctx.v2.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(ctx.v2.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v25,v30,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v28,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v1,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vctsxs v24,v17,0
	simde_mm_store_si128((simde__m128i*)v24.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v17.f32)));
	// vor v3,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vctsxs v22,v19,0
	simde_mm_store_si128((simde__m128i*)v22.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v19.f32)));
	// vaddsws v27,v27,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vctsxs v23,v16,0
	simde_mm_store_si128((simde__m128i*)v23.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v16.f32)));
	// vor v2,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vctsxs v19,v18,0
	simde_mm_store_si128((simde__m128i*)v19.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v18.f32)));
	// vsubsws v30,v13,v29
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(v29.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(v29.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(v29.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(v29.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v14,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v3,v1
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(ctx.v1.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(ctx.v1.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(ctx.v1.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(ctx.v1.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v29,v13,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v1,v2,v30
	temp.s64 = int64_t(ctx.v2.s32[0]) - int64_t(v30.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[1]) - int64_t(v30.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[2]) - int64_t(v30.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[3]) - int64_t(v30.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v30,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v2,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v3,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vor v1,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vslw128 v18,v2,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v17,v2,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v14,v21,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v15,v13,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v16,v13,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsubsws v21,v21,v24
	temp.s64 = int64_t(v21.s32[0]) - int64_t(v24.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[1]) - int64_t(v24.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[2]) - int64_t(v24.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[3]) - int64_t(v24.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v24,v17,v18
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v30,v1,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v18,v1,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v17,v3,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v4,v3,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v16,v15,v16
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v20,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v20,v20,v23
	temp.s64 = int64_t(v20.s32[0]) - int64_t(v23.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[1]) - int64_t(v23.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[2]) - int64_t(v23.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[3]) - int64_t(v23.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v23,v18,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v4,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v18,v2,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v2,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vslw128 v16,v24,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v24,v1,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v30,v26,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v23,v23,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vor v1,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vaddsws v13,v13,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r4,-16
	ctx.r4.s64 = -16;
	// vslw128 v17,v2,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v2,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v3,v1,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v1,v24,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v13,v17
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v18,v16
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v18,v2,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v16,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v24,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v26,v22
	temp.s64 = int64_t(v26.s32[0]) - int64_t(v22.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v26.s32[1]) - int64_t(v22.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v26.s32[2]) - int64_t(v22.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v26.s32[3]) - int64_t(v22.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v1,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vsraw128 v26,v24,v60
	v26.s32[0] = v24.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	v26.s32[1] = v24.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	v26.s32[2] = v24.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	v26.s32[3] = v24.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v23,v16,v60
	v23.s32[0] = v16.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	v23.s32[1] = v16.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	v23.s32[2] = v16.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	v23.s32[3] = v16.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v13,v31,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v2,v31,v19
	temp.s64 = int64_t(v31.s32[0]) - int64_t(v19.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[1]) - int64_t(v19.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[2]) - int64_t(v19.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[3]) - int64_t(v19.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v31,v15,v15
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vsraw128 v24,v17,v60
	v24.s32[0] = v17.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	v24.s32[1] = v17.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	v24.s32[2] = v17.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	v24.s32[3] = v17.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v22,v18,v60
	v22.s32[0] = v18.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	v22.s32[1] = v18.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	v22.s32[2] = v18.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	v22.s32[3] = v18.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v17,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v18,v1,v26
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(v26.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(v26.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(v26.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(v26.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v1,v3,v28
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v28.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v28.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v28.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v28.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v16,v3,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// lvx128 v3,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v26,v21,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v30,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v23,v21,v23
	temp.s64 = int64_t(v21.s32[0]) - int64_t(v23.s32[0]);
	v23.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[1]) - int64_t(v23.s32[1]);
	v23.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[2]) - int64_t(v23.s32[2]);
	v23.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v21.s32[3]) - int64_t(v23.s32[3]);
	v23.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v15,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v14,v31,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v30,v30,v25
	temp.s64 = int64_t(v30.s32[0]) - int64_t(v25.s32[0]);
	v30.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[1]) - int64_t(v25.s32[1]);
	v30.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[2]) - int64_t(v25.s32[2]);
	v30.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v30.s32[3]) - int64_t(v25.s32[3]);
	v30.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v21,v20,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v34,v28,v60
	ctx.v34.s32[0] = v28.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v34.s32[1] = v28.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v34.s32[2] = v28.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v34.s32[3] = v28.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v63,v26,v60
	ctx.v63.s32[0] = v26.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v63.s32[1] = v26.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v63.s32[2] = v26.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v63.s32[3] = v26.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v33,v17,v60
	ctx.v33.s32[0] = v17.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v33.s32[1] = v17.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v33.s32[2] = v17.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v33.s32[3] = v17.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v32,v16,v60
	ctx.v32.s32[0] = v16.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v32.s32[1] = v16.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v32.s32[2] = v16.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v32.s32[3] = v16.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v48,v1,v60
	ctx.v48.s32[0] = ctx.v1.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v48.s32[1] = ctx.v1.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v48.s32[2] = ctx.v1.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v48.s32[3] = ctx.v1.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v62,v15,v60
	ctx.v62.s32[0] = v15.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v62.s32[1] = v15.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v62.s32[2] = v15.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v62.s32[3] = v15.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrglw128 v49,v34,v63
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// vsraw128 v59,v14,v60
	ctx.v59.s32[0] = v14.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v59.s32[1] = v14.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v59.s32[2] = v14.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v59.s32[3] = v14.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrghw128 v55,v34,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// vsraw128 v58,v19,v60
	ctx.v58.s32[0] = v19.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v58.s32[1] = v19.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v58.s32[2] = v19.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v58.s32[3] = v19.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrglw128 v53,v33,v32
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vsraw128 v56,v21,v60
	ctx.v56.s32[0] = v21.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v56.s32[1] = v21.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v56.s32[2] = v21.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v56.s32[3] = v21.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrghw128 v57,v33,v32
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vsraw128 v54,v23,v60
	ctx.v54.s32[0] = v23.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v54.s32[1] = v23.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v54.s32[2] = v23.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v54.s32[3] = v23.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v50,v18,v60
	ctx.v50.s32[0] = v18.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v50.s32[1] = v18.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v50.s32[2] = v18.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v50.s32[3] = v18.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsubsws v28,v31,v24
	temp.s64 = int64_t(v31.s32[0]) - int64_t(v24.s32[0]);
	v28.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[1]) - int64_t(v24.s32[1]);
	v28.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[2]) - int64_t(v24.s32[2]);
	v28.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v31.s32[3]) - int64_t(v24.s32[3]);
	v28.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v47,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vsubsws v27,v13,v27
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(v27.s32[0]);
	v27.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(v27.s32[1]);
	v27.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(v27.s32[2]);
	v27.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(v27.s32[3]);
	v27.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v46,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsubsws v26,v2,v29
	temp.s64 = int64_t(ctx.v2.s32[0]) - int64_t(v29.s32[0]);
	v26.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[1]) - int64_t(v29.s32[1]);
	v26.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[2]) - int64_t(v29.s32[2]);
	v26.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v2.s32[3]) - int64_t(v29.s32[3]);
	v26.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrglw128 v45,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vsraw128 v43,v30,v60
	ctx.v43.s32[0] = v30.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v43.s32[1] = v30.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v43.s32[2] = v30.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v43.s32[3] = v30.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrghw128 v42,v48,v50
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vsubsws v25,v20,v22
	temp.s64 = int64_t(v20.s32[0]) - int64_t(v22.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[1]) - int64_t(v22.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[2]) - int64_t(v22.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v20.s32[3]) - int64_t(v22.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v44,v62,v56
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsraw128 v39,v28,v60
	ctx.v39.s32[0] = v28.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v39.s32[1] = v28.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v39.s32[2] = v28.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v39.s32[3] = v28.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrghw128 v38,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vsraw128 v37,v27,v60
	ctx.v37.s32[0] = v27.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v37.s32[1] = v27.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v37.s32[2] = v27.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v37.s32[3] = v27.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrglw128 v41,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vsraw128 v36,v26,v60
	ctx.v36.s32[0] = v26.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v36.s32[1] = v26.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v36.s32[2] = v26.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v36.s32[3] = v26.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrghw128 v34,v54,v43
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// vsraw128 v33,v25,v60
	ctx.v33.s32[0] = v25.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v33.s32[1] = v25.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v33.s32[2] = v25.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v33.s32[3] = v25.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vmrglw128 v32,v48,v50
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v2,v45,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmrglw128 v63,v54,v43
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), simde_mm_load_si128((simde__m128i*)ctx.v54.u32)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v31,v41,0
	simde_mm_store_ps(v31.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vmrglw128 v62,v36,v39
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrglw128 v59,v33,v37
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vmrglw128 v58,v42,v34
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vmrghw128 v56,v36,v39
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v54,v33,v37
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vmrglw128 v50,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v1,v58,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vmrghw128 v48,v49,v53
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v45,v49,v53
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// vmrglw128 v43,v44,v38
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vaddfp v27,v2,v31
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v31.f32)));
	// vmrglw128 v41,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v29,v50,0
	simde_mm_store_ps(v29.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// vmrglw128 v39,v56,v54
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vcsxwfp128 v26,v45,0
	simde_mm_store_ps(v26.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmrghw128 v37,v55,v57
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), simde_mm_load_si128((simde__m128i*)ctx.v55.u32)));
	// vcsxwfp128 v20,v48,0
	simde_mm_store_ps(v20.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v30,v43,0
	simde_mm_store_ps(v30.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vmrghw128 v34,v42,v34
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v42.u32)));
	// vcsxwfp128 v24,v41,0
	simde_mm_store_ps(v24.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)));
	// vmrghw128 v33,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v28,v39,0
	simde_mm_store_ps(v28.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v39.u32)));
	// vmrghw128 v36,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// vslw128 v22,v37,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v37.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v32,v62,v59
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vslw128 v17,v34,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v34.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vmrghw128 v63,v44,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v38.u32), simde_mm_load_si128((simde__m128i*)ctx.v44.u32)));
	// vmrghw128 v62,v56,v54
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v56.u32)));
	// vcsxwfp128 v19,v33,0
	simde_mm_store_ps(v19.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v23,v36,0
	simde_mm_store_ps(v23.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// addi r11,r1,-112
	ctx.r11.s64 = ctx.r1.s64 + -112;
	// vcsxwfp128 v21,v32,0
	simde_mm_store_ps(v21.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmaddfp v18,v12,v27,v13
	simde_mm_store_ps(v18.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v27.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddsws v27,v22,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v17,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddfp v17,v1,v29
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v29.f32)));
	// vslw128 v25,v63,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v63.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v22,v62,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v62.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddfp v16,v30,v26
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v26.f32)));
	// vsubsws v4,v27,v25
	temp.s64 = int64_t(v27.s32[0]) - int64_t(v25.s32[0]);
	ctx.v4.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(v25.s32[1]);
	ctx.v4.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(v25.s32[2]);
	ctx.v4.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(v25.s32[3]);
	ctx.v4.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddfp v14,v28,v24
	simde_mm_store_ps(v14.f32, simde_mm_add_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(v24.f32)));
	// vaddsws v27,v27,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v25,v3,v22
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v22.s32[0]);
	v25.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v22.s32[1]);
	v25.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v22.s32[2]);
	v25.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v22.s32[3]);
	v25.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddfp v15,v20,v23
	simde_mm_store_ps(v15.f32, simde_mm_add_ps(simde_mm_load_ps(v20.f32), simde_mm_load_ps(v23.f32)));
	// vaddfp128 v63,v19,v21
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(v19.f32), simde_mm_load_ps(v21.f32)));
	// stvx128 v25,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v2,v11,v2,v18
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v18.f32)));
	// vmaddfp v17,v12,v17,v13
	simde_mm_store_ps(v17.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v17.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vaddsws v25,v3,v22
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v12,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v4,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// vmaddfp v22,v9,v16,v13
	simde_mm_store_ps(v22.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(v16.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v9,v9,v14,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(v14.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v16,v6,v15,v13
	simde_mm_store_ps(v16.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(v15.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v13,v6,v63,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vcfpsxws128 v58,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v11,v11,v1,v17
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(v17.f32)));
	// vmaddfp v6,v10,v31,v18
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(v18.f32)));
	// vmaddfp v10,v10,v29,v17
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(v17.f32)));
	// vmaddfp v2,v8,v30,v22
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(v22.f32)));
	// vmaddfp v1,v7,v26,v22
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(v22.f32)));
	// vmaddfp v8,v8,v28,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v7,v24,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(v24.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v7,v5,v23,v16
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v23.f32)), simde_mm_load_ps(v16.f32)));
	// vmaddfp v31,v4,v20,v16
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v20.f32)), simde_mm_load_ps(v16.f32)));
	// vmaddfp v5,v5,v21,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v21.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v4,v4,v19,v13
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(v19.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsraw128 v13,v58,v61
	ctx.v13.s32[0] = ctx.v58.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v58.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v58.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v58.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vcfpsxws128 v57,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vcfpsxws128 v55,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vcfpsxws128 v56,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vcfpsxws128 v54,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vcfpsxws128 v53,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vcfpsxws128 v50,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v9.f32)));
	// vcfpsxws128 v49,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v48,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vcfpsxws128 v47,v31,0
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v31.f32)));
	// vcfpsxws128 v46,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vcfpsxws128 v45,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vsraw128 v11,v57,v61
	ctx.v11.s32[0] = ctx.v57.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v57.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v57.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v57.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vsraw128 v10,v55,v61
	ctx.v10.s32[0] = ctx.v55.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v55.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v55.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v55.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vsraw128 v8,v56,v61
	ctx.v8.s32[0] = ctx.v56.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v8.s32[1] = ctx.v56.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v8.s32[2] = ctx.v56.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v8.s32[3] = ctx.v56.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vsraw128 v7,v54,v61
	ctx.v7.s32[0] = ctx.v54.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v54.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v54.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v54.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vsraw128 v6,v53,v61
	ctx.v6.s32[0] = ctx.v53.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v6.s32[1] = ctx.v53.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v6.s32[2] = ctx.v53.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v6.s32[3] = ctx.v53.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vsraw128 v5,v50,v61
	ctx.v5.s32[0] = ctx.v50.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v5.s32[1] = ctx.v50.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v5.s32[2] = ctx.v50.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v5.s32[3] = ctx.v50.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vsraw128 v9,v49,v61
	ctx.v9.s32[0] = ctx.v49.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v49.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v49.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v49.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vsubsws v16,v13,v8
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v8.s32[0]);
	v16.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v8.s32[1]);
	v16.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v8.s32[2]);
	v16.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v8.s32[3]);
	v16.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v4,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v15,v11,v7
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v7.s32[0]);
	v15.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v7.s32[1]);
	v15.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v7.s32[2]);
	v15.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v7.s32[3]);
	v15.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v13,v9,v5
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v5.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v5.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v5.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v5.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// li r11,224
	ctx.r11.s64 = 224;
	// vaddsws v2,v11,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// li r4,240
	ctx.r4.s64 = 240;
	// vor v8,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vor v7,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vaddsws v5,v9,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v9,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vsubsws v14,v10,v6
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v6.s32[0]);
	v14.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v6.s32[1]);
	v14.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v6.s32[2]);
	v14.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v6.s32[3]);
	v14.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v13,v48,v61
	ctx.v13.s32[0] = ctx.v48.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v48.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v48.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v48.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vaddsws v31,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v11,v46,v61
	ctx.v11.s32[0] = ctx.v46.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v46.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v46.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v46.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vaddsws v6,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v1,v12,v13
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v1.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v1.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v1.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v1.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v29,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v10,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vor v13,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vaddsws v28,v3,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v3,v3,v11
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v3.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v3.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v3.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v3.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v11,v8,v7
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v12,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v10,v10,v9
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vslw128 v26,v13,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v24,v13,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v23,v12,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v22,v12,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v21,v11,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v20,v11,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v8,v24,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v19,v10,v40
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v40.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vslw128 v18,v10,v51
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v51.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v9,v22,v23
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v20,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v7,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vslw128 v16,v8,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v15,v18,v19
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v31,v12,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v8,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vaddsws v14,v7,v16
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v12,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vslw128 v7,v9,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_sllv_epi32(a, shift));
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
	// vslw128 v26,v8,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vaddsws v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v23,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsraw128 v11,v45,v61
	ctx.v11.s32[0] = ctx.v45.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v45.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v45.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v45.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vslw128 v24,v12,v61
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v61.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vsraw128 v13,v47,v61
	ctx.v13.s32[0] = ctx.v47.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v13.s32[1] = ctx.v47.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v13.s32[2] = ctx.v47.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v13.s32[3] = ctx.v47.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vaddsws v22,v9,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v10,v25,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v21,v31,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v12,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v20,v30,v24
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vor v9,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsraw128 v8,v23,v60
	ctx.v8.s32[0] = v23.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v8.s32[1] = v23.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v8.s32[2] = v23.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v8.s32[3] = v23.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v18,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v19,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v17,v20,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v16,v12,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v15,v10,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v14,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v0,v25,v11
	temp.s64 = int64_t(v25.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v0.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v0.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v0.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v25.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v0.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v13,v27,v13
	temp.s64 = int64_t(v27.s32[0]) - int64_t(ctx.v13.s32[0]);
	ctx.v13.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[1]) - int64_t(ctx.v13.s32[1]);
	ctx.v13.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[2]) - int64_t(ctx.v13.s32[2]);
	ctx.v13.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(v27.s32[3]) - int64_t(ctx.v13.s32[3]);
	ctx.v13.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vor v11,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vsraw128 v31,v18,v60
	v31.s32[0] = v18.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	v31.s32[1] = v18.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	v31.s32[2] = v18.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	v31.s32[3] = v18.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v7,v19,v60
	ctx.v7.s32[0] = v19.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v7.s32[1] = v19.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v7.s32[2] = v19.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v7.s32[3] = v19.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v30,v17,v60
	v30.s32[0] = v17.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	v30.s32[1] = v17.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	v30.s32[2] = v17.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	v30.s32[3] = v17.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v44,v16,v52
	ctx.v44.s32[0] = v16.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v44.s32[1] = v16.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v44.s32[2] = v16.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v44.s32[3] = v16.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v43,v15,v52
	ctx.v43.s32[0] = v15.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v43.s32[1] = v15.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v43.s32[2] = v15.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v43.s32[3] = v15.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v42,v14,v52
	ctx.v42.s32[0] = v14.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v42.s32[1] = v14.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v42.s32[2] = v14.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v42.s32[3] = v14.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vaddsws v29,v11,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v28,v1,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvx128 v44,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v27,v13,v2
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvx128 v43,r25,r10
	ea = (r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v26,v3,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// stvx128 v42,r25,r26
	ea = (r25.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddsws v25,v0,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v24,v13,v2
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v2.s32[0]);
	v24.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v2.s32[1]);
	v24.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v2.s32[2]);
	v24.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v2.s32[3]);
	v24.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v23,v0,v5
	temp.s64 = int64_t(ctx.v0.s32[0]) - int64_t(ctx.v5.s32[0]);
	v23.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[1]) - int64_t(ctx.v5.s32[1]);
	v23.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[2]) - int64_t(ctx.v5.s32[2]);
	v23.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v0.s32[3]) - int64_t(ctx.v5.s32[3]);
	v23.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v22,v1,v31
	temp.s64 = int64_t(ctx.v1.s32[0]) - int64_t(v31.s32[0]);
	v22.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[1]) - int64_t(v31.s32[1]);
	v22.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[2]) - int64_t(v31.s32[2]);
	v22.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v1.s32[3]) - int64_t(v31.s32[3]);
	v22.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v21,v3,v30
	temp.s64 = int64_t(ctx.v3.s32[0]) - int64_t(v30.s32[0]);
	v21.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[1]) - int64_t(v30.s32[1]);
	v21.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[2]) - int64_t(v30.s32[2]);
	v21.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v3.s32[3]) - int64_t(v30.s32[3]);
	v21.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v20,v9,v8
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v8.s32[0]);
	v20.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v8.s32[1]);
	v20.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v8.s32[2]);
	v20.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v8.s32[3]);
	v20.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v19,v11,v7
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v7.s32[0]);
	v19.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v7.s32[1]);
	v19.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v7.s32[2]);
	v19.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v7.s32[3]);
	v19.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v18,v12,v4
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v4.s32[0]);
	v18.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v4.s32[1]);
	v18.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v4.s32[2]);
	v18.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v4.s32[3]);
	v18.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsubsws v17,v10,v6
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v6.s32[0]);
	v17.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v6.s32[1]);
	v17.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v6.s32[2]);
	v17.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v6.s32[3]);
	v17.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v41,v29,v52
	ctx.v41.s32[0] = v29.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v41.s32[1] = v29.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v41.s32[2] = v29.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v41.s32[3] = v29.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v40,v28,v52
	ctx.v40.s32[0] = v28.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v40.s32[1] = v28.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v40.s32[2] = v28.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v40.s32[3] = v28.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v39,v26,v52
	ctx.v39.s32[0] = v26.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v39.s32[1] = v26.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v39.s32[2] = v26.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v39.s32[3] = v26.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v38,v27,v52
	ctx.v38.s32[0] = v27.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v38.s32[1] = v27.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v38.s32[2] = v27.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v38.s32[3] = v27.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// vsraw128 v37,v25,v52
	ctx.v37.s32[0] = v25.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v37.s32[1] = v25.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v37.s32[2] = v25.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v37.s32[3] = v25.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v41,r25,r27
	ea = (r25.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v36,v24,v52
	ctx.v36.s32[0] = v24.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v36.s32[1] = v24.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v36.s32[2] = v24.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v36.s32[3] = v24.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v40,r25,r6
	ea = (r25.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v35,v23,v52
	ctx.v35.s32[0] = v23.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v35.s32[1] = v23.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v35.s32[2] = v23.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v35.s32[3] = v23.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v39,r25,r7
	ea = (r25.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v34,v22,v52
	ctx.v34.s32[0] = v22.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v34.s32[1] = v22.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v34.s32[2] = v22.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v34.s32[3] = v22.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v38,r25,r28
	ea = (r25.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v33,v21,v52
	ctx.v33.s32[0] = v21.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v33.s32[1] = v21.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v33.s32[2] = v21.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v33.s32[3] = v21.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v37,r25,r29
	ea = (r25.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v32,v20,v52
	ctx.v32.s32[0] = v20.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v32.s32[1] = v20.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v32.s32[2] = v20.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v32.s32[3] = v20.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v36,r25,r3
	ea = (r25.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v63,v19,v52
	ctx.v63.s32[0] = v19.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v63.s32[1] = v19.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v63.s32[2] = v19.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v63.s32[3] = v19.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v35,r25,r5
	ea = (r25.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v62,v18,v52
	ctx.v62.s32[0] = v18.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v62.s32[1] = v18.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v62.s32[2] = v18.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v62.s32[3] = v18.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v34,r25,r30
	ea = (r25.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsraw128 v61,v17,v52
	ctx.v61.s32[0] = v17.s32[0] >> (ctx.v52.u8[0] & 0x1F);
	ctx.v61.s32[1] = v17.s32[1] >> (ctx.v52.u8[4] & 0x1F);
	ctx.v61.s32[2] = v17.s32[2] >> (ctx.v52.u8[8] & 0x1F);
	ctx.v61.s32[3] = v17.s32[3] >> (ctx.v52.u8[12] & 0x1F);
	// stvx128 v33,r25,r31
	ea = (r25.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v32,r25,r8
	ea = (r25.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r25,r9
	ea = (r25.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r25,r11
	ea = (r25.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r25,r4
	ea = (r25.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1cec
	return;
}

