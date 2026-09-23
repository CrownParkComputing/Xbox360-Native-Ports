#include "hydrothunder_funcs.62.h"

DEFINE_REX_FUNC(sub_82122D28) {
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
	ctx.lr = 0x82122D30;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r28,r6,12
	r28.s64 = ctx.r6.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82122d78
	if (!ctx.cr6.eq) goto loc_82122D78;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_82122D60:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82122D64:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82122D70:
	// bl 0x82122ff0
	ctx.lr = 0x82122D74;
	sub_82122FF0(ctx, base);
	// b 0x82122ed4
	goto loc_82122ED4;
loc_82122D78:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82122da4
	if (!ctx.cr6.eq) goto loc_82122DA4;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82122D94;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122eb8
	if (!ctx.cr0.lt) goto loc_82122EB8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82122d60
	goto loc_82122D60;
loc_82122DA4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82122dd4
	if (!ctx.cr6.eq) goto loc_82122DD4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82122DBC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122eb8
	if (!ctx.cr0.lt) goto loc_82122EB8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82122d64
	goto loc_82122D64;
loc_82122DD4:
	// addi r26,r29,12
	r26.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x82122DE4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122e44
	if (!ctx.cr0.lt) goto loc_82122E44;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82268e98
	ctx.lr = 0x82122DF8;
	sub_82268E98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82122E08;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122e44
	if (!ctx.cr0.lt) goto loc_82122E44;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,57(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82122e38
	if (ctx.cr0.eq) goto loc_82122E38;
loc_82122E30:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82122d70
	goto loc_82122D70;
loc_82122E38:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82122E3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82122d70
	goto loc_82122D70;
loc_82122E44:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x82122E50;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122eb8
	if (!ctx.cr0.lt) goto loc_82122EB8;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212a938
	ctx.lr = 0x82122E64;
	sub_8212A938(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82122e8c
	if (ctx.cr6.eq) goto loc_82122E8C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82122E84;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122eb8
	if (!ctx.cr0.lt) goto loc_82122EB8;
loc_82122E8C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,57(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82122eb0
	if (ctx.cr0.eq) goto loc_82122EB0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82122e30
	goto loc_82122E30;
loc_82122EB0:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82122e3c
	goto loc_82122E3C;
loc_82122EB8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82122ee0
	ctx.lr = 0x82122EC8;
	sub_82122EE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82122ED4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82133198) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821331f4
	if (!ctx.cr0.eq) goto loc_821331F4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x821331c8
	goto loc_821331C8;
loc_821331C0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821331C8:
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821331c0
	if (ctx.cr0.eq) goto loc_821331C0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_821331DC:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82133204
	if (!ctx.cr6.eq) goto loc_82133204;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821331F4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821331dc
	if (ctx.cr0.eq) goto loc_821331DC;
loc_82133204:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136218) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x82136220;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c94
	ctx.lr = 0x82136228;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	f30.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// fadds f26,f0,f13
	f26.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// lfs f0,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// lfs f12,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f24,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	f24.f64 = double(temp.f32);
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f25,f12,f11
	f25.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f29,f10,f30
	f29.f64 = double(float(ctx.f10.f64 + f30.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// fmr f23,f11
	f23.f64 = ctx.f11.f64;
	// blt cr6,0x821362b0
	if (ctx.cr6.lt) goto loc_821362B0;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// bgt cr6,0x821362b0
	if (ctx.cr6.gt) goto loc_821362B0;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(f29.f64, f31.f64);
	// blt cr6,0x821362b0
	if (ctx.cr6.lt) goto loc_821362B0;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(f29.f64, ctx.f0.f64);
	// li r29,1
	r29.s64 = 1;
	// ble cr6,0x821362b4
	if (!ctx.cr6.gt) goto loc_821362B4;
loc_821362B0:
	// li r29,0
	r29.s64 = 0;
loc_821362B4:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f31.f64);
	// blt cr6,0x821362d8
	if (ctx.cr6.lt) goto loc_821362D8;
	// fcmpu cr6,f27,f0
	ctx.cr6.compare(f27.f64, ctx.f0.f64);
	// bgt cr6,0x821362d8
	if (ctx.cr6.gt) goto loc_821362D8;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(f28.f64, f31.f64);
	// blt cr6,0x821362d8
	if (ctx.cr6.lt) goto loc_821362D8;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(f28.f64, ctx.f0.f64);
	// li r30,1
	r30.s64 = 1;
	// ble cr6,0x821362dc
	if (!ctx.cr6.gt) goto loc_821362DC;
loc_821362D8:
	// li r30,0
	r30.s64 = 0;
loc_821362DC:
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173278
	ctx.lr = 0x821362F4;
	sub_82173278(ctx, base);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// lwz r11,6096(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
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
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bctrl 
	ctx.lr = 0x8213631C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213637C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82136398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f24,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// stfs f23,84(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f27,96(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stfs f24,100(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f25,104(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f28,116(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f26,120(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f25,124(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f29,132(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f26,140(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f23,144(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213640C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce0
	ctx.lr = 0x82136418;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82149180) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821491bc
	if (ctx.cr6.eq) goto loc_821491BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-13856
	ctx.r4.s64 = ctx.r11.s64 + -13856;
	// addi r3,r10,-13824
	ctx.r3.s64 = ctx.r10.s64 + -13824;
	// li r5,184
	ctx.r5.s64 = 184;
	// bl 0x821231d0
	ctx.lr = 0x821491BC;
	sub_821231D0(ctx, base);
loc_821491BC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821491D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,28(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821491f4
	if (ctx.cr6.eq) goto loc_821491F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216d6b8
	ctx.lr = 0x821491EC;
	sub_8216D6B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821491F4;
	sub_8269CE98(ctx, base);
loc_821491F4:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82149204
	if (ctx.cr6.eq) goto loc_82149204;
	// bl 0x82149220
	ctx.lr = 0x82149204;
	sub_82149220(ctx, base);
loc_82149204:
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

DEFINE_REX_FUNC(sub_8214CBA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214D8C0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x8214D8C8;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ca4
	ctx.lr = 0x8214D8D0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,18(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 18);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214dad0
	if (ctx.cr0.eq) goto loc_8214DAD0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r12,-22
	ctx.r12.s64 = -22;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// mulli r9,r4,720
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(720));
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// lwz r10,6056(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6056);
	// ld r8,104(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r12,5
	ctx.r12.s64 = 5;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rldicr r12,r12,50,13
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFC000000000000;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// or r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 | ctx.r12.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// std r8,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r8.u64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r8,28(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// li r26,255
	r26.s64 = 255;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r8.u32);
	// lfs f30,15048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	f30.f64 = double(temp.f32);
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lfs f28,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	f28.f64 = double(temp.f32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lfs f27,1396(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1396);
	f27.f64 = double(temp.f32);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f31,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f31.f64 = double(temp.f32);
	// fmuls f29,f0,f28
	f29.f64 = double(float(ctx.f0.f64 * f28.f64));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214da1c
	if (ctx.cr6.eq) goto loc_8214DA1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214da1c
	if (!ctx.cr6.gt) goto loc_8214DA1C;
	// fsubs f0,f31,f29
	ctx.f0.f64 = double(float(f31.f64 - f29.f64));
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stb r26,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r26.u8);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r26,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r26.u8);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r26,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r26.u8);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_8214D9C4:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r27,6096(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8214c110
	ctx.lr = 0x8214D9EC;
	sub_8214C110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82136128
	ctx.lr = 0x8214DA08;
	sub_82136128(ctx, base);
	// lwz r3,20(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214d9c4
	if (ctx.cr6.lt) goto loc_8214D9C4;
loc_8214DA1C:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214dad0
	if (ctx.cr6.eq) goto loc_8214DAD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8214dad0
	if (!ctx.cr6.gt) goto loc_8214DAD0;
	// fsubs f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f29.f64));
	// lfs f0,992(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r26,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r26.u8);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stb r26,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r26.u8);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r26,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r26.u8);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f29,108(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fnmsubs f0,f29,f0,f13
	ctx.f0.f64 = double(float(-std::fma(f29.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8214DA74:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r31,6096(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 6096);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8214c110
	ctx.lr = 0x8214DA9C;
	sub_8214C110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82136128
	ctx.lr = 0x8214DAB8;
	sub_82136128(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214da74
	if (ctx.cr6.lt) goto loc_8214DA74;
loc_8214DAD0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cf0
	ctx.lr = 0x8214DADC;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8215E070) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215E078) {
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
	ctx.lr = 0x8215E080;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8215e0a8
	if (!ctx.cr6.gt) goto loc_8215E0A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26548
	ctx.r3.s64 = ctx.r11.s64 + -26548;
	// bl 0x822f6020
	ctx.lr = 0x8215E0A8;
	sub_822F6020(ctx, base);
loc_8215E0A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x8215e174
	if (!ctx.cr6.lt) goto loc_8215E174;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r28,r25
	r28.u64 = r25.u64;
	// beq cr6,0x8215e0e0
	if (ctx.cr6.eq) goto loc_8215E0E0;
	// rlwinm r3,r26,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822f6280
	ctx.lr = 0x8215E0D8;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8215e17c
	if (ctx.cr0.eq) goto loc_8215E17C;
loc_8215E0E0:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r27,4(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8215e110
	goto loc_8215E110;
loc_8215E0F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8215e108
	if (ctx.cr6.eq) goto loc_8215E108;
	// stw r25,0(r29)
	REX_STORE_U32(r29.u32 + 0, r25.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215efb0
	ctx.lr = 0x8215E108;
	sub_8215EFB0(ctx, base);
loc_8215E108:
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
loc_8215E110:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// bne cr6,0x8215e0f0
	if (!ctx.cr6.eq) goto loc_8215E0F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// srawi r27,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r27.s64 = ctx.r10.s32 >> 4;
	// beq cr6,0x8215e158
	if (ctx.cr6.eq) goto loc_8215E158;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8215e150
	if (ctx.cr6.eq) goto loc_8215E150;
loc_8215E13C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8215E144;
	sub_8215F0F0(ctx, base);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x8215e13c
	if (!ctx.cr6.eq) goto loc_8215E13C;
loc_8215E150:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8215E158;
	sub_8269CE98(ctx, base);
loc_8215E158:
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8215E174:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8215E17C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8215E194;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82169990) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821699ec
	if (!ctx.cr0.eq) goto loc_821699EC;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x821699c0
	goto loc_821699C0;
loc_821699B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821699C0:
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821699b8
	if (ctx.cr0.eq) goto loc_821699B8;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_821699D4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821699fc
	if (!ctx.cr6.eq) goto loc_821699FC;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821699EC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821699d4
	if (ctx.cr0.eq) goto loc_821699D4;
loc_821699FC:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CFA0) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f3,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f2,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823fc568
	ctx.lr = 0x8216CFC8;
	sub_823FC568(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8216CFD8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8216cfd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216CFD8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbf60
	ctx.lr = 0x8216CFF4;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8216D004:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8216d004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216D004;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r31,-8
	ctx.r9.s64 = r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8216D020:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8216d020
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216D020;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82171B40) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x823eedb8
	ctx.lr = 0x82171B64;
	sub_823EEDB8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_82173E88) {
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
	ctx.lr = 0x82173E90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r27,r3,24
	r27.s64 = ctx.r3.s64 + 24;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x8216f9b8
	ctx.lr = 0x82173EB4;
	sub_8216F9B8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r11,r31,36
	ctx.r11.s64 = r31.s64 + 36;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x82173ED0;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82173EDC;
	sub_8269D1B8(ctx, base);
	// li r26,8
	r26.s64 = 8;
	// stw r29,36(r31)
	REX_STORE_U32(r31.u32 + 36, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,44(r31)
	REX_STORE_U32(r31.u32 + 44, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82120ac0
	ctx.lr = 0x82173EF8;
	sub_82120AC0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,1792
	ctx.r3.s64 = 1792;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r29,r31,108
	r29.s64 = r31.s64 + 108;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,116(r31)
	REX_STORE_U32(r31.u32 + 116, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x82173F14;
	sub_8269D1D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82173F20;
	sub_8269D1B8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r28,108(r31)
	REX_STORE_U32(r31.u32 + 108, r28.u32);
	// stw r26,116(r31)
	REX_STORE_U32(r31.u32 + 116, r26.u32);
	// addi r28,r31,120
	r28.s64 = r31.s64 + 120;
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x82173F44;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82173F50;
	sub_8269D1B8(ctx, base);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r26,128(r31)
	REX_STORE_U32(r31.u32 + 128, r26.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bge cr6,0x82173f98
	if (!ctx.cr6.lt) goto loc_82173F98;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x8269d1d0
	ctx.lr = 0x82173F70;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a1e70
	ctx.lr = 0x82173F84;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82173F8C;
	sub_8269D1B8(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
loc_82173F98:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82173fd8
	if (!ctx.cr6.lt) goto loc_82173FD8;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,3584
	ctx.r3.s64 = 3584;
	// bl 0x8269d1d0
	ctx.lr = 0x82173FB0;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mulli r5,r11,224
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(224));
	// bl 0x826a1e70
	ctx.lr = 0x82173FC4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82173FCC;
	sub_8269D1B8(ctx, base);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_82173FD8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x82174018
	if (!ctx.cr6.lt) goto loc_82174018;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x8269d1d0
	ctx.lr = 0x82173FF0;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82174004;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8217400C;
	sub_8269D1B8(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_82174018:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r30,r11,1040
	r30.s64 = ctx.r11.s64 + 1040;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bge cr6,0x82174060
	if (!ctx.cr6.lt) goto loc_82174060;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x8269d1d0
	ctx.lr = 0x82174038;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x826a1e70
	ctx.lr = 0x8217404C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82174054;
	sub_8269D1B8(ctx, base);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82174060:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82181070) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,31592
	ctx.r11.s64 = ctx.r11.s64 + 31592;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821810A8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821811f8
	if (ctx.cr0.eq) goto loc_821811F8;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,31208
	ctx.r4.s64 = ctx.r11.s64 + 31208;
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,20(r31)
	REX_STORE_U8(r31.u32 + 20, r30.u8);
	// bl 0x82181388
	ctx.lr = 0x821810D8;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x821810EC;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,31256
	ctx.r4.s64 = ctx.r11.s64 + 31256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x82181100;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,31284
	ctx.r4.s64 = ctx.r11.s64 + 31284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x82181114;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,31316
	ctx.r4.s64 = ctx.r11.s64 + 31316;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x82181128;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,31344
	ctx.r4.s64 = ctx.r11.s64 + 31344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x8218113C;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x82181150;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,31388
	ctx.r4.s64 = ctx.r11.s64 + 31388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x82181164;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r11,31416
	ctx.r4.s64 = ctx.r11.s64 + 31416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x82181178;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r11,31448
	ctx.r4.s64 = ctx.r11.s64 + 31448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x8218118C;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r11,31476
	ctx.r4.s64 = ctx.r11.s64 + 31476;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x821811A0;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r11,31500
	ctx.r4.s64 = ctx.r11.s64 + 31500;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x821811B4;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r11,31528
	ctx.r4.s64 = ctx.r11.s64 + 31528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x821811C8;
	sub_82181388(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// addi r4,r11,31560
	ctx.r4.s64 = ctx.r11.s64 + 31560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82181388
	ctx.lr = 0x821811DC;
	sub_82181388(ctx, base);
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
loc_821811F8:
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
	ctx.lr = 0x82181210;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8218D788) {
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
	// addi r11,r11,-32280
	ctx.r11.s64 = ctx.r11.s64 + -32280;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821d3be0
	ctx.lr = 0x8218D7B4;
	sub_821D3BE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218d7c4
	if (ctx.cr0.eq) goto loc_8218D7C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8218D7C4;
	sub_8269CE98(ctx, base);
loc_8218D7C4:
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

DEFINE_REX_FUNC(sub_8218F278) {
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
	// bl 0x826a1c94
	ctx.lr = 0x8218F280;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r25,r11,32
	r25.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8218f4e4
	if (!ctx.cr6.gt) goto loc_8218F4E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r24,-32243
	r24.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r7,r3,212
	ctx.r7.s64 = ctx.r3.s64 + 212;
	// lfs f11,15048(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 15048);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r3,196
	ctx.r6.s64 = ctx.r3.s64 + 196;
	// lfs f9,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r3,244
	ctx.r5.s64 = ctx.r3.s64 + 244;
	// lfs f13,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r3,208
	r31.s64 = ctx.r3.s64 + 208;
	// lfs f8,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// addi r30,r3,192
	r30.s64 = ctx.r3.s64 + 192;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r3,240
	r29.s64 = ctx.r3.s64 + 240;
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r26,r4,96
	r26.s64 = ctx.r4.s64 + 96;
	// addi r28,r10,-27152
	r28.s64 = ctx.r10.s64 + -27152;
	// addi r9,r9,-27136
	ctx.r9.s64 = ctx.r9.s64 + -27136;
loc_8218F2EC:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f6,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f4,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f2,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f6,f5,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f5.f64, ctx.f10.f64)));
	// fmadds f12,f4,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f12.f64)));
	// fadds f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fabs f6,f10
	ctx.f6.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fcmpu cr6,f5,f11
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// mfcr r24
	r24.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r24.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r24.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r24.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r24.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r24.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r24.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r24.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r24.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r24.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r24.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r24.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r24.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r24.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r24.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r24.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r24.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r24.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r24.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r24.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r24.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r24.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r24.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r24.u64 |= ctx.cr5.so ? 0x100 : 0;
	r24.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r24.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r24.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r24.u64 |= ctx.cr6.so ? 0x10 : 0;
	r24.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r24.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r24.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r24.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r23,r24,27,29,29
	r23.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 27) & 0x4;
	// rlwinm r24,r24,30,29,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x4;
	// or r24,r23,r24
	r24.u64 = r23.u64 | r24.u64;
	// lfsx f5,r10,r24
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f6,f5,f12,f6
	ctx.f6.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x8218f4c8
	if (!ctx.cr6.lt) goto loc_8218F4C8;
	// fmadds f6,f10,f13,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f13.f64)));
	// addi r24,r11,256
	r24.s64 = ctx.r11.s64 + 256;
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// addi r23,r1,-144
	r23.s64 = ctx.r1.s64 + -144;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,-160
	r22.s64 = ctx.r1.s64 + -160;
	// addi r21,r1,-152
	r21.s64 = ctx.r1.s64 + -152;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// mfcr r20
	r20.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r20.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r20.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r20.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r20.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r20.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r20.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r20.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r20.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r20.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r20.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r20.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r20.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r20.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r20.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r20.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r20.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r20.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r20.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r20.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r20.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r20.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r20.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r20.u64 |= ctx.cr5.so ? 0x100 : 0;
	r20.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r20.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r20.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r20.u64 |= ctx.cr6.so ? 0x10 : 0;
	r20.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r20.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r20.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r20.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f6,f5,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// rlwinm r19,r20,27,29,29
	r19.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 27) & 0x4;
	// rlwinm r20,r20,30,29,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x4;
	// or r20,r19,r20
	r20.u64 = r19.u64 | r20.u64;
	// lfsx f4,r24,r20
	temp.u32 = REX_LOAD_U32(r24.u32 + r20.u32);
	ctx.f4.f64 = double(temp.f32);
	// fctidz f6,f6
	ctx.f6.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fnmsubs f6,f6,f8,f5
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f8.f64, -ctx.f5.f64)));
	// fsubs f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f6,f4,f6,f5
	ctx.f6.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
	// stfs f6,-140(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// stfs f5,-136(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// fmuls f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f6,-132(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v60,v61,v62
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v60,r0,r22
	ea = (r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r21
	ea = (r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f6,108(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f4.f64 = double(temp.f32);
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmuls f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// fmuls f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// ble cr6,0x8218f4bc
	if (!ctx.cr6.gt) goto loc_8218F4BC;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// fsubs f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r24,r1,-128
	r24.s64 = ctx.r1.s64 + -128;
	// addi r23,r1,-156
	r23.s64 = ctx.r1.s64 + -156;
	// addi r22,r1,-152
	r22.s64 = ctx.r1.s64 + -152;
	// fdivs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fmadds f12,f12,f13,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f13.f64)));
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// mfcr r21
	r21.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r21.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r21.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r21.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r21.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r21.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r21.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r21.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r21.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r21.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r21.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r21.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r21.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r21.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r21.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r21.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r21.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r21.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r21.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r21.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r21.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r21.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r21.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r21.u64 |= ctx.cr5.so ? 0x100 : 0;
	r21.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r21.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r21.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r21.u64 |= ctx.cr6.so ? 0x10 : 0;
	r21.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r21.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r21.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r21.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// rlwinm r20,r21,27,29,29
	r20.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 27) & 0x4;
	// rlwinm r21,r21,30,29,29
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 30) & 0x4;
	// or r21,r20,r21
	r21.u64 = r20.u64 | r21.u64;
	// lfsx f5,r10,r21
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	ctx.f5.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f12,f12,f8,f10
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f8.f64, -ctx.f10.f64)));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f12,f5,f12,f10
	ctx.f12.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f10.f64;
	// stfs f12,-124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f10,-120(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,-116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// lvx128 v63,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v62,v60,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v60,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v62,r0,r23
	ea = (r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r22
	ea = (r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-156(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
loc_8218F4BC:
	// lfs f12,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f10,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f12.f64)));
	// stfs f12,0(r25)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
loc_8218F4C8:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r24,0(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// blt cr6,0x8218f2ec
	if (ctx.cr6.lt) goto loc_8218F2EC;
loc_8218F4E4:
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_821AB628) {
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
	ctx.lr = 0x821AB630;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,96(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x821626c0
	ctx.lr = 0x821AB648;
	sub_821626C0(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821626c0
	ctx.lr = 0x821AB654;
	sub_821626C0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mulli r30,r11,48
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,20(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821AB678;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AB684;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AB690;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x82125c20
	ctx.lr = 0x821AB6A0;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AB6AC;
	sub_82125C98(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x821AB6B8;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// bl 0x82125c20
	ctx.lr = 0x821AB6C8;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821AB6D4;
	sub_82125C98(ctx, base);
	// lbz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821B1388) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1428) {
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
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x822f6280
	ctx.lr = 0x821B143C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b144c
	if (ctx.cr0.eq) goto loc_821B144C;
	// bl 0x821b1460
	ctx.lr = 0x821B1448;
	sub_821B1460(ctx, base);
	// b 0x821b1450
	goto loc_821B1450;
loc_821B144C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1450:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B37F0) {
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
	// lwz r3,200(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b3854
	if (ctx.cr6.eq) goto loc_821B3854;
	// bl 0x821357c8
	ctx.lr = 0x821B3814;
	sub_821357C8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b383c
	if (ctx.cr6.eq) goto loc_821B383C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-22388
	ctx.r4.s64 = ctx.r11.s64 + -22388;
	// addi r3,r10,-22344
	ctx.r3.s64 = ctx.r10.s64 + -22344;
	// li r5,155
	ctx.r5.s64 = 155;
	// bl 0x821231d0
	ctx.lr = 0x821B383C;
	sub_821231D0(ctx, base);
loc_821B383C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,200(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B384C;
	sub_82149AF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
loc_821B3854:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6048(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B3870;
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

DEFINE_REX_FUNC(sub_821B6A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B6A38;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B6A50:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6a50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6A50;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,64
	ctx.r8.s64 = ctx.r11.s64 + 64;
	// lfs f13,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// li r3,144
	ctx.r3.s64 = 144;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// ld r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfs f10,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f9,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lwz r29,6168(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 6168);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B6AB4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b6acc
	if (ctx.cr0.eq) goto loc_821B6ACC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8218cc78
	ctx.lr = 0x821B6AC4;
	sub_8218CC78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821b6ad0
	goto loc_821B6AD0;
loc_821B6ACC:
	// li r30,0
	r30.s64 = 0;
loc_821B6AD0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r29,56
	ctx.r3.s64 = r29.s64 + 56;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// bl 0x8214abd8
	ctx.lr = 0x821B6AEC;
	sub_8214ABD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B6AF8;
	sub_82149E08(ctx, base);
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BE228) {
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
	ctx.lr = 0x821BE230;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821BE244:
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a06d8
	ctx.lr = 0x821BE258;
	sub_826A06D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x821BE264;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BE270;
	sub_821DD040(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BE284;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821be2a8
	if (ctx.cr6.eq) goto loc_821BE2A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BE2A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BE2A8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x821be244
	if (ctx.cr6.lt) goto loc_821BE244;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821C0E48) {
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
	// lbz r11,204(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c0e78
	if (!ctx.cr0.eq) goto loc_821C0E78;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,124(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 124);
	// stb r11,204(r4)
	REX_STORE_U8(ctx.r4.u32 + 204, ctx.r11.u8);
	// bl 0x821914c8
	ctx.lr = 0x821C0E78;
	sub_821914C8(ctx, base);
loc_821C0E78:
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

DEFINE_REX_FUNC(sub_821C39E0) {
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
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,80(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,60(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// lwz r8,56(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r7,52(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3A8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3ABC;
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

DEFINE_REX_FUNC(sub_821CA420) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14756
	ctx.r3.s64 = ctx.r11.s64 + -14756;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CA9B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// bl 0x8216b740
	ctx.lr = 0x821CA9E0;
	sub_8216B740(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82125d00
	ctx.lr = 0x821CA9EC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821caa48
	if (!ctx.cr0.eq) goto loc_821CAA48;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15884
	ctx.r4.s64 = ctx.r11.s64 + -15884;
	// bl 0x82120600
	ctx.lr = 0x821CAA04;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821dd040
	ctx.lr = 0x821CAA10;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CAA38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821CAA48;
	sub_82120AC0(ctx, base);
loc_821CAA48:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D0498) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d04d4
	if (ctx.cr6.eq) goto loc_821D04D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r4,132
	ctx.r5.s64 = ctx.r4.s64 + 132;
	// addi r4,r4,116
	ctx.r4.s64 = ctx.r4.s64 + 116;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D04D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821D04D4:
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

DEFINE_REX_FUNC(sub_821D3B90) {
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
	// bl 0x821d3be0
	ctx.lr = 0x821D3BB0;
	sub_821D3BE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d3bc0
	if (ctx.cr0.eq) goto loc_821D3BC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D3BC0;
	sub_8269CE98(ctx, base);
loc_821D3BC0:
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

DEFINE_REX_FUNC(sub_821D5BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821D5BD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bne cr6,0x821d5c38
	if (!ctx.cr6.eq) goto loc_821D5C38;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5c74
	if (ctx.cr6.eq) goto loc_821D5C74;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d5c2c
	goto loc_821D5C2C;
loc_821D5C0C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d6640
	ctx.lr = 0x821D5C20;
	sub_821D6640(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
loc_821D5C2C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d5c0c
	if (!ctx.cr6.eq) goto loc_821D5C0C;
	// b 0x821d5c74
	goto loc_821D5C74;
loc_821D5C38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d5c74
	if (ctx.cr6.eq) goto loc_821D5C74;
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d5c6c
	goto loc_821D5C6C;
loc_821D5C4C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d69e8
	ctx.lr = 0x821D5C60;
	sub_821D69E8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
loc_821D5C6C:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d5c4c
	if (!ctx.cr6.eq) goto loc_821D5C4C;
loc_821D5C74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821DB110) {
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
	// bl 0x826a1c8c
	ctx.lr = 0x821DB118;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821db148
	if (!ctx.cr6.eq) goto loc_821DB148;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821db14c
	goto loc_821DB14C;
loc_821DB148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DB14C:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821db560
	ctx.lr = 0x821DB158;
	sub_821DB560(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821db2ec
	if (!ctx.cr6.gt) goto loc_821DB2EC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// li r23,0
	r23.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// addi r20,r11,23068
	r20.s64 = ctx.r11.s64 + 23068;
	// addi r19,r10,23064
	r19.s64 = ctx.r10.s64 + 23064;
	// addi r27,r9,23060
	r27.s64 = ctx.r9.s64 + 23060;
	// addi r18,r8,-26856
	r18.s64 = ctx.r8.s64 + -26856;
	// addi r26,r7,22564
	r26.s64 = ctx.r7.s64 + 22564;
	// addi r25,r6,11696
	r25.s64 = ctx.r6.s64 + 11696;
	// addi r24,r5,-17296
	r24.s64 = ctx.r5.s64 + -17296;
loc_821DB1AC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821DB1B8;
	sub_8215F1B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r30,r11,r21
	r30.u64 = ctx.r11.u64 + r21.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x821DB1D4;
	sub_826A2E60(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DB1E0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821db204
	if (!ctx.cr6.eq) goto loc_821DB204;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821db208
	if (ctx.cr6.lt) goto loc_821DB208;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821db208
	goto loc_821DB208;
loc_821DB204:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_821DB208:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821DB20C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821db20c
	if (!ctx.cr6.eq) goto loc_821DB20C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bgt cr6,0x821db32c
	if (ctx.cr6.gt) goto loc_821DB32C;
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
loc_821DB238:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x821db238
	if (!ctx.cr0.eq) goto loc_821DB238;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r10,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8215f338
	ctx.lr = 0x821DB268;
	sub_8215F338(ctx, base);
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// bl 0x8215fb00
	ctx.lr = 0x821DB270;
	sub_8215FB00(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DB284;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DB290;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82166f38
	ctx.lr = 0x821DB298;
	sub_82166F38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821db2d0
	if (ctx.cr0.eq) goto loc_821DB2D0;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DB2AC;
	sub_8215F338(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82166e78
	ctx.lr = 0x821DB2B4;
	sub_82166E78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821db2d0
	if (ctx.cr0.eq) goto loc_821DB2D0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DB2C8;
	sub_8215F338(ctx, base);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x82166f38
	ctx.lr = 0x821DB2D0;
	sub_82166F38(ctx, base);
loc_821DB2D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r21,r21,32
	r21.s64 = r21.s64 + 32;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r23,r23,48
	r23.s64 = r23.s64 + 48;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821db1ac
	if (ctx.cr6.lt) goto loc_821DB1AC;
loc_821DB2EC:
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r27,24(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt 0x821db334
	if (ctx.cr0.gt) goto loc_821DB334;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,1072
	ctx.r9.s64 = ctx.r11.s64 + 1072;
	// ld r11,1072(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 1072);
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// ld r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r9,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r9.u64);
	// b 0x821db3e0
	goto loc_821DB3E0;
loc_821DB32C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821db46c
	goto loc_821DB46C;
loc_821DB334:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f0,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// ble cr6,0x821db3b8
	if (!ctx.cr6.gt) goto loc_821DB3B8;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_821DB39C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82176218
	ctx.lr = 0x821DB3AC;
	sub_82176218(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// bne 0x821db39c
	if (!ctx.cr0.eq) goto loc_821DB39C;
loc_821DB3B8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r11,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
loc_821DB3E0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// std r9,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r9.u64);
	// std r8,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r8.u64);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// bl 0x821ec240
	ctx.lr = 0x821DB418;
	sub_821EC240(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821db468
	if (!ctx.cr6.gt) goto loc_821DB468;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_821DB430:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// add r3,r29,r10
	ctx.r3.u64 = r29.u64 + ctx.r10.u64;
	// bl 0x821ec898
	ctx.lr = 0x821DB444;
	sub_821EC898(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8216ab58
	ctx.lr = 0x821DB450;
	sub_8216AB58(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821db430
	if (ctx.cr6.lt) goto loc_821DB430;
loc_821DB468:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821DB46C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_821F4D68) {
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
	ctx.lr = 0x821F4D70;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f4dac
	if (ctx.cr6.eq) goto loc_821F4DAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x821231d0
	ctx.lr = 0x821F4DAC;
	sub_821231D0(ctx, base);
loc_821F4DAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F4DC0;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23108
	ctx.r4.s64 = ctx.r11.s64 + 23108;
	// bl 0x8215f338
	ctx.lr = 0x821F4DCC;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r11,-16680
	r26.s64 = ctx.r11.s64 + -16680;
loc_821F4DDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f4df4
	if (!ctx.cr6.eq) goto loc_821F4DF4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821f4df8
	goto loc_821F4DF8;
loc_821F4DF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4DF8:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821f4ed0
	if (!ctx.cr6.lt) goto loc_821F4ED0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f530
	ctx.lr = 0x821F4E0C;
	sub_8215F530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F4E18;
	sub_8215F2D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x821F4E28;
	sub_82120600(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// bl 0x821f6130
	ctx.lr = 0x821F4E3C;
	sub_821F6130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f4e54
	if (ctx.cr0.eq) goto loc_821F4E54;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821f4e58
	if (ctx.cr6.eq) goto loc_821F4E58;
loc_821F4E54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F4E58:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x821f4e78
	if (ctx.cr0.eq) goto loc_821F4E78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821F4E78;
	sub_82120AC0(ctx, base);
loc_821F4E78:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f4e88
	if (!ctx.cr0.eq) goto loc_821F4E88;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// b 0x821f4ddc
	goto loc_821F4DDC;
loc_821F4E88:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,23052
	ctx.r4.s64 = ctx.r11.s64 + 23052;
	// bl 0x82120600
	ctx.lr = 0x821F4E98;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F4EA4;
	sub_8215F2D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215fba8
	ctx.lr = 0x821F4EAC;
	sub_8215FBA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82120ac0
	ctx.lr = 0x821F4EC8;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821f4ed4
	goto loc_821F4ED4;
loc_821F4ED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F4ED4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821FD1F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FD868) {
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
	ctx.lr = 0x821FD870;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r20,0
	r20.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// addi r25,r11,-26856
	r25.s64 = ctx.r11.s64 + -26856;
	// addi r24,r10,26312
	r24.s64 = ctx.r10.s64 + 26312;
	// addi r23,r9,26296
	r23.s64 = ctx.r9.s64 + 26296;
	// addi r28,r8,-17296
	r28.s64 = ctx.r8.s64 + -17296;
	// addi r27,r7,26288
	r27.s64 = ctx.r7.s64 + 26288;
loc_821FD8B4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821fd8d8
	if (!ctx.cr6.eq) goto loc_821FD8D8;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821fd8dc
	goto loc_821FD8DC;
loc_821FD8D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FD8DC:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fda24
	if (!ctx.cr6.lt) goto loc_821FDA24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FD8F0;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821fda18
	if (ctx.cr6.eq) goto loc_821FDA18;
	// lwz r3,6152(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FD910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fd964
	if (ctx.cr0.eq) goto loc_821FD964;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FD924;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FD92C;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FD934;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821fd958
	if (!ctx.cr6.eq) goto loc_821FD958;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821fd95c
	if (ctx.cr6.lt) goto loc_821FD95C;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x821fd95c
	goto loc_821FD95C;
loc_821FD958:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_821FD95C:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x821fd96c
	goto loc_821FD96C;
loc_821FD964:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_821FD96C:
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a1a58
	ctx.lr = 0x821FD978;
	sub_826A1A58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FD984;
	sub_8215F1B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821fd7a0
	ctx.lr = 0x821FD98C;
	sub_821FD7A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821fda18
	if (ctx.cr0.eq) goto loc_821FDA18;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// lwz r10,84(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 84);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// ble cr6,0x821fd9dc
	if (!ctx.cr6.gt) goto loc_821FD9DC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r3,r21,r11
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	// bl 0x82151d50
	ctx.lr = 0x821FD9B8;
	sub_82151D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fd9dc
	if (ctx.cr0.eq) goto loc_821FD9DC;
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224c2c8
	ctx.lr = 0x821FD9DC;
	sub_8224C2C8(ctx, base);
loc_821FD9DC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FD9F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FDA08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fda18
	if (ctx.cr0.eq) goto loc_821FDA18;
	// stw r20,744(r31)
	REX_STORE_U32(r31.u32 + 744, r20.u32);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
loc_821FDA18:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x821fd8b4
	goto loc_821FD8B4;
loc_821FDA24:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x821FDA48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FDA5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x821FDA70;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x821FDA7C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821FDA80;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,128
	ctx.r3.s64 = r29.s64 + 128;
	// bl 0x82249c68
	ctx.lr = 0x821FDA8C;
	sub_82249C68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fdaac
	if (!ctx.cr0.eq) goto loc_821FDAAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26164
	ctx.r4.s64 = ctx.r11.s64 + 26164;
	// addi r3,r10,26328
	ctx.r3.s64 = ctx.r10.s64 + 26328;
	// li r5,297
	ctx.r5.s64 = 297;
	// bl 0x821231d0
	ctx.lr = 0x821FDAAC;
	sub_821231D0(ctx, base);
loc_821FDAAC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8220C1B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
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

DEFINE_REX_FUNC(sub_8220C708) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,624(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8220DD90) {
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
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x822f6280
	ctx.lr = 0x8220DDA8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220ddcc
	if (ctx.cr0.eq) goto loc_8220DDCC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220DDB8;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-30660
	ctx.r11.s64 = ctx.r11.s64 + -30660;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8220ddd0
	goto loc_8220DDD0;
loc_8220DDCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220DDD0:
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

DEFINE_REX_FUNC(sub_82210648) {
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
	// bl 0x822e99c8
	ctx.lr = 0x82210668;
	sub_822E99C8(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821678f0
	ctx.lr = 0x8221067C;
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
	ctx.lr = 0x82210694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 280);
	// lfs f0,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822106ac
	if (!ctx.cr0.eq) goto loc_822106AC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822106AC:
	// lfs f13,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 392);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f11,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f13,f12
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
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
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f12,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 392, temp.u32);
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

DEFINE_REX_FUNC(sub_82222850) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,32576
	ctx.r10.s64 = ctx.r10.s64 + 32576;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x822228A0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822228cc
	if (ctx.cr0.eq) goto loc_822228CC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,8808
	ctx.r10.s64 = ctx.r10.s64 + 8808;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822228d0
	goto loc_822228D0;
loc_822228CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822228D0:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7a50
	ctx.lr = 0x822228DC;
	sub_822E7A50(ctx, base);
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

DEFINE_REX_FUNC(sub_82228088) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x822f6280
	ctx.lr = 0x8222809C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822280ac
	if (ctx.cr0.eq) goto loc_822280AC;
	// bl 0x822280c0
	ctx.lr = 0x822280A8;
	sub_822280C0(ctx, base);
	// b 0x822280b0
	goto loc_822280B0;
loc_822280AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822280B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82228A90) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x822f6280
	ctx.lr = 0x82228AA4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228ab4
	if (ctx.cr0.eq) goto loc_82228AB4;
	// bl 0x82228ac8
	ctx.lr = 0x82228AB0;
	sub_82228AC8(ctx, base);
	// b 0x82228ab8
	goto loc_82228AB8;
loc_82228AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82228AB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229A68) {
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
	// blt cr6,0x82229a9c
	if (ctx.cr6.lt) goto loc_82229A9C;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82229A9C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82229AA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82229aa0
	if (!ctx.cr6.eq) goto loc_82229AA0;
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
	ctx.lr = 0x82229ACC;
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
	ctx.lr = 0x82229AE4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x8216bc98
	ctx.lr = 0x82229AF4;
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

DEFINE_REX_FUNC(sub_8222C1F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8222C1F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8222c270
	if (!ctx.cr6.eq) goto loc_8222C270;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8217f7f0
	ctx.lr = 0x8222C21C;
	sub_8217F7F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-23944
	ctx.r3.s64 = ctx.r11.s64 + -23944;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x8222C230;
	sub_82162AF8(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222c248
	if (!ctx.cr6.eq) goto loc_8222C248;
	// addi r3,r29,-112
	ctx.r3.s64 = r29.s64 + -112;
	// bl 0x8222c548
	ctx.lr = 0x8222C244;
	sub_8222C548(ctx, base);
	// b 0x8222c268
	goto loc_8222C268;
loc_8222C248:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-23932
	ctx.r3.s64 = ctx.r11.s64 + -23932;
	// bl 0x82162af8
	ctx.lr = 0x8222C258;
	sub_82162AF8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222c268
	if (!ctx.cr6.eq) goto loc_8222C268;
	// addi r3,r29,-112
	ctx.r3.s64 = r29.s64 + -112;
	// bl 0x8222c6c0
	ctx.lr = 0x8222C268;
	sub_8222C6C0(ctx, base);
loc_8222C268:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8222c274
	goto loc_8222C274;
loc_8222C270:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222C274:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822308B0) {
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
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822308DC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x822308dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822308DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f1,908(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821c9318
	ctx.lr = 0x822308FC;
	sub_821C9318(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6096(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r11,176
	ctx.r7.s64 = ctx.r11.s64 + 176;
	// bl 0x82139388
	ctx.lr = 0x8223094C;
	sub_82139388(ctx, base);
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

DEFINE_REX_FUNC(sub_82236B78) {
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
	// lbz r11,872(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 872);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82236c10
	if (ctx.cr0.eq) goto loc_82236C10;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r3,784
	ctx.r4.s64 = ctx.r3.s64 + 784;
	// stb r11,872(r3)
	REX_STORE_U8(ctx.r3.u32 + 872, ctx.r11.u8);
	// lwz r11,804(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 804);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82236bb8
	if (ctx.cr6.lt) goto loc_82236BB8;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_82236BB8:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// bl 0x82150fc0
	ctx.lr = 0x82236BC8;
	sub_82150FC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82236c10
	if (ctx.cr0.eq) goto loc_82236C10;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// bl 0x82151118
	ctx.lr = 0x82236BD8;
	sub_82151118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82236c10
	if (ctx.cr0.eq) goto loc_82236C10;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236BFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236C10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82236C10:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,140(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8223EBD8) {
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
	ctx.lr = 0x8223EBE0;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223EC08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r22,3848(r29)
	r22.u64 = REX_LOAD_U32(r29.u32 + 3848);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,-27048
	ctx.r4.s64 = ctx.r10.s64 + -27048;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223EC28;
	sub_8215F670(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EC30;
	sub_8215F0F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// lbz r31,113(r29)
	r31.u64 = REX_LOAD_U8(r29.u32 + 113);
	// bl 0x8215f670
	ctx.lr = 0x8223EC44;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EC4C;
	sub_8215F0F0(ctx, base);
	// li r19,3
	r19.s64 = 3;
	// stb r31,8(r28)
	REX_STORE_U8(r28.u32 + 8, r31.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r16,r11,-26752
	r16.s64 = ctx.r11.s64 + -26752;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223EC6C;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x8223EC74;
	sub_8215FC78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x8223EC80;
	sub_8215DC10(ctx, base);
	// lwz r11,304(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 304);
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8223ec94
	if (ctx.cr6.gt) goto loc_8223EC94;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8223EC94:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223ECA0;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x8223ECA8;
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
	// blt cr6,0x8223ecc8
	if (ctx.cr6.lt) goto loc_8223ECC8;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8223eccc
	goto loc_8223ECCC;
loc_8223ECC8:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8223ECCC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26828
	ctx.r4.s64 = ctx.r11.s64 + -26828;
	// bl 0x8215f670
	ctx.lr = 0x8223ECDC;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x8223ECE4;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24968
	ctx.r4.s64 = ctx.r11.s64 + -24968;
	// lfs f31,28(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 28);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x8223ECF8;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223ED00;
	sub_8215F0F0(ctx, base);
	// li r15,2
	r15.s64 = 2;
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r15,0(r28)
	REX_STORE_U32(r28.u32 + 0, r15.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24932
	ctx.r4.s64 = ctx.r11.s64 + -24932;
	// lwz r28,16(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 16);
	// bl 0x8215f670
	ctx.lr = 0x8223ED20;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223ED28;
	sub_8215F0F0(ctx, base);
	// li r23,1
	r23.s64 = 1;
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r23,0(r27)
	REX_STORE_U32(r27.u32 + 0, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// lfs f31,24(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 24);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x8223ED48;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223ED50;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r15,0(r28)
	REX_STORE_U32(r28.u32 + 0, r15.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223ED6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-24740
	ctx.r4.s64 = ctx.r11.s64 + -24740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223ED80;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223ED88;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r27)
	REX_STORE_U8(r27.u32 + 8, r28.u8);
	// stw r19,0(r27)
	REX_STORE_U32(r27.u32 + 0, r19.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223EDA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-26744
	ctx.r4.s64 = ctx.r11.s64 + -26744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223EDB8;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EDC0;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r27)
	REX_STORE_U8(r27.u32 + 8, r28.u8);
	// stw r19,0(r27)
	REX_STORE_U32(r27.u32 + 0, r19.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17788
	ctx.r4.s64 = ctx.r11.s64 + -17788;
	// addi r28,r30,208
	r28.s64 = r30.s64 + 208;
	// bl 0x8215f670
	ctx.lr = 0x8223EDDC;
	sub_8215F670(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8223edf0
	if (ctx.cr6.lt) goto loc_8223EDF0;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8223edf4
	goto loc_8223EDF4;
loc_8223EDF0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8223EDF4:
	// bl 0x8215fbf8
	ctx.lr = 0x8223EDF8;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24944
	ctx.r4.s64 = ctx.r11.s64 + -24944;
	// lbz r28,224(r22)
	r28.u64 = REX_LOAD_U8(r22.u32 + 224);
	// bl 0x8215f670
	ctx.lr = 0x8223EE0C;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EE14;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r27)
	REX_STORE_U8(r27.u32 + 8, r28.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r19,0(r27)
	REX_STORE_U32(r27.u32 + 0, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24748
	ctx.r4.s64 = ctx.r11.s64 + -24748;
	// addi r30,r30,236
	r30.s64 = r30.s64 + 236;
	// bl 0x8215f670
	ctx.lr = 0x8223EE30;
	sub_8215F670(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8223ee44
	if (ctx.cr6.lt) goto loc_8223EE44;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8223ee48
	goto loc_8223EE48;
loc_8223EE44:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8223EE48:
	// bl 0x8215fbf8
	ctx.lr = 0x8223EE4C;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17028
	ctx.r4.s64 = ctx.r11.s64 + -17028;
	// lwz r31,304(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 304);
	// bl 0x8215f670
	ctx.lr = 0x8223EE60;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EE68;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r23,0(r30)
	REX_STORE_U32(r30.u32 + 0, r23.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r31,r29,124
	r31.s64 = r29.s64 + 124;
	// addi r30,r29,3776
	r30.s64 = r29.s64 + 3776;
	// bl 0x8227a148
	ctx.lr = 0x8223EE84;
	sub_8227A148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223EE8C;
	sub_8215F2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223EE94;
	sub_8215F2D0(ctx, base);
	// addi r4,r29,3804
	ctx.r4.s64 = r29.s64 + 3804;
	// bl 0x8215f2d0
	ctx.lr = 0x8223EE9C;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// addi r21,r11,-16992
	r21.s64 = ctx.r11.s64 + -16992;
	// addi r20,r10,-24760
	r20.s64 = ctx.r10.s64 + -24760;
	// addi r27,r9,-24772
	r27.s64 = ctx.r9.s64 + -24772;
	// addi r26,r8,-24784
	r26.s64 = ctx.r8.s64 + -24784;
	// addi r25,r7,-17012
	r25.s64 = ctx.r7.s64 + -17012;
loc_8223EED0:
	// lwz r11,304(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 304);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223eee0
	if (!ctx.cr6.eq) goto loc_8223EEE0;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8223EEE0:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223EEEC;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f200
	ctx.lr = 0x8223EEF4;
	sub_8215F200(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x826a0568
	ctx.lr = 0x8223EF0C;
	sub_826A0568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223EF18;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EF20;
	sub_8215F0F0(ctx, base);
	// stw r19,0(r29)
	REX_STORE_U32(r29.u32 + 0, r19.u32);
	// stb r23,8(r29)
	REX_STORE_U8(r29.u32 + 8, r23.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6140(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223EF40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223EF50;
	sub_8215F670(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8223ef64
	if (ctx.cr6.lt) goto loc_8223EF64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8223ef68
	goto loc_8223EF68;
loc_8223EF64:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8223EF68:
	// bl 0x8215fbf8
	ctx.lr = 0x8223EF6C;
	sub_8215FBF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8223EF78;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x8223EF7C;
	sub_8215F9E0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8215f670
	ctx.lr = 0x8223EF8C;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EF94;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stw r15,0(r29)
	REX_STORE_U32(r29.u32 + 0, r15.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223EFA8;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223EFB0;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// blt cr6,0x8223eed0
	if (ctx.cr6.lt) goto loc_8223EED0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82256C30) {
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
	ctx.lr = 0x82256C38;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256C5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82256C70;
	sub_82120AC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257248
	ctx.lr = 0x82256C7C;
	sub_82257248(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r25,r11,-19348
	r25.s64 = ctx.r11.s64 + -19348;
	// li r28,4
	r28.s64 = 4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r27,7
	r27.s64 = 7;
	// li r26,4
	r26.s64 = 4;
	// bl 0x82125d00
	ctx.lr = 0x82256C9C;
	sub_82125D00(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r22,r11,23080
	r22.s64 = ctx.r11.s64 + 23080;
	// bne 0x82256cb8
	if (!ctx.cr0.eq) goto loc_82256CB8;
	// li r28,0
	r28.s64 = 0;
	// li r26,10
	r26.s64 = 10;
	// b 0x82256cd4
	goto loc_82256CD4;
loc_82256CB8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82125d00
	ctx.lr = 0x82256CC4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82256cd8
	if (!ctx.cr0.eq) goto loc_82256CD8;
	// li r28,10
	r28.s64 = 10;
	// li r26,0
	r26.s64 = 0;
loc_82256CD4:
	// li r27,5
	r27.s64 = 5;
loc_82256CD8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122488
	ctx.lr = 0x82256CE0;
	sub_82122488(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,22808
	r30.s64 = ctx.r11.s64 + 22808;
	// addi r23,r10,32412
	r23.s64 = ctx.r10.s64 + 32412;
loc_82256CF4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82256D04;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82256d1c
	if (!ctx.cr6.eq) goto loc_82256D1C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82256d20
	goto loc_82256D20;
loc_82256D1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82256D20:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82256d84
	if (!ctx.cr6.lt) goto loc_82256D84;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82256D38;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f530
	ctx.lr = 0x82256D40;
	sub_8215F530(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82256D54;
	sub_8215F338(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82256D5C;
	sub_8215F2D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8215f338
	ctx.lr = 0x82256D64;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82256D68;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122518
	ctx.lr = 0x82256D74;
	sub_82122518(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82122730
	ctx.lr = 0x82256D7C;
	sub_82122730(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82256cf4
	goto loc_82256CF4;
loc_82256D84:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120600
	ctx.lr = 0x82256D90;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122518
	ctx.lr = 0x82256D9C;
	sub_82122518(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82256f10
	ctx.lr = 0x82256DB4;
	sub_82256F10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82256DC4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x82120600
	ctx.lr = 0x82256DD4;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122518
	ctx.lr = 0x82256DE0;
	sub_82122518(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82256f10
	ctx.lr = 0x82256DF8;
	sub_82256F10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82256E08;
	sub_82120AC0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x82256E14;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122518
	ctx.lr = 0x82256E20;
	sub_82122518(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82256f10
	ctx.lr = 0x82256E38;
	sub_82256F10(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x82256E48;
	sub_82120AC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x821a35c0
	ctx.lr = 0x82256E54;
	sub_821A35C0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r1,240
	r29.s64 = ctx.r1.s64 + 240;
	// lis r25,-32106
	r25.s64 = -2104098816;
	// addi r28,r10,-17296
	r28.s64 = ctx.r10.s64 + -17296;
	// addi r27,r9,26288
	r27.s64 = ctx.r9.s64 + 26288;
	// addi r26,r11,-26680
	r26.s64 = ctx.r11.s64 + -26680;
loc_82256E78:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x826a0568
	ctx.lr = 0x82256E8C;
	sub_826A0568(ctx, base);
	// lwz r3,6140(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6140);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256EA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f200
	ctx.lr = 0x82256EB4;
	sub_8215F200(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x82256EBC;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82256EC4;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82256ed8
	if (ctx.cr6.lt) goto loc_82256ED8;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82256edc
	goto loc_82256EDC;
loc_82256ED8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82256EDC:
	// bl 0x8215fbf8
	ctx.lr = 0x82256EE0;
	sub_8215FBF8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// blt cr6,0x82256e78
	if (ctx.cr6.lt) goto loc_82256E78;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821225f8
	ctx.lr = 0x82256EF8;
	sub_821225F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82256F08;
	sub_82120AC0(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8226A5D0) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x8226A5D8;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2ca8
	ctx.lr = 0x8226A5E0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 48);
	// lfs f12,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r10,16592
	r30.s64 = ctx.r10.s64 + 16592;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// li r28,255
	r28.s64 = 255;
	// lfs f11,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,60(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// fadds f28,f1,f0
	f28.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stb r28,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r28,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// stb r28,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// fnmsubs f0,f10,f12,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f11.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq 0x8226a65c
	if (ctx.cr0.eq) goto loc_8226A65C;
	// lwz r11,416(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 416);
	// b 0x8226a660
	goto loc_8226A660;
loc_8226A65C:
	// lwz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
loc_8226A660:
	// lwz r3,104(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a680
	if (ctx.cr6.eq) goto loc_8226A680;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8226ab70
	ctx.lr = 0x8226A680;
	sub_8226AB70(ctx, base);
loc_8226A680:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x822e6ff8
	ctx.lr = 0x8226A68C;
	sub_822E6FF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// lfs f30,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// beq 0x8226a7b4
	if (ctx.cr0.eq) goto loc_8226A7B4;
	// lwz r3,6140(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6140);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226A6C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r30,124
	ctx.r4.s64 = r30.s64 + 124;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x826a1e70
	ctx.lr = 0x8226A6D8;
	sub_826A1E70(ctx, base);
	// lbz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226a6ec
	if (ctx.cr0.eq) goto loc_8226A6EC;
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_8226A6EC:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,68(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,72(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 72);
	// lfs f12,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,76(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lfs f11,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 / ctx.f12.f64));
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lfs f10,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f9,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// fdivs f9,f31,f9
	ctx.f9.f64 = double(float(f31.f64 / ctx.f9.f64));
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lfs f8,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lfs f6,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// lfs f5,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fnmsubs f0,f11,f10,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f0.f64)));
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f11,f9,f6
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// blt cr6,0x8226a78c
	if (ctx.cr6.lt) goto loc_8226A78C;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8226a790
	goto loc_8226A790;
loc_8226A78C:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8226A790:
	// lwz r11,6096(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 6096);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,113
	ctx.r9.s64 = 113;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82174318
	ctx.lr = 0x8226A7B4;
	sub_82174318(ctx, base);
loc_8226A7B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stb r28,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// stb r28,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// stb r28,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lwz r10,424(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lfs f12,212(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a80c
	if (ctx.cr6.eq) goto loc_8226A80C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8226ab70
	ctx.lr = 0x8226A80C;
	sub_8226AB70(ctx, base);
loc_8226A80C:
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r28,r11,-22932
	r28.s64 = ctx.r11.s64 + -22932;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r25,r31,32
	r25.s64 = r31.s64 + 32;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r29,92(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq 0x8226a870
	if (ctx.cr0.eq) goto loc_8226A870;
	// lwz r3,6140(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6140);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226A858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8226a86c
	if (ctx.cr6.lt) goto loc_8226A86C;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8226a870
	goto loc_8226A870;
loc_8226A86C:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8226A870:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// bl 0x822e6ff8
	ctx.lr = 0x8226A87C;
	sub_822E6FF8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8226a988
	if (ctx.cr0.eq) goto loc_8226A988;
	// extsw r11,r29
	ctx.r11.s64 = r29.s32;
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f11,228(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f28,f31,f0
	f28.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f0,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,280
	ctx.r4.s64 = r30.s64 + 280;
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,40
	ctx.r5.s64 = 40;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8226A8DC;
	sub_826A1E70(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226ac38
	ctx.lr = 0x8226A8EC;
	sub_8226AC38(ctx, base);
	// lwz r10,220(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,228(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 228);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,232(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 232);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fdivs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 / ctx.f12.f64));
	// lwz r11,6096(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 6096);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// li r9,82
	ctx.r9.s64 = 82;
	// stw r8,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r6,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// stw r5,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lfs f9,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f8,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmuls f11,f28,f10
	ctx.f11.f64 = double(float(f28.f64 * ctx.f10.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 * ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82174318
	ctx.lr = 0x8226A988;
	sub_82174318(ctx, base);
loc_8226A988:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8226a9e8
	if (!ctx.cr6.gt) goto loc_8226A9E8;
	// addi r5,r29,-1
	ctx.r5.s64 = r29.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226ac38
	ctx.lr = 0x8226A9A0;
	sub_8226AC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,428(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// lfs f12,400(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,404(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226a9e8
	if (ctx.cr6.eq) goto loc_8226A9E8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8226ab70
	ctx.lr = 0x8226A9E8;
	sub_8226AB70(ctx, base);
loc_8226A9E8:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8226aa5c
	if (!ctx.cr6.lt) goto loc_8226AA5C;
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226ac38
	ctx.lr = 0x8226AA14;
	sub_8226AC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,432(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 432);
	// lfs f12,408(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 408);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,412(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 412);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226aa5c
	if (ctx.cr6.eq) goto loc_8226AA5C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8226ab70
	ctx.lr = 0x8226AA5C;
	sub_8226AB70(ctx, base);
loc_8226AA5C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2cf4
	ctx.lr = 0x8226AA68;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8228D838) {
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
	// bl 0x8228d888
	ctx.lr = 0x8228D858;
	sub_8228D888(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228d868
	if (ctx.cr0.eq) goto loc_8228D868;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8228D868;
	sub_8269CE98(ctx, base);
loc_8228D868:
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

DEFINE_REX_FUNC(sub_8228F6A0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228f708
	if (!ctx.cr6.eq) goto loc_8228F708;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228f6fc
	if (!ctx.cr0.eq) goto loc_8228F6FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228f6fc
	if (ctx.cr6.eq) goto loc_8228F6FC;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
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
	ctx.lr = 0x8228F6FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228F6FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8228F708:
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

DEFINE_REX_FUNC(sub_822932C0) {
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
	ctx.lr = 0x822932C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822932f0
	if (!ctx.cr6.eq) goto loc_822932F0;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r11,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
	// b 0x822935a4
	goto loc_822935A4;
loc_822932F0:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822933dc
	if (ctx.cr6.eq) goto loc_822933DC;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,20(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
loc_82293324:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lfs f9,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f5,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadds f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f8,f13,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f7,f12,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fsubs f6,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f8,f8
	ctx.f8.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f7,f7
	ctx.f7.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f6,f6
	ctx.f6.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x822933c4
	if (ctx.cr6.lt) goto loc_822933C4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_822933C4:
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82293324
	if (!ctx.cr6.eq) goto loc_82293324;
loc_822933DC:
	// lwz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r30,32(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822933f4
	if (ctx.cr6.eq) goto loc_822933F4;
	// stw r27,4(r28)
	REX_STORE_U32(r28.u32 + 4, r27.u32);
	// b 0x822933fc
	goto loc_822933FC;
loc_822933F4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c1a70
	ctx.lr = 0x822933FC;
	sub_822C1A70(ctx, base);
loc_822933FC:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// stw r27,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r27.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r27,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r27.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// subf r7,r31,r29
	ctx.r7.u64 = r29.u64 - r31.u64;
	// subf r8,r3,r29
	ctx.r8.u64 = r29.u64 - ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r31,r3
	ctx.r10.u64 = ctx.r3.u64 - r31.u64;
loc_82293424:
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229343c
	if (!ctx.cr6.lt) goto loc_8229343C;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x82293440
	goto loc_82293440;
loc_8229343C:
	// stfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82293440:
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82293458
	if (!ctx.cr6.gt) goto loc_82293458;
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x8229345c
	goto loc_8229345C;
loc_82293458:
	// stfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_8229345C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82293424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82293424;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82293590
	if (ctx.cr6.eq) goto loc_82293590;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r29,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// stw r3,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r3.u32);
loc_822934A4:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82293508
	if (ctx.cr6.gt) goto loc_82293508;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82293508
	if (ctx.cr6.gt) goto loc_82293508;
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82293508
	if (ctx.cr6.gt) goto loc_82293508;
	// lfs f0,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82293508
	if (ctx.cr6.lt) goto loc_82293508;
	// lfs f0,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82293508
	if (ctx.cr6.lt) goto loc_82293508;
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8229350c
	if (!ctx.cr6.lt) goto loc_8229350C;
loc_82293508:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8229350C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822935a4
	if (!ctx.cr0.eq) goto loc_822935A4;
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r6,36(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// subf r7,r11,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r30,r6
	ctx.r9.u64 = ctx.r6.u64 - r30.u64;
loc_82293538:
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82293550
	if (!ctx.cr6.lt) goto loc_82293550;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x82293554
	goto loc_82293554;
loc_82293550:
	// stfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82293554:
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8229356c
	if (!ctx.cr6.gt) goto loc_8229356C;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x82293570
	goto loc_82293570;
loc_8229356C:
	// stfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_82293570:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82293538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82293538;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r30,32(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822934a4
	if (!ctx.cr6.eq) goto loc_822934A4;
	// b 0x822935a4
	goto loc_822935A4;
loc_82293590:
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r29,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// stw r3,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_822935A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822B26F8) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x822B2700;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca4
	ctx.lr = 0x822B2708;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r26,0
	r26.s64 = 0;
	// addi r9,r3,240
	ctx.r9.s64 = ctx.r3.s64 + 240;
	// addi r8,r3,272
	ctx.r8.s64 = ctx.r3.s64 + 272;
	// stw r26,388(r3)
	REX_STORE_U32(ctx.r3.u32 + 388, r26.u32);
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r10,r3,304
	ctx.r10.s64 = ctx.r3.s64 + 304;
	// addi r7,r3,336
	ctx.r7.s64 = ctx.r3.s64 + 336;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,376(r3)
	REX_STORE_U32(ctx.r3.u32 + 376, ctx.r10.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// stw r9,368(r3)
	REX_STORE_U32(ctx.r3.u32 + 368, ctx.r9.u32);
	// stw r8,372(r3)
	REX_STORE_U32(ctx.r3.u32 + 372, ctx.r8.u32);
	// mr r23,r26
	r23.u64 = r26.u64;
	// mr r24,r26
	r24.u64 = r26.u64;
	// stw r7,380(r3)
	REX_STORE_U32(ctx.r3.u32 + 380, ctx.r7.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r6,384(r3)
	REX_STORE_U32(ctx.r3.u32 + 384, ctx.r6.u32);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// stw r26,396(r3)
	REX_STORE_U32(ctx.r3.u32 + 396, r26.u32);
loc_822B276C:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822b276c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B276C;
	// ld r8,16(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r29,r10,16592
	r29.s64 = ctx.r10.s64 + 16592;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r8,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r8.u64);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ld r7,24(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// addi r8,r31,64
	ctx.r8.s64 = r31.s64 + 64;
	// std r7,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r7.u64);
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// ld r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// lfs f29,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f29.f64 = double(temp.f32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// ld r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// ld r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 48);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// ld r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 56);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// ld r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 64);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// ld r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 72);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// ld r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 80);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// ld r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 88);
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// ld r11,96(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 96);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// ld r11,104(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 104);
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// ld r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 112);
	// std r11,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r11.u64);
	// ld r11,120(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 120);
	// std r11,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r11.u64);
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stw r26,196(r31)
	REX_STORE_U32(r31.u32 + 196, r26.u32);
	// ld r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r11.u64);
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r11,152(r31)
	REX_STORE_U64(r31.u32 + 152, ctx.r11.u64);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f12,f0,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f30,f13,f13,f12
	f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x822b2888
	if (!ctx.cr6.gt) goto loc_822B2888;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
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
	// b 0x822b2894
	goto loc_822B2894;
loc_822B2888:
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_822B2894:
	// addi r4,r31,164
	ctx.r4.s64 = r31.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b3348
	ctx.lr = 0x822B28A0;
	sub_822B3348(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// stfs f29,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f29,304(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 304);
	f29.f64 = double(temp.f32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fmr f27,f30
	f27.f64 = f30.f64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r6,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r6.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r6,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r6.u64);
	// ld r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// std r6,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r6,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r6.u64);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// std r6,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r6.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r6,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// li r25,1
	r25.s64 = 1;
	// std r4,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r4,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r4,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r4.u64);
loc_822B2918:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// subfic r27,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	r27.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// mulli r10,r27,36
	ctx.r10.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// fmadds f13,f0,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// addi r29,r11,164
	r29.s64 = ctx.r11.s64 + 164;
	// addi r28,r10,164
	r28.s64 = ctx.r10.s64 + 164;
	// fsqrts f30,f13
	f30.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(f30.f64, f29.f64);
	// blt cr6,0x822b2c40
	if (ctx.cr6.lt) goto loc_822B2C40;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x822b3348
	ctx.lr = 0x822B2990;
	sub_822B3348(ctx, base);
	// lwz r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
loc_822B29B8:
	// lfs f11,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64)));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, f29.f64);
	// blt cr6,0x822b29f8
	if (ctx.cr6.lt) goto loc_822B29F8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x822b29b8
	if (ctx.cr6.lt) goto loc_822B29B8;
	// b 0x822b29fc
	goto loc_822B29FC;
loc_822B29F8:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_822B29FC:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b2c48
	if (!ctx.cr0.eq) goto loc_822B2C48;
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r24,1
	ctx.r10.s64 = r24.s64 + 1;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// clrlwi r24,r10,30
	r24.u64 = ctx.r10.u32 & 0x3;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// ld r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// rlwinm r9,r24,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stdx r7,r9,r10
	REX_STORE_U64(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u64);
	// fmadds f0,f12,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f0.f64)));
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f0.f64)));
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x822b2a58
	if (ctx.cr6.gt) goto loc_822B2A58;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
loc_822B2A58:
	// lfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// fsubs f0,f30,f28
	ctx.f0.f64 = double(float(f30.f64 - f28.f64));
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f0,f30,f29,f0
	ctx.f0.f64 = double(float(-std::fma(f30.f64, f29.f64, -ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822b2c48
	if (!ctx.cr6.gt) goto loc_822B2C48;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x822b2ae4
	if (ctx.cr6.eq) goto loc_822B2AE4;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x822b2abc
	if (ctx.cr6.eq) goto loc_822B2ABC;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bne cr6,0x822b2b04
	if (!ctx.cr6.eq) goto loc_822B2B04;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822b37a0
	ctx.lr = 0x822B2AB8;
	sub_822B37A0(ctx, base);
	// b 0x822b2b00
	goto loc_822B2B00;
loc_822B2ABC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x822b34b0
	ctx.lr = 0x822B2AE0;
	sub_822B34B0(ctx, base);
	// b 0x822b2b00
	goto loc_822B2B00;
loc_822B2AE4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x822b33a8
	ctx.lr = 0x822B2B00;
	sub_822B33A8(ctx, base);
loc_822B2B00:
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
loc_822B2B04:
	// fcmpu cr6,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f27.f64, f31.f64);
	// blt cr6,0x822b2c48
	if (ctx.cr6.lt) goto loc_822B2C48;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r26,32(r28)
	REX_STORE_U32(r28.u32 + 32, r26.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r27,388(r31)
	REX_STORE_U32(r31.u32 + 388, r27.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b2c08
	if (ctx.cr6.eq) goto loc_822B2C08;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// subf r9,r10,r29
	ctx.r9.u64 = r29.u64 - ctx.r10.u64;
loc_822B2B58:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r7,r25,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r8.u8 & 0x3F));
	// and. r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// beq 0x822b2be0
	if (ctx.cr0.eq) goto loc_822B2BE0;
	// lwz r10,32(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r7.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r10,r28
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r28.u32, temp.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r10.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// b 0x822b2bfc
	goto loc_822B2BFC;
loc_822B2BE0:
	// lwz r10,384(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 + 92;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// lwz r10,384(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r10.u32);
loc_822B2BFC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822b2b58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822B2B58;
loc_822B2C08:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x822b2c18
	if (!ctx.cr6.eq) goto loc_822B2C18;
	// stw r25,396(r31)
	REX_STORE_U32(r31.u32 + 396, r25.u32);
loc_822B2C18:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r23,128
	ctx.cr6.compare<uint32_t>(r23.u32, 128, ctx.xer);
	// bge cr6,0x822b2c2c
	if (!ctx.cr6.lt) goto loc_822B2C2C;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// b 0x822b2c30
	goto loc_822B2C30;
loc_822B2C2C:
	// li r11,2
	ctx.r11.s64 = 2;
loc_822B2C30:
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822b2918
	if (ctx.cr6.eq) goto loc_822B2918;
	// b 0x822b2c88
	goto loc_822B2C88;
loc_822B2C40:
	// stw r25,396(r31)
	REX_STORE_U32(r31.u32 + 396, r25.u32);
	// b 0x822b2c88
	goto loc_822B2C88;
loc_822B2C48:
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r11,164
	ctx.r10.s64 = ctx.r11.s64 + 164;
	// lwz r9,196(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,196(r11)
	REX_STORE_U32(ctx.r11.u32 + 196, ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 + 92;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,384(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 384);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
loc_822B2C88:
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// blt cr6,0x822b2cb4
	if (ctx.cr6.lt) goto loc_822B2CB4;
	// bne cr6,0x822b2cd4
	if (!ctx.cr6.eq) goto loc_822B2CD4;
	// stfs f31,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// b 0x822b2cd4
	goto loc_822B2CD4;
loc_822B2CB4:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
loc_822B2CD4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf0
	ctx.lr = 0x822B2CE0;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822DE898) {
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
	ctx.lr = 0x822DE8A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822de8c8
	if (!ctx.cr6.gt) goto loc_822DE8C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DE8C8;
	sub_822D5B28(ctx, base);
loc_822DE8C8:
	// li r11,8712
	ctx.r11.s64 = 8712;
	// li r10,6
	ctx.r10.s64 = 6;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r10,148(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 148);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x822de93c
	if (ctx.cr6.gt) goto loc_822DE93C;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r8,8997
	ctx.r8.s64 = 8997;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x822dea18
	goto loc_822DEA18;
loc_822DE93C:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x822de9f0
	if (ctx.cr6.eq) goto loc_822DE9F0;
	// rlwinm r28,r29,5,0,26
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_822DE968:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// slw r8,r8,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r29.u8 & 0x3F));
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// ori r9,r9,11521
	ctx.r9.u64 = ctx.r9.u64 | 11521;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// ori r6,r6,805
	ctx.r6.u64 = ctx.r6.u64 | 805;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// ble cr6,0x822de9e0
	if (!ctx.cr6.gt) goto loc_822DE9E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822DE9DC;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822DE9E0:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bne 0x822de968
	if (!ctx.cr0.eq) goto loc_822DE968;
loc_822DE9F0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12884(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12884);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12888(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12888);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_822DEA18:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,21
	ctx.r9.s64 = 21;
	// ori r10,r10,23296
	ctx.r10.u64 = ctx.r10.u64 | 23296;
	// li r12,1
	ctx.r12.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822EA100) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12952
	ctx.r3.s64 = ctx.r11.s64 + -12952;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EA8F8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r30,104(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EA92C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822eac30
	ctx.lr = 0x822EA93C;
	sub_822EAC30(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,16592(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,6096(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 6096);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82136970
	ctx.lr = 0x822EA984;
	sub_82136970(ctx, base);
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

DEFINE_REX_FUNC(sub_822EE818) {
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
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822ee848
	if (!ctx.cr6.eq) goto loc_822EE848;
	// li r31,2
	r31.s64 = 2;
	// b 0x822ee884
	goto loc_822EE884;
loc_822EE848:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822ee880
	if (ctx.cr6.eq) goto loc_822EE880;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822ee884
	if (!ctx.cr6.eq) goto loc_822EE884;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ee880
	if (ctx.cr6.eq) goto loc_822EE880;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EE878;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ee884
	if (!ctx.cr0.eq) goto loc_822EE884;
loc_822EE880:
	// li r31,1
	r31.s64 = 1;
loc_822EE884:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822ee898
	if (!ctx.cr6.eq) goto loc_822EE898;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// b 0x822ee8a4
	goto loc_822EE8A4;
loc_822EE898:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822ee8a4
	if (!ctx.cr6.eq) goto loc_822EE8A4;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
loc_822EE8A4:
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ee8b4
	if (ctx.cr0.eq) goto loc_822EE8B4;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
loc_822EE8B4:
	// lbz r11,9(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 9);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ee8c4
	if (ctx.cr0.eq) goto loc_822EE8C4;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
loc_822EE8C4:
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ee8d4
	if (ctx.cr0.eq) goto loc_822EE8D4;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
loc_822EE8D4:
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

DEFINE_REX_FUNC(sub_822F4320) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822F4328;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_822F4338:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f4414
	if (ctx.cr6.eq) goto loc_822F4414;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822F4364:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f4388
	if (!ctx.cr6.eq) goto loc_822F4388;
	// stdcx. r5,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f4364
	if (!ctx.cr0.eq) goto loc_822F4364;
	// b 0x822f4390
	goto loc_822F4390;
loc_822F4388:
	// stdcx. r7,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F4390:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f4338
	if (!ctx.cr6.eq) goto loc_822F4338;
	// lwz r30,4(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822f43c0
	if (ctx.cr6.eq) goto loc_822F43C0;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F43BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822f4338
	goto loc_822F4338;
loc_822F43C0:
	// bl 0x823f5788
	ctx.lr = 0x822F43C4;
	sub_823F5788(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822f4400
	if (ctx.cr6.eq) goto loc_822F4400;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f2998
	ctx.lr = 0x822F43D8;
	sub_823F2998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822f4400
	if (!ctx.cr6.gt) goto loc_822F4400;
	// neg r11,r3
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r3.u64);
loc_822F43E4:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r28
	ea = r28.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r28
	ea = r28.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f43e4
	if (!ctx.cr0.eq) goto loc_822F43E4;
loc_822F4400:
	// bl 0x823f5788
	ctx.lr = 0x822F4404;
	sub_823F5788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823f4018
	ctx.lr = 0x822F4410;
	sub_823F4018(ctx, base);
	// b 0x822f4338
	goto loc_822F4338;
loc_822F4414:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822FB2E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fb2f0
	if (!ctx.cr6.eq) goto loc_822FB2F0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FB2F0:
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBB10) {
	REX_FUNC_PROLOGUE();
	// stw r4,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBBF8) {
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
	ctx.lr = 0x822FBC00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822fbc24
	if (!ctx.cr6.eq) goto loc_822FBC24;
loc_822FBC1C:
	// li r3,36
	ctx.r3.s64 = 36;
	// b 0x822fbd2c
	goto loc_822FBD2C;
loc_822FBC24:
	// rlwinm. r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r28
	r30.u64 = r28.u64;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// beq 0x822fbca4
	if (ctx.cr0.eq) goto loc_822FBCA4;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r4,r31,8,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0x7F;
	// lwz r3,-10820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// clrlwi r29,r31,20
	r29.u64 = r31.u32 & 0xFFF;
	// bl 0x82304328
	ctx.lr = 0x822FBC4C;
	sub_82304328(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbc1c
	if (!ctx.cr0.eq) goto loc_822FBC1C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fbc78
	if (ctx.cr6.eq) goto loc_822FBC78;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r4,r31,20,20,31
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 20) & 0xFFF;
	// bl 0x8230bde8
	ctx.lr = 0x822FBC70;
	sub_8230BDE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbd2c
	if (!ctx.cr0.eq) goto loc_822FBD2C;
loc_822FBC78:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822FBC7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fbc1c
	if (ctx.cr6.eq) goto loc_822FBC1C;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822fbd24
	if (!ctx.cr0.eq) goto loc_822FBD24;
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fbd18
	if (ctx.cr6.eq) goto loc_822FBD18;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x822fbd1c
	goto loc_822FBD1C;
loc_822FBCA4:
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// rlwinm r9,r31,14,19,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 14) & 0x1FFF;
	// rlwinm r8,r31,21,25,31
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 21) & 0x7F;
	// clrlwi r29,r31,21
	r29.u64 = r31.u32 & 0x7FF;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822fbc1c
	if (!ctx.cr6.lt) goto loc_822FBC1C;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822fbc1c
	if (ctx.cr6.eq) goto loc_822FBC1C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,168(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r30,r7,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822fbcf8
	if (ctx.cr0.eq) goto loc_822FBCF8;
loc_822FBCF0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822fbc7c
	goto loc_822FBC7C;
loc_822FBCF8:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822fbc1c
	if (!ctx.cr6.lt) goto loc_822FBC1C;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fbc1c
	if (ctx.cr6.eq) goto loc_822FBC1C;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x822fbcf0
	goto loc_822FBCF0;
loc_822FBD18:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_822FBD1C:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x822fbc1c
	if (!ctx.cr6.eq) goto loc_822FBC1C;
loc_822FBD24:
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FBD2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82303068) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8232fb68
	sub_8232FB68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82303488) {
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
	ctx.lr = 0x82303490;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823034c0
	if (!ctx.cr6.eq) goto loc_823034C0;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x8230353c
	goto loc_8230353C;
loc_823034C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82303520
	if (ctx.cr6.eq) goto loc_82303520;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8232f770
	ctx.lr = 0x823034E4;
	sub_8232F770(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82303514
	if (!ctx.cr6.eq) goto loc_82303514;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82303514
	if (!ctx.cr6.eq) goto loc_82303514;
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82303520
	if (ctx.cr6.eq) goto loc_82303520;
loc_82303514:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
loc_82303520:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8232f718
	ctx.lr = 0x8230353C;
	sub_8232F718(ctx, base);
loc_8230353C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8230C310) {
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
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r3,-10808(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -10808);
	// bl 0x8233e7e0
	ctx.lr = 0x8230C330;
	sub_8233E7E0(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r31,r11,824
	r31.s64 = ctx.r11.s64 + 824;
loc_8230C338:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8230c354
	if (!ctx.cr6.eq) goto loc_8230C354;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8230c358
	if (ctx.cr6.eq) goto loc_8230C358;
loc_8230C354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230C358:
	// lwz r3,-10808(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -10808);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230c37c
	if (!ctx.cr0.eq) goto loc_8230C37C;
	// bl 0x8233e820
	ctx.lr = 0x8230C368;
	sub_8233E820(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8233e370
	ctx.lr = 0x8230C370;
	sub_8233E370(ctx, base);
	// lwz r3,-10808(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -10808);
	// bl 0x8233e7e0
	ctx.lr = 0x8230C378;
	sub_8233E7E0(ctx, base);
	// b 0x8230c338
	goto loc_8230C338;
loc_8230C37C:
	// bl 0x8233e820
	ctx.lr = 0x8230C380;
	sub_8233E820(ctx, base);
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

DEFINE_REX_FUNC(sub_8230FA80) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230fa90
	if (!ctx.cr6.eq) goto loc_8230FA90;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8230FA90:
	// lbz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82310228) {
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
	// bl 0x826a1c98
	ctx.lr = 0x82310230;
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f30.u64);
	// stfd f31,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r20,r30
	r20.u64 = r30.u64;
	// beq cr6,0x82310280
	if (ctx.cr6.eq) goto loc_82310280;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82310280
	if (ctx.cr6.lt) goto loc_82310280;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r20,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r20.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82310280:
	// stb r30,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x8231029C;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r24,-32129
	r24.s64 = -2105606144;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// addi r25,r11,5356
	r25.s64 = ctx.r11.s64 + 5356;
	// bne cr6,0x823103e0
	if (!ctx.cr6.eq) goto loc_823103E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340e38
	ctx.lr = 0x823102C8;
	sub_82340E38(ctx, base);
loc_823102C8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x823102E8;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x82310308;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x82310320
	if (!ctx.cr6.eq) goto loc_82310320;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82310364
	if (ctx.cr0.eq) goto loc_82310364;
loc_82310320:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231035C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
loc_82310364:
	// lis r11,41
	ctx.r11.s64 = 2686976;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82310470
	if (ctx.cr6.lt) goto loc_82310470;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x82310388;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x823103A8;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82310470
	if (ctx.cr6.lt) goto loc_82310470;
	// beq cr6,0x82310464
	if (ctx.cr6.eq) goto loc_82310464;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82310458
	if (ctx.cr6.lt) goto loc_82310458;
	// beq cr6,0x8231044c
	if (ctx.cr6.eq) goto loc_8231044C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82310470
	if (!ctx.cr6.lt) goto loc_82310470;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x8231046c
	goto loc_8231046C;
loc_823103E0:
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82310404
	if (ctx.cr6.eq) goto loc_82310404;
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,186
	ctx.r6.s64 = 186;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82310404;
	sub_82330D00(ctx, base);
loc_82310404:
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,188
	ctx.r6.s64 = 188;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82310420;
	sub_82330E40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r4.u32);
	// bne 0x82310434
	if (!ctx.cr0.eq) goto loc_82310434;
loc_8231042C:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82310668
	goto loc_82310668;
loc_82310434:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x82310448;
	sub_82340718(ctx, base);
	// b 0x823102c8
	goto loc_823102C8;
loc_8231044C:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// b 0x8231046c
	goto loc_8231046C;
loc_82310458:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// b 0x8231046c
	goto loc_8231046C;
loc_82310464:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8231046C:
	// stw r11,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r11.u32);
loc_82310470:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82340718
	ctx.lr = 0x82310488;
	sub_82340718(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x823104ac
	if (ctx.cr6.eq) goto loc_823104AC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8230efe0
	ctx.lr = 0x823104A4;
	sub_8230EFE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
loc_823104AC:
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,5156
	r29.s64 = ctx.r11.s64 + 5156;
	// lwz r11,-10820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -10820);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823104ec
	if (!ctx.cr6.eq) goto loc_823104EC;
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823104ec
	if (ctx.cr6.eq) goto loc_823104EC;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// bl 0x823315e8
	ctx.lr = 0x823104DC;
	sub_823315E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823104ec
	if (!ctx.cr0.eq) goto loc_823104EC;
	// lwz r11,-10820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -10820);
	// stw r28,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, r28.u32);
loc_823104EC:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231053c
	if (ctx.cr6.eq) goto loc_8231053C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8231053c
	if (ctx.cr6.eq) goto loc_8231053C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823315e8
	ctx.lr = 0x8231050C;
	sub_823315E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231053c
	if (ctx.cr0.eq) goto loc_8231053C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82331480
	ctx.lr = 0x82310520;
	sub_82331480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-24460
	ctx.r4.s64 = ctx.r11.s64 + -24460;
	// bl 0x823314c8
	ctx.lr = 0x82310530;
	sub_823314C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 20);
	// bl 0x823314c8
	ctx.lr = 0x8231053C;
	sub_823314C8(ctx, base);
loc_8231053C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310664
	if (ctx.cr6.eq) goto loc_82310664;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f30.f64 = double(temp.f32);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
loc_8231055C:
	// lwz r11,1012(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 1012);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,280
	ctx.r6.s64 = 280;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231057C;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82310590
	if (ctx.cr0.eq) goto loc_82310590;
	// bl 0x8230fd10
	ctx.lr = 0x82310588;
	sub_8230FD10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82310594
	goto loc_82310594;
loc_82310590:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82310594:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8231042c
	if (ctx.cr6.eq) goto loc_8231042C;
	// addi r11,r31,52
	ctx.r11.s64 = r31.s64 + 52;
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f30,36(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stb r30,28(r31)
	REX_STORE_U8(r31.u32 + 28, r30.u8);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stb r30,29(r31)
	REX_STORE_U8(r31.u32 + 29, r30.u8);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// sth r30,44(r31)
	REX_STORE_U16(r31.u32 + 44, r30.u16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// bl 0x82310228
	ctx.lr = 0x823105FC;
	sub_82310228(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310678
	if (!ctx.cr0.eq) goto loc_82310678;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bne cr6,0x82310648
	if (!ctx.cr6.eq) goto loc_82310648;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bl 0x82310098
	ctx.lr = 0x8231061C;
	sub_82310098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310678
	if (!ctx.cr0.eq) goto loc_82310678;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82310654
	if (!ctx.cr6.eq) goto loc_82310654;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230fe68
	ctx.lr = 0x8231063C;
	sub_8230FE68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310668
	if (!ctx.cr0.eq) goto loc_82310668;
	// b 0x82310654
	goto loc_82310654;
loc_82310648:
	// bl 0x8230ff30
	ctx.lr = 0x8231064C;
	sub_8230FF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82310678
	if (!ctx.cr0.eq) goto loc_82310678;
loc_82310654:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231055c
	if (ctx.cr6.lt) goto loc_8231055C;
loc_82310664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82310668:
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
loc_82310678:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230fe68
	ctx.lr = 0x82310684;
	sub_8230FE68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82310668
	goto loc_82310668;
}

DEFINE_REX_FUNC(sub_8232D730) {
	REX_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D928) {
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
	ctx.lr = 0x8232D930;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// clrlwi r30,r4,24
	r30.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8232dab0
	if (ctx.cr6.eq) goto loc_8232DAB0;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232dab4
	if (!ctx.cr0.eq) goto loc_8232DAB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8232da3c
	if (!ctx.cr6.eq) goto loc_8232DA3C;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232D99C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8232da08
	if (!ctx.cr6.gt) goto loc_8232DA08;
loc_8232D9B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232d9d8
	if (!ctx.cr0.lt) goto loc_8232D9D8;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232d9e0
	goto loc_8232D9E0;
loc_8232D9D8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232D9E0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232d9f8
	if (ctx.cr6.eq) goto loc_8232D9F8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82316008
	ctx.lr = 0x8232D9F8;
	sub_82316008(ctx, base);
loc_8232D9F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8232d9b4
	if (ctx.cr6.lt) goto loc_8232D9B4;
loc_8232DA08:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DA24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// subf r4,r3,r29
	ctx.r4.u64 = r29.u64 - ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232DA38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8232daa8
	goto loc_8232DAA8;
loc_8232DA3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8232da9c
	if (!ctx.cr6.gt) goto loc_8232DA9C;
loc_8232DA4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// bge 0x8232da70
	if (!ctx.cr0.lt) goto loc_8232DA70;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8232da78
	goto loc_8232DA78;
loc_8232DA70:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8232DA78:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8232da8c
	if (ctx.cr6.eq) goto loc_8232DA8C;
	// bl 0x82316000
	ctx.lr = 0x8232DA8C;
	sub_82316000(ctx, base);
loc_8232DA8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8232da4c
	if (ctx.cr6.lt) goto loc_8232DA4C;
loc_8232DA9C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_8232DAA8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stb r28,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, r28.u8);
loc_8232DAB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232DAB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8233FBE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8233FBF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8235ace0
	ctx.lr = 0x8233FC0C;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233fc58
	if (!ctx.cr6.eq) goto loc_8233FC58;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fc38
	if (ctx.cr6.eq) goto loc_8233FC38;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8233fc38
	if (ctx.cr6.eq) goto loc_8233FC38;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8233FC38:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233FC58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233FC58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823433B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823433d4
	if (ctx.cr6.eq) goto loc_823433D4;
	// lwz r10,168(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823433d4
	if (ctx.cr6.eq) goto loc_823433D4;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823433D4:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82346B28) {
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
	ctx.lr = 0x82346B30;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// li r26,0
	r26.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,9580
	r29.s64 = ctx.r11.s64 + 9580;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82346c1c
	if (!ctx.cr6.eq) goto loc_82346C1C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2941
	ctx.r6.s64 = 2941;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82346B8C;
	sub_82330E40(ctx, base);
	// stw r3,204(r27)
	REX_STORE_U32(r27.u32 + 204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82346ba4
	if (!ctx.cr6.eq) goto loc_82346BA4;
loc_82346B98:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_82346BA4:
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r11,208(r27)
	REX_STORE_U32(r27.u32 + 208, ctx.r11.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346bd8
	if (ctx.cr6.eq) goto loc_82346BD8;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r26.u32);
loc_82346BD8:
	// lwz r11,204(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 204);
	// stw r26,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r26.u32);
	// lwz r10,204(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 204);
	// stw r26,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r26.u32);
	// lwz r9,208(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 208);
	// stw r30,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r30.u32);
	// lwz r8,208(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 208);
	// stw r26,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, r26.u32);
	// lwz r7,204(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 204);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r6,208(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 208);
	// stw r7,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r6,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// lwz r3,4(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r6,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
loc_82346C1C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82346c50
	if (ctx.cr6.eq) goto loc_82346C50;
	// lwz r31,0(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82346c50
	if (ctx.cr6.eq) goto loc_82346C50;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x82346cd8
	goto loc_82346CD8;
loc_82346C50:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x82346c9c
	if (ctx.cr6.eq) goto loc_82346C9C;
	// li r6,2978
	ctx.r6.s64 = 2978;
	// li r4,292
	ctx.r4.s64 = 292;
	// bl 0x82330a38
	ctx.lr = 0x82346C78;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346b98
	if (ctx.cr6.eq) goto loc_82346B98;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x82346cc4
	goto loc_82346CC4;
loc_82346C9C:
	// li r6,2987
	ctx.r6.s64 = 2987;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x82330a38
	ctx.lr = 0x82346CA8;
	sub_82330A38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346b98
	if (ctx.cr6.eq) goto loc_82346B98;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r26,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r26.u32);
loc_82346CC4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82346cd4
	if (ctx.cr6.eq) goto loc_82346CD4;
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
loc_82346CD4:
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
loc_82346CD8:
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// bne cr6,0x82346ce8
	if (!ctx.cr6.eq) goto loc_82346CE8;
loc_82346CE0:
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x82346e64
	goto loc_82346E64;
loc_82346CE8:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// bne cr6,0x82346e28
	if (!ctx.cr6.eq) goto loc_82346E28;
	// lwz r10,72(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 72);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82346e64
	if (ctx.cr6.eq) goto loc_82346E64;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82346e64
	if (ctx.cr6.gt) goto loc_82346E64;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27936
	ctx.r12.s64 = ctx.r12.s64 + 27936;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82346D90;
	case 1:
		goto loc_82346D50;
	case 2:
		goto loc_82346D58;
	case 3:
		goto loc_82346D60;
	case 4:
		goto loc_82346D68;
	case 5:
		goto loc_82346D68;
	case 6:
		goto loc_82346D90;
	case 7:
		goto loc_82346D90;
	case 8:
		goto loc_82346D90;
	case 9:
		goto loc_82346D90;
	case 10:
		goto loc_82346D90;
	case 11:
		goto loc_82346D90;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82346D50:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82346d6c
	goto loc_82346D6C;
loc_82346D58:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82346d6c
	goto loc_82346D6C;
loc_82346D60:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82346d6c
	goto loc_82346D6C;
loc_82346D68:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82346D6C:
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r24,3,29
	ctx.r9.u64 = (__builtin_rotateleft64(r24.u64, 3) & 0x7FFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 ? ctx.r9.u64 / ctx.r11.u64 : 0;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82346e64
	goto loc_82346E64;
loc_82346D90:
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28072
	ctx.r12.s64 = ctx.r12.s64 + 28072;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82346E18;
	case 1:
		goto loc_82346E64;
	case 2:
		goto loc_82346E64;
	case 3:
		goto loc_82346E64;
	case 4:
		goto loc_82346E64;
	case 5:
		goto loc_82346E64;
	case 6:
		goto loc_82346DD8;
	case 7:
		goto loc_82346DEC;
	case 8:
		goto loc_82346E04;
	case 9:
		goto loc_82346CE0;
	case 10:
		goto loc_82346CE0;
	case 11:
		goto loc_82346CE0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82346DD8:
	// mulli r11,r24,14
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82346e64
	goto loc_82346E64;
loc_82346DEC:
	// rlwinm r11,r24,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,36
	ctx.r9.s64 = 36;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82346e64
	goto loc_82346E64;
loc_82346E04:
	// mulli r11,r24,28
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// b 0x82346e64
	goto loc_82346E64;
loc_82346E18:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// divwu r26,r26,r10
	r26.u64 = uint32_t(ctx.r10.u32 ? r26.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// b 0x82346e64
	goto loc_82346E64;
loc_82346E28:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// bne cr6,0x82346f10
	if (!ctx.cr6.eq) goto loc_82346F10;
	// clrldi r11,r24,32
	ctx.r11.u64 = r24.u64 & 0xFFFFFFFF;
	// lfs f13,80(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f0,4104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82346E64:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82346e84
	if (ctx.cr6.eq) goto loc_82346E84;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82346e84
	if (ctx.cr6.eq) goto loc_82346E84;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823314a0
	ctx.lr = 0x82346E84;
	sub_823314A0(ctx, base);
loc_82346E84:
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// lwz r11,204(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 204);
	// lwz r10,208(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 208);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82346E94:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82346eb4
	if (ctx.cr6.lt) goto loc_82346EB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82346e94
	if (!ctx.cr6.eq) goto loc_82346E94;
	// b 0x82346ed0
	goto loc_82346ED0;
loc_82346EB4:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r31.u32);
loc_82346ED0:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(r21.s32, -1, ctx.xer);
	// bne cr6,0x82346edc
	if (!ctx.cr6.eq) goto loc_82346EDC;
	// lwz r21,156(r27)
	r21.u64 = REX_LOAD_U32(r27.u32 + 156);
loc_82346EDC:
	// stw r27,20(r31)
	REX_STORE_U32(r31.u32 + 20, r27.u32);
	// clrlwi r10,r20,24
	ctx.r10.u64 = r20.u32 & 0xFF;
	// sth r21,28(r31)
	REX_STORE_U16(r31.u32 + 28, r21.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,200(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 200);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,200(r27)
	REX_STORE_U32(r27.u32 + 200, ctx.r9.u32);
	// beq cr6,0x82346f04
	if (ctx.cr6.eq) goto loc_82346F04;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82343470
	ctx.lr = 0x82346F04;
	sub_82343470(ctx, base);
loc_82346F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_82346F10:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82360100) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,10876
	ctx.r9.s64 = ctx.r10.s64 + 10876;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82360640) {
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
	ctx.lr = 0x82360648;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,10928
	r29.s64 = ctx.r11.s64 + 10928;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// lwz r11,304(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 304);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r27,1200(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bne cr6,0x823606b4
	if (!ctx.cr6.eq) goto loc_823606B4;
	// lwz r10,1012(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// li r6,52
	ctx.r6.s64 = 52;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82360698;
	sub_82330E40(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823606b4
	if (!ctx.cr6.eq) goto loc_823606B4;
loc_823606A8:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_823606B4:
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,22056(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 22056);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823606c8
	if (!ctx.cr6.eq) goto loc_823606C8;
	// li r27,6
	r27.s64 = 6;
loc_823606C8:
	// lwz r10,304(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 304);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82360724
	if (!ctx.cr6.gt) goto loc_82360724;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823606DC:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823606f4
	if (!ctx.cr6.eq) goto loc_823606F4;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82360790
	if (!ctx.cr6.eq) goto loc_82360790;
loc_823606F4:
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8236070c
	if (!ctx.cr6.eq) goto loc_8236070C;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x8236070c
	if (!ctx.cr6.lt) goto loc_8236070C;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8236070C:
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r6,304(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 304);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823606dc
	if (ctx.cr6.lt) goto loc_823606DC;
loc_82360724:
	// lwz r10,1196(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 1196);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// mullw r9,r10,r27
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,97
	ctx.r6.s64 = 97;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,3,0,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82330e40
	ctx.lr = 0x8236074C;
	sub_82330E40(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + ctx.r11.u64;
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823606a8
	if (ctx.cr6.eq) goto loc_823606A8;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82360790:
	// rlwinm r30,r11,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,1196(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 1196);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r30,r9
	ctx.r10.u64 = r30.u64 + ctx.r9.u64;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x823607B0;
	sub_823EF5F0(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r8,r7,r30
	REX_STORE_U8(ctx.r7.u32 + r30.u32, ctx.r8.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r5,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8236D5A8) {
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
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,528
	ctx.r9.s64 = ctx.r3.s64 + 528;
	// stw r10,528(r3)
	REX_STORE_U32(ctx.r3.u32 + 528, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8236D5C8:
	// lwz r11,-80(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236d5dc
	if (!ctx.cr6.eq) goto loc_8236D5DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8236d5e4
	goto loc_8236D5E4;
loc_8236D5DC:
	// lwz r10,524(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236D5E4:
	// lwz r11,-76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -76);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236d5fc
	if (!ctx.cr6.eq) goto loc_8236D5FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8236d604
	goto loc_8236D604;
loc_8236D5FC:
	// lwz r10,524(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236D604:
	// lwz r11,-72(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -72);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236d61c
	if (!ctx.cr6.eq) goto loc_8236D61C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8236d624
	goto loc_8236D624;
loc_8236D61C:
	// lwz r10,524(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236D624:
	// lwz r11,-68(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -68);
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236d63c
	if (ctx.cr6.eq) goto loc_8236D63C;
	// lwz r10,524(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8236D63C:
	// stwu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8236d5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D5C8;
	// lwz r11,512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236d660
	if (ctx.cr6.eq) goto loc_8236D660;
	// lwz r5,520(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8236D660;
	sub_823EF5F0(ctx, base);
loc_8236D660:
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

DEFINE_REX_FUNC(sub_82374BA8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374bb8
	if (!ctx.cr6.eq) goto loc_82374BB8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374BB8:
	// b 0x82374868
	sub_82374868(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82375340) {
	REX_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8237534C:
	// cmpwi cr6,r11,512
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 512, ctx.xer);
	// bge cr6,0x8237535c
	if (!ctx.cr6.lt) goto loc_8237535C;
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8237535C:
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,34
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 34, ctx.xer);
	// bne cr6,0x8237534c
	if (!ctx.cr6.eq) goto loc_8237534C;
loc_82375368:
	// lbzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// beq cr6,0x82375388
	if (ctx.cr6.eq) goto loc_82375388;
	// stbx r9,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,511
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 511, ctx.xer);
	// blt cr6,0x82375368
	if (ctx.cr6.lt) goto loc_82375368;
loc_82375388:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stbx r11,r10,r5
	REX_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u8);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82377BB8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82377bc8
	if (!ctx.cr6.eq) goto loc_82377BC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82377BC8:
	// b 0x82377770
	sub_82377770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823795E8) {
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
	ctx.lr = 0x823795F0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r24,0
	r24.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82379620:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82379620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82379620;
	// stw r24,0(r19)
	REX_STORE_U32(r19.u32 + 0, r24.u32);
	// li r20,-1
	r20.s64 = -1;
loc_82379630:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e6108
	ctx.lr = 0x8237963C;
	sub_822E6108(ctx, base);
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r3,44(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x822e61a0
	ctx.lr = 0x82379648;
	sub_822E61A0(ctx, base);
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// li r29,1
	r29.s64 = 1;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8237968c
	if (!ctx.cr6.gt) goto loc_8237968C;
loc_8237965C:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e6048
	ctx.lr = 0x8237966C;
	sub_822E6048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82379688
	if (ctx.cr6.eq) goto loc_82379688;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237965c
	if (ctx.cr6.lt) goto loc_8237965C;
	// b 0x8237968c
	goto loc_8237968C;
loc_82379688:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8237968C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823797e4
	if (ctx.cr6.eq) goto loc_823797E4;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r27,r24
	r27.u64 = r24.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// srawi r30,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r30.s64 = ctx.r10.s32 >> 1;
	// divwu r8,r9,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r28,r7,r9
	r28.u64 = ctx.r9.u64 - ctx.r7.u64;
	// bl 0x82340ff0
	ctx.lr = 0x823796C8;
	sub_82340FF0(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,268(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 268);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823797e4
	if (ctx.cr6.gt) goto loc_823797E4;
	// lwz r8,276(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// subf r7,r11,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82379708
	if (ctx.cr6.lt) goto loc_82379708;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82379708:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823797e4
	if (ctx.cr6.eq) goto loc_823797E4;
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82340718
	ctx.lr = 0x8237972C;
	sub_82340718(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82379740
	if (ctx.cr6.eq) goto loc_82379740;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82379b10
	if (!ctx.cr6.eq) goto loc_82379B10;
loc_82379740:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bge cr6,0x82379768
	if (!ctx.cr6.lt) goto loc_82379768;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// subf r5,r10,r30
	ctx.r5.u64 = r30.u64 - ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82379768;
	sub_823EF5F0(ctx, base);
loc_82379768:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lbz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82379780
	if (ctx.cr6.eq) goto loc_82379780;
	// li r27,2048
	r27.s64 = 2048;
	// stb r24,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r24.u8);
loc_82379780:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823797cc
	if (!ctx.cr6.gt) goto loc_823797CC;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82379794:
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r30,r9
	ctx.r6.u64 = ctx.r9.u64 - r30.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r3,44(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x822e5f68
	ctx.lr = 0x823797B8;
	sub_822E5F68(ctx, base);
	// lwz r8,264(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82379794
	if (ctx.cr6.lt) goto loc_82379794;
loc_823797CC:
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r10,32(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// srawi r11,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r7.u32);
loc_823797E4:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82379ab4
	if (!ctx.cr6.gt) goto loc_82379AB4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// subf r25,r11,r22
	r25.u64 = r22.u64 - ctx.r11.u64;
loc_82379804:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r28,r27,r11
	r28.u64 = r27.u64 + ctx.r11.u64;
	// lwzx r30,r27,r11
	r30.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82379a9c
	if (ctx.cr6.lt) goto loc_82379A9C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82379828
	if (ctx.cr6.eq) goto loc_82379828;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(r30.s32, r23.s32, ctx.xer);
	// beq cr6,0x82379a9c
	if (ctx.cr6.eq) goto loc_82379A9C;
loc_82379828:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e64e0
	ctx.lr = 0x82379838;
	sub_822E64E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8237984c
	if (ctx.cr6.eq) goto loc_8237984C;
	// subf r30,r30,r23
	r30.u64 = r23.u64 - r30.u64;
	// b 0x82379860
	goto loc_82379860;
loc_8237984C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// divwu r9,r21,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? r21.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r30,r9,31,1,31
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
loc_82379860:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82379a00
	if (ctx.cr6.eq) goto loc_82379A00;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// ble cr6,0x82379874
	if (!ctx.cr6.gt) goto loc_82379874;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82379874:
	// cmplwi cr6,r5,512
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 512, ctx.xer);
	// ble cr6,0x82379880
	if (!ctx.cr6.gt) goto loc_82379880;
	// li r5,512
	ctx.r5.s64 = 512;
loc_82379880:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e6570
	ctx.lr = 0x82379894;
	sub_822E6570(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,260(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + r22.u64;
	// beq cr6,0x823799e4
	if (ctx.cr6.eq) goto loc_823799E4;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237991c
	if (ctx.cr6.eq) goto loc_8237991C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x823798d8
	if (!ctx.cr6.gt) goto loc_823798D8;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823798D8:
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823798f8
	if (ctx.cr6.lt) goto loc_823798F8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823798fc
	if (!ctx.cr6.eq) goto loc_823798FC;
loc_823798F8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823798FC:
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwzx r9,r27,r10
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stwx r8,r27,r10
	REX_STORE_U32(r27.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8237991C:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82379944
	if (!ctx.cr6.eq) goto loc_82379944;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823ef2f8
	ctx.lr = 0x82379940;
	sub_823EF2F8(ctx, base);
	// b 0x823799e4
	goto loc_823799E4;
loc_82379944:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823799a0
	if (ctx.cr6.lt) goto loc_823799A0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823799a0
	if (ctx.cr6.eq) goto loc_823799A0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823799e4
	if (ctx.cr6.eq) goto loc_823799E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82379974:
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// lwz r8,260(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x82379974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82379974;
	// b 0x823799e4
	goto loc_823799E4;
loc_823799A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823799e4
	if (ctx.cr6.eq) goto loc_823799E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_823799B0:
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// sth r9,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r6,260(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 260);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x823799b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823799B0;
loc_823799E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// ble cr6,0x82379a9c
	if (!ctx.cr6.gt) goto loc_82379A9C;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// b 0x82379a9c
	goto loc_82379A9C;
loc_82379A00:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e60a8
	ctx.lr = 0x82379A10;
	sub_822E60A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82379a9c
	if (ctx.cr6.eq) goto loc_82379A9C;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82379a98
	if (!ctx.cr6.gt) goto loc_82379A98;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r11,r25,r28
	ctx.r11.u64 = r25.u64 + r28.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82379a70
	if (ctx.cr6.lt) goto loc_82379A70;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,260(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82379a70
	if (ctx.cr6.eq) goto loc_82379A70;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82379a98
	if (!ctx.cr6.gt) goto loc_82379A98;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82379A54:
	// sth r24,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r24.u16);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,260(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82379a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82379A54;
	// b 0x82379a98
	goto loc_82379A98;
loc_82379A70:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82379a98
	if (!ctx.cr6.gt) goto loc_82379A98;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82379A7C:
	// sth r24,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r24.u16);
	// sth r24,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r24.u16);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,260(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82379a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82379A7C;
loc_82379A98:
	// stw r20,0(r28)
	REX_STORE_U32(r28.u32 + 0, r20.u32);
loc_82379A9C:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82379804
	if (ctx.cr6.lt) goto loc_82379804;
loc_82379AB4:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e63b8
	ctx.lr = 0x82379AC0;
	sub_822E63B8(ctx, base);
	// lwz r8,264(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82379b70
	if (!ctx.cr6.gt) goto loc_82379B70;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82379b28
	if (ctx.cr6.eq) goto loc_82379B28;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_82379ADC:
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82379b70
	if (!ctx.cr6.lt) goto loc_82379B70;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82379af8
	if (ctx.cr6.lt) goto loc_82379AF8;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// blt cr6,0x82379b04
	if (ctx.cr6.lt) goto loc_82379B04;
loc_82379AF8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82379adc
	goto loc_82379ADC;
loc_82379B04:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8233e370
	ctx.lr = 0x82379B0C;
	sub_8233E370(ctx, base);
	// b 0x82379630
	goto loc_82379630;
loc_82379B10:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e63b8
	ctx.lr = 0x82379B1C;
	sub_822E63B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce4
	return;
loc_82379B28:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82379b70
	if (!ctx.cr6.gt) goto loc_82379B70;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
loc_82379B38:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82379b5c
	if (ctx.cr6.eq) goto loc_82379B5C;
loc_82379B44:
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,44(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x822e64e0
	ctx.lr = 0x82379B54;
	sub_822E64E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82379b44
	if (ctx.cr6.eq) goto loc_82379B44;
loc_82379B5C:
	// lwz r8,264(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82379b38
	if (ctx.cr6.lt) goto loc_82379B38;
loc_82379B70:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82379b9c
	if (!ctx.cr6.gt) goto loc_82379B9C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82379B80:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82379ba8
	if (!ctx.cr6.lt) goto loc_82379BA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82379b80
	if (ctx.cr6.lt) goto loc_82379B80;
loc_82379B9C:
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce4
	return;
loc_82379BA8:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,260(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r4.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_823B1318) {
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
	ctx.lr = 0x823B1320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca4
	ctx.lr = 0x823B1328;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,428(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r29,420(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lfs f0,25748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25748);
	ctx.f0.f64 = double(temp.f32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// ble cr6,0x823b1390
	if (!ctx.cr6.gt) goto loc_823B1390;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,25744(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25744);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823b1390
	if (!ctx.cr6.lt) goto loc_823B1390;
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r8,r8,-15232
	ctx.r8.s64 = ctx.r8.s64 + -15232;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d50a8
	ctx.lr = 0x823B1390;
	sub_823D50A8(ctx, base);
loc_823B1390:
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B13A4;
	sub_823D6768(ctx, base);
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addis r21,r31,1
	r21.s64 = r31.s64 + 65536;
	// addis r20,r31,1
	r20.s64 = r31.s64 + 65536;
	// addis r19,r31,1
	r19.s64 = r31.s64 + 65536;
	// addi r28,r28,-3848
	r28.s64 = r28.s64 + -3848;
	// addi r21,r21,-4872
	r21.s64 = r21.s64 + -4872;
	// addi r20,r20,-5896
	r20.s64 = r20.s64 + -5896;
	// addi r19,r19,-6920
	r19.s64 = r19.s64 + -6920;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d59f8
	ctx.lr = 0x823B13E8;
	sub_823D59F8(ctx, base);
	// addis r27,r31,1
	r27.s64 = r31.s64 + 65536;
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// addi r27,r27,-1800
	r27.s64 = r27.s64 + -1800;
	// addi r26,r26,-2824
	r26.s64 = r26.s64 + -2824;
	// addi r7,r31,10256
	ctx.r7.s64 = r31.s64 + 10256;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d6618
	ctx.lr = 0x823B1410;
	sub_823D6618(ctx, base);
	// addis r18,r31,1
	r18.s64 = r31.s64 + 65536;
	// addis r17,r31,1
	r17.s64 = r31.s64 + 65536;
	// addis r16,r31,1
	r16.s64 = r31.s64 + 65536;
	// addis r30,r31,1
	r30.s64 = r31.s64 + 65536;
	// addi r18,r18,2296
	r18.s64 = r18.s64 + 2296;
	// addi r17,r17,1272
	r17.s64 = r17.s64 + 1272;
	// addi r16,r16,248
	r16.s64 = r16.s64 + 248;
	// addi r30,r30,-776
	r30.s64 = r30.s64 + -776;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r10,r31,19488
	ctx.r10.s64 = r31.s64 + 19488;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823d59f8
	ctx.lr = 0x823B1454;
	sub_823D59F8(ctx, base);
	// addis r25,r31,1
	r25.s64 = r31.s64 + 65536;
	// addis r24,r31,1
	r24.s64 = r31.s64 + 65536;
	// addis r15,r31,1
	r15.s64 = r31.s64 + 65536;
	// addis r14,r31,1
	r14.s64 = r31.s64 + 65536;
	// addi r25,r25,6392
	r25.s64 = r25.s64 + 6392;
	// addi r24,r24,5368
	r24.s64 = r24.s64 + 5368;
	// addi r15,r15,4344
	r15.s64 = r15.s64 + 4344;
	// addi r14,r14,3320
	r14.s64 = r14.s64 + 3320;
	// addi r10,r31,29744
	ctx.r10.s64 = r31.s64 + 29744;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823d59f8
	ctx.lr = 0x823B1498;
	sub_823D59F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r10,r10,-15280
	ctx.r10.s64 = ctx.r10.s64 + -15280;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lfs f1,25712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25712);
	ctx.f1.f64 = double(temp.f32);
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B14C4;
	sub_823D5580(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// lfs f1,25708(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 25708);
	ctx.f1.f64 = double(temp.f32);
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r10,r10,-15268
	ctx.r10.s64 = ctx.r10.s64 + -15268;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B14F0;
	sub_823D5580(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addis r23,r31,1
	r23.s64 = r31.s64 + 65536;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// addi r23,r23,-15256
	r23.s64 = r23.s64 + -15256;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f31,25704(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 25704);
	f31.f64 = double(temp.f32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// bl 0x823d5580
	ctx.lr = 0x823B1524;
	sub_823D5580(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r22,r31,1
	r22.s64 = r31.s64 + 65536;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// addi r22,r22,-15244
	r22.s64 = r22.s64 + -15244;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lfs f30,25700(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 25700);
	f30.f64 = double(temp.f32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B1558;
	sub_823D5580(ctx, base);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B157C;
	sub_823D5580(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B15A0;
	sub_823D5580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// lfs f31,25740(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25740);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B15B8;
	sub_823D6990(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x823d6990
	ctx.lr = 0x823B15C8;
	sub_823D6990(ctx, base);
	// addis r23,r31,1
	r23.s64 = r31.s64 + 65536;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r23,r23,7416
	r23.s64 = r23.s64 + 7416;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B15E4;
	sub_823D6768(ctx, base);
	// addis r22,r31,1
	r22.s64 = r31.s64 + 65536;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r22,r22,8440
	r22.s64 = r22.s64 + 8440;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B1600;
	sub_823D6768(ctx, base);
	// addis r20,r31,1
	r20.s64 = r31.s64 + 65536;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r20,r20,9464
	r20.s64 = r20.s64 + 9464;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B161C;
	sub_823D6768(ctx, base);
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r26,r26,10488
	r26.s64 = r26.s64 + 10488;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B1638;
	sub_823D6768(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// lfs f31,25736(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 25736);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B1650;
	sub_823D6990(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x823d6990
	ctx.lr = 0x823B1660;
	sub_823D6990(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B1670;
	sub_823D6990(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B1680;
	sub_823D6990(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lfs f31,25732(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 25732);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B1698;
	sub_823D6990(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823d6990
	ctx.lr = 0x823B16A8;
	sub_823D6990(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B16B8;
	sub_823D6990(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B16C8;
	sub_823D6990(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B16DC;
	sub_823D6768(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B16F0;
	sub_823D6768(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B1704;
	sub_823D6768(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B1718;
	sub_823D6768(ctx, base);
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r28,r28,-15112
	r28.s64 = r28.s64 + -15112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B1730;
	sub_823D6908(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r30,404(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f31,25728(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 25728);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B174C;
	sub_823D6990(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B1760;
	sub_823D6768(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B1770;
	sub_823D6908(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B1780;
	sub_823D6990(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B1794;
	sub_823D6768(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B17A4;
	sub_823D6908(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B17B4;
	sub_823D6990(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B17C8;
	sub_823D6768(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B17D8;
	sub_823D6908(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B17E8;
	sub_823D6990(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B17FC;
	sub_823D6768(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B1810;
	sub_823D6768(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B1824;
	sub_823D6768(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B1838;
	sub_823D6768(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B184C;
	sub_823D6768(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B185C;
	sub_823D6908(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f31,25724(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 25724);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B1874;
	sub_823D6990(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B1888;
	sub_823D6768(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B1898;
	sub_823D6908(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B18A8;
	sub_823D6990(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B18BC;
	sub_823D6768(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B18CC;
	sub_823D6908(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B18DC;
	sub_823D6990(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// bl 0x823d6768
	ctx.lr = 0x823B18F0;
	sub_823D6768(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823d6908
	ctx.lr = 0x823B1900;
	sub_823D6908(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B1910;
	sub_823D6990(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B1924;
	sub_823D6768(ctx, base);
	// lwz r30,380(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,372(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r10,-25536
	ctx.r10.s64 = ctx.r10.s64 + -25536;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823d5f10
	ctx.lr = 0x823B1954;
	sub_823D5F10(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lbz r4,391(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 391);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,20000(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20000);
	f31.f64 = double(temp.f32);
	// beq cr6,0x823b19f0
	if (ctx.cr6.eq) goto loc_823B19F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// lfs f30,5428(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5428);
	f30.f64 = double(temp.f32);
	// li r10,256
	ctx.r10.s64 = 256;
	// addi r6,r6,-15188
	ctx.r6.s64 = ctx.r6.s64 + -15188;
	// lfs f29,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f29.f64 = double(temp.f32);
	// lfs f28,25720(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 25720);
	f28.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lfs f27,25716(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 25716);
	f27.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// bl 0x823d4d10
	ctx.lr = 0x823B19BC;
	sub_823D4D10(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f30.f64;
	// addi r5,r5,-15152
	ctx.r5.s64 = ctx.r5.s64 + -15152;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d4d10
	ctx.lr = 0x823B19F0;
	sub_823D4D10(ctx, base);
loc_823B19F0:
	// li r5,256
	ctx.r5.s64 = 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d6b18
	ctx.lr = 0x823B1A00;
	sub_823D6B18(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6b18
	ctx.lr = 0x823B1A10;
	sub_823D6B18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf0
	ctx.lr = 0x823B1A20;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823DAFA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// srw r7,r9,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// divwu r11,r8,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r8.u32 / ctx.r7.u32 : 0);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// slw r6,r10,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// subf r10,r11,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r11.u64;
	// subfc r4,r5,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// subfe r9,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// subf r4,r5,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DCB08) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DCEC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823DCEC8;
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
	// cmplwi cr6,r6,32
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32, ctx.xer);
	// ble cr6,0x823dcf38
	if (!ctx.cr6.gt) goto loc_823DCF38;
	// addi r6,r6,-32
	ctx.r6.s64 = ctx.r6.s64 + -32;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x823dcc18
	ctx.lr = 0x823DCEEC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823dcf00
	if (!ctx.cr6.eq) goto loc_823DCF00;
loc_823DCEF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823DCF00:
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DCF14;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dcef4
	if (ctx.cr6.eq) goto loc_823DCEF4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rldimi r9,r10,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// std r9,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r9.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823DCF38:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823dcc18
	ctx.lr = 0x823DCF40;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dcef4
	if (ctx.cr6.eq) goto loc_823DCEF4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823E0A90) {
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
	ctx.lr = 0x823E0A98;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r28,r11,r8
	r28.u64 = ctx.r8.u64 - ctx.r11.u64;
	// bge cr6,0x823e0ad0
	if (!ctx.cr6.lt) goto loc_823E0AD0;
loc_823E0AC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823E0AD0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823e0b64
	if (!ctx.cr6.eq) goto loc_823E0B64;
	// cmpwi cr6,r28,27
	ctx.cr6.compare<int32_t>(r28.s32, 27, ctx.xer);
	// blt cr6,0x823e0ac4
	if (ctx.cr6.lt) goto loc_823E0AC4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,19716
	ctx.r10.s64 = ctx.r10.s64 + 19716;
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
loc_823E0AF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e0b18
	if (!ctx.cr0.eq) goto loc_823E0B18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823e0af8
	if (!ctx.cr6.eq) goto loc_823E0AF8;
loc_823E0B18:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823e0c04
	if (!ctx.cr6.eq) goto loc_823E0C04;
	// lbz r10,26(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 26);
	// addi r7,r10,27
	ctx.r7.s64 = ctx.r10.s64 + 27;
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823e0ac4
	if (ctx.cr6.lt) goto loc_823E0AC4;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823e0b60
	if (!ctx.cr6.gt) goto loc_823E0B60;
	// addi r8,r30,27
	ctx.r8.s64 = r30.s64 + 27;
loc_823E0B40:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lbz r9,26(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 26);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823e0b40
	if (ctx.cr6.lt) goto loc_823E0B40;
loc_823E0B60:
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
loc_823E0B64:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bgt cr6,0x823e0ac4
	if (ctx.cr6.gt) goto loc_823E0AC4;
	// addi r29,r30,22
	r29.s64 = r30.s64 + 22;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef2f8
	ctx.lr = 0x823E0B8C;
	sub_823EF2F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x823E0B9C;
	sub_823EF5F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x823e0810
	ctx.lr = 0x823E0BC0;
	sub_823E0810(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_823E0BCC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823e0bec
	if (!ctx.cr0.eq) goto loc_823E0BEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823e0bcc
	if (!ctx.cr6.eq) goto loc_823E0BCC;
loc_823E0BEC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823e0c4c
	if (ctx.cr6.eq) goto loc_823E0C4C;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823E0C04;
	sub_823EF2F8(ctx, base);
loc_823E0C04:
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// li r4,79
	ctx.r4.s64 = 79;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// bl 0x8269d080
	ctx.lr = 0x823E0C1C;
	sub_8269D080(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823e0c34
	if (!ctx.cr6.eq) goto loc_823E0C34;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823E0C34:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r3,r11,r30
	ctx.r3.u64 = r30.u64 - ctx.r11.u64;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823E0C4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x823e0c80
	if (ctx.cr6.eq) goto loc_823E0C80;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r8,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r8.u32);
loc_823E0C80:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823EAE28) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823eae68
	if (ctx.cr6.eq) goto loc_823EAE68;
	// li r5,1812
	ctx.r5.s64 = 1812;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EAE5C;
	sub_823EF5F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EAE68;
	sub_82393BF0(ctx, base);
loc_823EAE68:
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

DEFINE_REX_FUNC(sub_823EBD08) {
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
	ctx.lr = 0x823EBD10;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,1052
	ctx.r5.s64 = 1052;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82393af8
	ctx.lr = 0x823EBD24;
	sub_82393AF8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ebd3c
	if (!ctx.cr6.eq) goto loc_823EBD3C;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d04
	return;
loc_823EBD3C:
	// stw r30,1036(r27)
	REX_STORE_U32(r27.u32 + 1036, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,840(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 840);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,1028(r27)
	REX_STORE_U32(r27.u32 + 1028, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x823ebda4
	if (ctx.cr6.lt) goto loc_823EBDA4;
	// addi r8,r6,-2
	ctx.r8.s64 = ctx.r6.s64 + -2;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823EBD78:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// addi r3,r8,32
	ctx.r3.s64 = ctx.r8.s64 + 32;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// lwzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r30.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bdnz 0x823ebd78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EBD78;
loc_823EBDA4:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823ebdc4
	if (!ctx.cr6.lt) goto loc_823EBDC4;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
loc_823EBDC4:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addic. r31,r11,2
	ctx.xer.ca = ctx.r11.u32 > 4294967293;
	r31.s64 = ctx.r11.s64 + 2;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,1024(r27)
	REX_STORE_U32(r27.u32 + 1024, r31.u32);
	// ble 0x823ebdf0
	if (!ctx.cr0.gt) goto loc_823EBDF0;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r11,r30,836
	ctx.r11.s64 = r30.s64 + 836;
loc_823EBDE4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823ebde4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EBDE4;
loc_823EBDF0:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-17896
	ctx.r6.s64 = ctx.r11.s64 + -17896;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0028
	ctx.lr = 0x823EBE08;
	sub_826A0028(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x823ebe3c
	if (!ctx.cr6.gt) goto loc_823EBE3C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// subf r9,r27,r10
	ctx.r9.u64 = ctx.r10.u64 - r27.u64;
loc_823EBE20:
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// addi r8,r10,-836
	ctx.r8.s64 = ctx.r10.s64 + -836;
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823ebe20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EBE20;
loc_823EBE3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x823ebe68
	if (!ctx.cr6.gt) goto loc_823EBE68;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_823EBE50:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,65
	ctx.r9.s64 = ctx.r9.s64 + 65;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r8,r27
	REX_STORE_U32(ctx.r8.u32 + r27.u32, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823ebe50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EBE50;
loc_823EBE68:
	// lwz r11,832(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 832);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823ebeac
	if (ctx.cr6.gt) goto loc_823EBEAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823ebe94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823EBE94;
	// bdzf 4*cr6+eq,0x823ebe9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823EBE9C;
	// bne cr6,0x823ebea4
	if (!ctx.cr6.eq) goto loc_823EBEA4;
	// li r11,256
	ctx.r11.s64 = 256;
	// b 0x823ebea8
	goto loc_823EBEA8;
loc_823EBE94:
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x823ebea8
	goto loc_823EBEA8;
loc_823EBE9C:
	// li r11,86
	ctx.r11.s64 = 86;
	// b 0x823ebea8
	goto loc_823EBEA8;
loc_823EBEA4:
	// li r11,64
	ctx.r11.s64 = 64;
loc_823EBEA8:
	// stw r11,1032(r27)
	REX_STORE_U32(r27.u32 + 1032, ctx.r11.u32);
loc_823EBEAC:
	// addic. r11,r31,-2
	ctx.xer.ca = r31.u32 > 1;
	ctx.r11.s64 = r31.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823ebf44
	if (!ctx.cr0.gt) goto loc_823EBF44;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r28,r27,516
	r28.s64 = r27.s64 + 516;
	// addi r31,r30,844
	r31.s64 = r30.s64 + 844;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_823EBEC4:
	// lwz r7,1028(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1028);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823ebf2c
	if (!ctx.cr6.gt) goto loc_823EBF2C;
	// addi r4,r30,836
	ctx.r4.s64 = r30.s64 + 836;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823EBEEC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823ebf08
	if (!ctx.cr6.gt) goto loc_823EBF08;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823ebf08
	if (!ctx.cr6.lt) goto loc_823EBF08;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_823EBF08:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823ebf20
	if (!ctx.cr6.lt) goto loc_823EBF20;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823ebf20
	if (!ctx.cr6.gt) goto loc_823EBF20;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_823EBF20:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x823ebeec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EBEEC;
loc_823EBF2C:
	// stw r5,256(r28)
	REX_STORE_U32(r28.u32 + 256, ctx.r5.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stwu r6,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r28.u32 = ea;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x823ebec4
	if (!ctx.cr0.eq) goto loc_823EBEC4;
loc_823EBF44:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823F8258) {
	REX_FUNC_PROLOGUE();
	// lwz r11,11984(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11984);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,11012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// lwz r9,11016(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// li r8,16
	ctx.r8.s64 = 16;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r10,11012(r3)
	REX_STORE_U32(ctx.r3.u32 + 11012, ctx.r10.u32);
	// stb r8,11956(r3)
	REX_STORE_U8(ctx.r3.u32 + 11956, ctx.r8.u8);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,11952(r3)
	REX_STORE_U32(ctx.r3.u32 + 11952, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FB6D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FB6E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r3,3636
	r29.s64 = ctx.r3.s64 + 3636;
loc_823FB6F0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823FB6FC;
	sub_823F8390(ctx, base);
	// stbx r3,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, ctx.r3.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x823fb6f0
	if (ctx.cr6.lt) goto loc_823FB6F0;
	// lbz r11,11959(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11959);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fb720
	if (ctx.cr0.eq) goto loc_823FB720;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823fb740
	goto loc_823FB740;
loc_823FB720:
	// addi r5,r31,3508
	ctx.r5.s64 = r31.s64 + 3508;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fba08
	ctx.lr = 0x823FB730;
	sub_823FBA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823FB740:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823FCD10) {
	REX_FUNC_PROLOGUE();
	// addis r11,r3,-13873
	ctx.r11.s64 = ctx.r3.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fcd30
	if (ctx.cr0.eq) goto loc_823FCD30;
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
loc_823FCD30:
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// ori r3,r3,74
	ctx.r3.u64 = ctx.r3.u64 | 74;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FE7C8) {
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
	ctx.lr = 0x823FE7D0;
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r6,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r6.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,1588(r1)
	REX_STORE_U32(ctx.r1.u32 + 1588, ctx.r9.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r7,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r7.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r8,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r8.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x824008a8
	ctx.lr = 0x823FE808;
	sub_824008A8(ctx, base);
	// li r15,0
	r15.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x823fe834
	if (!ctx.cr6.eq) goto loc_823FE834;
loc_823FE81C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400c48
	ctx.lr = 0x823FE824;
	sub_82400C48(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_823FE82C:
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x826a1cd0
	return;
loc_823FE834:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823fe81c
	if (ctx.cr6.eq) goto loc_823FE81C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823fe81c
	if (ctx.cr6.eq) goto loc_823FE81C;
	// lwz r11,1668(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fe868
	if (!ctx.cr6.eq) goto loc_823FE868;
	// lis r30,-30602
	r30.s64 = -2005532672;
	// ori r30,r30,2156
	r30.u64 = r30.u64 | 2156;
loc_823FE858:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400c48
	ctx.lr = 0x823FE860;
	sub_82400C48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823fe82c
	goto loc_823FE82C;
loc_823FE868:
	// lwz r29,1644(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1644);
	// lwz r23,1660(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823fe884
	if (!ctx.cr6.eq) goto loc_823FE884;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x823fe884
	if (!ctx.cr6.eq) goto loc_823FE884;
	// addi r29,r1,304
	r29.s64 = ctx.r1.s64 + 304;
loc_823FE884:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404240
	ctx.lr = 0x823FE89C;
	sub_82404240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823fe8ac
	if (!ctx.cr0.lt) goto loc_823FE8AC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823fe858
	goto loc_823FE858;
loc_823FE8AC:
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(r23.s32, -1, ctx.xer);
	// bne cr6,0x823fe8bc
	if (!ctx.cr6.eq) goto loc_823FE8BC;
	// lwz r23,20(r29)
	r23.u64 = REX_LOAD_U32(r29.u32 + 20);
	// stw r23,1660(r1)
	REX_STORE_U32(ctx.r1.u32 + 1660, r23.u32);
loc_823FE8BC:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fe8e4
	if (ctx.cr6.eq) goto loc_823FE8E4;
loc_823FE8D0:
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fe8d0
	if (!ctx.cr6.eq) goto loc_823FE8D0;
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_823FE8E4:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(r23.s32, 18, ctx.xer);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bne cr6,0x823fe928
	if (!ctx.cr6.eq) goto loc_823FE928;
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fe91c
	if (ctx.cr6.eq) goto loc_823FE91C;
loc_823FE900:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fe900
	if (!ctx.cr6.eq) goto loc_823FE900;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x823fe928
	if (ctx.cr6.eq) goto loc_823FE928;
loc_823FE91C:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x823fe858
	goto loc_823FE858;
loc_823FE928:
	// lwz r10,172(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r28,-2
	ctx.cr6.compare<int32_t>(r28.s32, -2, ctx.xer);
	// beq cr6,0x823fe970
	if (ctx.cr6.eq) goto loc_823FE970;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fe970
	if (ctx.cr6.lt) goto loc_823FE970;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823fe94c
	if (ctx.cr6.eq) goto loc_823FE94C;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bne cr6,0x823fe974
	if (!ctx.cr6.eq) goto loc_823FE974;
loc_823FE94C:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// ble cr6,0x823fe974
	if (!ctx.cr6.gt) goto loc_823FE974;
loc_823FE95C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823fe95c
	if (ctx.cr6.lt) goto loc_823FE95C;
	// stw r11,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r11.u32);
	// b 0x823fe974
	goto loc_823FE974;
loc_823FE970:
	// stw r10,1564(r1)
	REX_STORE_U32(ctx.r1.u32 + 1564, ctx.r10.u32);
loc_823FE974:
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r27,-2
	ctx.cr6.compare<int32_t>(r27.s32, -2, ctx.xer);
	// beq cr6,0x823fe9bc
	if (ctx.cr6.eq) goto loc_823FE9BC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fe9bc
	if (ctx.cr6.lt) goto loc_823FE9BC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823fe998
	if (ctx.cr6.eq) goto loc_823FE998;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// bne cr6,0x823fe9c0
	if (!ctx.cr6.eq) goto loc_823FE9C0;
loc_823FE998:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// ble cr6,0x823fe9c0
	if (!ctx.cr6.gt) goto loc_823FE9C0;
loc_823FE9A8:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823fe9a8
	if (ctx.cr6.lt) goto loc_823FE9A8;
	// stw r11,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r11.u32);
	// b 0x823fe9c0
	goto loc_823FE9C0;
loc_823FE9BC:
	// stw r10,1572(r1)
	REX_STORE_U32(ctx.r1.u32 + 1572, ctx.r10.u32);
loc_823FE9C0:
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r26,-2
	ctx.cr6.compare<int32_t>(r26.s32, -2, ctx.xer);
	// beq cr6,0x823fea08
	if (ctx.cr6.eq) goto loc_823FEA08;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823fea08
	if (ctx.cr6.lt) goto loc_823FEA08;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823fe9e4
	if (ctx.cr6.eq) goto loc_823FE9E4;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// bne cr6,0x823fea0c
	if (!ctx.cr6.eq) goto loc_823FEA0C;
loc_823FE9E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r11,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// ble cr6,0x823fea0c
	if (!ctx.cr6.gt) goto loc_823FEA0C;
loc_823FE9F4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823fe9f4
	if (ctx.cr6.lt) goto loc_823FE9F4;
	// stw r11,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r11.u32);
	// b 0x823fea0c
	goto loc_823FEA0C;
loc_823FEA08:
	// stw r10,1580(r1)
	REX_STORE_U32(ctx.r1.u32 + 1580, ctx.r10.u32);
loc_823FEA0C:
	// lwz r18,1620(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 1620);
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(r18.s32, -1, ctx.xer);
	// bne cr6,0x823fea20
	if (!ctx.cr6.eq) goto loc_823FEA20;
	// lis r18,8
	r18.s64 = 524288;
	// ori r18,r18,4
	r18.u64 = r18.u64 | 4;
loc_823FEA20:
	// lwz r11,1628(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823fea34
	if (!ctx.cr6.eq) goto loc_823FEA34;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1628(r1)
	REX_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
loc_823FEA34:
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(r23.s32, 18, ctx.xer);
	// bne cr6,0x823fea48
	if (!ctx.cr6.eq) goto loc_823FEA48;
	// oris r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 458752;
	// oris r18,r18,7
	r18.u64 = r18.u64 | 458752;
	// stw r11,1628(r1)
	REX_STORE_U32(ctx.r1.u32 + 1628, ctx.r11.u32);
loc_823FEA48:
	// clrlwi r10,r18,24
	ctx.r10.u64 = r18.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823fea6c
	if (ctx.cr6.eq) goto loc_823FEA6C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823fea6c
	if (ctx.cr6.eq) goto loc_823FEA6C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r14,0
	r14.s64 = 0;
	// bne cr6,0x823fea70
	if (!ctx.cr6.eq) goto loc_823FEA70;
loc_823FEA6C:
	// li r14,1
	r14.s64 = 1;
loc_823FEA70:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fea88
	if (ctx.cr6.eq) goto loc_823FEA88;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16385
	r30.u64 = r30.u64 | 16385;
	// b 0x823fe858
	goto loc_823FE858;
loc_823FEA88:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x826a2e60
	ctx.lr = 0x823FEA98;
	sub_826A2E60(ctx, base);
	// lwz r11,1604(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// lwz r20,1636(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 1636);
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x823feb5c
	if (!ctx.cr6.eq) goto loc_823FEB5C;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x823feb30
	if (ctx.cr6.eq) goto loc_823FEB30;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x823fccc8
	ctx.lr = 0x823FEAC0;
	sub_823FCCC8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823feae0
	if (ctx.cr6.eq) goto loc_823FEAE0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823feae0
	if (ctx.cr6.eq) goto loc_823FEAE0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823feb30
	if (!ctx.cr6.eq) goto loc_823FEB30;
loc_823FEAE0:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823feb30
	if (!ctx.cr6.eq) goto loc_823FEB30;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x826a1e70
	ctx.lr = 0x823FEAF8;
	sub_826A1E70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r10,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823fcdb0
	ctx.lr = 0x823FEB1C;
	sub_823FCDB0(ctx, base);
	// rlwinm r11,r3,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-449
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -449, ctx.xer);
	// bne cr6,0x823feb30
	if (!ctx.cr6.eq) goto loc_823FEB30;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_823FEB30:
	// addis r11,r7,-13873
	ctx.r11.s64 = ctx.r7.s64 + -909180928;
	// addic. r11,r11,-19521
	ctx.xer.ca = ctx.r11.u32 > 19520;
	ctx.r11.s64 = ctx.r11.s64 + -19521;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823feb50
	if (ctx.cr0.eq) goto loc_823FEB50;
	// cmplwi cr6,r11,1503
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1503, ctx.xer);
	// bne cr6,0x823feb58
	if (!ctx.cr6.eq) goto loc_823FEB58;
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// ori r7,r7,134
	ctx.r7.u64 = ctx.r7.u64 | 134;
	// b 0x823feb58
	goto loc_823FEB58;
loc_823FEB50:
	// lis r7,2048
	ctx.r7.s64 = 134217728;
	// ori r7,r7,74
	ctx.r7.u64 = ctx.r7.u64 | 74;
loc_823FEB58:
	// stw r7,1604(r1)
	REX_STORE_U32(ctx.r1.u32 + 1604, ctx.r7.u32);
loc_823FEB5C:
	// lwz r22,1652(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 1652);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x823feb78
	if (ctx.cr6.eq) goto loc_823FEB78;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a1e70
	ctx.lr = 0x823FEB78;
	sub_826A1E70(ctx, base);
loc_823FEB78:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// addi r9,r1,1604
	ctx.r9.s64 = ctx.r1.s64 + 1604;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r7,r1,1588
	ctx.r7.s64 = ctx.r1.s64 + 1588;
	// addi r6,r1,1580
	ctx.r6.s64 = ctx.r1.s64 + 1580;
	// addi r5,r1,1572
	ctx.r5.s64 = ctx.r1.s64 + 1572;
	// addi r4,r1,1564
	ctx.r4.s64 = ctx.r1.s64 + 1564;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823fdd20
	ctx.lr = 0x823FEB9C;
	sub_823FDD20(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x823fe858
	if (ctx.cr0.lt) goto loc_823FE858;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lwz r19,1588(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1588);
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(r23.s32, 3, ctx.xer);
	// ori r29,r11,14
	r29.u64 = ctx.r11.u64 | 14;
	// beq cr6,0x823febe8
	if (ctx.cr6.eq) goto loc_823FEBE8;
	// cmpwi cr6,r23,17
	ctx.cr6.compare<int32_t>(r23.s32, 17, ctx.xer);
	// beq cr6,0x823febdc
	if (ctx.cr6.eq) goto loc_823FEBDC;
	// cmpwi cr6,r23,18
	ctx.cr6.compare<int32_t>(r23.s32, 18, ctx.xer);
	// bne cr6,0x823fec1c
	if (!ctx.cr6.eq) goto loc_823FEC1C;
	// lwz r4,1564(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// li r10,18
	ctx.r10.s64 = 18;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x823febf8
	goto loc_823FEBF8;
loc_823FEBDC:
	// lwz r5,1580(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1580);
	// li r10,17
	ctx.r10.s64 = 17;
	// b 0x823febf0
	goto loc_823FEBF0;
loc_823FEBE8:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
loc_823FEBF0:
	// lwz r3,1564(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1564);
	// lwz r4,1572(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1572);
loc_823FEBF8:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r9,1612(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1612);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// lwz r8,1604(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1604);
	// bl 0x822d3178
	ctx.lr = 0x823FEC0C;
	sub_822D3178(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
loc_823FEC1C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823fef40
	if (ctx.cr6.lt) goto loc_823FEF40;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// addi r21,r1,160
	r21.s64 = ctx.r1.s64 + 160;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r23,0
	r23.s64 = 0;
	// lwz r27,192(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r25,r11,21,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// lwz r26,196(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r24,204(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// beq cr6,0x823feedc
	if (ctx.cr6.eq) goto loc_823FEEDC;
loc_823FEC4C:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fedbc
	if (ctx.cr6.eq) goto loc_823FEDBC;
loc_823FEC60:
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(r28.u32, r19.u32, ctx.xer);
	// bge cr6,0x823fedbc
	if (!ctx.cr6.lt) goto loc_823FEDBC;
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823fecb0
	if (ctx.cr6.eq) goto loc_823FECB0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823fec98
	if (ctx.cr6.eq) goto loc_823FEC98;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823feccc
	if (!ctx.cr6.eq) goto loc_823FECCC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d2ff0
	ctx.lr = 0x823FEC94;
	sub_822D2FF0(ctx, base);
	// b 0x823fecbc
	goto loc_823FECBC;
loc_823FEC98:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d30b0
	ctx.lr = 0x823FECA4;
	sub_822D30B0(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x823fecc4
	goto loc_823FECC4;
loc_823FECB0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d2ef0
	ctx.lr = 0x823FECBC;
	sub_822D2EF0(ctx, base);
loc_823FECBC:
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_823FECC4:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
loc_823FECCC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823fef20
	if (ctx.cr6.lt) goto loc_823FEF20;
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823fecf0
	if (ctx.cr6.eq) goto loc_823FECF0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823fed74
	if (ctx.cr6.eq) goto loc_823FED74;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823fed2c
	if (!ctx.cr6.eq) goto loc_823FED2C;
loc_823FECF0:
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// bl 0x823fce88
	ctx.lr = 0x823FED28;
	sub_823FCE88(ctx, base);
loc_823FED28:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823FED2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823fef20
	if (ctx.cr6.lt) goto loc_823FEF20;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823fed48
	if (ctx.cr6.eq) goto loc_823FED48;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x823FED44;
	sub_822C5EF0(ctx, base);
	// li r15,0
	r15.s64 = 0;
loc_823FED48:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823fed5c
	if (ctx.cr6.eq) goto loc_823FED5C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x823FED58;
	sub_822C5EF0(ctx, base);
	// li r16,0
	r16.s64 = 0;
loc_823FED5C:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823fedbc
	if (!ctx.cr6.lt) goto loc_823FEDBC;
	// lwz r31,76(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 76);
	// b 0x823fec60
	goto loc_823FEC60;
loc_823FED74:
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823fd560
	ctx.lr = 0x823FEDB8;
	sub_823FD560(ctx, base);
	// b 0x823fed28
	goto loc_823FED28;
loc_823FEDBC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bne cr6,0x823feec8
	if (!ctx.cr6.eq) goto loc_823FEEC8;
	// b 0x823feec0
	goto loc_823FEEC0;
loc_823FEDC8:
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823fee10
	if (ctx.cr6.eq) goto loc_823FEE10;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823fedf8
	if (ctx.cr6.eq) goto loc_823FEDF8;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823fee2c
	if (!ctx.cr6.eq) goto loc_823FEE2C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d2ff0
	ctx.lr = 0x823FEDF4;
	sub_822D2FF0(ctx, base);
	// b 0x823fee1c
	goto loc_823FEE1C;
loc_823FEDF8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d30b0
	ctx.lr = 0x823FEE04;
	sub_822D30B0(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// b 0x823fee24
	goto loc_823FEE24;
loc_823FEE10:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822d2ef0
	ctx.lr = 0x823FEE1C;
	sub_822D2EF0(ctx, base);
loc_823FEE1C:
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
loc_823FEE24:
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r29
	r30.u64 = ctx.r11.u64 & r29.u64;
loc_823FEE2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823fef20
	if (ctx.cr6.lt) goto loc_823FEF20;
	// lwz r11,1660(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1660);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823fee50
	if (ctx.cr6.eq) goto loc_823FEE50;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x823fef54
	if (ctx.cr6.eq) goto loc_823FEF54;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x823fee8c
	if (!ctx.cr6.eq) goto loc_823FEE8C;
loc_823FEE50:
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r20,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r20.u32);
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// bl 0x823fce88
	ctx.lr = 0x823FEE88;
	sub_823FCE88(ctx, base);
loc_823FEE88:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823FEE8C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823fef20
	if (ctx.cr6.lt) goto loc_823FEF20;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823feea8
	if (ctx.cr6.eq) goto loc_823FEEA8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x823FEEA4;
	sub_822C5EF0(ctx, base);
	// li r15,0
	r15.s64 = 0;
loc_823FEEA8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823feebc
	if (ctx.cr6.eq) goto loc_823FEEBC;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x823FEEB8;
	sub_822C5EF0(ctx, base);
	// li r16,0
	r16.s64 = 0;
loc_823FEEBC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823FEEC0:
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(r28.u32, r19.u32, ctx.xer);
	// blt cr6,0x823fedc8
	if (ctx.cr6.lt) goto loc_823FEDC8;
loc_823FEEC8:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// lwz r21,80(r21)
	r21.u64 = REX_LOAD_U32(r21.u32 + 80);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823fec4c
	if (ctx.cr6.lt) goto loc_823FEC4C;
loc_823FEEDC:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq cr6,0x823fef10
	if (ctx.cr6.eq) goto loc_823FEF10;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bge cr6,0x823fef10
	if (!ctx.cr6.lt) goto loc_823FEF10;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r6,1628(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 1628);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// bl 0x823fe3a0
	ctx.lr = 0x823FEF08;
	sub_823FE3A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x823fef20
	if (ctx.cr0.lt) goto loc_823FEF20;
loc_823FEF10:
	// lwz r11,1668(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1668);
	// li r30,0
	r30.s64 = 0;
	// stw r17,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r17.u32);
	// li r17,0
	r17.s64 = 0;
loc_823FEF20:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x823fef30
	if (ctx.cr6.eq) goto loc_823FEF30;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x823FEF30;
	sub_822C5EF0(ctx, base);
loc_823FEF30:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x823fef40
	if (ctx.cr6.eq) goto loc_823FEF40;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x823FEF40;
	sub_822C5EF0(ctx, base);
loc_823FEF40:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x823fe858
	if (ctx.cr6.eq) goto loc_823FE858;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x823FEF50;
	sub_822C5EF0(ctx, base);
	// b 0x823fe858
	goto loc_823FE858;
loc_823FEF54:
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r18,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// bl 0x823fd560
	ctx.lr = 0x823FEF98;
	sub_823FD560(ctx, base);
	// b 0x823fee88
	goto loc_823FEE88;
}

DEFINE_REX_FUNC(sub_8243AFC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8243AFD0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// not r31,r5
	r31.u64 = ~ctx.r5.u64;
	// b 0x8243aff0
	goto loc_8243AFF0;
loc_8243AFE4:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8243b014
	if (ctx.cr6.eq) goto loc_8243B014;
loc_8243AFF0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824395e8
	ctx.lr = 0x8243B008;
	sub_824395E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8243afe4
	if (!ctx.cr0.lt) goto loc_8243AFE4;
	// b 0x8243b018
	goto loc_8243B018;
loc_8243B014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243B018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8243C628) {
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
	// beq 0x8243c65c
	if (ctx.cr0.eq) goto loc_8243C65C;
	// rlwinm r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x8243c664
	if (!ctx.cr6.eq) goto loc_8243C664;
	// b 0x8243c670
	goto loc_8243C670;
loc_8243C65C:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243c670
	if (!ctx.cr0.eq) goto loc_8243C670;
loc_8243C664:
	// lwz r3,1536(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// bl 0x824bf588
	ctx.lr = 0x8243C66C;
	sub_824BF588(ctx, base);
	// stw r3,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, ctx.r3.u32);
loc_8243C670:
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

DEFINE_REX_FUNC(sub_8243FFE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8243FFF0;
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
	// beq cr6,0x82440008
	if (ctx.cr6.eq) goto loc_82440008;
	// bl 0x8243c688
	ctx.lr = 0x82440008;
	sub_8243C688(ctx, base);
loc_82440008:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8244001c
	if (ctx.cr6.eq) goto loc_8244001C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c688
	ctx.lr = 0x8244001C;
	sub_8243C688(ctx, base);
loc_8244001C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1436);
	// bl 0x824bf540
	ctx.lr = 0x82440028;
	sub_824BF540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1500(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1500);
	// bl 0x824bf540
	ctx.lr = 0x82440034;
	sub_824BF540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1496(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1496);
	// bl 0x824bf540
	ctx.lr = 0x82440040;
	sub_824BF540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1652(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1652);
	// bl 0x824bf540
	ctx.lr = 0x8244004C;
	sub_824BF540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1656(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1656);
	// bl 0x824bf540
	ctx.lr = 0x82440058;
	sub_824BF540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1592);
	// bl 0x824bf540
	ctx.lr = 0x82440064;
	sub_824BF540(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8244007c
	if (ctx.cr0.eq) goto loc_8244007C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1540(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// bl 0x8243c5e0
	ctx.lr = 0x8244007C;
	sub_8243C5E0(ctx, base);
loc_8244007C:
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82440094
	if (ctx.cr0.eq) goto loc_82440094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1628(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1628);
	// bl 0x824bf540
	ctx.lr = 0x82440094;
	sub_824BF540(ctx, base);
loc_82440094:
	// lwz r11,1604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824400e0
	if (ctx.cr6.eq) goto loc_824400E0;
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
	// ble 0x824400d4
	if (!ctx.cr0.gt) goto loc_824400D4;
	// li r29,0
	r29.s64 = 0;
loc_824400B8:
	// lwz r11,1604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x824bf540
	ctx.lr = 0x824400C8;
	sub_824BF540(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x824400b8
	if (!ctx.cr0.eq) goto loc_824400B8;
loc_824400D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1604(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1604);
	// bl 0x824bf540
	ctx.lr = 0x824400E0;
	sub_824BF540(ctx, base);
loc_824400E0:
	// addi r3,r31,1380
	ctx.r3.s64 = r31.s64 + 1380;
	// bl 0x824c2c88
	ctx.lr = 0x824400E8;
	sub_824C2C88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824400F8;
	sub_826A1E70(ctx, base);
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
	// bl 0x826a2e60
	ctx.lr = 0x82440114;
	sub_826A2E60(ctx, base);
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
	// bl 0x826a1e70
	ctx.lr = 0x82440130;
	sub_826A1E70(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82445BF8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r10,r10,-7996
	ctx.r10.s64 = ctx.r10.s64 + -7996;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824460B0) {
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
	// bl 0x82448598
	ctx.lr = 0x824460CC;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82444608
	ctx.lr = 0x824460DC;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82446114
	if (ctx.cr0.eq) goto loc_82446114;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r10,-7972
	ctx.r10.s64 = ctx.r10.s64 + -7972;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x82446118
	goto loc_82446118;
loc_82446114:
	// li r31,0
	r31.s64 = 0;
loc_82446118:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82446128
	if (!ctx.cr6.eq) goto loc_82446128;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82446164
	goto loc_82446164;
loc_82446128:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82446160
	if (ctx.cr6.eq) goto loc_82446160;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82446150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82446164
	if (ctx.cr0.eq) goto loc_82446164;
loc_82446160:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82446164:
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

DEFINE_REX_FUNC(sub_82449528) {
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
	ctx.lr = 0x82449530;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,25
	ctx.r4.s64 = 25;
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
	// bl 0x824447b0
	ctx.lr = 0x82449554;
	sub_824447B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r11,r11,-7456
	ctx.r11.s64 = ctx.r11.s64 + -7456;
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// stw r27,28(r31)
	REX_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r26,40(r31)
	REX_STORE_U32(r31.u32 + 40, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8244A980) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8244aa48
	if (ctx.cr6.eq) goto loc_8244AA48;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8244a898
	ctx.lr = 0x8244A9A4;
	sub_8244A898(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8244a9b4
	if (ctx.cr0.lt) goto loc_8244A9B4;
loc_8244A9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8244aa50
	goto loc_8244AA50;
loc_8244A9B4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8244aa48
	if (!ctx.cr6.eq) goto loc_8244AA48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r11,19332
	ctx.r10.s64 = ctx.r11.s64 + 19332;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8244A9D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8244a9f4
	if (ctx.cr0.eq) goto loc_8244A9F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244a9d0
	if (ctx.cr6.eq) goto loc_8244A9D0;
loc_8244A9F4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244aa04
	if (!ctx.cr0.eq) goto loc_8244AA04;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8244aa40
	goto loc_8244AA40;
loc_8244AA04:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,19324
	ctx.r10.s64 = ctx.r10.s64 + 19324;
loc_8244AA10:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8244aa34
	if (ctx.cr0.eq) goto loc_8244AA34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244aa10
	if (ctx.cr6.eq) goto loc_8244AA10;
loc_8244AA34:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244aa48
	if (!ctx.cr0.eq) goto loc_8244AA48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8244AA40:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8244a9ac
	goto loc_8244A9AC;
loc_8244AA48:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8244AA50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82454DB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455000) {
	REX_FUNC_PROLOGUE();
	// b 0x821aae70
	sub_821AAE70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82455068) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,620(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455148) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82455150;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1540(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1540);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bne cr6,0x8245516c
	if (!ctx.cr6.eq) goto loc_8245516C;
	// li r30,1024
	r30.s64 = 1024;
loc_8245516C:
	// lwz r11,1536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x82455190
	if (!ctx.cr6.gt) goto loc_82455190;
	// lwz r11,1536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
loc_82455184:
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82455184
	if (ctx.cr6.gt) goto loc_82455184;
loc_82455190:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824551dc
	if (ctx.cr6.eq) goto loc_824551DC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824551A4;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824551b8
	if (!ctx.cr0.eq) goto loc_824551B8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824551e0
	goto loc_824551E0;
loc_824551B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,1536(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// lwz r4,1532(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// bl 0x826a1e70
	ctx.lr = 0x824551C8;
	sub_826A1E70(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,1532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1532);
	// bl 0x823f0350
	ctx.lr = 0x824551D4;
	sub_823F0350(ctx, base);
	// stw r29,1532(r31)
	REX_STORE_U32(r31.u32 + 1532, r29.u32);
	// stw r30,1540(r31)
	REX_STORE_U32(r31.u32 + 1540, r30.u32);
loc_824551DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824551E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824589C8) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,15356
	ctx.r4.s64 = ctx.r10.s64 + 15356;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x824589EC;
	sub_824555B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245A318) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,16344
	ctx.r4.s64 = ctx.r10.s64 + 16344;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A33C;
	sub_824555B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8245C948) {
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
	ctx.lr = 0x8245C950;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// clrlwi r29,r11,12
	r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8245C994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245C9C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r26,4336
	r26.s64 = 284164096;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// beq cr6,0x8245cb0c
	if (ctx.cr6.eq) goto loc_8245CB0C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8245CA18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CA48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8245CA88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,332(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8245CABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245ba78
	ctx.lr = 0x8245CB04;
	sub_8245BA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
loc_8245CB0C:
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r30,15
	r30.s64 = 983040;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// beq cr6,0x8245cb38
	if (ctx.cr6.eq) goto loc_8245CB38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455928
	ctx.lr = 0x8245CB24;
	sub_82455928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8245cb48
	if (!ctx.cr6.eq) goto loc_8245CB48;
loc_8245CB38:
	// lwz r11,1812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1812);
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245cb4c
	if (!ctx.cr6.gt) goto loc_8245CB4C;
loc_8245CB48:
	// li r27,1
	r27.s64 = 1;
loc_8245CB4C:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x8245cc28
	if (!ctx.cr6.eq) goto loc_8245CC28;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245cc94
	if (!ctx.cr6.gt) goto loc_8245CC94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r29,r11,14172
	r29.s64 = ctx.r11.s64 + 14172;
	// addi r28,r10,14148
	r28.s64 = ctx.r10.s64 + 14148;
loc_8245CB80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245CB88;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8245cbb0
	if (ctx.cr6.eq) goto loc_8245CBB0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82404168
	ctx.lr = 0x8245CBAC;
	sub_82404168(ctx, base);
	// b 0x8245cbe0
	goto loc_8245CBE0;
loc_8245CBB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455830
	ctx.lr = 0x8245CBC8;
	sub_82455830(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82404168
	ctx.lr = 0x8245CBE0;
	sub_82404168(ctx, base);
loc_8245CBE0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245CBF0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CC0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245cb80
	if (ctx.cr6.lt) goto loc_8245CB80;
	// b 0x8245cc94
	goto loc_8245CC94;
loc_8245CC28:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8245cc48
	if (ctx.cr6.eq) goto loc_8245CC48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,14148
	ctx.r5.s64 = ctx.r11.s64 + 14148;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8244a6e0
	ctx.lr = 0x8245CC44;
	sub_8244A6E0(ctx, base);
	// b 0x8245cc60
	goto loc_8245CC60;
loc_8245CC48:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455830
	ctx.lr = 0x8245CC60;
	sub_82455830(ctx, base);
loc_8245CC60:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r10,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245CC8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
loc_8245CC94:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8245cd08
	if (ctx.cr6.eq) goto loc_8245CD08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824559d0
	ctx.lr = 0x8245CCA4;
	sub_824559D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455830
	ctx.lr = 0x8245CCC4;
	sub_82455830(ctx, base);
	// lwz r11,1812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1812);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82455d10
	ctx.lr = 0x8245CCE4;
	sub_82455D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455e48
	ctx.lr = 0x8245CD00;
	sub_82455E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
loc_8245CD08:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26300
	ctx.r4.s64 = ctx.r11.s64 + -26300;
	// bl 0x824555b8
	ctx.lr = 0x8245CD18;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245cd28
	if (ctx.cr0.lt) goto loc_8245CD28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82472af8
	ctx.lr = 0x8245CD28;
	sub_82472AF8(ctx, base);
loc_8245CD28:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82475700) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// beq cr6,0x8247573c
	if (ctx.cr6.eq) goto loc_8247573C;
loc_82475734:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8247573C:
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82475750
	if (!ctx.cr6.eq) goto loc_82475750;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x824757b8
	goto loc_824757B8;
loc_82475750:
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8247578c
	if (ctx.cr6.gt) goto loc_8247578C;
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// b 0x824757b4
	goto loc_824757B4;
loc_8247578C:
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// lis r10,29776
	ctx.r10.s64 = 1951399936;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824757bc
	if (ctx.cr6.eq) goto loc_824757BC;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
loc_824757B4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_824757B8:
	// bne cr6,0x82475734
	if (!ctx.cr6.eq) goto loc_82475734;
loc_824757BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82478F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb0
	ctx.lr = 0x82478F98;
	// lwz r10,24(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r27,r9,r10
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r26,r7,r10
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r9,52(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r30,52(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 52);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82478fec
	if (ctx.cr6.eq) goto loc_82478FEC;
	// lwz r31,20(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
loc_82478FD4:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82478fd4
	if (!ctx.cr6.eq) goto loc_82478FD4;
loc_82478FEC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82479014
	if (ctx.cr6.eq) goto loc_82479014;
	// lwz r31,20(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
loc_82478FFC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82478ffc
	if (!ctx.cr6.eq) goto loc_82478FFC;
loc_82479014:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82479048
	if (!ctx.cr6.lt) goto loc_82479048;
	// subf r29,r8,r11
	r29.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82479030:
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r6,20(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// bdnz 0x82479030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82479030;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
loc_82479048:
	// ble cr6,0x8247906c
	if (!ctx.cr6.gt) goto loc_8247906C;
	// subf r29,r11,r8
	r29.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82479058:
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// bdnz 0x82479058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82479058;
loc_8247906C:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x824790a0
	if (ctx.cr6.eq) goto loc_824790A0;
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
loc_82479078:
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r6,20(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479078
	if (!ctx.cr6.eq) goto loc_82479078;
loc_824790A0:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bge cr6,0x824790ec
	if (!ctx.cr6.lt) goto loc_824790EC;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// lwz r7,20(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824790BC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824790d4
	if (!ctx.cr6.gt) goto loc_824790D4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_824790D4:
	// lwz r11,88(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824790e4
	if (!ctx.cr6.lt) goto loc_824790E4;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_824790E4:
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// bdnz 0x824790bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824790BC;
loc_824790EC:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r28.u32, ctx.xer);
	// bge cr6,0x82479138
	if (!ctx.cr6.lt) goto loc_82479138;
	// subf r11,r8,r28
	ctx.r11.u64 = r28.u64 - ctx.r8.u64;
	// lwz r8,20(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82479108:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82479120
	if (!ctx.cr6.gt) goto loc_82479120;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82479120:
	// lwz r11,88(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82479130
	if (!ctx.cr6.lt) goto loc_82479130;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82479130:
	// lwz r30,20(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// bdnz 0x82479108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82479108;
loc_82479138:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82479148
	if (ctx.cr6.lt) goto loc_82479148;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82479158
	if (!ctx.cr6.gt) goto loc_82479158;
loc_82479148:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82479174
	if (ctx.cr6.lt) goto loc_82479174;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// bgt cr6,0x82479174
	if (ctx.cr6.gt) goto loc_82479174;
loc_82479158:
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82479168
	if (!ctx.cr6.lt) goto loc_82479168;
loc_82479160:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824792b8
	goto loc_824792B8;
loc_82479168:
	// ble cr6,0x82479174
	if (!ctx.cr6.gt) goto loc_82479174;
loc_8247916C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x824792b8
	goto loc_824792B8;
loc_82479174:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,20(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r7,r9,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r30,24(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r31,24(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824791d8
	if (ctx.cr6.eq) goto loc_824791D8;
	// lwz r6,20(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
loc_824791C0:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824791c0
	if (!ctx.cr6.eq) goto loc_824791C0;
loc_824791D8:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x82479200
	if (ctx.cr6.eq) goto loc_82479200;
	// lwz r6,20(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
loc_824791E8:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824791e8
	if (!ctx.cr6.eq) goto loc_824791E8;
loc_82479200:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82479230
	if (!ctx.cr6.lt) goto loc_82479230;
	// subf r6,r8,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82479214:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r31,24(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bdnz 0x82479214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82479214;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
loc_82479230:
	// ble cr6,0x82479254
	if (!ctx.cr6.gt) goto loc_82479254;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82479240:
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r30,24(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// bdnz 0x82479240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82479240;
loc_82479254:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82479288
	if (ctx.cr6.eq) goto loc_82479288;
	// lwz r10,20(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
loc_82479260:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r31,24(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r30,24(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82479260
	if (!ctx.cr6.eq) goto loc_82479260;
loc_82479288:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8247929c
	if (ctx.cr6.eq) goto loc_8247929C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824792a4
	if (!ctx.cr6.eq) goto loc_824792A4;
	// b 0x8247916c
	goto loc_8247916C;
loc_8247929C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82479160
	if (!ctx.cr6.eq) goto loc_82479160;
loc_824792A4:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8247916c
	if (ctx.cr6.lt) goto loc_8247916C;
	// subfc r11,r3,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r3.u32;
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_824792B8:
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8249AF20) {
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
	// bl 0x8249ad80
	ctx.lr = 0x8249AF40;
	sub_8249AD80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249afa4
	if (ctx.cr0.eq) goto loc_8249AFA4;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249afa4
	if (ctx.cr6.eq) goto loc_8249AFA4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8249afa4
	if (!ctx.cr6.eq) goto loc_8249AFA4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8249afa4
	if (!ctx.cr6.eq) goto loc_8249AFA4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8249afa4
	if (!ctx.cr6.eq) goto loc_8249AFA4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x82494458
	ctx.lr = 0x8249AF94;
	sub_82494458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8249afac
	if (ctx.cr0.lt) goto loc_8249AFAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249afac
	goto loc_8249AFAC;
loc_8249AFA4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8249AFAC:
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

DEFINE_REX_FUNC(sub_824A1838) {
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
	// bl 0x826a1c8c
	ctx.lr = 0x824A1840;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r18,0
	r18.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r18.u32);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r18
	r28.u64 = r18.u64;
	// beq cr6,0x824a1874
	if (ctx.cr6.eq) goto loc_824A1874;
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_824A1874:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82446980
	ctx.lr = 0x824A187C;
	sub_82446980(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// addi r21,r17,16
	r21.s64 = r17.s64 + 16;
	// lwz r27,24(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a18bc
	if (ctx.cr0.eq) goto loc_824A18BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r5,3047
	ctx.r5.s64 = 3047;
	// addi r6,r11,-6580
	ctx.r6.s64 = ctx.r11.s64 + -6580;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A18BC;
	sub_82494D48(ctx, base);
loc_824A18BC:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a18e4
	if (ctx.cr0.eq) goto loc_824A18E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r5,3006
	ctx.r5.s64 = 3006;
	// addi r6,r11,-6624
	ctx.r6.s64 = ctx.r11.s64 + -6624;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A18E4;
	sub_82494D48(ctx, base);
loc_824A18E4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82495798
	ctx.lr = 0x824A18F0;
	sub_82495798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a1914
	if (!ctx.cr0.eq) goto loc_824A1914;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r5,3038
	ctx.r5.s64 = 3038;
	// addi r6,r11,-6668
	ctx.r6.s64 = ctx.r11.s64 + -6668;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A1914;
	sub_82494D48(ctx, base);
loc_824A1914:
	// mr r30,r18
	r30.u64 = r18.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824a19a0
	if (ctx.cr6.eq) goto loc_824A19A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-6716
	r29.s64 = ctx.r11.s64 + -6716;
loc_824A192C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824a1994
	if (ctx.cr6.eq) goto loc_824A1994;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x824a1994
	if (!ctx.cr6.eq) goto loc_824A1994;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a196c
	if (ctx.cr6.eq) goto loc_824A196C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x824a196c
	if (!ctx.cr6.eq) goto loc_824A196C;
	// li r30,1
	r30.s64 = 1;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x824a1994
	goto loc_824A1994;
loc_824A196C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824a1994
	if (ctx.cr6.eq) goto loc_824A1994;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,3044
	ctx.r5.s64 = 3044;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82494d48
	ctx.lr = 0x824A1994;
	sub_82494D48(ctx, base);
loc_824A1994:
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824a192c
	if (!ctx.cr6.eq) goto loc_824A192C;
loc_824A19A0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A19A8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a19cc
	if (ctx.cr0.eq) goto loc_824A19CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-22516
	ctx.r6.s64 = ctx.r11.s64 + -22516;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824A19C4;
	sub_82444918(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// b 0x824a19d0
	goto loc_824A19D0;
loc_824A19CC:
	// mr r20,r18
	r20.u64 = r18.u64;
loc_824A19D0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x824A19E0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1a08
	if (ctx.cr0.eq) goto loc_824A1A08;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x824453f8
	ctx.lr = 0x824A1A00;
	sub_824453F8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x824a1a0c
	goto loc_824A1A0C;
loc_824A1A08:
	// mr r22,r18
	r22.u64 = r18.u64;
loc_824A1A0C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// stw r22,8(r20)
	REX_STORE_U32(r20.u32 + 8, r22.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82444890
	ctx.lr = 0x824A1A20;
	sub_82444890(ctx, base);
	// stw r3,20(r22)
	REX_STORE_U32(r22.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82444750
	ctx.lr = 0x824A1A34;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1a48
	if (ctx.cr0.eq) goto loc_824A1A48;
	// bl 0x824463c8
	ctx.lr = 0x824A1A40;
	sub_824463C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824a1a4c
	goto loc_824A1A4C;
loc_824A1A48:
	// mr r31,r18
	r31.u64 = r18.u64;
loc_824A1A4C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// stw r31,24(r22)
	REX_STORE_U32(r22.u32 + 24, r31.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1a7c
	if (ctx.cr6.eq) goto loc_824A1A7C;
	// bl 0x82444890
	ctx.lr = 0x824A1A70;
	sub_82444890(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
loc_824A1A7C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824a1a98
	if (ctx.cr6.eq) goto loc_824A1A98;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82444890
	ctx.lr = 0x824A1A8C;
	sub_82444890(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
loc_824A1A98:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824a1ab4
	if (ctx.cr6.eq) goto loc_824A1AB4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82444890
	ctx.lr = 0x824A1AA8;
	sub_82444890(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
loc_824A1AB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824955e0
	ctx.lr = 0x824A1AC4;
	sub_824955E0(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824a1b48
	if (ctx.cr6.eq) goto loc_824A1B48;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824a1af8
	if (!ctx.cr6.eq) goto loc_824A1AF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r5,3076
	ctx.r5.s64 = 3076;
	// addi r6,r11,-6760
	ctx.r6.s64 = ctx.r11.s64 + -6760;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A1AF4;
	sub_82494D48(ctx, base);
	// mr r19,r18
	r19.u64 = r18.u64;
loc_824A1AF8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824a1b48
	if (ctx.cr6.eq) goto loc_824A1B48;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82444890
	ctx.lr = 0x824A1B08;
	sub_82444890(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
loc_824A1B14:
	// lwz r3,8(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1b3c
	if (ctx.cr6.eq) goto loc_824A1B3C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824a1b3c
	if (!ctx.cr6.eq) goto loc_824A1B3C;
	// bl 0x82444890
	ctx.lr = 0x824A1B30;
	sub_82444890(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
loc_824A1B3C:
	// lwz r19,12(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 12);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x824a1b14
	if (!ctx.cr6.eq) goto loc_824A1B14;
loc_824A1B48:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824a1b70
	if (ctx.cr6.eq) goto loc_824A1B70;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1b70
	if (ctx.cr6.eq) goto loc_824A1B70;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82444890
	ctx.lr = 0x824A1B64;
	sub_82444890(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
loc_824A1B70:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8249b4f0
	ctx.lr = 0x824A1BA0;
	sub_8249B4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824a1bb8
	if (!ctx.cr0.lt) goto loc_824A1BB8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3003
	ctx.r5.s64 = 3003;
	// addi r6,r11,-12396
	ctx.r6.s64 = ctx.r11.s64 + -12396;
	// b 0x824a1be8
	goto loc_824A1BE8;
loc_824A1BB8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r23,132(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne cr6,0x824a1e18
	if (!ctx.cr6.eq) goto loc_824A1E18;
	// lwz r5,40(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 40);
	// bl 0x824937e8
	ctx.lr = 0x824A1BD4;
	sub_824937E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824a1c04
	if (!ctx.cr0.eq) goto loc_824A1C04;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3068
	ctx.r5.s64 = 3068;
	// addi r6,r11,-6812
	ctx.r6.s64 = ctx.r11.s64 + -6812;
loc_824A1BE8:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82494d48
	ctx.lr = 0x824A1BF8;
	sub_82494D48(ctx, base);
loc_824A1BF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824A1BFC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cdc
	return;
loc_824A1C04:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// mr r26,r18
	r26.u64 = r18.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r25,r18
	r25.u64 = r18.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,40(r22)
	REX_STORE_U32(r22.u32 + 40, ctx.r11.u32);
	// lwz r29,44(r23)
	r29.u64 = REX_LOAD_U32(r23.u32 + 44);
	// lwz r30,44(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 44);
	// b 0x824a1da4
	goto loc_824A1DA4;
loc_824A1C38:
	// lwz r27,8(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824a1e0c
	if (ctx.cr6.eq) goto loc_824A1E0C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x824a1ce4
	if (!ctx.cr6.eq) goto loc_824A1CE4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824a1c70
	if (ctx.cr6.eq) goto loc_824A1C70;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1c70
	if (ctx.cr6.eq) goto loc_824A1C70;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x824a1cc4
	if (ctx.cr6.eq) goto loc_824A1CC4;
loc_824A1C70:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A1C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x824A1C94;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1cb0
	if (ctx.cr0.eq) goto loc_824A1CB0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,16(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82444918
	ctx.lr = 0x824A1CAC;
	sub_82444918(ctx, base);
	// b 0x824a1cb4
	goto loc_824A1CB4;
loc_824A1CB0:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
loc_824A1CB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// stw r3,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824A1CC4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,36(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82444868
	ctx.lr = 0x824A1CDC;
	sub_82444868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824a1db0
	if (ctx.cr0.eq) goto loc_824A1DB0;
loc_824A1CE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// lwz r28,8(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// bne cr6,0x824a1d3c
	if (!ctx.cr6.eq) goto loc_824A1D3C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x824a1d9c
	if (ctx.cr6.eq) goto loc_824A1D9C;
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x824a1d9c
	goto loc_824A1D9C;
loc_824A1D3C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 20);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82493608
	ctx.lr = 0x824A1D4C;
	sub_82493608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r26,r29
	r26.u64 = r29.u64;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 24);
	// mr r25,r30
	r25.u64 = r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_824A1D9C:
	// lwz r29,12(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_824A1DA4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824a1c38
	if (!ctx.cr6.eq) goto loc_824A1C38;
	// b 0x824a1e0c
	goto loc_824A1E0C;
loc_824A1DB0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,3068
	ctx.r5.s64 = 3068;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 8);
	// addi r6,r10,-6876
	ctx.r6.s64 = ctx.r10.s64 + -6876;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82494d48
	ctx.lr = 0x824A1DD8;
	sub_82494D48(ctx, base);
	// b 0x824a1bf8
	goto loc_824A1BF8;
loc_824A1DDC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824a1e34
	if (ctx.cr6.eq) goto loc_824A1E34;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_824A1E0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824a1ddc
	if (!ctx.cr6.eq) goto loc_824A1DDC;
	// b 0x824a1e34
	goto loc_824A1E34;
loc_824A1E18:
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 104);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x82495868
	ctx.lr = 0x824A1E24;
	sub_82495868(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 104);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,104(r24)
	REX_STORE_U32(r24.u32 + 104, ctx.r11.u32);
loc_824A1E34:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r18,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r18.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82444890
	ctx.lr = 0x824A1E58;
	sub_82444890(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82444890
	ctx.lr = 0x824A1E64;
	sub_82444890(ctx, base);
	// stw r3,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// beq cr6,0x824a1e80
	if (ctx.cr6.eq) goto loc_824A1E80;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
loc_824A1E80:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824a1e90
	if (ctx.cr6.eq) goto loc_824A1E90;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824a1bf8
	if (ctx.cr6.eq) goto loc_824A1BF8;
loc_824A1E90:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824955e0
	ctx.lr = 0x824A1E9C;
	sub_824955E0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8249c4a8
	ctx.lr = 0x824A1EAC;
	sub_8249C4A8(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824a1bf8
	if (ctx.cr0.eq) goto loc_824A1BF8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x824a1ef4
	if (!ctx.cr6.eq) goto loc_824A1EF4;
	// lwz r30,20(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,20(r24)
	REX_STORE_U32(r24.u32 + 20, ctx.r11.u32);
	// bl 0x82495180
	ctx.lr = 0x824A1EDC;
	sub_82495180(ctx, base);
	// stw r30,20(r24)
	REX_STORE_U32(r24.u32 + 20, r30.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824a1bf8
	if (ctx.cr0.lt) goto loc_824A1BF8;
	// lwz r11,100(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r24)
	REX_STORE_U32(r24.u32 + 100, ctx.r11.u32);
loc_824A1EF4:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r31,32(r24)
	REX_STORE_U32(r24.u32 + 32, r31.u32);
	// b 0x824a1bfc
	goto loc_824A1BFC;
}

DEFINE_REX_FUNC(sub_824CAEE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r6,r7,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r7.u64;
loc_824CAEF8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwzx r8,r6,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x824caf2c
	if (!ctx.cr6.lt) goto loc_824CAF2C;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_824CAF14:
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
	// blt cr6,0x824caf14
	if (ctx.cr6.lt) goto loc_824CAF14;
loc_824CAF2C:
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824caef8
	if (ctx.cr6.lt) goto loc_824CAEF8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824CCFE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x824CCFE8;
	// lhz r31,2(r4)
	r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824cd00c
	if (!ctx.cr0.eq) goto loc_824CD00C;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
loc_824CD00C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x824cd52c
	if (ctx.cr6.lt) goto loc_824CD52C;
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// addi r30,r4,6
	r30.s64 = ctx.r4.s64 + 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r4,r9,65533
	ctx.r4.u64 = ctx.r9.u64 | 65533;
loc_824CD028:
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x824cd048
	if (!ctx.cr6.lt) goto loc_824CD048;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x824cd524
	if (ctx.cr6.eq) goto loc_824CD524;
loc_824CD048:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824cd104
	if (!ctx.cr6.lt) goto loc_824CD104;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,669
	ctx.r10.s64 = ctx.r5.s64 + 669;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_824CD060:
	// lhz r10,2678(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2678);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// lhz r29,5808(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// ble cr6,0x824cd0e4
	if (!ctx.cr6.gt) goto loc_824CD0E4;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r29,r28
	REX_STORE_U8(r29.u32 + r28.u32, ctx.r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r29,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	r29.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x824cd0f8
	goto loc_824CD0F8;
loc_824CD0E4:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD0F8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x824cd060
	if (!ctx.cr0.eq) goto loc_824CD060;
	// b 0x824cd4f0
	goto loc_824CD4F0;
loc_824CD104:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824cd2c4
	if (ctx.cr6.eq) goto loc_824CD2C4;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x824cd1c0
	if (ctx.cr6.eq) goto loc_824CD1C0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,2678(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2678);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// addi r9,r5,669
	ctx.r9.s64 = ctx.r5.s64 + 669;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// ble cr6,0x824cd1a8
	if (!ctx.cr6.gt) goto loc_824CD1A8;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r29,r7
	REX_STORE_U8(r29.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x824cd1bc
	goto loc_824CD1BC;
loc_824CD1A8:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD1BC:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_824CD1C0:
	// lhz r10,2742(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2742);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2740(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2740);
	// ble cr6,0x824cd244
	if (!ctx.cr6.gt) goto loc_824CD244;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x824cd258
	goto loc_824CD258;
loc_824CD244:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD258:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// ble cr6,0x824cd2b8
	if (!ctx.cr6.gt) goto loc_824CD2B8;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
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
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// b 0x824cd4b8
	goto loc_824CD4B8;
loc_824CD2B8:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// b 0x824cd4e0
	goto loc_824CD4E0;
loc_824CD2C4:
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// bgt cr6,0x824cd3cc
	if (ctx.cr6.gt) goto loc_824CD3CC;
	// lhz r10,2746(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2746);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2744(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2744);
	// ble cr6,0x824cd350
	if (!ctx.cr6.gt) goto loc_824CD350;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// b 0x824cd364
	goto loc_824CD364;
loc_824CD350:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD364:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x824cd3c0
	if (!ctx.cr6.gt) goto loc_824CD3C0;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
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
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// b 0x824cd4b4
	goto loc_824CD4B4;
loc_824CD3C0:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// b 0x824cd4e0
	goto loc_824CD4E0;
loc_824CD3CC:
	// lhz r10,2750(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2750);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2748(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2748);
	// ble cr6,0x824cd448
	if (!ctx.cr6.gt) goto loc_824CD448;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x824cd45c
	goto loc_824CD45C;
loc_824CD448:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD45C:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x824cd4d4
	if (!ctx.cr6.gt) goto loc_824CD4D4;
	// addi r11,r6,-11
	ctx.r11.s64 = ctx.r6.s64 + -11;
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
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
loc_824CD4B4:
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
loc_824CD4B8:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// b 0x824cd4f0
	goto loc_824CD4F0;
loc_824CD4D4:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
loc_824CD4E0:
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824CD4F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824cd508
	if (!ctx.cr6.eq) goto loc_824CD508;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x824cd514
	goto loc_824CD514;
loc_824CD508:
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bne cr6,0x824cd51c
	if (!ctx.cr6.eq) goto loc_824CD51C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_824CD514:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x824cd524
	goto loc_824CD524;
loc_824CD51C:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
loc_824CD524:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bdnz 0x824cd028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824CD028;
loc_824CD52C:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824EEB68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824EEB70;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-26736
	r28.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824eebac
	if (!ctx.cr6.eq) goto loc_824EEBAC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26292
	ctx.r5.s64 = ctx.r11.s64 + -26292;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1304
	ctx.r7.s64 = 1304;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEBAC;
	sub_824EA978(ctx, base);
loc_824EEBAC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824eebc0
	if (!ctx.cr6.eq) goto loc_824EEBC0;
	// li r30,0
	r30.s64 = 0;
	// b 0x824eebcc
	goto loc_824EEBCC;
loc_824EEBC0:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824eebe8
	if (!ctx.cr6.eq) goto loc_824EEBE8;
loc_824EEBCC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26380
	ctx.r5.s64 = ctx.r11.s64 + -26380;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1310
	ctx.r7.s64 = 1310;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEBE8;
	sub_824EA978(ctx, base);
loc_824EEBE8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x824ee9f0
	ctx.lr = 0x824EEBFC;
	sub_824EE9F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824eec08
	if (!ctx.cr0.eq) goto loc_824EEC08;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_824EEC08:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824F0758) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824f0794
	if (!ctx.cr6.eq) goto loc_824F0794;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-25912
	ctx.r6.s64 = ctx.r11.s64 + -25912;
	// addi r5,r10,-26852
	ctx.r5.s64 = ctx.r10.s64 + -26852;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,997
	ctx.r7.s64 = 997;
	// bl 0x824ea978
	ctx.lr = 0x824F0794;
	sub_824EA978(ctx, base);
loc_824F0794:
	// lwz r3,2428(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2428);
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

DEFINE_REX_FUNC(sub_824F19B0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F2558) {
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
	ctx.lr = 0x824F2560;
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
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-23840
	r26.s64 = ctx.r10.s64 + -23840;
	// bne cr6,0x824f25a8
	if (!ctx.cr6.eq) goto loc_824F25A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26824
	ctx.r5.s64 = ctx.r11.s64 + -26824;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,301
	ctx.r7.s64 = 301;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F25A8;
	sub_824EA978(ctx, base);
loc_824F25A8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824f25f4
	if (ctx.cr6.eq) goto loc_824F25F4;
loc_824F25B0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824f25d8
	if (ctx.cr6.gt) goto loc_824F25D8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824ee4d0
	ctx.lr = 0x824F25CC;
	sub_824EE4D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// bne cr6,0x824f25b0
	if (!ctx.cr6.eq) goto loc_824F25B0;
loc_824F25D8:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x824f25f4
	if (!ctx.cr6.eq) goto loc_824F25F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824f25f4
	if (ctx.cr6.eq) goto loc_824F25F4;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f2610
	if (!ctx.cr6.gt) goto loc_824F2610;
loc_824F25F4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-23744
	ctx.r5.s64 = ctx.r11.s64 + -23744;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2610;
	sub_824EA978(ctx, base);
loc_824F2610:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x824ee580
	ctx.lr = 0x824F261C;
	sub_824EE580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824FC9F8) {
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
	ctx.lr = 0x824FCA00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824fca2c
	if (!ctx.cr6.eq) goto loc_824FCA2C;
loc_824FCA20:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824fcb34
	goto loc_824FCB34;
loc_824FCA2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824FCA3C;
	sub_826A1E70(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x824fca20
	if (ctx.cr6.eq) goto loc_824FCA20;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_824FCA50:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x824fca20
	if (!ctx.cr6.lt) goto loc_824FCA20;
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// bne cr6,0x824fca50
	if (!ctx.cr6.eq) goto loc_824FCA50;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x824fcaa0
	if (!ctx.cr6.lt) goto loc_824FCAA0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subfic r10,r11,9
	ctx.xer.ca = ctx.r11.u32 <= 9;
	ctx.r10.u64 = static_cast<uint64_t>(9) - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fcaa0
	if (ctx.cr6.eq) goto loc_824FCAA0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824FCA98:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824fca98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824FCA98;
loc_824FCAA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_824FCAA8:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,35
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 35, ctx.xer);
	// bge cr6,0x824fca20
	if (!ctx.cr6.lt) goto loc_824FCA20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fca20
	if (ctx.cr6.eq) goto loc_824FCA20;
	// cmplwi cr6,r9,34
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 34, ctx.xer);
	// beq cr6,0x824fcad8
	if (ctx.cr6.eq) goto loc_824FCAD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x824fcaa8
	if (ctx.cr6.lt) goto loc_824FCAA8;
	// b 0x824fca20
	goto loc_824FCA20;
loc_824FCAD8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824fcb00
	if (ctx.cr6.lt) goto loc_824FCB00;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824FCAE8:
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lbz r9,-1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// bdnz 0x824fcae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824FCAE8;
loc_824FCB00:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824fca20
	if (ctx.cr6.eq) goto loc_824FCA20;
	// cmpwi cr6,r31,34
	ctx.cr6.compare<int32_t>(r31.s32, 34, ctx.xer);
	// beq cr6,0x824fca20
	if (ctx.cr6.eq) goto loc_824FCA20;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(r31.s32, 35, ctx.xer);
	// bge cr6,0x824fca20
	if (!ctx.cr6.lt) goto loc_824FCA20;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824fc808
	ctx.lr = 0x824FCB34;
	sub_824FC808(ctx, base);
loc_824FCB34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825041B8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// bne 0x825041dc
	if (!ctx.cr0.eq) goto loc_825041DC;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_825041DC:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x825041f0
	if (ctx.cr6.eq) goto loc_825041F0;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
loc_825041F0:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82509D88) {
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
	// bl 0x826a1c90
	ctx.lr = 0x82509D90;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r22,0
	r22.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r21,r10,1
	r21.s64 = ctx.r10.s64 + 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r21,63
	ctx.r9.s64 = r21.s64 + 63;
	// mr r18,r22
	r18.u64 = r22.u64;
	// rlwinm r20,r9,26,6,31
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// bne 0x8250a4ac
	if (!ctx.cr0.eq) goto loc_8250A4AC;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8250a4ac
	if (ctx.cr0.eq) goto loc_8250A4AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r19,r11,-22012
	r19.s64 = ctx.r11.s64 + -22012;
loc_82509DD0:
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// addi r29,r23,24
	r29.s64 = r23.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82509e0c
	if (!ctx.cr0.eq) goto loc_82509E0C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82509e0c
	if (ctx.cr0.eq) goto loc_82509E0C;
loc_82509DE8:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82509e0c
	if (!ctx.cr0.eq) goto loc_82509E0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82509de8
	if (!ctx.cr6.eq) goto loc_82509DE8;
loc_82509E0C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825022d0
	ctx.lr = 0x82509E18;
	sub_825022D0(ctx, base);
	// lwz r3,88(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82509eb0
	if (ctx.cr6.eq) goto loc_82509EB0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82501ce0
	ctx.lr = 0x82509E30;
	sub_82501CE0(ctx, base);
	// addi r30,r21,-1
	r30.s64 = r21.s64 + -1;
	// b 0x82509ea4
	goto loc_82509EA4;
loc_82509E38:
	// lwz r11,708(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 708);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82509E48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509e84
	if (ctx.cr6.eq) goto loc_82509E84;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82509e68
	if (ctx.cr6.eq) goto loc_82509E68;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82509e70
	if (!ctx.cr0.eq) goto loc_82509E70;
loc_82509E68:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82509e48
	goto loc_82509E48;
loc_82509E70:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r10,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r11,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// bl 0x82502350
	ctx.lr = 0x82509E84;
	sub_82502350(ctx, base);
loc_82509E84:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82509e94
	if (!ctx.cr6.eq) goto loc_82509E94;
	// li r31,-1
	r31.s64 = -1;
	// b 0x82509ea8
	goto loc_82509EA8;
loc_82509E94:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r3,88(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 88);
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// bl 0x82501ce0
	ctx.lr = 0x82509EA4;
	sub_82501CE0(ctx, base);
loc_82509EA4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82509EA8:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// ble cr6,0x82509e38
	if (!ctx.cr6.gt) goto loc_82509E38;
loc_82509EB0:
	// lwz r11,96(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509ecc
	if (ctx.cr6.eq) goto loc_82509ECC;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8250a574
	if (!ctx.cr6.eq) goto loc_8250A574;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_82509ECC:
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// stw r24,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r24.u32);
	// lwz r11,792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r22,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r22.u64);
	// std r22,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r22.u64);
	// std r22,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r22.u64);
	// std r22,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r22.u64);
	// bne cr6,0x82509ef4
	if (!ctx.cr6.eq) goto loc_82509EF4;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82509EF4:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82509f0c
	if (!ctx.cr6.lt) goto loc_82509F0C;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8251ed40
	ctx.lr = 0x82509F0C;
	sub_8251ED40(ctx, base);
loc_82509F0C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250a490
	if (!ctx.cr0.eq) goto loc_8250A490;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8250a564
	goto loc_8250A564;
loc_82509F20:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r25,r22
	r25.u64 = r22.u64;
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82509f6c
	if (ctx.cr0.eq) goto loc_82509F6C;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_82509F34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82509f5c
	if (ctx.cr6.eq) goto loc_82509F5C;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82509f54
	if (ctx.cr6.eq) goto loc_82509F54;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82509f5c
	if (!ctx.cr0.eq) goto loc_82509F5C;
loc_82509F54:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82509f34
	goto loc_82509F34;
loc_82509F5C:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,20,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// b 0x8250a054
	goto loc_8250A054;
loc_82509F6C:
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15360
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15360, ctx.xer);
	// beq cr6,0x8250a054
	if (ctx.cr6.eq) goto loc_8250A054;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_82509F7C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250a054
	if (ctx.cr6.eq) goto loc_8250A054;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82509f9c
	if (ctx.cr6.eq) goto loc_82509F9C;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r9,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82509fa4
	if (!ctx.cr0.eq) goto loc_82509FA4;
loc_82509F9C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82509f7c
	goto loc_82509F7C;
loc_82509FA4:
	// rlwimi r11,r9,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r25,r11,31,20,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x825023b0
	ctx.lr = 0x82509FB8;
	sub_825023B0(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a054
	if (ctx.cr0.eq) goto loc_8250A054;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r4,r25,28
	ctx.r4.u64 = r25.u32 & 0xF;
	// b 0x8250a028
	goto loc_8250A028;
loc_82509FD0:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a024
	if (ctx.cr0.eq) goto loc_8250A024;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82509FE0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82509ffc
	if (ctx.cr6.eq) goto loc_82509FFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82509ffc
	if (!ctx.cr0.eq) goto loc_82509FFC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82509fe0
	goto loc_82509FE0;
loc_82509FFC:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r25,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r10,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r10,r8,31,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFF;
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8250a024
	if (!ctx.cr6.eq) goto loc_8250A024;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// andc r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 & ~ctx.r10.u64;
loc_8250A024:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8250A028:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a040
	if (!ctx.cr0.eq) goto loc_8250A040;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82509fd0
	if (!ctx.cr0.eq) goto loc_82509FD0;
loc_8250A040:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8250a054
	if (ctx.cr6.eq) goto loc_8250A054;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwimi r4,r25,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x825023b0
	ctx.lr = 0x8250A054;
	sub_825023B0(ctx, base);
loc_8250A054:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a084
	if (!ctx.cr0.eq) goto loc_8250A084;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8250a078
	if (ctx.cr6.lt) goto loc_8250A078;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8250a07c
	if (!ctx.cr6.gt) goto loc_8250A07C;
loc_8250A078:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8250A07C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a0a8
	if (ctx.cr0.eq) goto loc_8250A0A8;
loc_8250A084:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8250A090:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8250a0a0
	if (!ctx.cr6.eq) goto loc_8250A0A0;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
loc_8250A0A0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8250a090
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8250A090;
loc_8250A0A8:
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_8250A0AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250a0e4
	if (ctx.cr6.eq) goto loc_8250A0E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a0dc
	if (ctx.cr0.eq) goto loc_8250A0DC;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a0dc
	if (ctx.cr0.eq) goto loc_8250A0DC;
	// rlwinm r4,r11,19,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82502350
	ctx.lr = 0x8250A0DC;
	sub_82502350(ctx, base);
loc_8250A0DC:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8250a0ac
	goto loc_8250A0AC;
loc_8250A0E4:
	// lwz r27,0(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_8250A0E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8250a554
	if (ctx.cr6.eq) goto loc_8250A554;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r9,r10,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r10,2,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// bne 0x8250a10c
	if (!ctx.cr0.eq) goto loc_8250A10C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// beq 0x8250a110
	if (ctx.cr0.eq) goto loc_8250A110;
loc_8250A10C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8250A110:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a54c
	if (ctx.cr0.eq) goto loc_8250A54C;
	// lwz r28,12(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8250a130
	if (ctx.cr6.eq) goto loc_8250A130;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8250a134
	if (ctx.cr0.eq) goto loc_8250A134;
loc_8250A130:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8250A134:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a16c
	if (ctx.cr0.eq) goto loc_8250A16C;
	// rlwinm r10,r10,21,18,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x3FFC;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8250a164
	if (ctx.cr6.eq) goto loc_8250A164;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// beq cr6,0x8250a54c
	if (ctx.cr6.eq) goto loc_8250A54C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824e4368
	ctx.lr = 0x8250A164;
	sub_824E4368(ctx, base);
loc_8250A164:
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// b 0x8250a54c
	goto loc_8250A54C;
loc_8250A16C:
	// not r11,r8
	ctx.r11.u64 = ~ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250a1b0
	if (!ctx.cr0.eq) goto loc_8250A1B0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x8250a54c
	if (ctx.cr6.eq) goto loc_8250A54C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f75b8
	ctx.lr = 0x8250A190;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a54c
	if (ctx.cr0.eq) goto loc_8250A54C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82501b20
	ctx.lr = 0x8250A1A0;
	sub_82501B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82502350
	ctx.lr = 0x8250A1AC;
	sub_82502350(ctx, base);
	// b 0x8250a54c
	goto loc_8250A54C;
loc_8250A1B0:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8250A1C8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8250a1c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8250A1C8;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8250a250
	if (!ctx.cr6.eq) goto loc_8250A250;
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_8250A1EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8250a250
	if (ctx.cr6.eq) goto loc_8250A250;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a234
	if (ctx.cr0.eq) goto loc_8250A234;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x8250a23c
	if (ctx.cr6.eq) goto loc_8250A23C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x8250a234
	if (ctx.cr6.eq) goto loc_8250A234;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82504578
	ctx.lr = 0x8250A228;
	sub_82504578(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a234
	if (ctx.cr0.eq) goto loc_8250A234;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8250A234:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8250a1ec
	goto loc_8250A1EC;
loc_8250A23C:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8250A250:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8250A254:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a270
	if (!ctx.cr0.eq) goto loc_8250A270;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8250a290
	if (!ctx.cr0.eq) goto loc_8250A290;
loc_8250A270:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a284
	if (ctx.cr0.eq) goto loc_8250A284;
	// mr r30,r22
	r30.u64 = r22.u64;
	// b 0x8250a290
	goto loc_8250A290;
loc_8250A284:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	r30.s64 = ctx.r11.s64 + -40;
loc_8250A290:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// beq cr6,0x8250a34c
	if (ctx.cr6.eq) goto loc_8250A34C;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r8,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8250a310
	if (ctx.cr0.eq) goto loc_8250A310;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8250A2AC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8250a2d4
	if (ctx.cr6.eq) goto loc_8250A2D4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r7,r9,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8250a2c8
	if (!ctx.cr0.eq) goto loc_8250A2C8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8250a2ac
	goto loc_8250A2AC;
loc_8250A2C8:
	// rlwinm. r10,r9,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x8250a2d8
	if (!ctx.cr0.eq) goto loc_8250A2D8;
loc_8250A2D4:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8250A2D8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a310
	if (ctx.cr0.eq) goto loc_8250A310;
loc_8250A2E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250a2fc
	if (ctx.cr6.eq) goto loc_8250A2FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a2fc
	if (!ctx.cr0.eq) goto loc_8250A2FC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8250a2e0
	goto loc_8250A2E0;
loc_8250A2FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwimi r8,r11,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r8,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFF;
	// bl 0x82502350
	ctx.lr = 0x8250A310;
	sub_82502350(ctx, base);
loc_8250A310:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8250A314:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250a254
	if (ctx.cr6.eq) goto loc_8250A254;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a344
	if (ctx.cr0.eq) goto loc_8250A344;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8250a344
	if (ctx.cr0.eq) goto loc_8250A344;
	// rlwinm r4,r11,19,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82502350
	ctx.lr = 0x8250A344;
	sub_82502350(ctx, base);
loc_8250A344:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8250a314
	goto loc_8250A314;
loc_8250A34C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r30,r22
	r30.u64 = r22.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8250a4b8
	if (ctx.cr6.eq) goto loc_8250A4B8;
	// lwz r6,8(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r6,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3F80;
	// rlwinm r4,r6,18,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x7;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8250a3c4
	if (ctx.cr6.eq) goto loc_8250A3C4;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8250a3b4
	if (ctx.cr0.eq) goto loc_8250A3B4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8250A38C:
	// rlwinm r5,r8,27,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// srw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r5,r3,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8250a38c
	if (ctx.cr6.lt) goto loc_8250A38C;
loc_8250A3B4:
	// rlwinm r11,r6,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0xF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8250a3c8
	if (!ctx.cr6.eq) goto loc_8250A3C8;
loc_8250A3C4:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8250A3C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250a424
	if (!ctx.cr0.eq) goto loc_8250A424;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8250A3DC:
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ldx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// bdnz 0x8250a3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8250A3DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82509550
	ctx.lr = 0x8250A40C;
	sub_82509550(ctx, base);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8250a450
	goto loc_8250A450;
loc_8250A424:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825095f8
	ctx.lr = 0x8250A448;
	sub_825095F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
loc_8250A450:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x8250a480
	if (ctx.cr6.eq) goto loc_8250A480;
	// lwz r11,796(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250a474
	if (!ctx.cr6.eq) goto loc_8250A474;
	// lwz r11,792(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250a474
	if (!ctx.cr6.eq) goto loc_8250A474;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8250A474:
	// rlwinm r10,r31,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8250a514
	if (ctx.cr6.lt) goto loc_8250A514;
loc_8250A480:
	// lwz r11,68(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 68);
	// li r18,1
	r18.s64 = 1;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,68(r23)
	REX_STORE_U32(r23.u32 + 68, ctx.r11.u32);
loc_8250A490:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a4ac
	if (!ctx.cr0.eq) goto loc_8250A4AC;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82509dd0
	if (!ctx.cr6.eq) goto loc_82509DD0;
loc_8250A4AC:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1ce0
	return;
loc_8250A4B8:
	// rlwinm r11,r25,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r8,r25,27,5,28
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 27) & 0x7FFFFF8;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// li r10,2
	ctx.r10.s64 = 2;
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// sld r9,r8,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r11.u8 & 0x7F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825092a0
	ctx.lr = 0x8250A510;
	sub_825092A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8250A514:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b93f8
	ctx.lr = 0x8250A524;
	sub_825B93F8(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq 0x8250a544
	if (ctx.cr0.eq) goto loc_8250A544;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82502350
	ctx.lr = 0x8250A538;
	sub_82502350(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82501b20
	ctx.lr = 0x8250A540;
	sub_82501B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8250A544:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8251ecc8
	ctx.lr = 0x8250A54C;
	sub_8251ECC8(ctx, base);
loc_8250A54C:
	// lwz r27,4(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x8250a0e8
	goto loc_8250A0E8;
loc_8250A554:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8250a490
	if (!ctx.cr0.eq) goto loc_8250A490;
loc_8250A564:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x82509f20
	if (!ctx.cr0.eq) goto loc_82509F20;
	// b 0x8250a490
	goto loc_8250A490;
loc_8250A574:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824e4368
	ctx.lr = 0x8250A580;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8257BEC8) {
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
	ctx.lr = 0x8257BED0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// bl 0x824f7678
	ctx.lr = 0x8257BEF0;
	sub_824F7678(ctx, base);
	// addi r23,r3,4
	r23.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r23,1
	ctx.r10.u64 = r23.u64 | 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8257BF08:
	// lwz r26,8(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 8);
loc_8257BF0C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8257c02c
	if (ctx.cr6.eq) goto loc_8257C02C;
	// lwz r30,4(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
loc_8257BF1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c0a8
	if (ctx.cr6.eq) goto loc_8257C0A8;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// bne cr6,0x8257bf38
	if (!ctx.cr6.eq) goto loc_8257BF38;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8257bf1c
	goto loc_8257BF1C;
loc_8257BF38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257c0a8
	if (ctx.cr6.eq) goto loc_8257C0A8;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825bc910
	ctx.lr = 0x8257BF58;
	sub_825BC910(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8257BF64;
	sub_82584ED0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250c998
	ctx.lr = 0x8257BF7C;
	sub_8250C998(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82583608
	ctx.lr = 0x8257BFA0;
	sub_82583608(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r30
	r31.u64 = r30.u64;
	// stdx r11,r3,r10
	REX_STORE_U64(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u64);
loc_8257BFB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257bfc8
	if (!ctx.cr0.eq) goto loc_8257BFC8;
	// lwz r31,52(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8257bfb0
	if (!ctx.cr6.eq) goto loc_8257BFB0;
loc_8257BFC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257c024
	if (ctx.cr6.eq) goto loc_8257C024;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257c000
	if (!ctx.cr0.eq) goto loc_8257C000;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257c000
	if (ctx.cr0.eq) goto loc_8257C000;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8257c00c
	if (!ctx.cr6.gt) goto loc_8257C00C;
loc_8257C000:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8257C00C;
	sub_8251FE00(ctx, base);
loc_8257C00C:
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
loc_8257C024:
	// lwz r26,12(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 12);
	// b 0x8257bf0c
	goto loc_8257BF0C;
loc_8257C02C:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8257c0b4
	if (!ctx.cr0.eq) goto loc_8257C0B4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8257c0b4
	if (ctx.cr0.eq) goto loc_8257C0B4;
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
	// lwzx r31,r10,r4
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8257c0a0
	if (!ctx.cr0.eq) goto loc_8257C0A0;
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
	ctx.lr = 0x8257C0A0;
	sub_824E4308(ctx, base);
loc_8257C0A0:
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x8257bf08
	goto loc_8257BF08;
loc_8257C0A8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257C0B4;
	sub_824E4368(ctx, base);
loc_8257C0B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82581AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82581B00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82581B28;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82581b4c
	if (ctx.cr6.eq) goto loc_82581B4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581B48;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581B4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581B54;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82581b78
	if (ctx.cr6.eq) goto loc_82581B78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82581B74;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581B78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581B80;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825849C8) {
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
	// bl 0x82553828
	ctx.lr = 0x825849E8;
	sub_82553828(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// rlwimi r10,r30,2,16,29
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0003);
	// rlwimi r10,r11,0,30,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE0003) | (ctx.r10.u64 & 0x1FFFC);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82586218) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82586220;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586248;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258626c
	if (ctx.cr6.eq) goto loc_8258626C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82586268;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8258626C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586274;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586284;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586290;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8258BC50) {
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
	// bl 0x826a1c90
	ctx.lr = 0x8258BC58;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// stw r27,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r27.u32);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r27,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r27.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r21,r27
	r21.u64 = r27.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 576);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
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
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8258BCBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bcd8
	if (ctx.cr6.eq) goto loc_8258BCD8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne cr6,0x8258bcdc
	if (!ctx.cr6.eq) goto loc_8258BCDC;
loc_8258BCD8:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8258BCDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258bd04
	if (!ctx.cr0.eq) goto loc_8258BD04;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553828
	ctx.lr = 0x8258BCEC;
	sub_82553828(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// slw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// or r21,r10,r21
	r21.u64 = ctx.r10.u64 | r21.u64;
	// b 0x8258bcbc
	goto loc_8258BCBC;
loc_8258BD04:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// mr r26,r27
	r26.u64 = r27.u64;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// lis r29,-1
	r29.s64 = -65536;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8258BD2C:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8258bd4c
	if (ctx.cr6.eq) goto loc_8258BD4C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne cr6,0x8258bd50
	if (!ctx.cr6.eq) goto loc_8258BD50;
loc_8258BD4C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_8258BD50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258c070
	if (!ctx.cr0.eq) goto loc_8258C070;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// slw r11,r28,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r11,r19
	ctx.r9.u64 = ctx.r11.u64 & r19.u64;
	// rlwinm. r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8258bdcc
	if (!ctx.cr0.eq) goto loc_8258BDCC;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258bdc0
	if (!ctx.cr0.eq) goto loc_8258BDC0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c044
	if (ctx.cr6.eq) goto loc_8258C044;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8258c044
	if (!ctx.cr6.eq) goto loc_8258C044;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8258c03c
	if (!ctx.cr6.eq) goto loc_8258C03C;
	// li r4,3580
	ctx.r4.s64 = 3580;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x824e4270
	ctx.lr = 0x8258BDC0;
	sub_824E4270(ctx, base);
loc_8258BDC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82585588
	ctx.lr = 0x8258BDC8;
	sub_82585588(ctx, base);
	// b 0x8258bd2c
	goto loc_8258BD2C;
loc_8258BDCC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8258bdf8
	if (ctx.cr6.eq) goto loc_8258BDF8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8258be04
	if (ctx.cr6.eq) goto loc_8258BE04;
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
loc_8258BDE0:
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258be04
	if (ctx.cr0.eq) goto loc_8258BE04;
	// li r4,3577
	ctx.r4.s64 = 3577;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4270
	ctx.lr = 0x8258BDF4;
	sub_824E4270(ctx, base);
	// b 0x8258bdc0
	goto loc_8258BDC0;
loc_8258BDF8:
	// or r9,r26,r21
	ctx.r9.u64 = r26.u64 | r21.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x8258bde0
	goto loc_8258BDE0;
loc_8258BE04:
	// addi r11,r10,-10
	ctx.r11.s64 = ctx.r10.s64 + -10;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8258c020
	if (ctx.cr6.gt) goto loc_8258C020;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-19264
	ctx.r12.s64 = ctx.r12.s64 + -19264;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32167
	ctx.r12.s64 = -2108096512;
	// nop 
	// addi r12,r12,-16840
	ctx.r12.s64 = ctx.r12.s64 + -16840;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8258BE38;
	case 1:
		goto loc_8258C020;
	case 2:
		goto loc_8258C020;
	case 3:
		goto loc_8258BE44;
	case 4:
		goto loc_8258BE5C;
	case 5:
		goto loc_8258C020;
	case 6:
		goto loc_8258BEB0;
	case 7:
		goto loc_8258BF64;
	case 8:
		goto loc_8258C020;
	case 9:
		goto loc_8258BFCC;
	case 10:
		goto loc_8258BEDC;
	case 11:
		goto loc_8258C020;
	case 12:
		goto loc_8258BFE8;
	case 13:
		goto loc_8258BFF4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8258BE38:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r25)
	REX_STORE_U32(r25.u32 + 8, ctx.r11.u32);
	// b 0x8258c020
	goto loc_8258C020;
loc_8258BE44:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8257ef60
	ctx.lr = 0x8258BE54;
	sub_8257EF60(ctx, base);
	// stw r3,788(r31)
	REX_STORE_U32(r31.u32 + 788, ctx.r3.u32);
	// b 0x8258c020
	goto loc_8258C020;
loc_8258BE5C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8257ef60
	ctx.lr = 0x8258BE6C;
	sub_8257EF60(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,792(r31)
	REX_STORE_U32(r31.u32 + 792, ctx.r6.u32);
	// beq 0x8258c050
	if (ctx.cr0.eq) goto loc_8258C050;
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// bgt cr6,0x8258c050
	if (ctx.cr6.gt) goto loc_8258C050;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c020
	if (ctx.cr6.eq) goto loc_8258C020;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c020
	if (ctx.cr6.eq) goto loc_8258C020;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258c020
	if (ctx.cr6.eq) goto loc_8258C020;
	// li r4,3581
	ctx.r4.s64 = 3581;
loc_8258BEA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4270
	ctx.lr = 0x8258BEAC;
	sub_824E4270(ctx, base);
	// b 0x8258c020
	goto loc_8258C020;
loc_8258BEB0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8257ef60
	ctx.lr = 0x8258BEC0;
	sub_8257EF60(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,796(r31)
	REX_STORE_U32(r31.u32 + 796, ctx.r6.u32);
	// bne 0x8258c020
	if (!ctx.cr0.eq) goto loc_8258C020;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3603
	ctx.r4.s64 = 3603;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258BEDC;
	sub_824E4368(ctx, base);
loc_8258BEDC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8257ef60
	ctx.lr = 0x8258BEEC;
	sub_8257EF60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r3,808(r31)
	REX_STORE_U32(r31.u32 + 808, ctx.r3.u32);
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// blt cr6,0x8258c060
	if (ctx.cr6.lt) goto loc_8258C060;
	// cmplwi cr6,r3,3839
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3839, ctx.xer);
	// bgt cr6,0x8258c060
	if (ctx.cr6.gt) goto loc_8258C060;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8258bf5c
	if (ctx.cr6.eq) goto loc_8258BF5C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8258bf3c
	if (!ctx.cr6.eq) goto loc_8258BF3C;
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bf34
	if (ctx.cr6.eq) goto loc_8258BF34;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8258bf50
	if (!ctx.cr6.eq) goto loc_8258BF50;
loc_8258BF34:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x8258bf5c
	if (ctx.cr6.eq) goto loc_8258BF5C;
loc_8258BF3C:
	// lwz r11,52(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bf5c
	if (ctx.cr6.eq) goto loc_8258BF5C;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8258bf5c
	if (ctx.cr6.eq) goto loc_8258BF5C;
loc_8258BF50:
	// li r4,3616
	ctx.r4.s64 = 3616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4270
	ctx.lr = 0x8258BF5C;
	sub_824E4270(ctx, base);
loc_8258BF5C:
	// li r4,3648
	ctx.r4.s64 = 3648;
	// b 0x8258bea4
	goto loc_8258BEA4;
loc_8258BF64:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8257f068
	ctx.lr = 0x8258BF74;
	sub_8257F068(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8258c020
	if (ctx.cr6.eq) goto loc_8258C020;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258bfbc
	if (ctx.cr0.eq) goto loc_8258BFBC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258bfb0
	if (ctx.cr6.eq) goto loc_8258BFB0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258bfb0
	if (!ctx.cr0.eq) goto loc_8258BFB0;
	// li r4,3608
	ctx.r4.s64 = 3608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4270
	ctx.lr = 0x8258BFB0;
	sub_824E4270(ctx, base);
loc_8258BFB0:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// b 0x8258bfc4
	goto loc_8258BFC4;
loc_8258BFBC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_8258BFC4:
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x8258c020
	goto loc_8258C020;
loc_8258BFCC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8258c020
	if (!ctx.cr6.eq) goto loc_8258C020;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x8258bfc4
	goto loc_8258BFC4;
loc_8258BFE8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// b 0x8258bfc4
	goto loc_8258BFC4;
loc_8258BFF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8257f068
	ctx.lr = 0x8258C004;
	sub_8257F068(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// beq 0x8258c018
	if (ctx.cr0.eq) goto loc_8258C018;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x8258c01c
	goto loc_8258C01C;
loc_8258C018:
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_8258C01C:
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_8258C020:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82553828
	ctx.lr = 0x8258C028;
	sub_82553828(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// or r26,r11,r26
	r26.u64 = ctx.r11.u64 | r26.u64;
	// b 0x8258bd2c
	goto loc_8258BD2C;
loc_8258C03C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258C044;
	sub_824E4368(ctx, base);
loc_8258C044:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C050;
	sub_824E4368(ctx, base);
loc_8258C050:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3589
	ctx.r4.s64 = 3589;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C060;
	sub_824E4368(ctx, base);
loc_8258C060:
	// li r5,3839
	ctx.r5.s64 = 3839;
	// li r4,3615
	ctx.r4.s64 = 3615;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C070;
	sub_824E4368(ctx, base);
loc_8258C070:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258c0f0
	if (!ctx.cr0.eq) goto loc_8258C0F0;
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c0f0
	if (ctx.cr0.eq) goto loc_8258C0F0;
	// lwz r3,576(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 576);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// std r27,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r27.u64);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x8258c0c4
	if (!ctx.cr0.eq) goto loc_8258C0C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c0c4
	if (ctx.cr0.eq) goto loc_8258C0C4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8258c0d0
	if (!ctx.cr6.gt) goto loc_8258C0D0;
loc_8258C0C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82531a20
	ctx.lr = 0x8258C0CC;
	sub_82531A20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8258C0D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r26,r26,4
	r26.u64 = r26.u64 | 4;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
loc_8258C0F0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8258c264
	if (ctx.cr6.eq) goto loc_8258C264;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(r18.s32, 3, ctx.xer);
	// bne cr6,0x8258c1fc
	if (!ctx.cr6.eq) goto loc_8258C1FC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8258c1fc
	if (ctx.cr6.eq) goto loc_8258C1FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258a2b8
	ctx.lr = 0x8258C110;
	sub_8258A2B8(ctx, base);
	// rlwinm. r11,r26,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c1ec
	if (ctx.cr0.eq) goto loc_8258C1EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580bd0
	ctx.lr = 0x8258C120;
	sub_82580BD0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,592(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258c158
	if (!ctx.cr0.eq) goto loc_8258C158;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c158
	if (ctx.cr0.eq) goto loc_8258C158;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8258c164
	if (!ctx.cr6.gt) goto loc_8258C164;
loc_8258C158:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8258C160;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8258C164:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// lwz r3,592(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 592);
	// lwz r30,0(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258c1b4
	if (!ctx.cr0.eq) goto loc_8258C1B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c1b4
	if (ctx.cr0.eq) goto loc_8258C1B4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8258c1c0
	if (!ctx.cr6.gt) goto loc_8258C1C0;
loc_8258C1B4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8258C1BC;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8258C1C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r30.u32);
	// lwz r4,0(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// bl 0x82589f98
	ctx.lr = 0x8258C1E4;
	sub_82589F98(ctx, base);
	// stw r29,0(r23)
	REX_STORE_U32(r23.u32 + 0, r29.u32);
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
loc_8258C1EC:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8258a128
	ctx.lr = 0x8258C1FC;
	sub_8258A128(ctx, base);
loc_8258C1FC:
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c210
	if (ctx.cr0.eq) goto loc_8258C210;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_8258C210:
	// rlwinm. r11,r26,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c224
	if (ctx.cr0.eq) goto loc_8258C224;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_8258C224:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm. r10,r26,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// beq 0x8258c264
	if (ctx.cr0.eq) goto loc_8258C264;
	// cmpwi cr6,r18,3
	ctx.cr6.compare<int32_t>(r18.s32, 3, ctx.xer);
	// bne cr6,0x8258c264
	if (!ctx.cr6.eq) goto loc_8258C264;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8258c264
	if (ctx.cr6.eq) goto loc_8258C264;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258a1a8
	ctx.lr = 0x8258C254;
	sub_8258A1A8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// bl 0x8258a128
	ctx.lr = 0x8258C264;
	sub_8258A128(ctx, base);
loc_8258C264:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,576(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 576);
	// bl 0x82553880
	ctx.lr = 0x8258C270;
	sub_82553880(ctx, base);
	// or r11,r26,r21
	ctx.r11.u64 = r26.u64 | r21.u64;
	// stw r19,4(r25)
	REX_STORE_U32(r25.u32 + 4, r19.u32);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_825C1860) {
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
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825c192c
	if (!ctx.cr6.eq) goto loc_825C192C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,-1520
	ctx.r6.s64 = ctx.r11.s64 + -1520;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825bc628
	ctx.lr = 0x825C1898;
	sub_825BC628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwimi r10,r11,5,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lhz r7,64(r7)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r7.u32 + 64);
	// rlwimi r9,r7,20,3,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0x1FF00000) | (ctx.r9.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwimi r10,r11,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r11,1,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r9,r11,2,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// bl 0x825802f8
	ctx.lr = 0x825C1914;
	sub_825802F8(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// li r10,40
	ctx.r10.s64 = 40;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stw r11,648(r31)
	REX_STORE_U32(r31.u32 + 648, ctx.r11.u32);
loc_825C192C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,648(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 648);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bdbe8
	ctx.lr = 0x825C1940;
	sub_825BDBE8(ctx, base);
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

DEFINE_REX_FUNC(sub_825C7158) {
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
	// li r3,4096
	ctx.r3.s64 = 4096;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x825C717C;
	sub_822F6280(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// bne cr6,0x825c7194
	if (!ctx.cr6.eq) goto loc_825C7194;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825c72b8
	goto loc_825C72B8;
loc_825C7194:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x825c7270
	if (ctx.cr6.eq) goto loc_825C7270;
	// li r9,256
	ctx.r9.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,20328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
loc_825C71B8:
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lbzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
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
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r8,80(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 80);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r8,3(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x825c71b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825C71B8;
	// b 0x825c72b4
	goto loc_825C72B4;
loc_825C7270:
	// li r10,256
	ctx.r10.s64 = 256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_825C7280:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x825c7280
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825C7280;
loc_825C72B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C72B8:
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

DEFINE_REX_FUNC(sub_825CF308) {
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
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825cf39c
	if (!ctx.cr6.lt) goto loc_825CF39C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20264(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20264);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_825CF36C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825cf36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CF36C;
loc_825CF39C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cf3b8
	if (ctx.cr6.eq) goto loc_825CF3B8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CF3B8;
	sub_825C73B8(ctx, base);
loc_825CF3B8:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cf3d4
	if (ctx.cr6.eq) goto loc_825CF3D4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CF3D4;
	sub_825C7788(ctx, base);
loc_825CF3D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D2830) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D2838;
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
	// bne cr6,0x825d2874
	if (!ctx.cr6.eq) goto loc_825D2874;
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
	// li r7,1471
	ctx.r7.s64 = 1471;
	// bl 0x824ea978
	ctx.lr = 0x825D2874;
	sub_824EA978(ctx, base);
loc_825D2874:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D2880;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x825d28e4
	if (!ctx.cr6.eq) goto loc_825D28E4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d28a4
	if (ctx.cr6.eq) goto loc_825D28A4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D28A4;
	sub_824F0950(ctx, base);
loc_825D28A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d28dc
	if (ctx.cr6.eq) goto loc_825D28DC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d28dc
	if (ctx.cr6.eq) goto loc_825D28DC;
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
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bctrl 
	ctx.lr = 0x825D28DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D28DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d293c
	goto loc_825D293C;
loc_825D28E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d2900
	if (ctx.cr6.eq) goto loc_825D2900;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D2900;
	sub_824F0950(ctx, base);
loc_825D2900:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d2938
	if (ctx.cr6.eq) goto loc_825D2938;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d2938
	if (ctx.cr6.eq) goto loc_825D2938;
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
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bctrl 
	ctx.lr = 0x825D2938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D2938:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D293C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D58B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D5CA8) {
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
	ctx.lr = 0x825D5CB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d5cec
	if (!ctx.cr6.eq) goto loc_825D5CEC;
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
	// li r7,4257
	ctx.r7.s64 = 4257;
	// bl 0x824ea978
	ctx.lr = 0x825D5CEC;
	sub_824EA978(ctx, base);
loc_825D5CEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lfs f1,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r29)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// beq cr6,0x825d5d3c
	if (ctx.cr6.eq) goto loc_825D5D3C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d5d3c
	if (ctx.cr6.eq) goto loc_825D5D3C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825d1a98
	ctx.lr = 0x825D5D10;
	sub_825D1A98(ctx, base);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5980
	ctx.r4.s64 = ctx.r10.s64 + 5980;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,256(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// bctrl 
	ctx.lr = 0x825D5D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D5D3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825DB640) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825db6cc
	if (!ctx.cr6.eq) goto loc_825DB6CC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r31,1456(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DB678;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// beq 0x825db698
	if (ctx.cr0.eq) goto loc_825DB698;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fc1a0
	ctx.lr = 0x825DB690;
	sub_825FC1A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825db69c
	goto loc_825DB69C;
loc_825DB698:
	// li r31,0
	r31.s64 = 0;
loc_825DB69C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,164(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 164);
	// bl 0x825fc660
	ctx.lr = 0x825DB6A8;
	sub_825FC660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x825d7f88
	ctx.lr = 0x825DB6B8;
	sub_825D7F88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fc290
	ctx.lr = 0x825DB6C0;
	sub_825FC290(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825DB6CC;
	sub_825B3528(ctx, base);
loc_825DB6CC:
	// lwz r3,152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 152);
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

DEFINE_REX_FUNC(sub_825E05C8) {
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
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgt cr6,0x825e0634
	if (ctx.cr6.gt) goto loc_825E0634;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825e065c
	if (ctx.cr6.eq) goto loc_825E065C;
	// bdz 0x825e061c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_825E061C;
	// bdz 0x825e0624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_825E0624;
	// bdz 0x825e062c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_825E062C;
	// bdz 0x825e0658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_825E0658;
	// bdz 0x825e0604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_825E0604;
	// bdz 0x825e060c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_825E060C;
	// b 0x825e0614
	goto loc_825E0614;
loc_825E0604:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e065c
	goto loc_825E065C;
loc_825E060C:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x825e065c
	goto loc_825E065C;
loc_825E0614:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x825e065c
	goto loc_825E065C;
loc_825E061C:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x825e065c
	goto loc_825E065C;
loc_825E0624:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x825e065c
	goto loc_825E065C;
loc_825E062C:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x825e065c
	goto loc_825E065C;
loc_825E0634:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,2894
	ctx.r7.s64 = 2894;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E0658;
	sub_824EA978(ctx, base);
loc_825E0658:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E065C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E5E50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E5E58;
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
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825e5ee0
	if (!ctx.cr0.eq) goto loc_825E5EE0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x825e0940
	ctx.lr = 0x825E5E7C;
	sub_825E0940(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825E5E8C;
	sub_825F9AD0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,11196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11196);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lfs f4,3744(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3744);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825faab8
	ctx.lr = 0x825E5ED4;
	sub_825FAAB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825E5EE0;
	sub_825FCB18(ctx, base);
loc_825E5EE0:
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// lbz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e35d8
	ctx.lr = 0x825E5EF0;
	sub_825E35D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825ECB10) {
	REX_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825ecb4c
	if (ctx.cr6.eq) goto loc_825ECB4C;
loc_825ECB20:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ecb54
	if (ctx.cr0.eq) goto loc_825ECB54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x825ecb20
	if (ctx.cr6.lt) goto loc_825ECB20;
loc_825ECB4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_825ECB54:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EF3E0) {
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
	ctx.lr = 0x825EF3E8;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lwz r23,4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r26,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r26.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x825ef5dc
	if (ctx.cr0.lt) goto loc_825EF5DC;
	// rlwinm r25,r26,2,0,29
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_825EF410:
	// lwz r3,24(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef42c
	if (!ctx.cr6.lt) goto loc_825EF42C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// b 0x825ef434
	goto loc_825EF434;
loc_825EF42C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF434;
	sub_825F7718(ctx, base);
loc_825EF434:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r27,4(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x825ef50c
	if (!ctx.cr6.gt) goto loc_825EF50C;
	// li r28,0
	r28.s64 = 0;
loc_825EF450:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef46c
	if (!ctx.cr6.lt) goto loc_825EF46C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825ef474
	goto loc_825EF474;
loc_825EF46C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF474;
	sub_825F7718(ctx, base);
loc_825EF474:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef4a4
	if (!ctx.cr6.lt) goto loc_825EF4A4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825ef4ac
	goto loc_825EF4AC;
loc_825EF4A4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF4AC;
	sub_825F7718(ctx, base);
loc_825EF4AC:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825ef4cc
	if (!ctx.cr6.lt) goto loc_825EF4CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825EF4CC:
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x8260a788
	ctx.lr = 0x825EF4D8;
	sub_8260A788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// beq 0x825ef4ec
	if (ctx.cr0.eq) goto loc_825EF4EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_825EF4EC:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825ef4f8
	if (!ctx.cr6.lt) goto loc_825EF4F8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825EF4F8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x825ef450
	if (ctx.cr6.lt) goto loc_825EF450;
loc_825EF50C:
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 8);
	// bl 0x8260a650
	ctx.lr = 0x825EF518;
	sub_8260A650(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825ef534
	if (!ctx.cr6.gt) goto loc_825EF534;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x825ef544
	goto loc_825EF544;
loc_825EF534:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
loc_825EF544:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r31,0
	r31.s64 = 0;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x825ef5b8
	if (!ctx.cr6.gt) goto loc_825EF5B8;
	// li r29,0
	r29.s64 = 0;
loc_825EF564:
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef580
	if (!ctx.cr6.lt) goto loc_825EF580;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825ef588
	goto loc_825EF588;
loc_825EF580:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF588;
	sub_825F7718(ctx, base);
loc_825EF588:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825ef5a8
	if (!ctx.cr6.eq) goto loc_825EF5A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
loc_825EF5A8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x825ef564
	if (ctx.cr6.lt) goto loc_825EF564;
loc_825EF5B8:
	// lwz r11,108(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 108);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825ef5cc
	if (!ctx.cr6.lt) goto loc_825EF5CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_825EF5CC:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r11,108(r24)
	REX_STORE_U32(r24.u32 + 108, ctx.r11.u32);
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// bge 0x825ef410
	if (!ctx.cr0.lt) goto loc_825EF410;
loc_825EF5DC:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x825ef6d8
	if (!ctx.cr6.gt) goto loc_825EF6D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// lfd f31,3728(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_825EF5F4:
	// lwz r3,24(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 24);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef610
	if (!ctx.cr6.lt) goto loc_825EF610;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// b 0x825ef618
	goto loc_825EF618;
loc_825EF610:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF618;
	sub_825F7718(ctx, base);
loc_825EF618:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x825ef6ac
	if (!ctx.cr6.gt) goto loc_825EF6AC;
	// li r29,0
	r29.s64 = 0;
loc_825EF634:
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825ef650
	if (!ctx.cr6.lt) goto loc_825EF650;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825ef658
	goto loc_825EF658;
loc_825EF650:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EF658;
	sub_825F7718(ctx, base);
loc_825EF658:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825ef69c
	if (!ctx.cr6.eq) goto loc_825EF69C;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ef69c
	if (!ctx.cr6.gt) goto loc_825EF69C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fdiv f13,f31,f13
	ctx.f13.f64 = f31.f64 / ctx.f13.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
loc_825EF69C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x825ef634
	if (ctx.cr6.lt) goto loc_825EF634;
loc_825EF6AC:
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ef6c8
	if (!ctx.cr6.gt) goto loc_825EF6C8;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsub f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 - f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
loc_825EF6C8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(r27.s32, r23.s32, ctx.xer);
	// blt cr6,0x825ef5f4
	if (ctx.cr6.lt) goto loc_825EF5F4;
loc_825EF6D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825FCD38) {
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
	ctx.lr = 0x825FCD40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-31004
	ctx.r11.s64 = ctx.r11.s64 + -31004;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r28,r3,20
	r28.s64 = ctx.r3.s64 + 20;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x825f7480
	ctx.lr = 0x825FCD74;
	sub_825F7480(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,1388(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1388);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r10,1388(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1388);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1388(r11)
	REX_STORE_U32(ctx.r11.u32 + 1388, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// stw r9,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r9.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// stb r30,124(r31)
	REX_STORE_U8(r31.u32 + 124, r30.u8);
	// stw r8,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r8.u32);
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r27,1452(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCDDC;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825fcdfc
	if (ctx.cr0.eq) goto loc_825FCDFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825d7a48
	ctx.lr = 0x825FCDF8;
	sub_825D7A48(ctx, base);
	// b 0x825fce00
	goto loc_825FCE00;
loc_825FCDFC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825FCE00:
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCE18;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825fce38
	if (ctx.cr0.eq) goto loc_825FCE38;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825d7a48
	ctx.lr = 0x825FCE34;
	sub_825D7A48(ctx, base);
	// b 0x825fce3c
	goto loc_825FCE3C;
loc_825FCE38:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825FCE3C:
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCE54;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825fce74
	if (ctx.cr0.eq) goto loc_825FCE74;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825d7a48
	ctx.lr = 0x825FCE70;
	sub_825D7A48(ctx, base);
	// b 0x825fce78
	goto loc_825FCE78;
loc_825FCE74:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825FCE78:
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCE90;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825fceb0
	if (ctx.cr0.eq) goto loc_825FCEB0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825d7a48
	ctx.lr = 0x825FCEAC;
	sub_825D7A48(ctx, base);
	// b 0x825fceb4
	goto loc_825FCEB4;
loc_825FCEB0:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825FCEB4:
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r27,1452(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCECC;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// beq 0x825fceec
	if (ctx.cr0.eq) goto loc_825FCEEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825d7a48
	ctx.lr = 0x825FCEE8;
	sub_825D7A48(ctx, base);
	// b 0x825fcef0
	goto loc_825FCEF0;
loc_825FCEEC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825FCEF0:
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,1452(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCF08;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fcf24
	if (ctx.cr0.eq) goto loc_825FCF24;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fae10
	ctx.lr = 0x825FCF20;
	sub_825FAE10(ctx, base);
	// b 0x825fcf28
	goto loc_825FCF28;
loc_825FCF24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825FCF28:
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r29,1452(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825FCF40;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x825fcf5c
	if (ctx.cr0.eq) goto loc_825FCF5C;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825fae68
	ctx.lr = 0x825FCF58;
	sub_825FAE68(ctx, base);
	// b 0x825fcf60
	goto loc_825FCF60;
loc_825FCF5C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825FCF60:
	// stw r3,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x825f7508
	ctx.lr = 0x825FCF70;
	sub_825F7508(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x825f74e0
	ctx.lr = 0x825FCF7C;
	sub_825F74E0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,948(r11)
	REX_STORE_U32(ctx.r11.u32 + 948, r31.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r31,948(r11)
	REX_STORE_U32(ctx.r11.u32 + 948, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82611DA0) {
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
	// lwz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82611e08
	if (ctx.cr6.eq) goto loc_82611E08;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82611ddc
	if (ctx.cr6.eq) goto loc_82611DDC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82611de0
	goto loc_82611DE0;
loc_82611DDC:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82611DE0:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x82611df4
	if (ctx.cr6.eq) goto loc_82611DF4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82611DF4:
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8260e830
	ctx.lr = 0x82611E04;
	sub_8260E830(ctx, base);
	// b 0x82611e24
	goto loc_82611E24;
loc_82611E08:
	// addi r3,r31,624
	ctx.r3.s64 = r31.s64 + 624;
	// bl 0x8260c0a0
	ctx.lr = 0x82611E10;
	sub_8260C0A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,664
	ctx.r3.s64 = r31.s64 + 664;
	// bl 0x8260f878
	ctx.lr = 0x82611E1C;
	sub_8260F878(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r30,608(r31)
	REX_STORE_U32(r31.u32 + 608, r30.u32);
loc_82611E24:
	// stw r30,452(r31)
	REX_STORE_U32(r31.u32 + 452, r30.u32);
	// stw r30,456(r31)
	REX_STORE_U32(r31.u32 + 456, r30.u32);
	// stw r30,464(r31)
	REX_STORE_U32(r31.u32 + 464, r30.u32);
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

DEFINE_REX_FUNC(sub_826152A8) {
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
	ctx.lr = 0x826152B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r27,0(r3)
	r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82614f88
	ctx.lr = 0x826152CC;
	sub_82614F88(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmplwi cr6,r27,65534
	ctx.cr6.compare<uint32_t>(r27.u32, 65534, ctx.xer);
	// beq cr6,0x82615348
	if (ctx.cr6.eq) goto loc_82615348;
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,22
	ctx.r10.s64 = 22;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r10,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 14);
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// bl 0x826151f0
	ctx.lr = 0x826152FC;
	sub_826151F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// addi r9,r11,2720
	ctx.r9.s64 = ctx.r11.s64 + 2720;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,2720(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2720);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82615340;
	sub_826A1E70(ctx, base);
	// li r11,40
	ctx.r11.s64 = 40;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82615348:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826185E0) {
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
	ctx.lr = 0x826185E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lhz r28,14(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x8262acf8
	ctx.lr = 0x82618618;
	sub_8262ACF8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt 0x826186d0
	if (ctx.cr0.lt) goto loc_826186D0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82618640
	if (!ctx.cr6.eq) goto loc_82618640;
	// lhz r27,18(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
loc_82618640:
	// bl 0x82634850
	ctx.lr = 0x82618644;
	sub_82634850(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82615020
	ctx.lr = 0x82618650;
	sub_82615020(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826186c4
	if (!ctx.cr6.eq) goto loc_826186C4;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// bne cr6,0x8261868c
	if (!ctx.cr6.eq) goto loc_8261868C;
	// cmplwi cr6,r27,32
	ctx.cr6.compare<uint32_t>(r27.u32, 32, ctx.xer);
	// bne cr6,0x82618674
	if (!ctx.cr6.eq) goto loc_82618674;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x826186c8
	goto loc_826186C8;
loc_82618674:
	// cmplwi cr6,r27,24
	ctx.cr6.compare<uint32_t>(r27.u32, 24, ctx.xer);
	// bne cr6,0x82618684
	if (!ctx.cr6.eq) goto loc_82618684;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x826186c8
	goto loc_826186C8;
loc_82618684:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x826186c8
	goto loc_826186C8;
loc_8261868C:
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(r28.u32, 24, ctx.xer);
	// bne cr6,0x826186ac
	if (!ctx.cr6.eq) goto loc_826186AC;
	// cmplwi cr6,r27,24
	ctx.cr6.compare<uint32_t>(r27.u32, 24, ctx.xer);
	// bne cr6,0x826186a4
	if (!ctx.cr6.eq) goto loc_826186A4;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x826186c8
	goto loc_826186C8;
loc_826186A4:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x826186c8
	goto loc_826186C8;
loc_826186AC:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(r28.u32, 16, ctx.xer);
	// bne cr6,0x826186bc
	if (!ctx.cr6.eq) goto loc_826186BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826186c8
	goto loc_826186C8;
loc_826186BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826186c8
	goto loc_826186C8;
loc_826186C4:
	// li r3,7
	ctx.r3.s64 = 7;
loc_826186C8:
	// bl 0x826347c8
	ctx.lr = 0x826186CC;
	sub_826347C8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_826186D0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82624380) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// beq cr6,0x826243b0
	if (ctx.cr6.eq) goto loc_826243B0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,-8240
	ctx.r11.s64 = ctx.r11.s64 + -8240;
	// beq cr6,0x826243a4
	if (ctx.cr6.eq) goto loc_826243A4;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r8,r11,8768
	ctx.r8.s64 = ctx.r11.s64 + 8768;
	// b 0x826243b8
	goto loc_826243B8;
loc_826243A4:
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r8,r11,6104
	ctx.r8.s64 = ctx.r11.s64 + 6104;
	// b 0x826243b8
	goto loc_826243B8;
loc_826243B0:
	// li r9,30
	ctx.r9.s64 = 30;
	// addi r8,r11,-8240
	ctx.r8.s64 = ctx.r11.s64 + -8240;
loc_826243B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82624418
	if (ctx.cr6.eq) goto loc_82624418;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826243C8:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826243e0
	if (!ctx.cr6.eq) goto loc_826243E0;
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x826243f8
	if (ctx.cr6.eq) goto loc_826243F8;
loc_826243E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826243c8
	if (ctx.cr6.lt) goto loc_826243C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826243F8:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82624418
	if (ctx.cr6.eq) goto loc_82624418;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82624418:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826270A8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826270D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826286c8
	ctx.lr = 0x826270E8;
	sub_826286C8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627104;
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

DEFINE_REX_FUNC(sub_82628910) {
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
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82628950
	if (!ctx.cr6.lt) goto loc_82628950;
	// bl 0x82793a84
	ctx.lr = 0x82628944;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82628950
	if (ctx.cr6.eq) goto loc_82628950;
	// li r30,1
	r30.s64 = 1;
loc_82628950:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82628964
	if (ctx.cr6.eq) goto loc_82628964;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826289e8
	if (ctx.cr6.eq) goto loc_826289E8;
loc_82628964:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826289d8
	if (ctx.cr6.gt) goto loc_826289D8;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x8260b5b8
	ctx.lr = 0x82628994;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826289e8
	if (ctx.cr0.eq) goto loc_826289E8;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826289A8:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x826289a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826289A8;
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
	// b 0x826289e8
	goto loc_826289E8;
loc_826289D8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-15940
	ctx.r3.s64 = ctx.r11.s64 + -15940;
	// bl 0x823ecbd8
	ctx.lr = 0x826289E4;
	sub_823ECBD8(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_826289E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82628a00
	if (ctx.cr6.eq) goto loc_82628A00;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82628a04
	goto loc_82628A04;
loc_82628A00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82628A04:
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

DEFINE_REX_FUNC(sub_82634B88) {
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
	// blt cr6,0x82634bb8
	if (ctx.cr6.lt) goto loc_82634BB8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r9,r10,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-12
	ctx.r8.s64 = ctx.r8.s64 + -12;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// blr 
	return;
loc_82634BB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826355A0) {
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
	ctx.lr = 0x826355A8;
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
	// bl 0x821aae70
	ctx.lr = 0x826355F8;
	sub_821AAE70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82635a84
	if (ctx.cr6.lt) goto loc_82635A84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82635610;
	sub_82130E88(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r30,r11,2
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e07e0
	ctx.lr = 0x82635620;
	sub_826E07E0(ctx, base);
	// stw r3,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82635638;
	sub_826A2E60(ctx, base);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r29,r11,2
	r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e07e0
	ctx.lr = 0x82635648;
	sub_826E07E0(ctx, base);
	// stw r3,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82635660;
	sub_826A2E60(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82634e88
	ctx.lr = 0x8263566C;
	sub_82634E88(ctx, base);
	// stw r3,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82635684;
	sub_826A2E60(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82634e88
	ctx.lr = 0x82635690;
	sub_82634E88(ctx, base);
	// stw r3,368(r31)
	REX_STORE_U32(r31.u32 + 368, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826356A8;
	sub_826A2E60(ctx, base);
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
	// beq cr6,0x8263574c
	if (ctx.cr6.eq) goto loc_8263574C;
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
	// ble cr6,0x82635704
	if (!ctx.cr6.gt) goto loc_82635704;
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
loc_826356F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x826356f4
	if (ctx.cr6.gt) goto loc_826356F4;
loc_82635704:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82635708:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82635708
	if (ctx.cr6.gt) goto loc_82635708;
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
	// bge cr6,0x82635a48
	if (!ctx.cr6.lt) goto loc_82635A48;
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
	// bgt cr6,0x82635a48
	if (ctx.cr6.gt) goto loc_82635A48;
loc_8263574C:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x82635778
	if (ctx.cr6.eq) goto loc_82635778;
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
	// b 0x826357a4
	goto loc_826357A4;
loc_82635778:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82635798
	if (ctx.cr6.eq) goto loc_82635798;
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
	// b 0x826357a4
	goto loc_826357A4;
loc_82635798:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_826357A4:
	// lhz r10,34(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 34);
	// li r4,32
	ctx.r4.s64 = 32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82634e88
	ctx.lr = 0x826357B8;
	sub_82634E88(ctx, base);
	// stw r3,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826357ec
	if (ctx.cr6.eq) goto loc_826357EC;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,32
	ctx.r4.s64 = 32;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82634e88
	ctx.lr = 0x826357E0;
	sub_82634E88(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
loc_826357EC:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826357F8;
	sub_826E07E0(ctx, base);
	// stw r3,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// mulli r3,r11,116
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// bl 0x826e07e0
	ctx.lr = 0x82635810;
	sub_826E07E0(ctx, base);
	// stw r3,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82639658
	ctx.lr = 0x82635824;
	sub_82639658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82637630
	ctx.lr = 0x8263582C;
	sub_82637630(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82635a84
	if (ctx.cr6.lt) goto loc_82635A84;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x82635844;
	sub_826E07E0(ctx, base);
	// stw r3,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x826e07e0
	ctx.lr = 0x8263585C;
	sub_826E07E0(ctx, base);
	// stw r3,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// mulli r3,r11,112
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(112));
	// bl 0x826e07e0
	ctx.lr = 0x82635874;
	sub_826E07E0(ctx, base);
	// stw r3,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635a7c
	if (ctx.cr6.eq) goto loc_82635A7C;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x8263588C;
	sub_826E07E0(ctx, base);
	// stw r3,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826358a8
	if (!ctx.cr6.eq) goto loc_826358A8;
loc_82635898:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826358A8:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x826e07e0
	ctx.lr = 0x826358B8;
	sub_826E07E0(ctx, base);
	// stw r3,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826358D8;
	sub_826E07E0(ctx, base);
	// stw r3,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826358F8;
	sub_826E07E0(ctx, base);
	// stw r3,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e3b48
	ctx.lr = 0x8263590C;
	sub_826E3B48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82635a84
	if (ctx.cr6.lt) goto loc_82635A84;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826e07e0
	ctx.lr = 0x82635924;
	sub_826E07E0(ctx, base);
	// stw r3,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826e07e0
	ctx.lr = 0x8263593C;
	sub_826E07E0(ctx, base);
	// stw r3,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82635984
	if (!ctx.cr6.gt) goto loc_82635984;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826e07e0
	ctx.lr = 0x82635960;
	sub_826E07E0(ctx, base);
	// stw r3,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x826e07e0
	ctx.lr = 0x82635978;
	sub_826E07E0(ctx, base);
	// stw r3,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
loc_82635984:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x826e07e0
	ctx.lr = 0x82635990;
	sub_826E07E0(ctx, base);
	// stw r3,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// bl 0x826e07e0
	ctx.lr = 0x826359A8;
	sub_826E07E0(ctx, base);
	// stw r3,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82635898
	if (ctx.cr6.eq) goto loc_82635898;
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82635a84
	if (!ctx.cr6.eq) goto loc_82635A84;
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82635a84
	if (!ctx.cr6.eq) goto loc_82635A84;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82635a5c
	if (ctx.cr6.eq) goto loc_82635A5C;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x826359fc
	if (!ctx.cr6.gt) goto loc_826359FC;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_826359EC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x826359ec
	if (ctx.cr6.gt) goto loc_826359EC;
loc_826359FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82635A00:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82635a00
	if (ctx.cr6.gt) goto loc_82635A00;
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
	// bge cr6,0x82635a48
	if (!ctx.cr6.lt) goto loc_82635A48;
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
	// ble cr6,0x82635a5c
	if (!ctx.cr6.gt) goto loc_82635A5C;
loc_82635A48:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82635A5C:
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 34);
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x82635A70;
	sub_826E07E0(ctx, base);
	// stw r3,436(r31)
	REX_STORE_U32(r31.u32 + 436, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82635a84
	if (!ctx.cr6.eq) goto loc_82635A84;
loc_82635A7C:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_82635A84:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82650540) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82650548;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826505f8
	if (ctx.cr6.eq) goto loc_826505F8;
	// cmplwi cr6,r5,1020
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1020, ctx.xer);
	// ble cr6,0x82650574
	if (!ctx.cr6.gt) goto loc_82650574;
loc_82650568:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,4336
	r30.u64 = r30.u64 | 4336;
	// b 0x82650678
	goto loc_82650678;
loc_82650574:
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8264c928
	ctx.lr = 0x8265058C;
	sub_8264C928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826505b0
	if (ctx.cr0.eq) goto loc_826505B0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x826505a4
	if (ctx.cr6.gt) goto loc_826505A4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82650678
	goto loc_82650678;
loc_826505A4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	r30.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82650678
	goto loc_82650678;
loc_826505B0:
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82650568
	if (ctx.cr6.gt) goto loc_82650568;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d838
	ctx.lr = 0x826505D0;
	sub_8265D838(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x826505e4
	if (!ctx.cr0.eq) goto loc_826505E4;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82650678
	goto loc_82650678;
loc_826505E4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826505F4;
	sub_826A1E70(ctx, base);
	// b 0x826505fc
	goto loc_826505FC;
loc_826505F8:
	// li r29,0
	r29.s64 = 0;
loc_826505FC:
	// lwz r11,740(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 740);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82650658
	if (ctx.cr0.eq) goto loc_82650658;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r28,48
	ctx.r3.s64 = r28.s64 + 48;
	// bl 0x8264c870
	ctx.lr = 0x82650620;
	sub_8264C870(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82650658
	if (ctx.cr0.eq) goto loc_82650658;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82650638
	if (ctx.cr6.gt) goto loc_82650638;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82650640
	goto loc_82650640;
loc_82650638:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r30,r11,32775
	r30.u64 = ctx.r11.u64 | 2147942400;
loc_82650640:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82650678
	if (ctx.cr6.eq) goto loc_82650678;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x82650654;
	sub_8265D850(ctx, base);
	// b 0x82650678
	goto loc_82650678;
loc_82650658:
	// lwz r4,520(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265066c
	if (ctx.cr6.eq) goto loc_8265066C;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d850
	ctx.lr = 0x8265066C;
	sub_8265D850(ctx, base);
loc_8265066C:
	// stw r29,520(r28)
	REX_STORE_U32(r28.u32 + 520, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r31,524(r28)
	REX_STORE_U32(r28.u32 + 524, r31.u32);
loc_82650678:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8265A588) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x8265a5cc
	if (!ctx.cr6.lt) goto loc_8265A5CC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8265A5A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8265a65c
	if (ctx.cr6.eq) goto loc_8265A65C;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a150
	ctx.lr = 0x8265A5C8;
	sub_8265A150(ctx, base);
	// b 0x8265a65c
	goto loc_8265A65C;
loc_8265A5CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8265a5e4
	if (!ctx.cr6.eq) goto loc_8265A5E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1235
	ctx.r3.u64 = ctx.r3.u64 | 1235;
	// b 0x8265a5a8
	goto loc_8265A5A8;
loc_8265A5E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8265a608
	if (ctx.cr6.eq) goto loc_8265A608;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265a608
	if (ctx.cr0.eq) goto loc_8265A608;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650370
	ctx.lr = 0x8265A608;
	sub_82650370(ctx, base);
loc_8265A608:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265a670
	if (ctx.cr0.eq) goto loc_8265A670;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x8265a750
	ctx.lr = 0x8265A624;
	sub_8265A750(ctx, base);
loc_8265A624:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265a5a8
	if (ctx.cr0.lt) goto loc_8265A5A8;
loc_8265A62C:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265A65C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265A65C:
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
loc_8265A670:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265a62c
	if (ctx.cr0.eq) goto loc_8265A62C;
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826558c0
	ctx.lr = 0x8265A688;
	sub_826558C0(ctx, base);
	// b 0x8265a624
	goto loc_8265A624;
}

DEFINE_REX_FUNC(sub_8265EDB8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8265edf4
	if (!ctx.cr6.eq) goto loc_8265EDF4;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r31,r31,1245
	r31.u64 = r31.u64 | 1245;
	// bl 0x826a2e60
	ctx.lr = 0x8265EDF0;
	sub_826A2E60(ctx, base);
	// b 0x8265ee00
	goto loc_8265EE00;
loc_8265EDF4:
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x826a1e70
	ctx.lr = 0x8265EDFC;
	sub_826A1E70(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8265EE00:
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

DEFINE_REX_FUNC(sub_8265FF48) {
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
	ctx.lr = 0x8265FF50;
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x821aae70
	ctx.lr = 0x8265FF60;
	sub_821AAE70(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265ff9c
	if (ctx.cr6.eq) goto loc_8265FF9C;
	// beq 0x82660020
	if (ctx.cr0.eq) goto loc_82660020;
	// rlwinm r11,r11,0,3,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFF9FFFFFFF;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x82654388
	ctx.lr = 0x8265FF84;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82660020
	if (ctx.cr0.lt) goto loc_82660020;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826512a8
	ctx.lr = 0x8265FF98;
	sub_826512A8(ctx, base);
	// b 0x82660020
	goto loc_82660020;
loc_8265FF9C:
	// bne 0x8265ffc4
	if (!ctx.cr0.eq) goto loc_8265FFC4;
	// oris r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 1610612736;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x82654388
	ctx.lr = 0x8265FFB0;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265ffc4
	if (ctx.cr0.lt) goto loc_8265FFC4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826512a8
	ctx.lr = 0x8265FFC4;
	sub_826512A8(ctx, base);
loc_8265FFC4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82660020
	if (ctx.cr0.eq) goto loc_82660020;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82660020
	if (ctx.cr6.eq) goto loc_82660020;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8265FFF0;
	sub_826A2E60(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82205518
	ctx.lr = 0x82660004;
	sub_82205518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660014
	if (ctx.cr0.eq) goto loc_82660014;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x82660020
	if (!ctx.cr6.eq) goto loc_82660020;
loc_82660014:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_82660020:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660118
	if (ctx.cr6.eq) goto loc_82660118;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82660118
	if (ctx.cr6.eq) goto loc_82660118;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r11,248
	r28.s64 = ctx.r11.s64 + 248;
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82660118
	if (ctx.cr6.eq) goto loc_82660118;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82660118
	if (ctx.cr0.eq) goto loc_82660118;
loc_82660054:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r29,-92
	r30.s64 = r29.s64 + -92;
	// lwz r10,-92(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -92);
	// subf r9,r11,r28
	ctx.r9.u64 = r28.u64 - ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r9,r11
	r29.u64 = ctx.r9.u64 & ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82660080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82660110
	if (!ctx.cr0.eq) goto loc_82660110;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82660110
	if (!ctx.cr6.eq) goto loc_82660110;
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826600a8
	if (!ctx.cr0.eq) goto loc_826600A8;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82660110
	if (ctx.cr0.eq) goto loc_82660110;
loc_826600A8:
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x826a1e70
	ctx.lr = 0x826600B8;
	sub_826A1E70(ctx, base);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// ld r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// ld r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// ld r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826600F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82660110
	if (!ctx.cr0.eq) goto loc_82660110;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82651030
	ctx.lr = 0x82660110;
	sub_82651030(ctx, base);
loc_82660110:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82660054
	if (!ctx.cr6.eq) goto loc_82660054;
loc_82660118:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8266F6E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8266F6F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8266f740
	if (ctx.cr6.eq) goto loc_8266F740;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bl 0x8266f400
	ctx.lr = 0x8266F714;
	sub_8266F400(ctx, base);
loc_8266F714:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266f714
	if (!ctx.cr0.eq) goto loc_8266F714;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266f740
	if (!ctx.cr6.eq) goto loc_8266F740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266F740;
	sub_82670CD8(ctx, base);
loc_8266F740:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8266f784
	if (ctx.cr6.eq) goto loc_8266F784;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8266F74C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8266F750:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266f750
	if (!ctx.cr0.eq) goto loc_8266F750;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266f778
	if (!ctx.cr6.eq) goto loc_8266F778;
	// bl 0x82670cd8
	ctx.lr = 0x8266F778;
	sub_82670CD8(ctx, base);
loc_8266F778:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8266f74c
	if (!ctx.cr0.eq) goto loc_8266F74C;
loc_8266F784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826726B8) {
	REX_FUNC_PROLOGUE();
	// b 0x82672520
	sub_82672520(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826727B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
	// b 0x82672848
	goto loc_82672848;
loc_826727C8:
	// lbz r11,56(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 56);
	// addi r3,r6,-4
	ctx.r3.s64 = ctx.r6.s64 + -4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82672844
	if (!ctx.cr6.eq) goto loc_82672844;
	// addi r11,r3,61
	ctx.r11.s64 = ctx.r3.s64 + 61;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82672834
	if (!ctx.cr6.eq) goto loc_82672834;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r8,r11,38
	ctx.r8.s64 = ctx.r11.s64 + 38;
loc_826727EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8267280c
	if (!ctx.cr0.eq) goto loc_8267280C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826727ec
	if (!ctx.cr6.eq) goto loc_826727EC;
loc_8267280C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82672844
	if (!ctx.cr0.eq) goto loc_82672844;
loc_82672814:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82672814
	if (!ctx.cr0.eq) goto loc_82672814;
	// b 0x82672880
	goto loc_82672880;
loc_82672834:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82672864
	if (ctx.cr6.eq) goto loc_82672864;
loc_82672844:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
loc_82672848:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8267285c
	if (ctx.cr6.eq) goto loc_8267285C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne 0x826727c8
	if (!ctx.cr0.eq) goto loc_826727C8;
loc_8267285C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82672880
	goto loc_82672880;
loc_82672864:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82672864
	if (!ctx.cr0.eq) goto loc_82672864;
loc_82672880:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82677508) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82677510;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677528;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r28,r31,172
	r28.s64 = r31.s64 + 172;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677534;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8267f6d8
	ctx.lr = 0x8267753C;
	sub_8267F6D8(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// ld r4,144(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 144);
	// bl 0x82677130
	ctx.lr = 0x82677548;
	sub_82677130(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 336);
	// addi r11,r30,176
	ctx.r11.s64 = r30.s64 + 176;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// lwz r10,176(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 176);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8267758c
	if (ctx.cr6.eq) goto loc_8267758C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8267f100
	ctx.lr = 0x8267758C;
	sub_8267F100(ctx, base);
loc_8267758C:
	// lwz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 168);
	// addi r11,r30,168
	ctx.r11.s64 = r30.s64 + 168;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826775c8
	if (ctx.cr6.eq) goto loc_826775C8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8267c840
	ctx.lr = 0x826775C8;
	sub_8267C840(ctx, base);
loc_826775C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x826775D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x826775D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82676d18
	ctx.lr = 0x826775E0;
	sub_82676D18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8267B698) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267B6A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x823ef900
	ctx.lr = 0x8267B6B0;
	sub_823EF900(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// bl 0x82683d88
	ctx.lr = 0x8267B6C4;
	sub_82683D88(ctx, base);
	// stw r30,472(r31)
	REX_STORE_U32(r31.u32 + 472, r30.u32);
	// stw r30,468(r31)
	REX_STORE_U32(r31.u32 + 468, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267a6a0
	ctx.lr = 0x8267B6E0;
	sub_8267A6A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267b6f8
	if (ctx.cr0.eq) goto loc_8267B6F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x826829f0
	ctx.lr = 0x8267B6F8;
	sub_826829F0(ctx, base);
loc_8267B6F8:
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,1184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1184);
	// lwz r9,1188(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// li r8,250
	ctx.r8.s64 = 250;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// andi. r11,r11,250
	ctx.r11.u64 = ctx.r11.u64 & 250;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 67108864;
	// stb r8,1185(r31)
	REX_STORE_U8(r31.u32 + 1185, ctx.r8.u8);
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// stw r10,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r10.u32);
	// bl 0x82682a90
	ctx.lr = 0x8267B728;
	sub_82682A90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8267FF70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267FF78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r29,22236
	r31.s64 = r29.s64 + 22236;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x827938a4
	ctx.lr = 0x8267FF90;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,22236(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 22236);
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r10,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// lwz r10,22236(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 22236);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,22236(r29)
	REX_STORE_U32(r29.u32 + 22236, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x8267FFB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82681310) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r4,3(r3)
	REX_STORE_U32(ctx.r3.u32 + 3, ctx.r4.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,7
	ctx.r3.s64 = 7;
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// stb r11,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82681680) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r4,76(r10)
	REX_STORE_U16(ctx.r10.u32 + 76, ctx.r4.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r10,78
	ctx.r4.s64 = ctx.r10.s64 + 78;
	// lhz r4,78(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r4,r3,15,0,16
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0xFFFF8000) | (ctx.r4.u64 & 0xFFFFFFFF00007FFF);
	// sth r4,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r4.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r10,78
	ctx.r4.s64 = ctx.r10.s64 + 78;
	// lhz r4,78(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r4,r5,14,17,17
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x4000) | (ctx.r4.u64 & 0xFFFFFFFFFFFFBFFF);
	// sth r4,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r4.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r10,78
	ctx.r5.s64 = ctx.r10.s64 + 78;
	// lhz r5,78(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r5,r6,13,18,18
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x2000) | (ctx.r5.u64 & 0xFFFFFFFFFFFFDFFF);
	// sth r5,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r5.u16);
	// lhz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r10,78
	ctx.r6.s64 = ctx.r10.s64 + 78;
	// lhz r6,78(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 78);
	// rlwimi r6,r7,12,19,19
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x1000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFEFFF);
	// sth r6,78(r10)
	REX_STORE_U16(ctx.r10.u32 + 78, ctx.r6.u16);
	// lhz r3,328(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 328);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// sth r10,328(r11)
	REX_STORE_U16(ctx.r11.u32 + 328, ctx.r10.u16);
	// beq cr6,0x8268174c
	if (ctx.cr6.eq) goto loc_8268174C;
	// lbz r10,338(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 338);
	// stb r31,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, r31.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,338(r11)
	REX_STORE_U8(ctx.r11.u32 + 338, ctx.r10.u8);
	// b 0x82681758
	goto loc_82681758;
loc_8268174C:
	// lbz r10,339(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 339);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,339(r11)
	REX_STORE_U8(ctx.r11.u32 + 339, ctx.r10.u8);
loc_82681758:
	// lbz r10,338(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 338);
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// lbz r11,339(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 339);
	// stb r11,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82686968) {
	REX_FUNC_PROLOGUE();
	// mulli r10,r6,7
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(7));
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r9,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stb r8,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8268699C:
	// lhz r11,10(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFE;
	// sth r11,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8268699c
	if (ctx.cr0.eq) goto loc_8268699C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82689290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82689298;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,232
	r28.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x827938a4
	ctx.lr = 0x826892B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,72
	ctx.r10.s64 = r31.s64 + 72;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826892C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826892d4
	if (!ctx.cr6.eq) goto loc_826892D4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_826892D4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826892c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826892C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826892f4
	if (!ctx.cr6.gt) goto loc_826892F4;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x82689318
	goto loc_82689318;
loc_826892F4:
	// addi r11,r29,18
	ctx.r11.s64 = r29.s64 + 18;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8268cae0
	ctx.lr = 0x82689308;
	sub_8268CAE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82689318
	if (ctx.cr0.lt) goto loc_82689318;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r11.u32);
loc_82689318:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82689320;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268CFF8) {
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
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r3,r11,-12512
	ctx.r3.s64 = ctx.r11.s64 + -12512;
	// bl 0x82692788
	ctx.lr = 0x8268D010;
	sub_82692788(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r3,r11,-12312
	ctx.r3.s64 = ctx.r11.s64 + -12312;
	// bl 0x826927a0
	ctx.lr = 0x8268D01C;
	sub_826927A0(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r3,r11,-12488
	ctx.r3.s64 = ctx.r11.s64 + -12488;
	// bl 0x826927b8
	ctx.lr = 0x8268D028;
	sub_826927B8(ctx, base);
	// lis r11,-32151
	ctx.r11.s64 = -2107047936;
	// addi r3,r11,-12440
	ctx.r3.s64 = ctx.r11.s64 + -12440;
	// bl 0x826927d0
	ctx.lr = 0x8268D034;
	sub_826927D0(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r3,r11,5568
	ctx.r3.s64 = ctx.r11.s64 + 5568;
	// bl 0x826927e8
	ctx.lr = 0x8268D040;
	sub_826927E8(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// addi r3,r11,5344
	ctx.r3.s64 = ctx.r11.s64 + 5344;
	// bl 0x82692800
	ctx.lr = 0x8268D04C;
	sub_82692800(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268FED8) {
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
	// bl 0x826a1c80
	ctx.lr = 0x8268FEE0;
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
	// ble cr6,0x82691274
	if (!ctx.cr6.gt) goto loc_82691274;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// addi r19,r11,23540
	r19.s64 = ctx.r11.s64 + 23540;
	// addi r15,r10,23556
	r15.s64 = ctx.r10.s64 + 23556;
	// addi r18,r9,23508
	r18.s64 = ctx.r9.s64 + 23508;
	// li r17,-1024
	r17.s64 = -1024;
	// li r16,128
	r16.s64 = 128;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x8268ff38
	goto loc_8268FF38;
loc_8268FF34:
	// lwz r8,28(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
loc_8268FF38:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8268ff60
	if (ctx.cr6.eq) goto loc_8268FF60;
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
	// b 0x8268ffa4
	goto loc_8268FFA4;
loc_8268FF60:
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
loc_8268FFA4:
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
	// beq cr6,0x8268ffd0
	if (ctx.cr6.eq) goto loc_8268FFD0;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_8268FFD0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x8268ffe8
	if (!ctx.cr6.eq) goto loc_8268FFE8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x8268fff0
	goto loc_8268FFF0;
loc_8268FFE8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_8268FFF0:
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
	// bgt cr6,0x8269002c
	if (ctx.cr6.gt) goto loc_8269002C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82690038
	goto loc_82690038;
loc_8269002C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82690038:
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
	// beq cr6,0x82690080
	if (ctx.cr6.eq) goto loc_82690080;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82690080:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x82690098
	if (!ctx.cr6.eq) goto loc_82690098;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x826900a0
	goto loc_826900A0;
loc_82690098:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_826900A0:
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
	// bgt cr6,0x826900dc
	if (ctx.cr6.gt) goto loc_826900DC;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x826900e8
	goto loc_826900E8;
loc_826900DC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_826900E8:
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
	// beq cr6,0x82690130
	if (ctx.cr6.eq) goto loc_82690130;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82690130:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x82690148
	if (!ctx.cr6.eq) goto loc_82690148;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82690150
	goto loc_82690150;
loc_82690148:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82690150:
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
	// bgt cr6,0x8269018c
	if (ctx.cr6.gt) goto loc_8269018C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82690198
	goto loc_82690198;
loc_8269018C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82690198:
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
	// beq cr6,0x826901e0
	if (ctx.cr6.eq) goto loc_826901E0;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_826901E0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x826901f8
	if (!ctx.cr6.eq) goto loc_826901F8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82690200
	goto loc_82690200;
loc_826901F8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82690200:
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
	// bgt cr6,0x8269023c
	if (ctx.cr6.gt) goto loc_8269023C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82690248
	goto loc_82690248;
loc_8269023C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82690248:
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
	// beq cr6,0x82690290
	if (ctx.cr6.eq) goto loc_82690290;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82690290:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x826902a8
	if (!ctx.cr6.eq) goto loc_826902A8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x826902b0
	goto loc_826902B0;
loc_826902A8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_826902B0:
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
	// bgt cr6,0x826902ec
	if (ctx.cr6.gt) goto loc_826902EC;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x826902f8
	goto loc_826902F8;
loc_826902EC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_826902F8:
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
	// beq cr6,0x82690340
	if (ctx.cr6.eq) goto loc_82690340;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82690340:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r31,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	r31.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x82690358
	if (!ctx.cr6.eq) goto loc_82690358;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82690360
	goto loc_82690360;
loc_82690358:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82690360:
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
	// bgt cr6,0x8269039c
	if (ctx.cr6.gt) goto loc_8269039C;
	// subfic r10,r10,26
	ctx.xer.ca = ctx.r10.u32 <= 26;
	ctx.r10.u64 = static_cast<uint64_t>(26) - ctx.r10.u64;
	// sraw r10,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x826903a8
	goto loc_826903A8;
loc_8269039C:
	// addi r10,r10,-26
	ctx.r10.s64 = ctx.r10.s64 + -26;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
loc_826903A8:
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
	// beq cr6,0x82690414
	if (ctx.cr6.eq) goto loc_82690414;
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
loc_82690414:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r10.u64;
	// bne cr6,0x8269042c
	if (!ctx.cr6.eq) goto loc_8269042C;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82690434
	goto loc_82690434;
loc_8269042C:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
loc_82690434:
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
	// bgt cr6,0x82690470
	if (ctx.cr6.gt) goto loc_82690470;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8269047c
	goto loc_8269047C;
loc_82690470:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8269047C:
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
	// beq cr6,0x826904c4
	if (ctx.cr6.eq) goto loc_826904C4;
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_826904C4:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r9.u64;
	// bne cr6,0x826904dc
	if (!ctx.cr6.eq) goto loc_826904DC;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x826904e4
	goto loc_826904E4;
loc_826904DC:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_826904E4:
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
	// bgt cr6,0x82690520
	if (ctx.cr6.gt) goto loc_82690520;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.u64 = static_cast<uint64_t>(26) - ctx.r11.u64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x8269052c
	goto loc_8269052C;
loc_82690520:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_8269052C:
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
	// bge cr6,0x82690580
	if (!ctx.cr6.lt) goto loc_82690580;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x82690584
	goto loc_82690584;
loc_82690580:
	// li r11,64
	ctx.r11.s64 = 64;
loc_82690584:
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
	// bge cr6,0x826905cc
	if (!ctx.cr6.lt) goto loc_826905CC;
	// subf r9,r11,r27
	ctx.r9.u64 = r27.u64 - ctx.r11.u64;
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// b 0x826905d4
	goto loc_826905D4;
loc_826905CC:
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
loc_826905D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826905e4
	if (ctx.cr6.eq) goto loc_826905E4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// b 0x8269085c
	goto loc_8269085C;
loc_826905E4:
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
	// beq cr6,0x8269062c
	if (ctx.cr6.eq) goto loc_8269062C;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82690774
	goto loc_82690774;
loc_8269062C:
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690644
	if (ctx.cr6.eq) goto loc_82690644;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82690774
	goto loc_82690774;
loc_82690644:
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8269065c
	if (ctx.cr6.eq) goto loc_8269065C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82690774
	goto loc_82690774;
loc_8269065C:
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690674
	if (ctx.cr6.eq) goto loc_82690674;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82690774
	goto loc_82690774;
loc_82690674:
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8269068c
	if (ctx.cr6.eq) goto loc_8269068C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82690774
	goto loc_82690774;
loc_8269068C:
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826906a4
	if (ctx.cr6.eq) goto loc_826906A4;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82690774
	goto loc_82690774;
loc_826906A4:
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826906bc
	if (ctx.cr6.eq) goto loc_826906BC;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82690774
	goto loc_82690774;
loc_826906BC:
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826906d4
	if (ctx.cr6.eq) goto loc_826906D4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82690774
	goto loc_82690774;
loc_826906D4:
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826906ec
	if (ctx.cr6.eq) goto loc_826906EC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82690774
	goto loc_82690774;
loc_826906EC:
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690704
	if (ctx.cr6.eq) goto loc_82690704;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82690774
	goto loc_82690774;
loc_82690704:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8269071c
	if (ctx.cr6.eq) goto loc_8269071C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82690774
	goto loc_82690774;
loc_8269071C:
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690734
	if (ctx.cr6.eq) goto loc_82690734;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82690774
	goto loc_82690774;
loc_82690734:
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8269074c
	if (ctx.cr6.eq) goto loc_8269074C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82690774
	goto loc_82690774;
loc_8269074C:
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690764
	if (ctx.cr6.eq) goto loc_82690764;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82690774
	goto loc_82690774;
loc_82690764:
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
loc_82690774:
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
	// bge cr6,0x826907a0
	if (!ctx.cr6.lt) goto loc_826907A0;
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
	// b 0x826907a8
	goto loc_826907A8;
loc_826907A0:
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_826907A8:
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
	// bge cr6,0x826907d8
	if (!ctx.cr6.lt) goto loc_826907D8;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82690840
	goto loc_82690840;
loc_826907D8:
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// blt cr6,0x8269083c
	if (ctx.cr6.lt) goto loc_8269083C;
	// cmpwi cr6,r11,178
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 178, ctx.xer);
	// bge cr6,0x826907f0
	if (!ctx.cr6.lt) goto loc_826907F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82690840
	goto loc_82690840;
loc_826907F0:
	// cmpwi cr6,r11,246
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 246, ctx.xer);
	// bge cr6,0x82690800
	if (!ctx.cr6.lt) goto loc_82690800;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82690840
	goto loc_82690840;
loc_82690800:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x82690810
	if (!ctx.cr6.lt) goto loc_82690810;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82690840
	goto loc_82690840;
loc_82690810:
	// cmpwi cr6,r11,349
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 349, ctx.xer);
	// bge cr6,0x82690820
	if (!ctx.cr6.lt) goto loc_82690820;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82690840
	goto loc_82690840;
loc_82690820:
	// cmpwi cr6,r11,400
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 400, ctx.xer);
	// bge cr6,0x82690830
	if (!ctx.cr6.lt) goto loc_82690830;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82690840
	goto loc_82690840;
loc_82690830:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// blt cr6,0x82690840
	if (ctx.cr6.lt) goto loc_82690840;
loc_8269083C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82690840:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8269085c
	if (!ctx.cr6.lt) goto loc_8269085C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x8269085c
	if (ctx.cr6.eq) goto loc_8269085C;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_8269085C:
	// extsh r26,r11
	r26.s64 = ctx.r11.s16;
	// srawi. r25,r26,3
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7) != 0);
	r25.s64 = r26.s32 >> 3;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82690870
	if (ctx.cr0.eq) goto loc_82690870;
	// xori r11,r26,15
	ctx.r11.u64 = r26.u64 ^ 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82690870:
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
	// bge cr6,0x826908c4
	if (!ctx.cr6.lt) goto loc_826908C4;
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
	// b 0x826908d0
	goto loc_826908D0;
loc_826908C4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_826908D0:
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
	// bge cr6,0x82690914
	if (!ctx.cr6.lt) goto loc_82690914;
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
	// b 0x82690920
	goto loc_82690920;
loc_82690914:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
loc_82690920:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,15872
	ctx.r11.s64 = 15872;
	// bgt cr6,0x82690930
	if (ctx.cr6.gt) goto loc_82690930;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82690930:
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
	// ble cr6,0x82690960
	if (!ctx.cr6.gt) goto loc_82690960;
	// lhz r11,46(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 46);
	// li r24,-1
	r24.s64 = -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82690964
	if (ctx.cr6.eq) goto loc_82690964;
loc_82690960:
	// li r24,0
	r24.s64 = 0;
loc_82690964:
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
	// bge cr6,0x82690998
	if (!ctx.cr6.lt) goto loc_82690998;
	// li r11,544
	ctx.r11.s64 = 544;
	// b 0x826909a4
	goto loc_826909A4;
loc_82690998:
	// cmpwi cr6,r10,5120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5120, ctx.xer);
	// blt cr6,0x826909a4
	if (ctx.cr6.lt) goto loc_826909A4;
	// li r11,5120
	ctx.r11.s64 = 5120;
loc_826909A4:
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
	// beq cr6,0x82690a04
	if (ctx.cr6.eq) goto loc_82690A04;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690A04:
	// rlwinm r10,r28,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 19) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690a1c
	if (ctx.cr6.eq) goto loc_82690A1C;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690A1C:
	// rlwinm r10,r28,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 20) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690a34
	if (ctx.cr6.eq) goto loc_82690A34;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690A34:
	// rlwinm r10,r28,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 21) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690a4c
	if (ctx.cr6.eq) goto loc_82690A4C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690A4C:
	// rlwinm r10,r28,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 22) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690a64
	if (ctx.cr6.eq) goto loc_82690A64;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690A64:
	// rlwinm r10,r28,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 23) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690a7c
	if (ctx.cr6.eq) goto loc_82690A7C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690A7C:
	// rlwinm r10,r28,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 24) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690a94
	if (ctx.cr6.eq) goto loc_82690A94;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690A94:
	// rlwinm r10,r28,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690aac
	if (ctx.cr6.eq) goto loc_82690AAC;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690AAC:
	// rlwinm r10,r28,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 26) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690ac4
	if (ctx.cr6.eq) goto loc_82690AC4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690AC4:
	// rlwinm r10,r28,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 27) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690adc
	if (ctx.cr6.eq) goto loc_82690ADC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690ADC:
	// rlwinm r10,r28,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690af4
	if (ctx.cr6.eq) goto loc_82690AF4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690AF4:
	// rlwinm r10,r28,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690b0c
	if (ctx.cr6.eq) goto loc_82690B0C;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690B0C:
	// rlwinm r10,r28,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690b24
	if (ctx.cr6.eq) goto loc_82690B24;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690B24:
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82690b3c
	if (ctx.cr6.eq) goto loc_82690B3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82690b4c
	goto loc_82690B4C;
loc_82690B3C:
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
loc_82690B4C:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82690b74
	if (!ctx.cr6.lt) goto loc_82690B74;
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
	// b 0x82690b7c
	goto loc_82690B7C;
loc_82690B74:
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82690B7C:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// beq cr6,0x82690ba4
	if (ctx.cr6.eq) goto loc_82690BA4;
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
	// b 0x82690bb8
	goto loc_82690BB8;
loc_82690BA4:
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
loc_82690BB8:
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
	// beq cr6,0x82690c48
	if (ctx.cr6.eq) goto loc_82690C48;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690C48:
	// rlwinm r8,r10,19,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690c60
	if (ctx.cr6.eq) goto loc_82690C60;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690C60:
	// rlwinm r8,r10,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690c78
	if (ctx.cr6.eq) goto loc_82690C78;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690C78:
	// rlwinm r8,r10,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690c90
	if (ctx.cr6.eq) goto loc_82690C90;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690C90:
	// rlwinm r8,r10,22,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690ca8
	if (ctx.cr6.eq) goto loc_82690CA8;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690CA8:
	// rlwinm r8,r10,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690cc0
	if (ctx.cr6.eq) goto loc_82690CC0;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690CC0:
	// rlwinm r8,r10,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690cd8
	if (ctx.cr6.eq) goto loc_82690CD8;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690CD8:
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690cf0
	if (ctx.cr6.eq) goto loc_82690CF0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690CF0:
	// rlwinm r8,r10,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690d08
	if (ctx.cr6.eq) goto loc_82690D08;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690D08:
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690d20
	if (ctx.cr6.eq) goto loc_82690D20;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690D20:
	// rlwinm r8,r10,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690d38
	if (ctx.cr6.eq) goto loc_82690D38;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690D38:
	// rlwinm r8,r10,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690d50
	if (ctx.cr6.eq) goto loc_82690D50;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690D50:
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690d68
	if (ctx.cr6.eq) goto loc_82690D68;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690D68:
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82690d80
	if (ctx.cr6.eq) goto loc_82690D80;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82690d90
	goto loc_82690D90;
loc_82690D80:
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
loc_82690D90:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82690db8
	if (!ctx.cr6.lt) goto loc_82690DB8;
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
	// b 0x82690dc0
	goto loc_82690DC0;
loc_82690DB8:
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82690DC0:
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
	// bge cr6,0x82690e2c
	if (!ctx.cr6.lt) goto loc_82690E2C;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x82690e34
	goto loc_82690E34;
loc_82690E2C:
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_82690E34:
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
	// bge cr6,0x82690e78
	if (!ctx.cr6.lt) goto loc_82690E78;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x82690e80
	goto loc_82690E80;
loc_82690E78:
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_82690E80:
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
	// bge cr6,0x82690ec0
	if (!ctx.cr6.lt) goto loc_82690EC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82690ec8
	goto loc_82690EC8;
loc_82690EC0:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82690EC8:
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
	// bge cr6,0x82690f08
	if (!ctx.cr6.lt) goto loc_82690F08;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82690f10
	goto loc_82690F10;
loc_82690F08:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82690F10:
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
	// bge cr6,0x82690f50
	if (!ctx.cr6.lt) goto loc_82690F50;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82690f58
	goto loc_82690F58;
loc_82690F50:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82690F58:
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
	// bge cr6,0x82690f98
	if (!ctx.cr6.lt) goto loc_82690F98;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82690fa0
	goto loc_82690FA0;
loc_82690F98:
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
loc_82690FA0:
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
	// blt cr6,0x82691014
	if (ctx.cr6.lt) goto loc_82691014;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_82691014:
	// lhz r29,0(r7)
	r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpwi cr6,r11,-8191
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8191, ctx.xer);
	// li r11,-8191
	ctx.r11.s64 = -8191;
	// blt cr6,0x8269102c
	if (ctx.cr6.lt) goto loc_8269102C;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8269102C:
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,8191
	ctx.cr6.compare<int32_t>(r31.s32, 8191, ctx.xer);
	// blt cr6,0x8269103c
	if (ctx.cr6.lt) goto loc_8269103C;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_8269103C:
	// extsh r31,r9
	r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x82691054
	if (!ctx.cr6.lt) goto loc_82691054;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x8269105c
	goto loc_8269105C;
loc_82691054:
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_8269105C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82691070
	if (!ctx.cr6.eq) goto loc_82691070;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8269107c
	goto loc_8269107C;
loc_82691070:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r9,192
	ctx.r9.s64 = 192;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_8269107C:
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
	// bge cr6,0x826910a0
	if (!ctx.cr6.lt) goto loc_826910A0;
	// li r11,-12288
	ctx.r11.s64 = -12288;
loc_826910A0:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12288, ctx.xer);
	// blt cr6,0x826910b0
	if (ctx.cr6.lt) goto loc_826910B0;
	// li r11,12288
	ctx.r11.s64 = 12288;
loc_826910B0:
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
	// bge cr6,0x826910d8
	if (!ctx.cr6.lt) goto loc_826910D8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x826910e0
	goto loc_826910E0;
loc_826910D8:
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_826910E0:
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
	// bge cr6,0x82691110
	if (!ctx.cr6.lt) goto loc_82691110;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82691110:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// bge cr6,0x82691120
	if (!ctx.cr6.lt) goto loc_82691120;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82691120:
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
	// blt cr6,0x826911cc
	if (ctx.cr6.lt) goto loc_826911CC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x826911e8
	goto loc_826911E8;
loc_826911CC:
	// cmpwi cr6,r20,1536
	ctx.cr6.compare<int32_t>(r20.s32, 1536, ctx.xer);
	// bge cr6,0x826911dc
	if (!ctx.cr6.lt) goto loc_826911DC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x826911e8
	goto loc_826911E8;
loc_826911DC:
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
loc_826911E8:
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
	// beq cr6,0x82691230
	if (ctx.cr6.eq) goto loc_82691230;
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
	// b 0x82691264
	goto loc_82691264;
loc_82691230:
	// clrlwi r11,r14,31
	ctx.r11.u64 = r14.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82691248
	if (!ctx.cr6.eq) goto loc_82691248;
	// clrlwi r11,r26,28
	ctx.r11.u64 = r26.u32 & 0xF;
	// stb r11,-160(r1)
	REX_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// b 0x82691264
	goto loc_82691264;
loc_82691248:
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
loc_82691264:
	// lwz r11,44(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8268ff34
	if (ctx.cr6.lt) goto loc_8268FF34;
loc_82691274:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827257D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x827257E0;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r28,0(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r30,22248(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 22248);
	// bne cr6,0x82725808
	if (!ctx.cr6.eq) goto loc_82725808;
	// li r10,-256
	ctx.r10.s64 = -256;
	// b 0x82725818
	goto loc_82725818;
loc_82725808:
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_82725818:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82725870
	if (ctx.cr6.eq) goto loc_82725870;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82725870
	if (!ctx.cr6.gt) goto loc_82725870;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8272584c
	if (!ctx.cr6.eq) goto loc_8272584C;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82725858
	if (ctx.cr6.eq) goto loc_82725858;
loc_8272584C:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// stb r10,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82725858:
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// li r7,1
	ctx.r7.s64 = 1;
	// or r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
loc_82725870:
	// addi r31,r28,-1
	r31.s64 = r28.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// bge cr6,0x82725918
	if (!ctx.cr6.lt) goto loc_82725918;
	// subf r11,r7,r31
	ctx.r11.u64 = r31.u64 - ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8272589C:
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// and r27,r11,r10
	r27.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x827258f8
	if (!ctx.cr6.eq) goto loc_827258F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827258d4
	if (!ctx.cr6.eq) goto loc_827258D4;
	// rlwinm r27,r11,0,16,23
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r27,768
	ctx.cr6.compare<uint32_t>(r27.u32, 768, ctx.xer);
	// bne cr6,0x827258d4
	if (!ctx.cr6.eq) goto loc_827258D4;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82725908
	goto loc_82725908;
loc_827258D4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827258f8
	if (!ctx.cr6.eq) goto loc_827258F8;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x827258f8
	if (!ctx.cr6.eq) goto loc_827258F8;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r8,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r8.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82725908
	goto loc_82725908;
loc_827258F8:
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,1(r30)
	REX_STORE_U8(r30.u32 + 1, ctx.r11.u8);
	// stb r10,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_82725908:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// bdnz 0x8272589c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272589C;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
loc_82725918:
	// bne cr6,0x827259e0
	if (!ctx.cr6.eq) goto loc_827259E0;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// lbz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827259a8
	if (!ctx.cr6.eq) goto loc_827259A8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82725940
	if (ctx.cr6.eq) goto loc_82725940;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82725940:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82725a64
	if (!ctx.cr6.eq) goto loc_82725A64;
	// add. r31,r29,r28
	r31.u64 = r29.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x82725a64
	if (!ctx.cr0.gt) goto loc_82725A64;
	// add r11,r28,r4
	ctx.r11.u64 = r28.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
loc_82725964:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// bge cr6,0x82725978
	if (!ctx.cr6.lt) goto loc_82725978;
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82725a64
	if (!ctx.cr6.eq) goto loc_82725A64;
loc_82725978:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulhw r8,r9,r11
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blt cr6,0x82725964
	if (ctx.cr6.lt) goto loc_82725964;
	// b 0x82725a64
	goto loc_82725A64;
loc_827259A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bne cr6,0x827259d4
	if (!ctx.cr6.eq) goto loc_827259D4;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r9,2
	ctx.r9.s64 = 2;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	// b 0x82725a64
	goto loc_82725A64;
loc_827259D4:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82725a64
	goto loc_82725A64;
loc_827259E0:
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r28.s32, ctx.xer);
	// bne cr6,0x82725a64
	if (!ctx.cr6.eq) goto loc_82725A64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82725a58
	if (!ctx.cr6.eq) goto loc_82725A58;
	// add. r31,r29,r28
	r31.u64 = r29.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ble 0x82725a64
	if (!ctx.cr0.gt) goto loc_82725A64;
	// add r11,r28,r4
	ctx.r11.u64 = r28.u64 + ctx.r4.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
loc_82725A14:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// bge cr6,0x82725a28
	if (!ctx.cr6.lt) goto loc_82725A28;
	// lbz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82725a64
	if (!ctx.cr6.eq) goto loc_82725A64;
loc_82725A28:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulhw r8,r9,r11
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blt cr6,0x82725a14
	if (ctx.cr6.lt) goto loc_82725A14;
	// b 0x82725a64
	goto loc_82725A64;
loc_82725A58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82725A64:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,22248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22248);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// lwz r11,22248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22248);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8273D718) {
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
	// bl 0x826a1c80
	ctx.lr = 0x8273D720;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8273d8dc
	if (!ctx.cr6.eq) goto loc_8273D8DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lhz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// mulli r9,r5,3811
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(3811));
	// lhz r16,2(r3)
	r16.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 32);
	// lhz r4,6(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// lhz r31,48(r3)
	r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 48);
	// lhz r27,22(r3)
	r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 22);
	// lhz r30,8(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// lhz r29,64(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 64);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lhz r28,20(r3)
	r28.u64 = REX_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r25,34(r3)
	r25.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r24,50(r3)
	r24.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mulli r26,r5,487
	r26.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(487));
	// lhz r23,10(r3)
	r23.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// lhz r22,80(r3)
	r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 80);
	// lhz r21,12(r3)
	r21.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r20,96(r3)
	r20.u64 = REX_LOAD_U16(ctx.r3.u32 + 96);
	// lhz r19,26(r3)
	r19.u64 = REX_LOAD_U16(ctx.r3.u32 + 26);
	// lhz r18,82(r3)
	r18.u64 = REX_LOAD_U16(ctx.r3.u32 + 82);
	// lhz r17,14(r3)
	r17.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// lhz r15,112(r3)
	r15.u64 = REX_LOAD_U16(ctx.r3.u32 + 112);
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// lhz r14,24(r3)
	r14.u64 = REX_LOAD_U16(ctx.r3.u32 + 24);
	// add r9,r26,r11
	ctx.r9.u64 = r26.u64 + ctx.r11.u64;
	// subf r16,r10,r16
	r16.u64 = r16.u64 - ctx.r10.u64;
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mulli r26,r5,506
	r26.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(506));
	// sth r16,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, r16.u16);
	// stw r10,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// add r6,r26,r11
	ctx.r6.u64 = r26.u64 + ctx.r11.u64;
	// subf r26,r10,r8
	r26.u64 = ctx.r8.u64 - ctx.r10.u64;
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// mulli r9,r5,135
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(135));
	// sth r26,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// sth r7,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r7.u16);
	// srawi r10,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r4,r10,r31
	ctx.r4.u64 = r31.u64 - ctx.r10.u64;
	// srawi r10,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 16;
	// sth r6,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r6.u16);
	// mulli r7,r5,173
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(173));
	// sth r4,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r4.u16);
	// add r8,r27,r10
	ctx.r8.u64 = r27.u64 + ctx.r10.u64;
	// lwz r27,-160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// sth r8,22(r3)
	REX_STORE_U16(ctx.r3.u32 + 22, ctx.r8.u16);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r29,r28,r10
	r29.u64 = r28.u64 + ctx.r10.u64;
	// mulli r7,r5,61
	ctx.r7.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(61));
	// sth r27,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, r27.u16);
	// sth r29,20(r3)
	REX_STORE_U16(ctx.r3.u32 + 20, r29.u16);
	// lhz r29,18(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// subf r31,r10,r31
	r31.u64 = r31.u64 - ctx.r10.u64;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// add r4,r25,r10
	ctx.r4.u64 = r25.u64 + ctx.r10.u64;
	// sth r31,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, r31.u16);
	// add r28,r24,r10
	r28.u64 = r24.u64 + ctx.r10.u64;
	// sth r30,64(r3)
	REX_STORE_U16(ctx.r3.u32 + 64, r30.u16);
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// lhz r31,72(r3)
	r31.u64 = REX_LOAD_U16(ctx.r3.u32 + 72);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r30,66(r3)
	r30.u64 = REX_LOAD_U16(ctx.r3.u32 + 66);
	// mulli r27,r5,42
	r27.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(42));
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mulli r5,r5,1084
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1084));
	// subf r26,r10,r23
	r26.u64 = r23.u64 - ctx.r10.u64;
	// subf r25,r10,r22
	r25.u64 = r22.u64 - ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// add r7,r27,r7
	ctx.r7.u64 = r27.u64 + ctx.r7.u64;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r27,r19,r11
	r27.u64 = r19.u64 + ctx.r11.u64;
	// sth r4,34(r3)
	REX_STORE_U16(ctx.r3.u32 + 34, ctx.r4.u16);
	// add r23,r18,r11
	r23.u64 = r18.u64 + ctx.r11.u64;
	// sth r28,50(r3)
	REX_STORE_U16(ctx.r3.u32 + 50, r28.u16);
	// subf r22,r11,r21
	r22.u64 = r21.u64 - ctx.r11.u64;
	// sth r26,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, r26.u16);
	// subf r24,r11,r20
	r24.u64 = r20.u64 - ctx.r11.u64;
	// sth r25,80(r3)
	REX_STORE_U16(ctx.r3.u32 + 80, r25.u16);
	// srawi r11,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 16;
	// sth r22,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, r22.u16);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// sth r24,96(r3)
	REX_STORE_U16(ctx.r3.u32 + 96, r24.u16);
	// srawi r10,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 16;
	// sth r27,26(r3)
	REX_STORE_U16(ctx.r3.u32 + 26, r27.u16);
	// subf r5,r11,r17
	ctx.r5.u64 = r17.u64 - ctx.r11.u64;
	// sth r23,82(r3)
	REX_STORE_U16(ctx.r3.u32 + 82, r23.u16);
	// subf r31,r11,r15
	r31.u64 = r15.u64 - ctx.r11.u64;
	// add r6,r14,r11
	ctx.r6.u64 = r14.u64 + ctx.r11.u64;
	// sth r5,14(r3)
	REX_STORE_U16(ctx.r3.u32 + 14, ctx.r5.u16);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// sth r31,112(r3)
	REX_STORE_U16(ctx.r3.u32 + 112, r31.u16);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// sth r6,24(r3)
	REX_STORE_U16(ctx.r3.u32 + 24, ctx.r6.u16);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r7,72(r3)
	REX_STORE_U16(ctx.r3.u32 + 72, ctx.r7.u16);
	// sth r11,66(r3)
	REX_STORE_U16(ctx.r3.u32 + 66, ctx.r11.u16);
	// sth r10,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r10.u16);
	// b 0x826a1cd0
	return;
loc_8273D8DC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r4,0
	ctx.r4.s64 = 0;
	// and r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 & ctx.r10.u64;
	// ori r11,r4,32768
	ctx.r11.u64 = ctx.r4.u64 | 32768;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r6,r5,6269
	ctx.r6.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(6269));
	// lhzx r4,r9,r3
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// srawi r4,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 16;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// subf r7,r4,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r4.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u16);
	// mulli r4,r5,708
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(708));
	// li r7,5
	ctx.r7.s64 = 5;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// slw r4,r7,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lhzx r7,r10,r3
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// srawi r6,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 16;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// mulli r4,r5,172
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(172));
	// sthx r7,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u16);
	// li r6,7
	ctx.r6.s64 = 7;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// slw r10,r6,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// mulli r8,r5,73
	ctx.r8.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(73));
	// lhzx r6,r9,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r4,r4,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r4.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// sthx r4,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u16);
	// lhzx r6,r10,r3
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// subf r5,r11,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r11.u64;
	// sthx r5,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82749ED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82749EE0;
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
	// bgt cr6,0x8274a1f4
	if (ctx.cr6.gt) goto loc_8274A1F4;
	// lis r12,-32139
	ctx.r12.s64 = -2106261504;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-24804
	ctx.r12.s64 = ctx.r12.s64 + -24804;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82749F58;
	case 1:
		goto loc_82749F88;
	case 2:
		goto loc_82749FB0;
	case 3:
		goto loc_82749FD8;
	case 4:
		goto loc_8274A000;
	case 5:
		goto loc_8274A050;
	case 6:
		goto loc_8274A078;
	case 7:
		goto loc_8274A0A0;
	case 8:
		goto loc_8274A0A8;
	case 9:
		goto loc_8274A0F4;
	case 10:
		goto loc_8274A138;
	case 11:
		goto loc_8274A17C;
	case 12:
		goto loc_8274A184;
	case 13:
		goto loc_8274A1D0;
	case 14:
		goto loc_8274A1D8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82749F58:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x82749F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82749F88:
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x82749FA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82749FB0:
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x82749FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82749FD8:
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x82749FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A000:
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,15900(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A050:
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A078:
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A0A0:
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x8274a1dc
	goto loc_8274A1DC;
loc_8274A0A8:
	// lwz r11,15900(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A0C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,15900(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A0EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A0F4:
	// lwz r11,15900(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A138:
	// lwz r11,15900(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A17C:
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x8274a1dc
	goto loc_8274A1DC;
loc_8274A184:
	// lwz r11,15900(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A1A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,15900(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15900);
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
	ctx.lr = 0x8274A1C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8274A1D0:
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x8274a1dc
	goto loc_8274A1DC;
loc_8274A1D8:
	// li r6,16
	ctx.r6.s64 = 16;
loc_8274A1DC:
	// lwz r11,15900(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15900);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274A1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274A1F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8275BFA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8275BFB0;
	// li r11,4
	ctx.r11.s64 = 4;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r31,r6,r7
	r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
loc_8275BFD0:
	// lbzx r30,r31,r10
	r30.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r29,-2(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// lbz r28,1(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r27,0(r5)
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// or r30,r30,r29
	r30.u64 = r30.u64 | r29.u64;
	// rotlwi r29,r28,16
	r29.u64 = __builtin_rotateleft32(r28.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r27
	r29.u64 = r29.u64 | r27.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lbzx r29,r5,r8
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stwx r30,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, r30.u32);
	// lbz r30,-1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r29,3(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r28,2(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r27,-1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r29.u32);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r30.u32);
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,5(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// lbz r28,4(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lbz r27,0(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r29.u32);
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r30.u32);
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r29,7(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r28,6(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r27,1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r29.u32);
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lbz r29,6(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r11,7(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r11,r11,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | r30.u64;
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// bdnz 0x8275bfd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275BFD0;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82761E78) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x82761E80;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,136(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// lwz r11,1772(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,1776(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// mullw r7,r29,r31
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r23,r29,3,0,28
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r9,3,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82761ee8
	if (ctx.cr6.eq) goto loc_82761EE8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x82761f8c
	if (ctx.cr6.eq) goto loc_82761F8C;
	// lhzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// b 0x8276247c
	goto loc_8276247C;
loc_82761EE8:
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lhzx r28,r7,r8
	r28.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lhzx r6,r7,r11
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r9,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r26,r4,r8
	r26.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r8.u32);
	// lhzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r11.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// addi r6,r5,-16384
	ctx.r6.s64 = ctx.r5.s64 + -16384;
	// lhzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + ctx.r11.u32);
	// addi r21,r9,-16384
	r21.s64 = ctx.r9.s64 + -16384;
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lhzx r19,r7,r8
	r19.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhzx r27,r27,r8
	r27.u64 = REX_LOAD_U16(r27.u32 + ctx.r8.u32);
	// addi r8,r10,-16384
	ctx.r8.s64 = ctx.r10.s64 + -16384;
	// addi r7,r11,-16384
	ctx.r7.s64 = ctx.r11.s64 + -16384;
	// cntlzw r20,r6
	r20.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r8,r6,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r7,r4,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cntlzw r21,r21
	r21.u64 = r21.u32 == 0 ? 32 : __builtin_clz(r21.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r6,r21,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 27) & 0x1;
	// rlwinm r7,r20,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 27) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// extsh r4,r28
	ctx.r4.s64 = r28.s16;
	// add r28,r8,r7
	r28.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsh r6,r26
	ctx.r6.s64 = r26.s16;
	// extsh r7,r19
	ctx.r7.s64 = r19.s16;
	// extsh r8,r27
	ctx.r8.s64 = r27.s16;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// ble cr6,0x82762068
	if (!ctx.cr6.gt) goto loc_82762068;
loc_82761F8C:
	// mullw r10,r29,r25
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(r25.s32);
	// lwz r9,1780(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1780);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r7,1784(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1784);
	// sthx r11,r7,r8
	REX_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u16);
	// lwz r6,14804(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82762060
	if (!ctx.cr6.gt) goto loc_82762060;
	// lwz r9,284(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82762060
	if (!ctx.cr6.eq) goto loc_82762060;
	// lwz r9,3072(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3072);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r31,0
	r31.s64 = 0;
	// sthx r31,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r31.u16);
	// lwz r9,3072(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3072);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r31,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, r31.u16);
	// lwz r7,15504(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// blt cr6,0x82762060
	if (ctx.cr6.lt) goto loc_82762060;
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r7,15300(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 15300);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r24
	ctx.r5.u64 = ctx.r10.u64 + r24.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r8,15300(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15300);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r11,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// lwz r3,15300(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 15300);
	// sthx r11,r9,r3
	REX_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u16);
	// lwz r8,15300(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15300);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// lwz r7,15304(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 15304);
	// sthx r11,r10,r7
	REX_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwz r8,15304(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15304);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r11,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// lwz r5,15304(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 15304);
	// sthx r11,r9,r5
	REX_STORE_U16(ctx.r9.u32 + ctx.r5.u32, ctx.r11.u16);
	// lwz r10,15304(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15304);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
loc_82762060:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a1ce0
	return;
loc_82762068:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x82762240
	if (!ctx.cr6.eq) goto loc_82762240;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bne cr6,0x827620e4
	if (!ctx.cr6.eq) goto loc_827620E4;
	// subf r11,r5,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r3,r5,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r31,r4,r7
	r31.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r29,r6,r7
	r29.u64 = ctx.r7.u64 - ctx.r6.u64;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// subf r28,r4,r6
	r28.u64 = ctx.r6.u64 - ctx.r4.u64;
	// xor r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// xor r29,r29,r31
	r29.u64 = r29.u64 ^ r31.u64;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// xor r31,r28,r31
	r31.u64 = r28.u64 ^ r31.u64;
	// srawi r8,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r31.s32 >> 31;
	// or r29,r11,r8
	r29.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r28,r3,r31
	r28.u64 = ctx.r3.u64 | r31.u64;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 & ~r29.u64;
	// andc r10,r6,r28
	ctx.r10.u64 = ctx.r6.u64 & ~r28.u64;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r6,r31,r4
	ctx.r6.u64 = r31.u64 & ctx.r4.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r31,r7,r6
	r31.u64 = ctx.r7.u64 | ctx.r6.u64;
	// b 0x8276247c
	goto loc_8276247C;
loc_827620E4:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x82762158
	if (!ctx.cr6.eq) goto loc_82762158;
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r3,r5,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r31,r4,r8
	r31.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r29,r6,r8
	r29.u64 = ctx.r8.u64 - ctx.r6.u64;
	// xor r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// subf r28,r4,r6
	r28.u64 = ctx.r6.u64 - ctx.r4.u64;
	// xor r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r10.u64;
	// xor r29,r29,r31
	r29.u64 = r29.u64 ^ r31.u64;
	// srawi r10,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 31;
	// xor r31,r28,r31
	r31.u64 = r28.u64 ^ r31.u64;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r31.s32 >> 31;
	// or r29,r10,r7
	r29.u64 = ctx.r10.u64 | ctx.r7.u64;
	// or r28,r3,r31
	r28.u64 = ctx.r3.u64 | r31.u64;
	// and r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// andc r3,r9,r29
	ctx.r3.u64 = ctx.r9.u64 & ~r29.u64;
	// andc r10,r6,r28
	ctx.r10.u64 = ctx.r6.u64 & ~r28.u64;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 | ctx.r8.u64;
	// and r5,r31,r4
	ctx.r5.u64 = r31.u64 & ctx.r4.u64;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r31,r6,r5
	r31.u64 = ctx.r6.u64 | ctx.r5.u64;
	// b 0x8276247c
	goto loc_8276247C;
loc_82762158:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// bne cr6,0x827621cc
	if (!ctx.cr6.eq) goto loc_827621CC;
	// subf r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r3,r5,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r31,r4,r7
	r31.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r29,r8,r7
	r29.u64 = ctx.r7.u64 - ctx.r8.u64;
	// xor r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// subf r28,r4,r8
	r28.u64 = ctx.r8.u64 - ctx.r4.u64;
	// xor r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// xor r29,r29,r31
	r29.u64 = r29.u64 ^ r31.u64;
	// srawi r9,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 31;
	// xor r31,r28,r31
	r31.u64 = r28.u64 ^ r31.u64;
	// srawi r6,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r31.s32 >> 31;
	// or r29,r9,r6
	r29.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r28,r3,r31
	r28.u64 = ctx.r3.u64 | r31.u64;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// andc r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ~r29.u64;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// andc r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 & ~r28.u64;
	// and r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 & ctx.r5.u64;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r6,r31,r4
	ctx.r6.u64 = r31.u64 & ctx.r4.u64;
	// or r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r31,r7,r6
	r31.u64 = ctx.r7.u64 | ctx.r6.u64;
	// b 0x8276247c
	goto loc_8276247C;
loc_827621CC:
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// bne cr6,0x8276247c
	if (!ctx.cr6.eq) goto loc_8276247C;
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r4,r9,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r3,r11,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r31,r8,r7
	r31.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subf r29,r6,r7
	r29.u64 = ctx.r7.u64 - ctx.r6.u64;
	// xor r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// subf r28,r8,r6
	r28.u64 = ctx.r6.u64 - ctx.r8.u64;
	// xor r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// xor r29,r29,r31
	r29.u64 = r29.u64 ^ r31.u64;
	// srawi r5,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 31;
	// xor r31,r28,r31
	r31.u64 = r28.u64 ^ r31.u64;
	// srawi r4,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 31;
	// srawi r3,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r29.s32 >> 31;
	// srawi r31,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r31.s32 >> 31;
	// or r29,r5,r4
	r29.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r28,r3,r31
	r28.u64 = ctx.r3.u64 | r31.u64;
	// and r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 & ctx.r11.u64;
	// andc r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 & ~r29.u64;
	// and r8,r31,r8
	ctx.r8.u64 = r31.u64 & ctx.r8.u64;
	// andc r11,r6,r28
	ctx.r11.u64 = ctx.r6.u64 & ~r28.u64;
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// or r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r31,r4,r7
	r31.u64 = ctx.r4.u64 | ctx.r7.u64;
	// b 0x8276247c
	goto loc_8276247C;
loc_82762240:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x827622a4
	if (!ctx.cr6.eq) goto loc_827622A4;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82762260
	if (ctx.cr6.eq) goto loc_82762260;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
loc_82762260:
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x82762270
	if (ctx.cr6.eq) goto loc_82762270;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r31,r7,r31
	r31.u64 = ctx.r7.u64 + r31.u64;
loc_82762270:
	// cmpwi cr6,r9,16384
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16384, ctx.xer);
	// beq cr6,0x82762280
	if (ctx.cr6.eq) goto loc_82762280;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r6,r31
	r31.u64 = ctx.r6.u64 + r31.u64;
loc_82762280:
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// beq cr6,0x82762290
	if (ctx.cr6.eq) goto loc_82762290;
	// add r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r31,r4,r31
	r31.u64 = ctx.r4.u64 + r31.u64;
loc_82762290:
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r10,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r10.s64 = r31.s32 >> 1;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// b 0x8276247c
	goto loc_8276247C;
loc_827622A4:
	// subf r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r29,r9,r11
	r29.u64 = ctx.r11.u64 - ctx.r9.u64;
	// subf r28,r10,r11
	r28.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r3,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 31;
	// subf r27,r9,r10
	r27.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r31,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	r31.s64 = r31.s32 >> 31;
	// subf r26,r11,r9
	r26.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r29,r29,31
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = r29.s32 >> 31;
	// srawi r28,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	r28.s64 = r28.s32 >> 31;
	// srawi r27,r27,31
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFFFFF) != 0);
	r27.s64 = r27.s32 >> 31;
	// srawi r26,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	r26.s64 = r26.s32 >> 31;
	// not r21,r31
	r21.u64 = ~r31.u64;
	// not r26,r26
	r26.u64 = ~r26.u64;
	// not r20,r3
	r20.u64 = ~ctx.r3.u64;
	// not r28,r28
	r28.u64 = ~r28.u64;
	// not r29,r29
	r29.u64 = ~r29.u64;
	// not r27,r27
	r27.u64 = ~r27.u64;
	// and r19,r20,r26
	r19.u64 = r20.u64 & r26.u64;
	// and r18,r28,r21
	r18.u64 = r28.u64 & r21.u64;
	// and r20,r27,r20
	r20.u64 = r27.u64 & r20.u64;
	// and r28,r28,r29
	r28.u64 = r28.u64 & r29.u64;
	// and r18,r18,r10
	r18.u64 = r18.u64 & ctx.r10.u64;
	// and r19,r19,r11
	r19.u64 = r19.u64 & ctx.r11.u64;
	// and r27,r27,r29
	r27.u64 = r27.u64 & r29.u64;
	// and r20,r20,r10
	r20.u64 = r20.u64 & ctx.r10.u64;
	// and r26,r26,r21
	r26.u64 = r26.u64 & r21.u64;
	// and r28,r28,r11
	r28.u64 = r28.u64 & ctx.r11.u64;
	// and r27,r27,r9
	r27.u64 = r27.u64 & ctx.r9.u64;
	// or r19,r19,r18
	r19.u64 = r19.u64 | r18.u64;
	// and r26,r26,r9
	r26.u64 = r26.u64 & ctx.r9.u64;
	// or r28,r20,r28
	r28.u64 = r20.u64 | r28.u64;
	// or r27,r19,r27
	r27.u64 = r19.u64 | r27.u64;
	// or r28,r28,r26
	r28.u64 = r28.u64 | r26.u64;
	// subf r26,r27,r5
	r26.u64 = ctx.r5.u64 - r27.u64;
	// subf r20,r5,r28
	r20.u64 = r28.u64 - ctx.r5.u64;
	// xor r21,r3,r21
	r21.u64 = ctx.r3.u64 ^ r21.u64;
	// xor r19,r3,r29
	r19.u64 = ctx.r3.u64 ^ r29.u64;
	// subf r18,r28,r27
	r18.u64 = r27.u64 - r28.u64;
	// srawi r3,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = r26.s32 >> 31;
	// srawi r26,r20,31
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7FFFFFFF) != 0);
	r26.s64 = r20.s32 >> 31;
	// srawi r20,r18,31
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x7FFFFFFF) != 0);
	r20.s64 = r18.s32 >> 31;
	// eqv r26,r26,r3
	r26.u64 = ~(r26.u64 ^ ctx.r3.u64);
	// eqv r3,r20,r3
	ctx.r3.u64 = ~(r20.u64 ^ ctx.r3.u64);
	// and r10,r21,r10
	ctx.r10.u64 = r21.u64 & ctx.r10.u64;
	// or r21,r26,r3
	r21.u64 = r26.u64 | ctx.r3.u64;
	// xor r31,r31,r29
	r31.u64 = r31.u64 ^ r29.u64;
	// and r11,r19,r11
	ctx.r11.u64 = r19.u64 & ctx.r11.u64;
	// andc r29,r28,r21
	r29.u64 = r28.u64 & ~r21.u64;
	// and r3,r27,r3
	ctx.r3.u64 = r27.u64 & ctx.r3.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r9,r31,r9
	ctx.r9.u64 = r31.u64 & ctx.r9.u64;
	// and r5,r26,r5
	ctx.r5.u64 = r26.u64 & ctx.r5.u64;
	// or r10,r29,r3
	ctx.r10.u64 = r29.u64 | ctx.r3.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// subf r31,r6,r8
	r31.u64 = ctx.r8.u64 - ctx.r6.u64;
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r31.s32 >> 31;
	// not r29,r10
	r29.u64 = ~ctx.r10.u64;
	// not r28,r9
	r28.u64 = ~ctx.r9.u64;
	// xor r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 ^ r29.u64;
	// xor r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 ^ r28.u64;
	// xor r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 ^ r28.u64;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// and r5,r5,r8
	ctx.r5.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subf r31,r7,r8
	r31.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subf r27,r6,r7
	r27.u64 = ctx.r7.u64 - ctx.r6.u64;
	// or r21,r9,r5
	r21.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r20,r10,r6
	r20.u64 = ctx.r10.u64 & ctx.r6.u64;
	// subf r26,r8,r6
	r26.u64 = ctx.r6.u64 - ctx.r8.u64;
	// srawi r10,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r31.s32 >> 31;
	// srawi r9,r27,31
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r27.s32 >> 31;
	// srawi r5,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = r26.s32 >> 31;
	// or r31,r21,r20
	r31.u64 = r21.u64 | r20.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// not r5,r5
	ctx.r5.u64 = ~ctx.r5.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// and r27,r11,r5
	r27.u64 = ctx.r11.u64 & ctx.r5.u64;
	// and r26,r10,r29
	r26.u64 = ctx.r10.u64 & r29.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	// and r26,r26,r7
	r26.u64 = r26.u64 & ctx.r7.u64;
	// and r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ctx.r7.u64;
	// and r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 & ctx.r8.u64;
	// and r27,r27,r8
	r27.u64 = r27.u64 & ctx.r8.u64;
	// and r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & r28.u64;
	// and r10,r5,r29
	ctx.r10.u64 = ctx.r5.u64 & r29.u64;
	// and r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 & ctx.r6.u64;
	// or r8,r27,r26
	ctx.r8.u64 = r27.u64 | r26.u64;
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// or r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subf r7,r9,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r6,r4,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r5,r8,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// srawi r10,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// srawi r7,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 31;
	// eqv r6,r10,r11
	ctx.r6.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// and r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 & ctx.r4.u64;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// and r10,r9,r5
	ctx.r10.u64 = ctx.r9.u64 & ctx.r5.u64;
	// andc r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 | ctx.r4.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r31,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r31.s64 = temp.s64;
loc_8276247C:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r10,14804(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// mullw r11,r25,r11
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(ctx.r11.s32);
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + r24.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82762530
	if (!ctx.cr6.gt) goto loc_82762530;
	// lwz r11,15504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82762518
	if (!ctx.cr6.eq) goto loc_82762518;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// rlwinm r10,r24,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r25,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r10.s64 = r31.s32 >> 2;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x827624d8
	if (!ctx.cr6.lt) goto loc_827624D8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r3
	ctx.r7.u64 = ctx.r3.u64 - ctx.r9.u64;
	// b 0x827624ec
	goto loc_827624EC;
loc_827624D8:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// ble cr6,0x827624ec
	if (!ctx.cr6.gt) goto loc_827624EC;
	// subf r11,r11,r23
	ctx.r11.u64 = r23.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_827624EC:
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x82762504
	if (!ctx.cr6.lt) goto loc_82762504;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r31
	ctx.r8.u64 = r31.u64 - ctx.r10.u64;
	// b 0x82762518
	goto loc_82762518;
loc_82762504:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// ble cr6,0x82762518
	if (!ctx.cr6.gt) goto loc_82762518;
	// subf r11,r10,r22
	ctx.r11.u64 = r22.u64 - ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
loc_82762518:
	// lwz r10,3072(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3072);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r7,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u16);
	// lwz r10,3072(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3072);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,2(r7)
	REX_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
loc_82762530:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,1792(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1792);
	// rlwinm r9,r3,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xC;
	// addi r8,r11,-28152
	ctx.r8.s64 = ctx.r11.s64 + -28152;
	// rlwinm r7,r31,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r10,r7,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// srawi r9,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x827625a4
	if (ctx.cr6.eq) goto loc_827625A4;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82762584
	if (ctx.cr6.eq) goto loc_82762584;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82762580
	if (!ctx.cr6.gt) goto loc_82762580;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82762584
	goto loc_82762584;
loc_82762580:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82762584:
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827625a4
	if (ctx.cr6.eq) goto loc_827625A4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827625a0
	if (!ctx.cr6.gt) goto loc_827625A0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x827625a4
	goto loc_827625A4;
loc_827625A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_827625A4:
	// lwz r11,15504(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82762620
	if (!ctx.cr6.eq) goto loc_82762620;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r8,r24,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r25,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// bge cr6,0x827625e0
	if (!ctx.cr6.lt) goto loc_827625E0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// b 0x827625f4
	goto loc_827625F4;
loc_827625E0:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// ble cr6,0x827625f4
	if (!ctx.cr6.gt) goto loc_827625F4;
	// subf r11,r11,r23
	ctx.r11.u64 = r23.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_827625F4:
	// cmpwi cr6,r8,-8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -8, ctx.xer);
	// bge cr6,0x8276260c
	if (!ctx.cr6.lt) goto loc_8276260C;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// b 0x82762620
	goto loc_82762620;
loc_8276260C:
	// cmpw cr6,r8,r22
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r22.s32, ctx.xer);
	// ble cr6,0x82762620
	if (!ctx.cr6.gt) goto loc_82762620;
	// subf r11,r8,r22
	ctx.r11.u64 = r22.u64 - ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82762620:
	// lwz r11,1780(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1780);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r9,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// lwz r5,1784(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1784);
	// sthx r10,r5,r8
	REX_STORE_U16(ctx.r5.u32 + ctx.r8.u32, ctx.r10.u16);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_827939E8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100df
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793B68) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100dc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793D08) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010089
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793EC8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201005f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827940D8) {
	REX_FUNC_PROLOGUE();
	// .long 0x200000f
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827942E8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201007a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8279AAA0) {
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
	ctx.lr = 0x8279AAA8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r29,50(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r24,0(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r31,348(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// srawi r26,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r26.s64 = r29.s32 >> 1;
	// beq cr6,0x8279aaec
	if (ctx.cr6.eq) goto loc_8279AAEC;
	// lwz r11,1304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1304);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r28
	r25.u64 = r28.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8279aaf0
	if (ctx.cr6.eq) goto loc_8279AAF0;
loc_8279AAEC:
	// li r25,1
	r25.s64 = 1;
loc_8279AAF0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8279ab08
	if (ctx.cr6.eq) goto loc_8279AB08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,336(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 336);
	// bl 0x8279a080
	ctx.lr = 0x8279AB08;
	sub_8279A080(ctx, base);
loc_8279AB08:
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// beq cr6,0x8279abb8
	if (ctx.cr6.eq) goto loc_8279ABB8;
	// lwz r10,-24(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + -24);
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279abb8
	if (ctx.cr6.eq) goto loc_8279ABB8;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279ab50
	if (!ctx.cr6.lt) goto loc_8279AB50;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8279abac
	goto loc_8279ABAC;
loc_8279AB50:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lhz r8,86(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r5,90(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// sth r5,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_8279ABAC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8279ABB8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8279ad34
	if (!ctx.cr6.eq) goto loc_8279AD34;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r29,r24
	ctx.r11.u64 = r24.u64 - r29.u64;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r9,r27
	ctx.r6.u64 = r27.u64 - ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8279ac70
	if (ctx.cr6.eq) goto loc_8279AC70;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279ac00
	if (!ctx.cr6.lt) goto loc_8279AC00;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x8279ac5c
	goto loc_8279AC5C;
loc_8279AC00:
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r4,r8,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r4,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lhz r9,90(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// lhz r7,86(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// sth r7,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// sth r4,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
loc_8279AC5C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_8279AC70:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// beq cr6,0x8279ad34
	if (ctx.cr6.eq) goto loc_8279AD34;
	// addi r10,r26,-1
	ctx.r10.s64 = r26.s64 + -1;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8279ac90
	if (ctx.cr6.eq) goto loc_8279AC90;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// b 0x8279ac98
	goto loc_8279AC98;
loc_8279AC90:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r6,-24
	ctx.r10.s64 = ctx.r6.s64 + -24;
loc_8279AC98:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r10,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8279ad34
	if (ctx.cr6.eq) goto loc_8279AD34;
	// rlwinm r10,r10,0,21,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bge cr6,0x8279acc4
	if (!ctx.cr6.lt) goto loc_8279ACC4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8279ad20
	goto loc_8279AD20;
loc_8279ACC4:
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lhz r11,90(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 90);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r4,86(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_8279AD20:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_8279AD34:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// blt cr6,0x8279ade0
	if (ctx.cr6.lt) goto loc_8279ADE0;
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// lhz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r27,r11
	r27.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// subf r11,r28,r5
	ctx.r11.u64 = ctx.r5.u64 - r28.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r9,r28,r7
	ctx.r9.u64 = ctx.r7.u64 - r28.u64;
	// subf r8,r27,r4
	ctx.r8.u64 = ctx.r4.u64 - r27.u64;
	// subf r26,r6,r4
	r26.u64 = ctx.r4.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r25,r27,r6
	r25.u64 = ctx.r6.u64 - r27.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r26,r26,r8
	r26.u64 = r26.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r25,r8
	ctx.r8.u64 = r25.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r26.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r25,r9,r8
	r25.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	// andc r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 & ~r26.u64;
	// and r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	// andc r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ~r25.u64;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// or r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x8279ae00
	goto loc_8279AE00;
loc_8279ADE0:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
loc_8279AE00:
	// lhz r6,62(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 62);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lhz r5,64(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 64);
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// lhz r4,68(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 68);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r6,66(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 66);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 + ctx.r3.u64;
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// and r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 & ctx.r4.u64;
	// and r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add r6,r24,r29
	ctx.r6.u64 = r24.u64 + r29.u64;
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r4,r10,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r5,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r4,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r4.u16);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_827B61D8) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x827B61E0;
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
	// vaddshs v3,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
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
	// bne cr6,0x827b6394
	if (!ctx.cr6.eq) goto loc_827B6394;
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
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v62,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v63,v61,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v58,v59,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6568
	if (!ctx.cr6.gt) goto loc_827B6568;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827B62AC:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v2,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vor v10,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vor v1,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v4,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v30,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
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
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v5,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v28,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v30,v4
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vmrglb v23,v0,v5
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v29,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v28
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
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
	// vor v4,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vslh v31,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v30,v20,v21
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vslh v15,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v29,v18,v19
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v28,v16,v17
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v31,v22,v31
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vslh v25,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v2,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsubshs v21,v1,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v20,v28,v29
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v19,v0,v25
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v0,v24
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v17,v22,v3
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v16,v20,v3
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v2,v17,v15
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v1,v16,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsrah v31,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v1,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827b62ac
	if (ctx.cr6.lt) goto loc_827B62AC;
	// b 0x827b6568
	goto loc_827B6568;
loc_827B6394:
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
	// lvrx128 v53,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v1,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v4,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v2,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v1,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b6568
	if (!ctx.cr6.gt) goto loc_827B6568;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_827B6418:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v30,v6,v6
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v29,v5,v5
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// vor v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v28,v4,v4
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v43,v63,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v42,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v15,v24,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrglb v19,v0,v1
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v31
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v1,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v22,v23
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
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
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v5,v7
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vmrghb v2,v0,v20
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v31,v19,v19
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vslh v22,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v19,v15,v16
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v18,v25,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v16,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v30,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vadduhm v22,v19,v20
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v24,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v14,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
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
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v21,v29,v21
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v14,v0,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v30,v22,v3
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v29,v20,v3
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v25,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v23,v15
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v18,v21,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v16,v28,v24
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v17,v0,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v15,v20,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v14,v30,v19
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v30,v29,v18
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v29,v16,v17
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v28,v15,v3
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v28,v29
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// stvx128 v25,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v23,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x827b6418
	if (ctx.cr6.lt) goto loc_827B6418;
loc_827B6568:
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
	// bne cr6,0x827b6618
	if (!ctx.cr6.eq) goto loc_827B6618;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b6700
	if (!ctx.cr6.gt) goto loc_827B6700;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_827B659C:
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v10,v41,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 14));
	// vsldoi128 v8,v10,v41,4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 12));
	// vsldoi128 v10,v10,v41,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), 10));
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
	// vpkshus128 v40,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor v5,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// stvewx128 v40,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b659c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B659C;
	// b 0x827b6700
	goto loc_827B6700;
loc_827B6618:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b6700
	if (!ctx.cr6.gt) goto loc_827B6700;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_827B6630:
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
	// lvx128 v39,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// vsldoi128 v6,v10,v39,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 14));
	// vsubshs v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsldoi v4,v9,v10,4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 12));
	// vsldoi128 v3,v10,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
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
	// vsldoi128 v10,v10,v39,6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 10));
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
	// vor128 v38,v5,v16
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v16.u8)));
	// vpkshus128 v37,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vor128 v5,v38,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// stvx128 v37,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b6630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B6630;
loc_827B6700:
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
	// b 0x826a1d08
	return;
}

