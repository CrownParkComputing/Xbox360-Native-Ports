#include "hydrothunder_funcs.38.h"

DEFINE_REX_FUNC(sub_82121F40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126990) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821271B8) {
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
	ctx.lr = 0x821271C0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82122730
	ctx.lr = 0x821271D8;
	sub_82122730(ctx, base);
	// addi r28,r31,52
	r28.s64 = r31.s64 + 52;
	// lwz r31,56(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8212720c
	goto loc_8212720C;
loc_821271E8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821271F4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82127204
	if (!ctx.cr0.lt) goto loc_82127204;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8212720c
	goto loc_8212720C;
loc_82127204:
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8212720C:
	// lbz r11,61(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 61);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821271e8
	if (ctx.cr0.eq) goto loc_821271E8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82127238
	if (ctx.cr6.eq) goto loc_82127238;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x82127230;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821272a4
	if (!ctx.cr0.lt) goto loc_821272A4;
loc_82127238:
	// li r30,0
	r30.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// bl 0x82120d70
	ctx.lr = 0x82127258;
	sub_82120D70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x8212ab28
	ctx.lr = 0x82127264;
	sub_8212AB28(ctx, base);
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8212b028
	ctx.lr = 0x8212727C;
	sub_8212B028(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82122800
	ctx.lr = 0x8212728C;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8212729C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122800
	ctx.lr = 0x821272A4;
	sub_82122800(ctx, base);
loc_821272A4:
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8212F0A8) {
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
	ctx.lr = 0x8212F0B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r3,120
	r28.s64 = ctx.r3.s64 + 120;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r31,r10,r3
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8212f128
	if (!ctx.cr6.gt) goto loc_8212F128;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(r29.s32, r31.s32, ctx.xer);
	// bgt cr6,0x8212f0f0
	if (ctx.cr6.gt) goto loc_8212F0F0;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8212F0F0:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8212f128
	if (!ctx.cr6.gt) goto loc_8212F128;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269d1d0
	ctx.lr = 0x8212F104;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x8212F118;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212F120;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
loc_8212F128:
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r27,r30,132
	r27.s64 = r30.s64 + 132;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8212fcf0
	ctx.lr = 0x8212F13C;
	sub_8212FCF0(ctx, base);
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// ble cr6,0x8212f170
	if (!ctx.cr6.gt) goto loc_8212F170;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_8212F164:
	// ldu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8212f164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212F164;
loc_8212F170:
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212f1a0
	if (!ctx.cr6.gt) goto loc_8212F1A0;
loc_8212F180:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8228ca78
	ctx.lr = 0x8212F18C;
	sub_8228CA78(ctx, base);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,136(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 136);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212f180
	if (ctx.cr6.lt) goto loc_8212F180;
loc_8212F1A0:
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,-2544
	ctx.r11.s64 = ctx.r11.s64 + -2544;
	// addis r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 262144;
	// bl 0x82170c28
	ctx.lr = 0x8212F1BC;
	sub_82170C28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82138E88) {
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
	ctx.lr = 0x82138E90;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// addi r6,r3,144
	ctx.r6.s64 = ctx.r3.s64 + 144;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821734b8
	ctx.lr = 0x82138EB8;
	sub_821734B8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r24,r11,6092
	r24.s64 = ctx.r11.s64 + 6092;
	// lwz r3,6092(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6092);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// bctrl 
	ctx.lr = 0x82138EE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
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
	ctx.lr = 0x82138F00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// addi r10,r11,-2544
	ctx.r10.s64 = ctx.r11.s64 + -2544;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// ori r6,r9,4
	ctx.r6.u64 = ctx.r9.u64 | 4;
	// addi r4,r11,16592
	ctx.r4.s64 = ctx.r11.s64 + 16592;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lfs f13,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r28,r11,12
	r28.u64 = ctx.r11.u64 | 12;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// lfs f9,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// ori r29,r9,8
	r29.u64 = ctx.r9.u64 | 8;
	// ori r27,r8,16
	r27.u64 = ctx.r8.u64 | 16;
	// ori r26,r5,20
	r26.u64 = ctx.r5.u64 | 20;
	// addis r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 262144;
	// li r23,0
	r23.s64 = 0;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r30,r31,136
	r30.s64 = r31.s64 + 136;
	// lwz r25,136(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stfsx f13,r10,r7
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, temp.u32);
	// stfsx f13,r10,r6
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r7,r8,r25
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r25.s32);
	// addi r22,r11,-2
	r22.s64 = ctx.r11.s64 + -2;
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// addi r6,r7,2
	ctx.r6.s64 = ctx.r7.s64 + 2;
	// addi r8,r31,132
	ctx.r8.s64 = r31.s64 + 132;
	// li r5,1
	ctx.r5.s64 = 1;
	// mullw r7,r22,r25
	ctx.r7.s64 = int64_t(r22.s32) * int64_t(r25.s32);
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + r29.u32, temp.u32);
	// stfsx f13,r10,r28
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + r28.u32, temp.u32);
	// stfsx f13,r10,r27
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + r27.u32, temp.u32);
	// stfsx f9,r10,r26
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + r26.u32, temp.u32);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82139148
	if (!ctx.cr6.gt) goto loc_82139148;
	// lis r29,-32243
	r29.s64 = -2113077248;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r28,-32243
	r28.s64 = -2113077248;
	// lfs f8,288(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// addi r29,r29,-27152
	r29.s64 = r29.s64 + -27152;
	// lfs f7,180(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// addi r28,r28,-27136
	r28.s64 = r28.s64 + -27136;
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lvx128 v60,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82138FD4:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// extsw r29,r5
	r29.s64 = ctx.r5.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r29,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r29.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r9,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f10,120(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,100
	r27.s64 = ctx.r1.s64 + 100;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lvx128 v63,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v62,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// fcfid f12,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(ctx.f10.s64);
	// vmsum4fp128 v59,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// frsp f12,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stvewx128 v59,r0,r28
	ea = (r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// fdivs f10,f7,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// stvewx128 v63,r0,r27
	ea = (r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// ble cr6,0x82139138
	if (!ctx.cr6.gt) goto loc_82139138;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
loc_82139074:
	// fmuls f6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f5,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r25,r1,128
	r25.s64 = ctx.r1.s64 + 128;
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r29,r1,176
	r29.s64 = ctx.r1.s64 + 176;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f4,140(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v63,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v62,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// fmuls f6,f6,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f6,156(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// vmulfp128 v62,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmsum4fp128 v59,v62,v60
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// stvx128 v62,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v62,v63,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvx128 v63,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f4,192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f4,f5,f4
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// blt cr6,0x82139074
	if (ctx.cr6.lt) goto loc_82139074;
loc_82139138:
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82138fd4
	if (ctx.cr6.lt) goto loc_82138FD4;
loc_82139148:
	// stfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addis r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 262144;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// mulli r31,r6,24
	r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(24));
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lfs f12,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// add r8,r31,r9
	ctx.r8.u64 = r31.u64 + ctx.r9.u64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addic. r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// ble 0x821391c4
	if (!ctx.cr0.gt) goto loc_821391C4;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82139194:
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r23,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r23.u16);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r29,r9,-2
	r29.s64 = ctx.r9.s64 + -2;
	// sthu r31,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r31.u16);
	ctx.r11.u32 = ea;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r29,r4
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82139194
	if (ctx.cr6.lt) goto loc_82139194;
loc_821391C4:
	// sth r23,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r23.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r23
	r31.u64 = r23.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r9,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r9.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821392dc
	if (!ctx.cr0.gt) goto loc_821392DC;
loc_821391EC:
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mullw r4,r29,r31
	ctx.r4.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// clrlwi r29,r4,16
	r29.u64 = ctx.r4.u32 & 0xFFFF;
	// ble 0x82139274
	if (!ctx.cr0.gt) goto loc_82139274;
	// clrlwi r4,r29,16
	ctx.r4.u64 = r29.u32 & 0xFFFF;
loc_8213920C:
	// add r28,r4,r9
	r28.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r26,r4,r9
	r26.u64 = ctx.r4.u64 + ctx.r9.u64;
	// sth r28,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r28.u16);
	// add r27,r4,r9
	r27.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r28,r26,1
	r28.s64 = r26.s64 + 1;
	// add r25,r4,r9
	r25.u64 = ctx.r4.u64 + ctx.r9.u64;
	// clrlwi r22,r28,16
	r22.u64 = r28.u32 & 0xFFFF;
	// add r26,r4,r9
	r26.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r28,r27,r28
	r28.u64 = r27.u64 + r28.u64;
	// sthu r28,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r11.u32 = ea;
	// sthu r22,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r22.u16);
	ctx.r11.u32 = ea;
	// sthu r22,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r22.u16);
	ctx.r11.u32 = ea;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r28,r25,r28
	r28.u64 = r25.u64 + r28.u64;
	// sthu r28,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r11.u32 = ea;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r28,r26,r28
	r28.u64 = r26.u64 + r28.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// sthu r28,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r28.u16);
	ctx.r11.u32 = ea;
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// blt cr6,0x8213920c
	if (ctx.cr6.lt) goto loc_8213920C;
loc_82139274:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// sthu r29,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r29.u16);
	ctx.r11.u32 = ea;
	// sthu r29,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r29.u16);
	ctx.r11.u32 = ea;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// sthu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r11.u32 = ea;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821391ec
	if (ctx.cr6.lt) goto loc_821391EC;
loc_821392DC:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addic. r31,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	r31.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ori r9,r3,65534
	ctx.r9.u64 = ctx.r3.u64 | 65534;
	// ble 0x82139330
	if (!ctx.cr0.gt) goto loc_82139330;
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// clrlwi r31,r3,16
	r31.u64 = ctx.r3.u32 & 0xFFFF;
loc_821392FC:
	// subf r3,r4,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r4.u64;
	// sth r31,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r31.u16);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r29,r3,r9
	r29.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// sthu r29,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r29.u16);
	ctx.r11.u32 = ea;
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
	// sthu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r11.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821392fc
	if (ctx.cr6.lt) goto loc_821392FC;
loc_82139330:
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// sth r4,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// add r29,r6,r9
	r29.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r30,r30,r6
	r30.u64 = ctx.r6.u64 - r30.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// sthu r31,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, r31.u16);
	ctx.r11.u32 = ea;
	// addis r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 262144;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// sth r29,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, r29.u16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82169620) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216964C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_8216A8A8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8269fe78
	ctx.lr = 0x8216A8C0;
	sub_8269FE78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8216a8e0
	if (!ctx.cr0.eq) goto loc_8216A8E0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// addi r3,r10,23984
	ctx.r3.s64 = ctx.r10.s64 + 23984;
	// li r5,19
	ctx.r5.s64 = 19;
	// bl 0x821231d0
	ctx.lr = 0x8216A8E0;
	sub_821231D0(ctx, base);
loc_8216A8E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CD30) {
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
	ctx.lr = 0x8216CD38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r28,1
	r29.s64 = r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216cda4
	if (!ctx.cr6.gt) goto loc_8216CDA4;
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
	// bgt cr6,0x8216cd70
	if (ctx.cr6.gt) goto loc_8216CD70;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8216CD70:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216cda4
	if (!ctx.cr6.gt) goto loc_8216CDA4;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,304
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(304));
	// bl 0x8269d1d0
	ctx.lr = 0x8216CD84;
	sub_8269D1D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r5,r28,304
	ctx.r5.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(304));
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8216CD94;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216CD9C;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8216CDA4:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216cdc8
	ctx.lr = 0x8216CDB4;
	sub_8216CDC8(ctx, base);
	// li r5,304
	ctx.r5.s64 = 304;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8216CDC0;
	sub_826A1E70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821716F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821716F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217171C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82171730
	if (!ctx.cr0.eq) goto loc_82171730;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82171728:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82171730:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8217177c
	if (!ctx.cr0.eq) goto loc_8217177C;
	// li r29,0
	r29.s64 = 0;
loc_8217175C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171774;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82171728
	goto loc_82171728;
loc_8217177C:
	// li r29,1
	r29.s64 = 1;
	// b 0x8217175c
	goto loc_8217175C;
}

DEFINE_REX_FUNC(sub_82176D98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82176DA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r10,28120
	ctx.r9.s64 = ctx.r10.s64 + 28120;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r29,-1
	r29.s64 = -1;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// stw r4,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r7,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824d1c88
	ctx.lr = 0x82176E0C;
	sub_824D1C88(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r6,1028
	ctx.r6.s64 = 1028;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823ed608
	ctx.lr = 0x82176E20;
	sub_823ED608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x824d1dd0
	ctx.lr = 0x82176E34;
	sub_824D1DD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8217A5E8) {
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
	// bl 0x8217a638
	ctx.lr = 0x8217A608;
	sub_8217A638(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217a618
	if (ctx.cr0.eq) goto loc_8217A618;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8217A618;
	sub_8269CE98(ctx, base);
loc_8217A618:
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

DEFINE_REX_FUNC(sub_8217B648) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8217B650;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8217B68C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217b6c8
	if (ctx.cr0.eq) goto loc_8217B6C8;
	// lwz r29,24(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 24);
	// b 0x8217b6c0
	goto loc_8217B6C0;
loc_8217B69C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217B6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217b6c8
	if (ctx.cr0.eq) goto loc_8217B6C8;
	// lwz r29,40(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 40);
loc_8217B6C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8217b69c
	if (!ctx.cr6.eq) goto loc_8217B69C;
loc_8217B6C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217B6E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82180990) {
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
	ctx.lr = 0x82180998;
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
	// b 0x821809d4
	goto loc_821809D4;
loc_821809B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821809BC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821809cc
	if (!ctx.cr0.lt) goto loc_821809CC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821809d4
	goto loc_821809D4;
loc_821809CC:
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821809D4:
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821809b0
	if (ctx.cr0.eq) goto loc_821809B0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82180a04
	if (ctx.cr6.eq) goto loc_82180A04;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x821809FC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82180a8c
	if (!ctx.cr0.lt) goto loc_82180A8C;
loc_82180A04:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120d70
	ctx.lr = 0x82180A10;
	sub_82120D70(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// stb r29,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, r29.u8);
	// bl 0x822f6280
	ctx.lr = 0x82180A20;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82180a98
	if (ctx.cr0.eq) goto loc_82180A98;
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
	// beq 0x82180a64
	if (ctx.cr0.eq) goto loc_82180A64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120d70
	ctx.lr = 0x82180A5C;
	sub_82120D70(ctx, base);
	// lbz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 124);
	// stb r11,28(r28)
	REX_STORE_U8(r28.u32 + 28, ctx.r11.u8);
loc_82180A64:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82180eb0
	ctx.lr = 0x82180A78;
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
	ctx.lr = 0x82180A8C;
	sub_82120AC0(ctx, base);
loc_82180A8C:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
loc_82180A98:
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
	ctx.lr = 0x82180AB0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8218B690) {
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
	ctx.lr = 0x8218B698;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addi r27,r11,8
	r27.s64 = ctx.r11.s64 + 8;
	// add r24,r10,r3
	r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8218b7bc
	if (!ctx.cr6.gt) goto loc_8218B7BC;
	// li r25,0
	r25.s64 = 0;
loc_8218B6D8:
	// lwz r11,100(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 100);
	// lwz r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 104);
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218b794
	if (!ctx.cr6.eq) goto loc_8218B794;
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmadds f2,f10,f12,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmsubs f1,f10,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x8218aa80
	ctx.lr = 0x8218B71C;
	sub_8218AA80(ctx, base);
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 12);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8218c6d8
	ctx.lr = 0x8218B73C;
	sub_8218C6D8(ctx, base);
	// lfs f13,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f12,f12,f13,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, -ctx.f8.f64)));
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// fadds f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_8218B794:
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8218b6d8
	if (ctx.cr6.lt) goto loc_8218B6D8;
loc_8218B7BC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821941B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31924
	ctx.r4.s64 = ctx.r11.s64 + -31924;
	// bl 0x82120600
	ctx.lr = 0x821941DC;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82154b70
	ctx.lr = 0x821941EC;
	sub_82154B70(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82194200;
	sub_82120AC0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82194214
	if (!ctx.cr6.eq) goto loc_82194214;
loc_8219420C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821943f4
	goto loc_821943F4;
loc_82194214:
	// bl 0x82153030
	ctx.lr = 0x82194218;
	sub_82153030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x82194228;
	sub_821A4270(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219420c
	if (ctx.cr0.eq) goto loc_8219420C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82153080
	ctx.lr = 0x8219423C;
	sub_82153080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x8219424C;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x8219425c
	if (!ctx.cr0.eq) goto loc_8219425C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8219425C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8219420c
	if (ctx.cr6.eq) goto loc_8219420C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r9,-9616
	ctx.r4.s64 = ctx.r9.s64 + -9616;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219428C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r4,r10,-31912
	ctx.r4.s64 = ctx.r10.s64 + -31912;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821942B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// addi r4,r10,-31892
	ctx.r4.s64 = ctx.r10.s64 + -31892;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821942E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r4,r10,-31880
	ctx.r4.s64 = ctx.r10.s64 + -31880;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r4,r10,-31872
	ctx.r4.s64 = ctx.r10.s64 + -31872;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219433C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r4,r10,-31860
	ctx.r4.s64 = ctx.r10.s64 + -31860;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// addi r4,r10,-31848
	ctx.r4.s64 = ctx.r10.s64 + -31848;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// addi r4,r10,-31836
	ctx.r4.s64 = ctx.r10.s64 + -31836;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821943C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r4,r10,-31816
	ctx.r4.s64 = ctx.r10.s64 + -31816;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821943EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821943F4:
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

DEFINE_REX_FUNC(sub_821A3130) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821A3138;
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
	// bl 0x8215ef60
	ctx.lr = 0x821A314C;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x8215f338
	ctx.lr = 0x821A3158;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82167428
	ctx.lr = 0x821A3160;
	sub_82167428(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a3170
	if (!ctx.cr0.eq) goto loc_821A3170;
loc_821A3168:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a323c
	goto loc_821A323C;
loc_821A3170:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8215ef60
	ctx.lr = 0x821A317C;
	sub_8215EF60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-26992
	ctx.r4.s64 = ctx.r11.s64 + -26992;
	// bl 0x8215f338
	ctx.lr = 0x821A3188;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821a3198
	if (!ctx.cr6.eq) goto loc_821A3198;
	// lbz r28,8(r3)
	r28.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
loc_821A3198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x8215ef60
	ctx.lr = 0x821A31A4;
	sub_8215EF60(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-26976
	ctx.r4.s64 = ctx.r11.s64 + -26976;
	// bl 0x8215f338
	ctx.lr = 0x821A31B0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821a31c0
	if (!ctx.cr6.eq) goto loc_821A31C0;
	// lbz r29,8(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
loc_821A31C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215ef60
	ctx.lr = 0x821A31C8;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,18800
	r30.s64 = ctx.r11.s64 + 18800;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821A31D8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A31DC;
	sub_8215FA30(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82177080
	ctx.lr = 0x821A31EC;
	sub_82177080(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// beq 0x821a3168
	if (ctx.cr0.eq) goto loc_821A3168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215ef60
	ctx.lr = 0x821A3200;
	sub_8215EF60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821A3208;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A320C;
	sub_8215FA30(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821a3220
	if (ctx.cr6.lt) goto loc_821A3220;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821a3224
	goto loc_821A3224;
loc_821A3220:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821A3224:
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821A323C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821A8D60) {
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
	ctx.lr = 0x821A8D68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 48);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r3,36
	r29.s64 = ctx.r3.s64 + 36;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a8d88
	if (ctx.cr0.eq) goto loc_821A8D88;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821A8D88;
	sub_8269D1B8(ctx, base);
loc_821A8D88:
	// li r31,0
	r31.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r28,20
	r30.s64 = r28.s64 + 20;
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// stb r27,12(r29)
	REX_STORE_U8(r29.u32 + 12, r27.u8);
	// lbz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a8db8
	if (ctx.cr0.eq) goto loc_821A8DB8;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821A8DB8;
	sub_8269D1B8(ctx, base);
loc_821A8DB8:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stb r27,12(r30)
	REX_STORE_U8(r30.u32 + 12, r27.u8);
	// lbz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a8de0
	if (ctx.cr0.eq) goto loc_821A8DE0;
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x821A8DE0;
	sub_8269D1B8(ctx, base);
loc_821A8DE0:
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,4(r29)
	REX_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// stb r27,12(r29)
	REX_STORE_U8(r29.u32 + 12, r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821AD580) {
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
	ctx.lr = 0x821AD588;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad65c
	if (ctx.cr6.eq) goto loc_821AD65C;
	// lbz r10,137(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 137);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821ad65c
	if (!ctx.cr0.eq) goto loc_821AD65C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ad5c8
	if (ctx.cr6.eq) goto loc_821AD5C8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x821ad5e4
	goto loc_821AD5E4;
loc_821AD5C8:
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r31.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AD5E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_821AD5E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ad65c
	if (ctx.cr0.eq) goto loc_821AD65C;
	// lbz r11,125(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 125);
	// stb r30,136(r31)
	REX_STORE_U8(r31.u32 + 136, r30.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ad600
	if (ctx.cr0.eq) goto loc_821AD600;
	// stb r30,137(r31)
	REX_STORE_U8(r31.u32 + 137, r30.u8);
loc_821AD600:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-23920
	ctx.r4.s64 = ctx.r10.s64 + -23920;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// bl 0x82120600
	ctx.lr = 0x821AD61C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821dd040
	ctx.lr = 0x821AD628;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AD64C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821AD65C;
	sub_82120AC0(ctx, base);
loc_821AD65C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B4728) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15128
	ctx.r3.s64 = ctx.r11.s64 + -15128;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B4CE8) {
	REX_FUNC_PROLOGUE();
	// b 0x821b4d60
	sub_821B4D60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B4CF8) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x821357c8
	ctx.lr = 0x821B4D14;
	sub_821357C8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b4d3c
	if (ctx.cr6.eq) goto loc_821B4D3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-21888
	ctx.r4.s64 = ctx.r11.s64 + -21888;
	// addi r3,r10,-21832
	ctx.r3.s64 = ctx.r10.s64 + -21832;
	// li r5,170
	ctx.r5.s64 = 170;
	// bl 0x821231d0
	ctx.lr = 0x821B4D3C;
	sub_821231D0(ctx, base);
loc_821B4D3C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B4D4C;
	sub_82149AF0(ctx, base);
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

DEFINE_REX_FUNC(sub_821B6E40) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821B6E64;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821B6E6C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b6e98
	if (ctx.cr0.eq) goto loc_821B6E98;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,27504
	ctx.r10.s64 = ctx.r10.s64 + 27504;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821b6e9c
	goto loc_821B6E9C;
loc_821B6E98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B6E9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r10,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_821BB418) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15040
	ctx.r3.s64 = ctx.r11.s64 + -15040;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BB720) {
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
	ctx.lr = 0x821BB734;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bb744
	if (ctx.cr0.eq) goto loc_821BB744;
	// bl 0x821bb758
	ctx.lr = 0x821BB740;
	sub_821BB758(ctx, base);
	// b 0x821bb748
	goto loc_821BB748;
loc_821BB744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BB748:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BCBF8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,116(r4)
	REX_STORE_U8(ctx.r4.u32 + 116, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BD3E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BD3E8;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 116);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x821bd470
	if (!ctx.cr6.lt) goto loc_821BD470;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x826a06d8
	ctx.lr = 0x821BD414;
	sub_826A06D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x821BD420;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BD42C;
	sub_821DD040(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BD440;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd464
	if (ctx.cr6.eq) goto loc_821BD464;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BD464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BD464:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_821BD470:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821C07D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14864
	ctx.r3.s64 = ctx.r11.s64 + -14864;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C0D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C0D18;
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// clrlwi r30,r4,24
	r30.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821c0e28
	if (ctx.cr6.eq) goto loc_821C0E28;
	// stb r4,116(r3)
	REX_STORE_U8(ctx.r3.u32 + 116, ctx.r4.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// bl 0x82120600
	ctx.lr = 0x821C0D44;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821C0D50;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r29,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, r29.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C0D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821C0D88;
	sub_82120AC0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0dd8
	if (ctx.cr6.eq) goto loc_821C0DD8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-18184
	ctx.r4.s64 = ctx.r11.s64 + -18184;
	// bl 0x82120600
	ctx.lr = 0x821C0DA0;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821C0DAC;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, r29.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C0DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x821c0e1c
	goto loc_821C0E1C;
loc_821C0DD8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18168
	ctx.r4.s64 = ctx.r11.s64 + -18168;
	// bl 0x82120600
	ctx.lr = 0x821C0DE8;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821C0DF4;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r29,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, r29.u32);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C0E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_821C0E1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821C0E28;
	sub_82120AC0(ctx, base);
loc_821C0E28:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C89D8) {
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
	ctx.lr = 0x821C89E0;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r31,r27
	r31.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x821C89FC;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-18396
	ctx.r11.s64 = ctx.r11.s64 + -18396;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// addi r10,r10,-16148
	ctx.r10.s64 = ctx.r10.s64 + -16148;
	// addi r9,r9,-22212
	ctx.r9.s64 = ctx.r9.s64 + -22212;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r9.u32);
	// addi r3,r30,144
	ctx.r3.s64 = r30.s64 + 144;
	// stb r11,132(r30)
	REX_STORE_U8(r30.u32 + 132, ctx.r11.u8);
	// addi r26,r30,112
	r26.s64 = r30.s64 + 112;
	// addi r29,r30,132
	r29.s64 = r30.s64 + 132;
	// bl 0x821a4d38
	ctx.lr = 0x821C8A38;
	sub_821A4D38(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821C8A40;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821c8a70
	if (ctx.cr0.eq) goto loc_821C8A70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-16272
	ctx.r4.s64 = ctx.r11.s64 + -16272;
	// bl 0x82120600
	ctx.lr = 0x821C8A58;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x821C8A6C;
	sub_82191600(ctx, base);
	// b 0x821c8a74
	goto loc_821C8A74;
loc_821C8A70:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8A74:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8A88;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8aa4
	if (ctx.cr0.eq) goto loc_821C8AA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821C8AA4;
	sub_82120AC0(ctx, base);
loc_821C8AA4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C8ABC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8aec
	if (ctx.cr0.eq) goto loc_821C8AEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-16256
	ctx.r4.s64 = ctx.r11.s64 + -16256;
	// bl 0x82120600
	ctx.lr = 0x821C8AD4;
	sub_82120600(ctx, base);
	// addi r5,r30,192
	ctx.r5.s64 = r30.s64 + 192;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x8219d708
	ctx.lr = 0x821C8AE8;
	sub_8219D708(ctx, base);
	// b 0x821c8af0
	goto loc_821C8AF0;
loc_821C8AEC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8AF0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8B00;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821C8B10;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8b2c
	if (ctx.cr0.eq) goto loc_821C8B2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821C8B2C;
	sub_82120AC0(ctx, base);
loc_821C8B2C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C8B44;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8b74
	if (ctx.cr0.eq) goto loc_821C8B74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-16240
	ctx.r4.s64 = ctx.r11.s64 + -16240;
	// bl 0x82120600
	ctx.lr = 0x821C8B5C;
	sub_82120600(ctx, base);
	// addi r5,r30,196
	ctx.r5.s64 = r30.s64 + 196;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x8219d708
	ctx.lr = 0x821C8B70;
	sub_8219D708(ctx, base);
	// b 0x821c8b78
	goto loc_821C8B78;
loc_821C8B74:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8B78:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8B88;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821C8B98;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8bb4
	if (ctx.cr0.eq) goto loc_821C8BB4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821C8BB4;
	sub_82120AC0(ctx, base);
loc_821C8BB4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C8BCC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8bfc
	if (ctx.cr0.eq) goto loc_821C8BFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-16224
	ctx.r4.s64 = ctx.r11.s64 + -16224;
	// bl 0x82120600
	ctx.lr = 0x821C8BE4;
	sub_82120600(ctx, base);
	// addi r5,r30,200
	ctx.r5.s64 = r30.s64 + 200;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821C8BF8;
	sub_82196BA8(ctx, base);
	// b 0x821c8c00
	goto loc_821C8C00;
loc_821C8BFC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8C00:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8C10;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821C8C20;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8c3c
	if (ctx.cr0.eq) goto loc_821C8C3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821C8C3C;
	sub_82120AC0(ctx, base);
loc_821C8C3C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C8C54;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8c84
	if (ctx.cr0.eq) goto loc_821C8C84;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16216
	ctx.r4.s64 = ctx.r11.s64 + -16216;
	// bl 0x82120600
	ctx.lr = 0x821C8C6C;
	sub_82120600(ctx, base);
	// addi r5,r30,204
	ctx.r5.s64 = r30.s64 + 204;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821C8C80;
	sub_82196BA8(ctx, base);
	// b 0x821c8c88
	goto loc_821C8C88;
loc_821C8C84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8C88:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8C98;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821C8CA8;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8cc4
	if (ctx.cr0.eq) goto loc_821C8CC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821C8CC4;
	sub_82120AC0(ctx, base);
loc_821C8CC4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C8CDC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8d0c
	if (ctx.cr0.eq) goto loc_821C8D0C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-16196
	ctx.r4.s64 = ctx.r11.s64 + -16196;
	// bl 0x82120600
	ctx.lr = 0x821C8CF4;
	sub_82120600(ctx, base);
	// addi r5,r30,208
	ctx.r5.s64 = r30.s64 + 208;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821C8D08;
	sub_82196BA8(ctx, base);
	// b 0x821c8d10
	goto loc_821C8D10;
loc_821C8D0C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8D10:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8D20;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821C8D30;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8d4c
	if (ctx.cr0.eq) goto loc_821C8D4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// rlwinm r31,r31,0,27,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821C8D4C;
	sub_82120AC0(ctx, base);
loc_821C8D4C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C8D64;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8d94
	if (ctx.cr0.eq) goto loc_821C8D94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-18076
	ctx.r4.s64 = ctx.r11.s64 + -18076;
	// bl 0x82120600
	ctx.lr = 0x821C8D7C;
	sub_82120600(ctx, base);
	// addi r5,r30,212
	ctx.r5.s64 = r30.s64 + 212;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
	// bl 0x8219e1a0
	ctx.lr = 0x821C8D90;
	sub_8219E1A0(ctx, base);
	// b 0x821c8d98
	goto loc_821C8D98;
loc_821C8D94:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8D98:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8DA8;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821C8DB8;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8dd4
	if (ctx.cr0.eq) goto loc_821C8DD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r31,r31,0,26,24
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821C8DD4;
	sub_82120AC0(ctx, base);
loc_821C8DD4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821C8DEC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8e1c
	if (ctx.cr0.eq) goto loc_821C8E1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-18064
	ctx.r4.s64 = ctx.r11.s64 + -18064;
	// bl 0x82120600
	ctx.lr = 0x821C8E04;
	sub_82120600(ctx, base);
	// addi r5,r30,216
	ctx.r5.s64 = r30.s64 + 216;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
	// bl 0x8219e1a0
	ctx.lr = 0x821C8E18;
	sub_8219E1A0(ctx, base);
	// b 0x821c8e20
	goto loc_821C8E20;
loc_821C8E1C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8E20:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8E30;
	sub_82145710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821b92d8
	ctx.lr = 0x821C8E40;
	sub_821B92D8(ctx, base);
	// rlwinm. r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8e5c
	if (ctx.cr0.eq) goto loc_821C8E5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r31,r31,0,25,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x821C8E5C;
	sub_82120AC0(ctx, base);
loc_821C8E5C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821C8E64;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8e94
	if (ctx.cr0.eq) goto loc_821C8E94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-17160
	ctx.r4.s64 = ctx.r11.s64 + -17160;
	// bl 0x82120600
	ctx.lr = 0x821C8E7C;
	sub_82120600(ctx, base);
	// addi r5,r30,220
	ctx.r5.s64 = r30.s64 + 220;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
	// bl 0x82196ba8
	ctx.lr = 0x821C8E90;
	sub_82196BA8(ctx, base);
	// b 0x821c8e98
	goto loc_821C8E98;
loc_821C8E94:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8E98:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8EA8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8ec4
	if (ctx.cr0.eq) goto loc_821C8EC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r31,r31,0,24,22
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x821C8EC4;
	sub_82120AC0(ctx, base);
loc_821C8EC4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821C8ECC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821c8efc
	if (ctx.cr0.eq) goto loc_821C8EFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-16176
	ctx.r4.s64 = ctx.r11.s64 + -16176;
	// bl 0x82120600
	ctx.lr = 0x821C8EE4;
	sub_82120600(ctx, base);
	// addi r5,r30,224
	ctx.r5.s64 = r30.s64 + 224;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,512
	r31.u64 = r31.u64 | 512;
	// bl 0x82191600
	ctx.lr = 0x821C8EF8;
	sub_82191600(ctx, base);
	// b 0x821c8f00
	goto loc_821C8F00;
loc_821C8EFC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821C8F00:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821C8F10;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c8f28
	if (ctx.cr0.eq) goto loc_821C8F28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x821C8F28;
	sub_82120AC0(ctx, base);
loc_821C8F28:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821C8F30;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8f48
	if (ctx.cr0.eq) goto loc_821C8F48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821C8F40;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c8f4c
	goto loc_821C8F4C;
loc_821C8F48:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C8F4C:
	// stw r4,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r4.u32);
	// addi r31,r30,96
	r31.s64 = r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C8F5C;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C8F64;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8f90
	if (ctx.cr0.eq) goto loc_821C8F90;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-27936
	ctx.r11.s64 = ctx.r11.s64 + -27936;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82233df8
	ctx.lr = 0x821C8F88;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c8f94
	goto loc_821C8F94;
loc_821C8F90:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C8F94:
	// stw r4,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C8FA0;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821C8FA8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8fc8
	if (ctx.cr0.eq) goto loc_821C8FC8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821C8FC0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c8fcc
	goto loc_821C8FCC;
loc_821C8FC8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C8FCC:
	// stw r4,124(r30)
	REX_STORE_U32(r30.u32 + 124, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C8FD8;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821C8FE0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8ffc
	if (ctx.cr0.eq) goto loc_821C8FFC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dd570
	ctx.lr = 0x821C8FF4;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c9000
	goto loc_821C9000;
loc_821C8FFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821C9000:
	// stw r4,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C900C;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C9014;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r28,r11,-19528
	r28.s64 = ctx.r11.s64 + -19528;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821c9094
	if (ctx.cr0.eq) goto loc_821C9094;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r11,r11,-30488
	ctx.r11.s64 = ctx.r11.s64 + -30488;
	// addi r4,r10,-16164
	ctx.r4.s64 = ctx.r10.s64 + -16164;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C9058;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C9064;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9084
	if (ctx.cr0.eq) goto loc_821C9084;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c9088
	goto loc_821C9088;
loc_821C9084:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C9088:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821c9098
	goto loc_821C9098;
loc_821C9094:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821C9098:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C90B0;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C90B8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c9128
	if (ctx.cr0.eq) goto loc_821C9128;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r11,r11,-30384
	ctx.r11.s64 = ctx.r11.s64 + -30384;
	// addi r4,r10,-16156
	ctx.r4.s64 = ctx.r10.s64 + -16156;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C90EC;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821C90F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9118
	if (ctx.cr0.eq) goto loc_821C9118;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821c911c
	goto loc_821C911C;
loc_821C9118:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C911C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821c912c
	goto loc_821C912C;
loc_821C9128:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821C912C:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821C9144;
	sub_82264568(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r31,116(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 116);
	// bl 0x822f6280
	ctx.lr = 0x821C9160;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c918c
	if (ctx.cr0.eq) goto loc_821C918C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-13900
	ctx.r9.s64 = ctx.r9.s64 + -13900;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r8,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// b 0x821c9190
	goto loc_821C9190;
loc_821C918C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821C9190:
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82200A50) {
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
	// lbz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,60(r3)
	REX_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// beq 0x82200adc
	if (ctx.cr0.eq) goto loc_82200ADC;
	// stb r11,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82120ac0
	ctx.lr = 0x82200A9C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29020
	ctx.r4.s64 = ctx.r11.s64 + 29020;
	// bl 0x82120600
	ctx.lr = 0x82200AAC;
	sub_82120600(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82177570
	ctx.lr = 0x82200ABC;
	sub_82177570(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82200ACC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82120ac0
	ctx.lr = 0x82200ADC;
	sub_82120AC0(ctx, base);
loc_82200ADC:
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

DEFINE_REX_FUNC(sub_82204840) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,29868
	ctx.r11.s64 = ctx.r11.s64 + 29868;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8220486c
	if (ctx.cr0.eq) goto loc_8220486C;
	// bl 0x8269ce98
	ctx.lr = 0x8220486C;
	sub_8269CE98(ctx, base);
loc_8220486C:
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

DEFINE_REX_FUNC(sub_82205520) {
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
	ctx.lr = 0x82205544;
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
	ctx.lr = 0x8220555C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6308(r10)
	REX_STORE_U32(ctx.r10.u32 + 6308, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82207C98) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-32624
	ctx.r10.s64 = ctx.r10.s64 + -32624;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x82207CD4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82207cfc
	if (ctx.cr0.eq) goto loc_82207CFC;
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
	// b 0x82207d00
	goto loc_82207D00;
loc_82207CFC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82207D00:
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
	ctx.lr = 0x82207D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// bne cr6,0x82207d2c
	if (!ctx.cr6.eq) goto loc_82207D2C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82207D2C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207D44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,31140
	ctx.r4.s64 = ctx.r9.s64 + 31140;
	// lwz r3,6116(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6116);
	// lfs f0,556(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,580(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 584);
	ctx.f11.f64 = double(temp.f32);
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8220F578) {
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
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x822f6280
	ctx.lr = 0x8220F590;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220f60c
	if (ctx.cr0.eq) goto loc_8220F60C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e8048
	ctx.lr = 0x8220F5A0;
	sub_822E8048(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,-30012
	ctx.r11.s64 = ctx.r11.s64 + -30012;
	// addi r4,r10,-26856
	ctx.r4.s64 = ctx.r10.s64 + -26856;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120600
	ctx.lr = 0x8220F5BC;
	sub_82120600(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8220F5C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220f5f0
	if (ctx.cr0.eq) goto loc_8220F5F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-2520
	ctx.r10.s64 = ctx.r10.s64 + -2520;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220f5f4
	goto loc_8220F5F4;
loc_8220F5F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8220F5F4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-30036
	ctx.r5.s64 = ctx.r11.s64 + -30036;
	// bl 0x8216be80
	ctx.lr = 0x8220F604;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8220f610
	goto loc_8220F610;
loc_8220F60C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220F610:
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

DEFINE_REX_FUNC(sub_82215008) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,884
	ctx.r3.s64 = ctx.r3.s64 + 884;
	// lwz r4,296(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x82213de8
	sub_82213DE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82215F60) {
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
	ctx.lr = 0x82215F68;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lwz r24,16(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822e6ff8
	ctx.lr = 0x82215F9C;
	sub_822E6FF8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82216080
	if (ctx.cr0.eq) goto loc_82216080;
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x826a1e70
	ctx.lr = 0x82215FB4;
	sub_826A1E70(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215fd4
	if (ctx.cr0.eq) goto loc_82215FD4;
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq 0x82215fe4
	if (ctx.cr0.eq) goto loc_82215FE4;
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// b 0x82215fe0
	goto loc_82215FE0;
loc_82215FD4:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82215fe4
	if (ctx.cr0.eq) goto loc_82215FE4;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
loc_82215FE0:
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82215FE4:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,112
	ctx.r9.s64 = 112;
	// beq 0x82215ff4
	if (ctx.cr0.eq) goto loc_82215FF4;
	// li r9,113
	ctx.r9.s64 = 113;
loc_82215FF4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r4,r11,16592
	ctx.r4.s64 = ctx.r11.s64 + 16592;
	// lwz r6,272(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f8,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f13,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f6,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lfs f0,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f6,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f7,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
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
	ctx.lr = 0x82216080;
	sub_82174318(ctx, base);
loc_82216080:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82225598) {
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
	ctx.lr = 0x822255A0;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r23,0
	r23.s64 = 0;
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r31,r3,648
	r31.s64 = ctx.r3.s64 + 648;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822256d8
	if (!ctx.cr0.gt) goto loc_822256D8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r29,r23
	r29.u64 = r23.u64;
	// addi r27,r11,-24548
	r27.s64 = ctx.r11.s64 + -24548;
	// addi r26,r10,-17296
	r26.s64 = ctx.r10.s64 + -17296;
	// addi r25,r9,-17164
	r25.s64 = ctx.r9.s64 + -17164;
loc_822255E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r22,r29,r11
	r22.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82273438
	ctx.lr = 0x822255F8;
	sub_82273438(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82225600;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225604;
	sub_8215FA30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8215f338
	ctx.lr = 0x82225614;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225618;
	sub_8215FA30(ctx, base);
	// stw r23,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, r23.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82225630
	if (ctx.cr6.lt) goto loc_82225630;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82225634
	goto loc_82225634;
loc_82225630:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82225634:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82225638:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82225638
	if (!ctx.cr6.eq) goto loc_82225638;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82225664;
	sub_8216B6A8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82225678
	if (ctx.cr6.lt) goto loc_82225678;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8222567c
	goto loc_8222567C;
loc_82225678:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8222567C:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82225680:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82225680
	if (!ctx.cr6.eq) goto loc_82225680;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x822256AC;
	sub_8216B6A8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8216bc98
	ctx.lr = 0x822256B8;
	sub_8216BC98(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822255e4
	if (ctx.cr6.lt) goto loc_822255E4;
loc_822256D8:
	// mr r28,r23
	r28.u64 = r23.u64;
	// stw r23,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8222573c
	if (!ctx.cr6.gt) goto loc_8222573C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r29,r11,-26656
	r29.s64 = ctx.r11.s64 + -26656;
loc_822256F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x82273438
	ctx.lr = 0x82225704;
	sub_82273438(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222570C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225710;
	sub_8215FA30(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82225748
	if (!ctx.cr6.eq) goto loc_82225748;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822256f4
	if (ctx.cr6.lt) goto loc_822256F4;
loc_8222573C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// bl 0x8215fa30
	ctx.lr = 0x82225748;
	sub_8215FA30(ctx, base);
loc_82225748:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8222575c
	if (ctx.cr6.lt) goto loc_8222575C;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82225760
	goto loc_82225760;
loc_8222575C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82225760:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82225764:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82225764
	if (!ctx.cr6.eq) goto loc_82225764;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x82225790;
	sub_8216B6A8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82271e38
	ctx.lr = 0x82225798;
	sub_82271E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8216b6a8
	ctx.lr = 0x822257BC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r11,-26644
	ctx.r3.s64 = ctx.r11.s64 + -26644;
	// bl 0x8216bc98
	ctx.lr = 0x822257CC;
	sub_8216BC98(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r31,r11,16492
	r31.s64 = ctx.r11.s64 + 16492;
	// addi r30,r10,1624
	r30.s64 = ctx.r10.s64 + 1624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x822257F4;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82225800;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225804;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,20280
	r28.s64 = ctx.r11.s64 + 20280;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82125d00
	ctx.lr = 0x82225818;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x8222585c
	if (!ctx.cr0.eq) goto loc_8222585C;
	// bl 0x8215f338
	ctx.lr = 0x8222582C;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x82225834;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225838;
	sub_8215FA30(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82225858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82225940
	goto loc_82225940;
loc_8222585C:
	// bl 0x8215f338
	ctx.lr = 0x82225860;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x8222586C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225870;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82225880;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x8222588C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82225890;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x822258A4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822258c0
	if (!ctx.cr0.eq) goto loc_822258C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82120d70
	ctx.lr = 0x822258BC;
	sub_82120D70(ctx, base);
	// b 0x822258d4
	goto loc_822258D4;
loc_822258C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
	// li r31,2
	r31.s64 = 2;
	// bl 0x82120600
	ctx.lr = 0x822258D4;
	sub_82120600(ctx, base);
loc_822258D4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r11,6272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222590C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225928
	if (ctx.cr0.eq) goto loc_82225928;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82225928;
	sub_82120AC0(ctx, base);
loc_82225928:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225940
	if (ctx.cr0.eq) goto loc_82225940;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82225940;
	sub_82120AC0(ctx, base);
loc_82225940:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8222598c
	if (!ctx.cr6.lt) goto loc_8222598C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// stb r10,752(r24)
	REX_STORE_U8(r24.u32 + 752, ctx.r10.u8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,-19108
	ctx.r10.s64 = ctx.r9.s64 + -19108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82120600
	ctx.lr = 0x8222596C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r24,720
	ctx.r3.s64 = r24.s64 + 720;
	// bl 0x821d5b38
	ctx.lr = 0x82225978;
	sub_821D5B38(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82225988;
	sub_82120AC0(ctx, base);
	// b 0x82225990
	goto loc_82225990;
loc_8222598C:
	// stb r23,752(r24)
	REX_STORE_U8(r24.u32 + 752, r23.u8);
loc_82225990:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8223F838) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x8223F840;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r29,r11,-16772
	r29.s64 = ctx.r11.s64 + -16772;
	// bne cr6,0x8223f87c
	if (!ctx.cr6.eq) goto loc_8223F87C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// li r5,737
	ctx.r5.s64 = 737;
	// bl 0x821231d0
	ctx.lr = 0x8223F87C;
	sub_821231D0(ctx, base);
loc_8223F87C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8223f898
	if (!ctx.cr6.eq) goto loc_8223F898;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// li r5,738
	ctx.r5.s64 = 738;
	// bl 0x821231d0
	ctx.lr = 0x8223F898;
	sub_821231D0(ctx, base);
loc_8223F898:
	// lfs f0,568(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,552(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// lfs f0,564(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r23,r11,16
	r23.s64 = ctx.r11.s64 + 16;
	// lfs f0,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r31,240
	r24.s64 = r31.s64 + 240;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x8223F900;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x8223F928;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// beq cr6,0x8223fb98
	if (ctx.cr6.eq) goto loc_8223FB98;
	// lbz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 224);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223fb98
	if (!ctx.cr0.eq) goto loc_8223FB98;
	// bl 0x82151d50
	ctx.lr = 0x8223F95C;
	sub_82151D50(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f30,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 168);
	f30.f64 = double(temp.f32);
	// bl 0x82151d50
	ctx.lr = 0x8223F970;
	sub_82151D50(ctx, base);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r29,32
	ctx.r6.s64 = r29.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d7b18
	ctx.lr = 0x8223F98C;
	sub_821D7B18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fb98
	if (ctx.cr0.eq) goto loc_8223FB98;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r29,228(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r27,460(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,6288(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F9B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r27)
	REX_STORE_U32(r27.u32 + 36, ctx.r3.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223F9D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r27,80(r1)
	r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fa8c
	if (ctx.cr0.eq) goto loc_8223FA8C;
	// lbz r11,165(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223f9f4
	if (!ctx.cr0.eq) goto loc_8223F9F4;
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223fa8c
	if (ctx.cr0.eq) goto loc_8223FA8C;
loc_8223F9F4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fa8c
	if (ctx.cr0.eq) goto loc_8223FA8C;
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8223fa14
	if (ctx.cr6.lt) goto loc_8223FA14;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8223FA14:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x8223FA20;
	sub_82120600(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822318e8
	ctx.lr = 0x8223FA34;
	sub_822318E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fa68
	if (ctx.cr0.eq) goto loc_8223FA68;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82120b20
	ctx.lr = 0x8223FA60;
	sub_82120B20(ctx, base);
	// lfs f0,700(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
loc_8223FA68:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82231718
	ctx.lr = 0x8223FA7C;
	sub_82231718(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8223FA8C;
	sub_82120AC0(ctx, base);
loc_8223FA8C:
	// lwz r3,6288(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6288);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FAA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// lbz r11,113(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223fb54
	if (ctx.cr0.eq) goto loc_8223FB54;
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223fb98
	if (ctx.cr0.eq) goto loc_8223FB98;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// beq 0x8223fad4
	if (ctx.cr0.eq) goto loc_8223FAD4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8223fae8
	goto loc_8223FAE8;
loc_8223FAD4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x8223faec
	if (!ctx.cr6.lt) goto loc_8223FAEC;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8223FAE8:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8223FAEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8223fb2c
	if (ctx.cr6.lt) goto loc_8223FB2C;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r25,256
	ctx.r10.s64 = r25.s64 + 256;
	// lfs f13,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f31,20(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// lfsx f12,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
loc_8223FB2C:
	// lwz r10,116(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8223fb48
	if (!ctx.cr6.eq) goto loc_8223FB48;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223fcb0
	ctx.lr = 0x8223FB48;
	sub_8223FCB0(ctx, base);
loc_8223FB48:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,676(r30)
	REX_STORE_U32(r30.u32 + 676, ctx.r11.u32);
	// b 0x8223fb98
	goto loc_8223FB98;
loc_8223FB54:
	// lbz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8223fb6c
	if (!ctx.cr0.eq) goto loc_8223FB6C;
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223fb7c
	if (ctx.cr0.eq) goto loc_8223FB7C;
loc_8223FB6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,676(r30)
	REX_STORE_U32(r30.u32 + 676, ctx.r11.u32);
loc_8223FB7C:
	// lbz r11,166(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223fb98
	if (ctx.cr0.eq) goto loc_8223FB98;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8223fcb0
	ctx.lr = 0x8223FB98;
	sub_8223FCB0(ctx, base);
loc_8223FB98:
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FBAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223fc8c
	if (ctx.cr0.eq) goto loc_8223FC8C;
	// lfs f13,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r25,256
	ctx.r10.s64 = r25.s64 + 256;
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f8,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f6,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f5,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fmadds f13,f8,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// lfs f10,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfs f9,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f6,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fadds f12,f11,f5
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// lfsx f12,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fnmsubs f0,f0,f10,f9
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f9.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f13,120(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f0.f64)));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lwa r11,116(r26)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r26.u32 + 116));
	// lfs f13,120(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_8223FC8C:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8223FC9C;
	sub_826A1E70(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82266CE8) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6056(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// bl 0x8212d668
	ctx.lr = 0x82266D04;
	sub_8212D668(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6112(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82268948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82268950;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,57(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 57);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x822689b8
	goto loc_822689B8;
loc_82268968:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82268948
	ctx.lr = 0x82268974;
	sub_82268948(ctx, base);
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,28
	ctx.r4.s64 = r29.s64 + 28;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8213cc48
	ctx.lr = 0x82268990;
	sub_8213CC48(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8269ce98
	ctx.lr = 0x82268998;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822689A8;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822689B0;
	sub_8269CE98(ctx, base);
	// lbz r11,57(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 57);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_822689B8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82268968
	if (ctx.cr0.eq) goto loc_82268968;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8226BED0) {
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
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// blt cr6,0x8226bf08
	if (ctx.cr6.lt) goto loc_8226BF08;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8226BF08:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fbf8
	ctx.lr = 0x8226BF10;
	sub_8215FBF8(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226BF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x82120b20
	ctx.lr = 0x8226BF48;
	sub_82120B20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8226BF50;
	sub_8215F0F0(ctx, base);
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

DEFINE_REX_FUNC(sub_82270008) {
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
	ctx.lr = 0x82270010;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// std r27,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r27.u64);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x8226ff98
	ctx.lr = 0x82270048;
	sub_8226FF98(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x82120600
	ctx.lr = 0x82270058;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82270078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,1
	r29.s64 = 1;
	// beq 0x822700ac
	if (ctx.cr0.eq) goto loc_822700AC;
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822700A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bne 0x822700b0
	if (!ctx.cr0.eq) goto loc_822700B0;
loc_822700AC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822700B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82120ac0
	ctx.lr = 0x822700C4;
	sub_82120AC0(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x822700dc
	if (ctx.cr0.eq) goto loc_822700DC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8226ff98
	ctx.lr = 0x822700DC;
	sub_8226FF98(ctx, base);
loc_822700DC:
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822700F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822702bc
	if (ctx.cr0.eq) goto loc_822702BC;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x8226ff98
	ctx.lr = 0x82270114;
	sub_8226FF98(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,1624
	r30.s64 = ctx.r11.s64 + 1624;
	// addi r4,r10,16584
	ctx.r4.s64 = ctx.r10.s64 + 16584;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8227012C;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-28324
	ctx.r4.s64 = ctx.r11.s64 + -28324;
	// bl 0x8215f338
	ctx.lr = 0x82270138;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8227013C;
	sub_8215F990(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x82270150;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270158;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r25)
	REX_STORE_U32(r25.u32 + 8, r28.u32);
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-11016
	ctx.r4.s64 = ctx.r11.s64 + -11016;
	// bl 0x82120600
	ctx.lr = 0x82270170;
	sub_82120600(ctx, base);
	// lwz r3,6256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6256);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227018C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x822701A0;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82270220
	if (ctx.cr0.eq) goto loc_82270220;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x822701BC;
	sub_8215F670(ctx, base);
	// bl 0x8215f270
	ctx.lr = 0x822701C0;
	sub_8215F270(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// bl 0x8215f670
	ctx.lr = 0x822701D0;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x822701D8;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r25)
	REX_STORE_U32(r25.u32 + 8, r31.u32);
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x8215f670
	ctx.lr = 0x822701F0;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x822701F8;
	sub_8215F0F0(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x8215f670
	ctx.lr = 0x82270210;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270218;
	sub_8215F0F0(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82270220:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,30636
	ctx.r4.s64 = ctx.r11.s64 + 30636;
	// bl 0x8215f670
	ctx.lr = 0x82270230;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// bl 0x8215f670
	ctx.lr = 0x82270240;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-8604
	ctx.r4.s64 = ctx.r11.s64 + -8604;
	// bl 0x8215fbf8
	ctx.lr = 0x8227024C;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-8592
	ctx.r4.s64 = ctx.r11.s64 + -8592;
	// bl 0x8215f670
	ctx.lr = 0x8227025C;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270264;
	sub_8215F0F0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-8576
	ctx.r4.s64 = ctx.r10.s64 + -8576;
	// bl 0x8215f670
	ctx.lr = 0x82270280;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82270288;
	sub_8215F0F0(ctx, base);
	// stw r26,8(r30)
	REX_STORE_U32(r30.u32 + 8, r26.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// bl 0x8215f670
	ctx.lr = 0x822702A0;
	sub_8215F670(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8215efb0
	ctx.lr = 0x822702A8;
	sub_8215EFB0(ctx, base);
loc_822702A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x822702B0;
	sub_8215F0F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cfc
	return;
loc_822702BC:
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x822702a8
	goto loc_822702A8;
}

DEFINE_REX_FUNC(sub_82283330) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x82283338;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2ca8
	ctx.lr = 0x82283340;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f1,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bge cr6,0x82283380
	if (!ctx.cr6.lt) goto loc_82283380;
	// lfs f12,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,960(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 960);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8228348c
	if (!ctx.cr6.gt) goto loc_8228348C;
	// lfs f1,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8228348c
	goto loc_8228348C;
loc_82283380:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f30,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	f30.f64 = double(temp.f32);
	// lfs f31,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,656(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 656);
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f31.f64)));
	// lfs f11,712(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 712);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq 0x822833b4
	if (ctx.cr0.eq) goto loc_822833B4;
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_822833B4:
	// fmuls f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f0,148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8228348c
	if (!ctx.cr6.lt) goto loc_8228348C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8228348c
	if (ctx.cr6.eq) goto loc_8228348C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// blt cr6,0x82283418
	if (ctx.cr6.lt) goto loc_82283418;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82283418:
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f29,f0,f13
	f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x8228ca78
	ctx.lr = 0x8228343C;
	sub_8228CA78(ctx, base);
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - f29.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f0,f13
	f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8228ca78
	ctx.lr = 0x82283458;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f29,f28
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f28.f64)));
	// lfs f0,620(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,656(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 656);
	// fmadds f0,f0,f30,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f31.f64)));
	// lfs f12,712(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 712);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// beq 0x82283488
	if (ctx.cr0.eq) goto loc_82283488;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_82283488:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8228348C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2cf4
	ctx.lr = 0x82283498;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8228C420) {
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
	// bl 0x8228c470
	ctx.lr = 0x8228C440;
	sub_8228C470(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c450
	if (ctx.cr0.eq) goto loc_8228C450;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8228C450;
	sub_8269CE98(ctx, base);
loc_8228C450:
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

DEFINE_REX_FUNC(sub_8228D810) {
	REX_FUNC_PROLOGUE();
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8228d82c
	if (ctx.cr6.lt) goto loc_8228D82C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8228D82C:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228E020) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rldicl r11,r3,22,42
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 22) & 0x3FFFFF;
	// rldicl r10,r3,44,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 44) & 0xFFFFFFFFFFF;
	// rlwinm. r7,r11,0,10,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lis r8,-64
	ctx.r8.s64 = -4194304;
	// clrlwi r10,r10,10
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFF;
	// clrlwi r9,r3,12
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFFF;
	// beq 0x8228e040
	if (ctx.cr0.eq) goto loc_8228E040;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
loc_8228E040:
	// rlwinm. r7,r10,0,10,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8228e04c
	if (ctx.cr0.eq) goto loc_8228E04C;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_8228E04C:
	// rlwinm. r8,r9,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8228e058
	if (ctx.cr0.eq) goto loc_8228E058;
	// oris r9,r9,65528
	ctx.r9.u64 = ctx.r9.u64 | 4294443008;
loc_8228E058:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfs f0,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822940C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lfs f0,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// fneg f4,f0
	ctx.f4.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fneg f3,f0
	ctx.f3.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f2,f10
	ctx.f2.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f11,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// lfs f9,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-52(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// fmuls f31,f12,f4
	f31.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// fmuls f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f11,-24(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-44(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f8,-28(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f7,-60(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f6,-48(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f5,-32(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fmadds f13,f10,f3,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f1.f64)));
	// fmadds f12,f9,f2,f31
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f2.f64, f31.f64)));
	// stfs f0,-68(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// fmadds f11,f8,f2,f4
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f2.f64, ctx.f4.f64)));
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r5,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// fmadds f0,f2,f7,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f13.f64)));
	// stfs f0,-80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fmadds f0,f6,f3,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f12.f64)));
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// fmadds f0,f5,f3,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f3.f64, ctx.f11.f64)));
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r8,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// std r6,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// std r7,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r7.u64);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r4,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3600) {
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
	ctx.lr = 0x822A3608;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bctrl 
	ctx.lr = 0x822A3688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fsubs f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f9,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// lfs f0,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f8,f7,f7
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fmadds f13,f11,f11,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822ABB20) {
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
	// bl 0x822abd28
	ctx.lr = 0x822ABB40;
	sub_822ABD28(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822abb50
	if (ctx.cr0.eq) goto loc_822ABB50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822ABB50;
	sub_8269CE98(ctx, base);
loc_822ABB50:
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

DEFINE_REX_FUNC(sub_822AF770) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,6912
	ctx.r11.s64 = ctx.r11.s64 + 6912;
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// ld r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// std r9,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ld r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r4,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// ld r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// addi r11,r6,16
	ctx.r11.s64 = ctx.r6.s64 + 16;
	// std r8,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// addi r9,r3,144
	ctx.r9.s64 = ctx.r3.s64 + 144;
	// ld r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// addi r11,r7,16
	ctx.r11.s64 = ctx.r7.s64 + 16;
	// ld r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// ld r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 40);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// ld r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 48);
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// ld r11,56(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 56);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
	// ld r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r11,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// ld r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// std r11,96(r3)
	REX_STORE_U64(ctx.r3.u32 + 96, ctx.r11.u64);
	// ld r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// ld r11,32(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 32);
	// std r11,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, ctx.r11.u64);
	// ld r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 40);
	// std r11,120(r3)
	REX_STORE_U64(ctx.r3.u32 + 120, ctx.r11.u64);
	// ld r11,48(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 48);
	// std r11,128(r3)
	REX_STORE_U64(ctx.r3.u32 + 128, ctx.r11.u64);
	// ld r11,56(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 56);
	// std r11,136(r3)
	REX_STORE_U64(ctx.r3.u32 + 136, ctx.r11.u64);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,144(r3)
	REX_STORE_U64(ctx.r3.u32 + 144, ctx.r11.u64);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,152(r3)
	REX_STORE_U64(ctx.r3.u32 + 152, ctx.r11.u64);
	// ld r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// std r11,160(r3)
	REX_STORE_U64(ctx.r3.u32 + 160, ctx.r11.u64);
	// ld r11,24(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// std r11,168(r3)
	REX_STORE_U64(ctx.r3.u32 + 168, ctx.r11.u64);
	// ld r11,32(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 32);
	// std r11,176(r3)
	REX_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// ld r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 40);
	// std r11,184(r3)
	REX_STORE_U64(ctx.r3.u32 + 184, ctx.r11.u64);
	// ld r11,48(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 48);
	// std r11,192(r3)
	REX_STORE_U64(ctx.r3.u32 + 192, ctx.r11.u64);
	// ld r11,56(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 56);
	// std r11,200(r3)
	REX_STORE_U64(ctx.r3.u32 + 200, ctx.r11.u64);
	// stfs f0,208(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f1,212(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BBA30) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BBB20) {
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
	ctx.lr = 0x822BBB28;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r10,r10,5156
	ctx.r10.s64 = ctx.r10.s64 + 5156;
	// li r31,0
	r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// lfs f0,104(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// stfs f31,28(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f30,40(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r11,53(r3)
	REX_STORE_U8(ctx.r3.u32 + 53, ctx.r11.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,54(r3)
	REX_STORE_U8(ctx.r3.u32 + 54, ctx.r11.u8);
	// stfs f31,64(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stb r31,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, r31.u8);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stb r31,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, r31.u8);
	// stb r31,60(r3)
	REX_STORE_U8(ctx.r3.u32 + 60, r31.u8);
	// stw r31,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r31.u32);
	// stb r11,84(r3)
	REX_STORE_U8(ctx.r3.u32 + 84, ctx.r11.u8);
	// stw r5,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r5.u32);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BBBCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r3,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r3.u32);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// lfs f0,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,7464
	ctx.r11.s64 = ctx.r11.s64 + 7464;
	// stw r31,88(r30)
	REX_STORE_U32(r30.u32 + 88, r31.u32);
	// stw r31,92(r30)
	REX_STORE_U32(r30.u32 + 92, r31.u32);
	// lfs f13,84(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lfs f12,88(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,96(r30)
	REX_STORE_U32(r30.u32 + 96, r31.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,260
	ctx.r10.s64 = 260;
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 100, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stfs f13,108(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stfs f12,124(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 124, temp.u32);
	// lfs f11,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r11.u32);
	// lfs f0,60(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,144(r30)
	REX_STORE_U32(r30.u32 + 144, r31.u32);
	// lfs f13,92(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,160(r30)
	REX_STORE_U32(r30.u32 + 160, ctx.r10.u32);
	// lfs f12,96(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,164(r30)
	REX_STORE_U32(r30.u32 + 164, ctx.r9.u32);
	// stfs f30,104(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 104, temp.u32);
	// stw r8,168(r30)
	REX_STORE_U32(r30.u32 + 168, ctx.r8.u32);
	// stfs f31,116(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 116, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f11,132(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 132, temp.u32);
	// stfs f0,136(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 136, temp.u32);
	// stfs f31,140(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 140, temp.u32);
	// stfs f30,128(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// stfs f13,148(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 148, temp.u32);
	// stfs f31,152(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 152, temp.u32);
	// stfs f12,156(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 156, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822C22F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C24A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C26A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10500(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10500, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2B38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2FD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stfs f0,12068(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12068, temp.u32);
	// lfs f13,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,10598(r3)
	REX_STORE_U16(ctx.r3.u32 + 10598, ctx.r11.u16);
	// sth r11,10596(r3)
	REX_STORE_U16(ctx.r3.u32 + 10596, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C43D8) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,27,0,4
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6778) {
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
	ctx.lr = 0x822C6780;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi r27,r6,30
	r27.u64 = ctx.r6.u32 & 0x3;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c67b0
	if (!ctx.cr6.gt) goto loc_822C67B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C67B0;
	sub_822D5B28(ctx, base);
loc_822C67B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822c67cc
	if (!ctx.cr6.eq) goto loc_822C67CC;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x822c67f0
	goto loc_822C67F0;
loc_822C67CC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822c67ec
	if (!ctx.cr6.eq) goto loc_822C67EC;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm. r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c67f0
	if (!ctx.cr0.eq) goto loc_822C67F0;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x822c67f0
	goto loc_822C67F0;
loc_822C67EC:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
loc_822C67F0:
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r9,r29,2598
	ctx.r9.s64 = r29.s64 + 2598;
	// addi r8,r10,512
	ctx.r8.s64 = ctx.r10.s64 + 512;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// stwx r11,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r11.u32);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r11,r8,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r9,1480
	ctx.r9.s64 = 1480;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ld r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13712(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bne cr6,0x822c68a4
	if (!ctx.cr6.eq) goto loc_822C68A4;
	// cmplwi cr6,r28,10
	ctx.cr6.compare<uint32_t>(r28.u32, 10, ctx.xer);
	// bne cr6,0x822c6870
	if (!ctx.cr6.eq) goto loc_822C6870;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,15
	ctx.r9.s64 = 15;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// b 0x822c687c
	goto loc_822C687C;
loc_822C6870:
	// lwz r10,13716(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13716);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c68a4
	if (!ctx.cr6.eq) goto loc_822C68A4;
loc_822C687C:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c6298
	ctx.lr = 0x822C6888;
	sub_822C6298(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c68a4
	if (!ctx.cr6.gt) goto loc_822C68A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C68A0;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C68A4:
	// lwz r10,13712(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13712);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r27,13720(r31)
	REX_STORE_U32(r31.u32 + 13720, r27.u32);
	// stw r9,13716(r31)
	REX_STORE_U32(r31.u32 + 13716, ctx.r9.u32);
	// stw r11,13712(r31)
	REX_STORE_U32(r31.u32 + 13712, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D1608) {
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
	ctx.lr = 0x822D1610;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r25,32
	r25.s64 = 32;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// addi r24,r11,1
	r24.s64 = ctx.r11.s64 + 1;
	// li r27,4
	r27.s64 = 4;
	// beq cr6,0x822d1650
	if (ctx.cr6.eq) goto loc_822D1650;
	// li r27,1
	r27.s64 = 1;
loc_822D1650:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822c6b30
	ctx.lr = 0x822D1660;
	sub_822C6B30(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x822d1698
	if (!ctx.cr6.eq) goto loc_822D1698;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm. r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d1698
	if (ctx.cr0.eq) goto loc_822D1698;
	// li r8,256
	ctx.r8.s64 = 256;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r8,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x822d1698
	if (ctx.cr6.lt) goto loc_822D1698;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_822D1698:
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r25.s32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r11,r9,r24
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r24.s32);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r9,r9,r26
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x822d1714
	if (ctx.cr6.eq) goto loc_822D1714;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// b 0x822d1720
	goto loc_822D1720;
loc_822D1714:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_822D1720:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822DA140) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822DA148;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da160
	if (ctx.cr6.eq) goto loc_822DA160;
	// bl 0x822c5628
	ctx.lr = 0x822DA160;
	sub_822C5628(ctx, base);
loc_822DA160:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822da37c
	if (!ctx.cr0.eq) goto loc_822DA37C;
	// lwz r11,24200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da194
	if (ctx.cr6.eq) goto loc_822DA194;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24196(r31)
	REX_STORE_U32(r31.u32 + 24196, ctx.r11.u32);
	// lwsync 
	// lwz r10,24200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24200);
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r11,544(r10)
	REX_STORE_U64(ctx.r10.u32 + 544, ctx.r11.u64);
loc_822DA194:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da1a8
	if (ctx.cr6.eq) goto loc_822DA1A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5fd8
	ctx.lr = 0x822DA1A8;
	sub_822D5FD8(ctx, base);
loc_822DA1A8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da1bc
	if (ctx.cr6.eq) goto loc_822DA1BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5fd8
	ctx.lr = 0x822DA1BC;
	sub_822D5FD8(ctx, base);
loc_822DA1BC:
	// lwz r3,21848(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21848);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822da1d4
	if (ctx.cr6.eq) goto loc_822DA1D4;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x823f0350
	ctx.lr = 0x822DA1D0;
	sub_823F0350(ctx, base);
	// stw r30,21848(r31)
	REX_STORE_U32(r31.u32 + 21848, r30.u32);
loc_822DA1D4:
	// lwz r3,21844(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21844);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822da1f0
	if (ctx.cr6.eq) goto loc_822DA1F0;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823f0350
	ctx.lr = 0x822DA1E8;
	sub_823F0350(ctx, base);
	// stw r30,21844(r31)
	REX_STORE_U32(r31.u32 + 21844, r30.u32);
	// stw r30,21852(r31)
	REX_STORE_U32(r31.u32 + 21852, r30.u32);
loc_822DA1F0:
	// stw r30,21856(r31)
	REX_STORE_U32(r31.u32 + 21856, r30.u32);
	// bl 0x82793a84
	ctx.lr = 0x822DA1F8;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822da214
	if (ctx.cr6.eq) goto loc_822DA214;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e4ab0
	ctx.lr = 0x822DA208;
	sub_822E4AB0(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stb r30,-318(r10)
	REX_STORE_U8(ctx.r10.u32 + -318, r30.u8);
loc_822DA214:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1ae0
	ctx.lr = 0x822DA21C;
	sub_822E1AE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82793cd4
	ctx.lr = 0x822DA224;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d9d20
	ctx.lr = 0x822DA22C;
	sub_822D9D20(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,24200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24200);
	// bl 0x823f0350
	ctx.lr = 0x822DA238;
	sub_823F0350(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,24208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24208);
	// bl 0x823f0350
	ctx.lr = 0x822DA244;
	sub_823F0350(ctx, base);
	// stw r30,24200(r31)
	REX_STORE_U32(r31.u32 + 24200, r30.u32);
	// stw r30,24208(r31)
	REX_STORE_U32(r31.u32 + 24208, r30.u32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// std r30,24216(r31)
	REX_STORE_U64(r31.u32 + 24216, r30.u64);
	// stw r30,10952(r31)
	REX_STORE_U32(r31.u32 + 10952, r30.u32);
	// lwz r3,11976(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 11976);
	// bl 0x823f0350
	ctx.lr = 0x822DA260;
	sub_823F0350(ctx, base);
	// addi r29,r31,11388
	r29.s64 = r31.s64 + 11388;
	// li r28,6
	r28.s64 = 6;
loc_822DA268:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da284
	if (ctx.cr6.eq) goto loc_822DA284;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82793e24
	ctx.lr = 0x822DA284;
	__imp__KeSetEvent(ctx, base);
loc_822DA284:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bne 0x822da268
	if (!ctx.cr0.eq) goto loc_822DA268;
	// addi r29,r31,11404
	r29.s64 = r31.s64 + 11404;
	// li r28,6
	r28.s64 = 6;
loc_822DA298:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822da2b4
	if (ctx.cr6.eq) goto loc_822DA2B4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823eeb10
	ctx.lr = 0x822DA2AC;
	sub_823EEB10(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823ed360
	ctx.lr = 0x822DA2B4;
	sub_823ED360(ctx, base);
loc_822DA2B4:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bne 0x822da298
	if (!ctx.cr0.eq) goto loc_822DA298;
	// stw r30,10988(r31)
	REX_STORE_U32(r31.u32 + 10988, r30.u32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r30,10992(r31)
	REX_STORE_U32(r31.u32 + 10992, r30.u32);
	// lwz r3,13992(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13992);
	// bl 0x823f0350
	ctx.lr = 0x822DA2D4;
	sub_823F0350(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da2f0
	if (ctx.cr6.eq) goto loc_822DA2F0;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822da2f4
	goto loc_822DA2F4;
loc_822DA2F0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822DA2F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822da318
	if (ctx.cr6.eq) goto loc_822DA318;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// ble cr6,0x822da310
	if (!ctx.cr6.gt) goto loc_822DA310;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
loc_822DA310:
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
loc_822DA318:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82793db4
	ctx.lr = 0x822DA324;
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d61a8
	ctx.lr = 0x822DA330;
	sub_822D61A8(ctx, base);
	// bl 0x82793a84
	ctx.lr = 0x822DA334;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822da36c
	if (ctx.cr6.eq) goto loc_822DA36C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,-20920
	ctx.r3.s64 = ctx.r10.s64 + -20920;
	// lwz r11,2068(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// bl 0x82793df4
	ctx.lr = 0x822DA358;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-20904
	ctx.r3.s64 = ctx.r11.s64 + -20904;
	// bl 0x82793df4
	ctx.lr = 0x822DA368;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// b 0x822da378
	goto loc_822DA378;
loc_822DA36C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_822DA378:
	// bl 0x82793de4
	ctx.lr = 0x822DA37C;
	__imp__VdShutdownEngines(ctx, base);
loc_822DA37C:
	// lwz r3,16940(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822da390
	if (ctx.cr6.eq) goto loc_822DA390;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x823f0350
	ctx.lr = 0x822DA390;
	sub_823F0350(ctx, base);
loc_822DA390:
	// lwz r31,21784(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 21784);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822da3c0
	if (ctx.cr6.eq) goto loc_822DA3C0;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x822d9dd0
	ctx.lr = 0x822DA3A4;
	sub_822D9DD0(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823f0350
	ctx.lr = 0x822DA3B4;
	sub_823F0350(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x822DA3C0;
	sub_823F0350(ctx, base);
loc_822DA3C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822EB6E8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EB8F0) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x822EB8F8;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// addi r31,r29,188
	r31.s64 = r29.s64 + 188;
	// bl 0x821e9ec0
	ctx.lr = 0x822EB914;
	sub_821E9EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ed870
	ctx.lr = 0x822EB920;
	sub_822ED870(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,140(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f13,124(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lwz r11,200(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822eb980
	if (!ctx.cr6.gt) goto loc_822EB980;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
loc_822EB948:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822EB954;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EB96C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eb948
	if (ctx.cr6.lt) goto loc_822EB948;
loc_822EB980:
	// stfs f31,208(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 208, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822EF9C8) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822efa08
	if (!ctx.cr6.eq) goto loc_822EFA08;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822efa04
	if (ctx.cr6.eq) goto loc_822EFA04;
	// bl 0x826b49e0
	ctx.lr = 0x822EFA00;
	sub_826B49E0(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_822EFA04:
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
loc_822EFA08:
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

DEFINE_REX_FUNC(sub_822F1558) {
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
	ctx.lr = 0x822F1560;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r26
	r24.u64 = r26.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// bl 0x822f14e8
	ctx.lr = 0x822F1580;
	sub_822F14E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f15a0
	if (ctx.cr0.eq) goto loc_822F15A0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,18068
	ctx.r4.s64 = ctx.r11.s64 + 18068;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f3d58
	ctx.lr = 0x822F159C;
	sub_822F3D58(ctx, base);
	// b 0x822f192c
	goto loc_822F192C;
loc_822F15A0:
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,-7424
	ctx.r10.s64 = ctx.r10.s64 + -7424;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbzx r27,r11,r10
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x822f1634
	if (!ctx.cr6.eq) goto loc_822F1634;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f1634
	if (!ctx.cr0.eq) goto loc_822F1634;
	// lbz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10);
	// lbz r10,9(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 9);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822f1634
	if (!ctx.cr6.eq) goto loc_822F1634;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f1634
	if (!ctx.cr0.eq) goto loc_822F1634;
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822f1634
	if (!ctx.cr6.eq) goto loc_822F1634;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f162c
	if (ctx.cr6.eq) goto loc_822F162C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f1634
	if (!ctx.cr0.eq) goto loc_822F1634;
loc_822F162C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822f1638
	goto loc_822F1638;
loc_822F1634:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822F1638:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f1658
	if (ctx.cr0.eq) goto loc_822F1658;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,18072
	ctx.r4.s64 = ctx.r10.s64 + 18072;
loc_822F1648:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// b 0x822f1708
	goto loc_822F1708;
loc_822F1658:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,8,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1F;
	// cmplwi cr6,r10,29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 29, ctx.xer);
	// bne cr6,0x822f16d8
	if (!ctx.cr6.eq) goto loc_822F16D8;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm. r8,r8,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f16d8
	if (!ctx.cr0.eq) goto loc_822F16D8;
	// lbz r8,10(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 10);
	// lbz r7,9(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 9);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822f16d8
	if (!ctx.cr6.eq) goto loc_822F16D8;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm. r8,r8,0,1,1
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822f16d8
	if (!ctx.cr0.eq) goto loc_822F16D8;
	// lbz r8,6(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 6);
	// lbz r7,5(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 5);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822f16d8
	if (!ctx.cr6.eq) goto loc_822F16D8;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f16d0
	if (ctx.cr6.eq) goto loc_822F16D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f16d8
	if (!ctx.cr0.eq) goto loc_822F16D8;
loc_822F16D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822f16dc
	goto loc_822F16DC;
loc_822F16D8:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822F16DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f16f0
	if (ctx.cr0.eq) goto loc_822F16F0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,18076
	ctx.r4.s64 = ctx.r10.s64 + 18076;
	// b 0x822f1648
	goto loc_822F1648;
loc_822F16F0:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822F1708:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f3d58
	ctx.lr = 0x822F1710;
	sub_822F3D58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r9,r11,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x822f0cc0
	ctx.lr = 0x822F1734;
	sub_822F0CC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,9192
	r29.s64 = ctx.r11.s64 + 9192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1748;
	sub_822F3C00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f1768
	if (!ctx.cr0.eq) goto loc_822F1768;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f1768
	if (!ctx.cr0.eq) goto loc_822F1768;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f1768
	if (ctx.cr0.eq) goto loc_822F1768;
	// li r24,1
	r24.s64 = 1;
loc_822F1768:
	// li r28,4
	r28.s64 = 4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x822f17e4
	if (ctx.cr6.lt) goto loc_822F17E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	r25.u64 = ctx.r10.u32 & 0x1;
	// bne 0x822f17ac
	if (!ctx.cr0.eq) goto loc_822F17AC;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x822f17ac
	if (ctx.cr6.eq) goto loc_822F17AC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 9);
	// bl 0x822f1308
	ctx.lr = 0x822F17A8;
	sub_822F1308(ctx, base);
	// b 0x822f17e4
	goto loc_822F17E4;
loc_822F17AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stb r26,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r26.u8);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x822f1038
	ctx.lr = 0x822F17E4;
	sub_822F1038(ctx, base);
loc_822F17E4:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// blt cr6,0x822f1888
	if (ctx.cr6.lt) goto loc_822F1888;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f1804
	if (!ctx.cr0.eq) goto loc_822F1804;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x822f1804
	if (!ctx.cr6.eq) goto loc_822F1804;
	// li r25,2
	r25.s64 = 2;
loc_822F1804:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1810;
	sub_822F3C00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f1840
	if (!ctx.cr0.eq) goto loc_822F1840;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x822f1840
	if (ctx.cr6.eq) goto loc_822F1840;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 10);
	// bl 0x822f1308
	ctx.lr = 0x822F183C;
	sub_822F1308(ctx, base);
	// b 0x822f1888
	goto loc_822F1888;
loc_822F1840:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x822f1854
	if (ctx.cr6.eq) goto loc_822F1854;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_822F1854:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stb r26,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r26.u8);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x822f1038
	ctx.lr = 0x822F1888;
	sub_822F1038(ctx, base);
loc_822F1888:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// blt cr6,0x822f192c
	if (ctx.cr6.lt) goto loc_822F192C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f18a8
	if (!ctx.cr0.eq) goto loc_822F18A8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x822f18a8
	if (!ctx.cr6.eq) goto loc_822F18A8;
	// li r25,3
	r25.s64 = 3;
loc_822F18A8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F18B4;
	sub_822F3C00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f18e4
	if (!ctx.cr0.eq) goto loc_822F18E4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x822f18e4
	if (ctx.cr6.eq) goto loc_822F18E4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x822f1308
	ctx.lr = 0x822F18E0;
	sub_822F1308(ctx, base);
	// b 0x822f192c
	goto loc_822F192C;
loc_822F18E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(r25.s32, 3, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x822f18f8
	if (ctx.cr6.eq) goto loc_822F18F8;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_822F18F8:
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r26,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r26.u8);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x822f1038
	ctx.lr = 0x822F192C;
	sub_822F1038(ctx, base);
loc_822F192C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82310098) {
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
	ctx.lr = 0x823100A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823101c4
	if (ctx.cr6.eq) goto loc_823101C4;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823100C0:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x823100d4
	if (!ctx.cr6.eq) goto loc_823100D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823100D4:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823101c4
	if (ctx.cr6.eq) goto loc_823101C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// bne cr6,0x823100ec
	if (!ctx.cr6.eq) goto loc_823100EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823100EC:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82331668
	ctx.lr = 0x823100F8;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82310108
	if (ctx.cr0.eq) goto loc_82310108;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x823100c0
	goto loc_823100C0;
loc_82310108:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// bne cr6,0x82310118
	if (!ctx.cr6.eq) goto loc_82310118;
	// li r29,0
	r29.s64 = 0;
loc_82310118:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823101c4
	if (ctx.cr6.eq) goto loc_823101C4;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231016c
	if (ctx.cr0.eq) goto loc_8231016C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231021c
	if (!ctx.cr0.eq) goto loc_8231021C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82310164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231021c
	if (!ctx.cr0.eq) goto loc_8231021C;
loc_8231016C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82310218
	if (ctx.cr6.eq) goto loc_82310218;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8231017C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82310190
	if (!ctx.cr6.eq) goto loc_82310190;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82310190:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82310218
	if (ctx.cr6.eq) goto loc_82310218;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// bne cr6,0x823101a8
	if (!ctx.cr6.eq) goto loc_823101A8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823101A8:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82310098
	ctx.lr = 0x823101B8;
	sub_82310098(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8231017c
	if (ctx.cr0.eq) goto loc_8231017C;
	// b 0x8231021c
	goto loc_8231021C;
loc_823101C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230f198
	ctx.lr = 0x823101CC;
	sub_8230F198(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x8230ff30
	ctx.lr = 0x82310204;
	sub_8230FF30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231021c
	if (!ctx.cr0.eq) goto loc_8231021C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8230efe0
	ctx.lr = 0x82310218;
	sub_8230EFE0(ctx, base);
loc_82310218:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231021C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823184A8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318504
	if (ctx.cr6.eq) goto loc_82318504;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x823184E4;
	sub_82331A00(ctx, base);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823184FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318508
	if (!ctx.cr0.eq) goto loc_82318508;
loc_82318504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318508:
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

DEFINE_REX_FUNC(sub_8231BE90) {
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
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lwz r3,-10764(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231bee8
	if (ctx.cr6.eq) goto loc_8231BEE8;
	// bl 0x8231bd58
	ctx.lr = 0x8231BEB4;
	sub_8231BD58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231beec
	if (!ctx.cr0.eq) goto loc_8231BEEC;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,-10764(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -10764);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,6576
	ctx.r5.s64 = ctx.r10.s64 + 6576;
	// li r6,2321
	ctx.r6.s64 = 2321;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231BEE0;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-10764(r31)
	REX_STORE_U32(r31.u32 + -10764, ctx.r11.u32);
loc_8231BEE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231BEEC:
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

DEFINE_REX_FUNC(sub_823205A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// b 0x823124a8
	sub_823124A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82320628) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r6,r11,200
	ctx.r6.s64 = ctx.r11.s64 + 200;
	// addi r5,r11,188
	ctx.r5.s64 = ctx.r11.s64 + 188;
	// lfs f0,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82312998
	ctx.lr = 0x8232067C;
	sub_82312998(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82325828) {
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
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// b 0x82325868
	goto loc_82325868;
loc_82325848:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82325858
	if (!ctx.cr6.eq) goto loc_82325858;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82325858:
	// bl 0x822ffc00
	ctx.lr = 0x8232585C;
	sub_822FFC00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82325874
	if (!ctx.cr0.eq) goto loc_82325874;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82325868:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82325848
	if (!ctx.cr6.eq) goto loc_82325848;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82325874:
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

DEFINE_REX_FUNC(sub_82329010) {
	REX_FUNC_PROLOGUE();
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82329044
	if (ctx.cr6.eq) goto loc_82329044;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
loc_82329024:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82329044
	if (ctx.cr6.eq) goto loc_82329044;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82329024
	if (ctx.cr6.lt) goto loc_82329024;
loc_82329044:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_82329060:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82329060
	if (ctx.cr6.lt) goto loc_82329060;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232C620) {
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
	ctx.lr = 0x8232C628;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,28(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,8268
	r30.s64 = ctx.r11.s64 + 8268;
	// beq cr6,0x8232c660
	if (ctx.cr6.eq) goto loc_8232C660;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,187
	ctx.r6.s64 = 187;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232C660;
	sub_82330D00(ctx, base);
loc_8232C660:
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// addi r28,r27,48
	r28.s64 = r27.s64 + 48;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8232c6d4
	if (ctx.cr6.eq) goto loc_8232C6D4;
loc_8232C670:
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232c6c8
	if (!ctx.cr0.eq) goto loc_8232C6C8;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,202
	ctx.r6.s64 = 202;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232C6C8;
	sub_82330D00(ctx, base);
loc_8232C6C8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x8232c670
	if (!ctx.cr6.eq) goto loc_8232C670;
loc_8232C6D4:
	// lwz r4,60(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232c6f8
	if (ctx.cr6.eq) goto loc_8232C6F8;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,208
	ctx.r6.s64 = 208;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232C6F8;
	sub_82330D00(ctx, base);
loc_8232C6F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823307C8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82330878
	if (!ctx.cr6.gt) goto loc_82330878;
loc_823307E4:
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82330878
	if (!ctx.cr6.lt) goto loc_82330878;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82330878
	if (!ctx.cr6.lt) goto loc_82330878;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8233082c
	if (!ctx.cr6.eq) goto loc_8233082C;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82330824
	if (!ctx.cr6.eq) goto loc_82330824;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8233082c
	if (ctx.cr6.eq) goto loc_8233082C;
loc_82330824:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82330830
	goto loc_82330830;
loc_8233082C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82330830:
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82330854
	if (!ctx.cr6.eq) goto loc_82330854;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82330854
	if (!ctx.cr6.eq) goto loc_82330854;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// b 0x82330870
	goto loc_82330870;
loc_82330854:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r4,29
	ctx.r10.u64 = ctx.r4.u32 & 0x7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82330870
	if (!ctx.cr6.eq) goto loc_82330870;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82330870:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823307e4
	if (ctx.cr6.lt) goto loc_823307E4;
loc_82330878:
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// subf r3,r6,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r6.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233E998) {
	REX_FUNC_PROLOGUE();
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233EA40) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8234aac0
	ctx.lr = 0x8233EA54;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ea64
	if (!ctx.cr6.eq) goto loc_8233EA64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82350470
	ctx.lr = 0x8233EA64;
	sub_82350470(ctx, base);
loc_8233EA64:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233F070) {
	REX_FUNC_PROLOGUE();
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f29.u64);
	// stfd f30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x8234aac0
	ctx.lr = 0x8233F09C;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f0b8
	if (!ctx.cr6.eq) goto loc_8233F0B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8234ce40
	ctx.lr = 0x8233F0B8;
	sub_8234CE40(ctx, base);
loc_8233F0B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82341080) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82341090
	if (ctx.cr6.eq) goto loc_82341090;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82341090:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82341770) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82341778;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r11,1164
	ctx.r10.s64 = ctx.r11.s64 + 1164;
	// lwz r31,1164(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1164);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82341840
	if (ctx.cr6.eq) goto loc_82341840;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e7e0
	ctx.lr = 0x823417A4;
	sub_8233E7E0(ctx, base);
	// lwz r4,332(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r11,r31,332
	ctx.r11.s64 = r31.s64 + 332;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82341828
	if (ctx.cr6.eq) goto loc_82341828;
loc_823417B4:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x823417e4
	if (ctx.cr6.eq) goto loc_823417E4;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823417b4
	if (!ctx.cr6.eq) goto loc_823417B4;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e820
	ctx.lr = 0x823417D8;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823417E4:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r8,9336
	ctx.r5.s64 = ctx.r8.s64 + 9336;
	// li r6,190
	ctx.r6.s64 = 190;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r4,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r4,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82341828;
	sub_82330D00(ctx, base);
loc_82341828:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r3,56(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8233e820
	ctx.lr = 0x82341834;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82341840:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8234ACC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8234ACD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r3,76
	r29.s64 = ctx.r3.s64 + 76;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234ACF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234ad5c
	if (ctx.cr6.eq) goto loc_8234AD5C;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8234ad40
	if (ctx.cr6.eq) goto loc_8234AD40;
	// lwz r10,124(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 124);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234ad40
	if (!ctx.cr6.gt) goto loc_8234AD40;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// addi r10,r7,124
	ctx.r10.s64 = ctx.r7.s64 + 124;
loc_8234AD28:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,124(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 124);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8234ad28
	if (ctx.cr6.lt) goto loc_8234AD28;
loc_8234AD40:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8234ada8
	if (ctx.cr6.eq) goto loc_8234ADA8;
	// lwz r11,124(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 124);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8234AD5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8234ad94
	if (ctx.cr6.eq) goto loc_8234AD94;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234ad94
	if (!ctx.cr6.gt) goto loc_8234AD94;
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
loc_8234AD7C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8234ad7c
	if (ctx.cr6.lt) goto loc_8234AD7C;
loc_8234AD94:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8234ada8
	if (ctx.cr6.eq) goto loc_8234ADA8;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8234ADA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82351018) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82351028
	if (!ctx.cr6.eq) goto loc_82351028;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_82351028:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82351038
	if (!ctx.cr6.eq) goto loc_82351038;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82351038:
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823514E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823514F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82351510
	if (!ctx.cr6.eq) goto loc_82351510;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82351510:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82351564
	if (ctx.cr6.eq) goto loc_82351564;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82351530
	if (!ctx.cr6.eq) goto loc_82351530;
	// li r31,0
	r31.s64 = 0;
loc_82351530:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82351564
	if (ctx.cr6.eq) goto loc_82351564;
loc_82351538:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823514e8
	ctx.lr = 0x82351544;
	sub_823514E8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82351558
	if (!ctx.cr6.eq) goto loc_82351558;
	// li r31,0
	r31.s64 = 0;
loc_82351558:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82351538
	if (!ctx.cr6.eq) goto loc_82351538;
loc_82351564:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r30,r30,44
	r30.s64 = r30.s64 + 44;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x8235158c
	if (ctx.cr6.eq) goto loc_8235158C;
loc_82351574:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8234d050
	ctx.lr = 0x82351580;
	sub_8234D050(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82351574
	if (!ctx.cr6.eq) goto loc_82351574;
loc_8235158C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82354BC8) {
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
	// beq cr6,0x82354c04
	if (ctx.cr6.eq) goto loc_82354C04;
	// lbz r11,1224(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354c20
	if (!ctx.cr6.eq) goto loc_82354C20;
	// bl 0x823a94b8
	ctx.lr = 0x82354BF4;
	sub_823A94B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354c24
	if (!ctx.cr6.eq) goto loc_82354C24;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82354c1c
	goto loc_82354C1C;
loc_82354C04:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a94b8
	ctx.lr = 0x82354C10;
	sub_823A94B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354c24
	if (!ctx.cr6.eq) goto loc_82354C24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354C1C:
	// stb r11,1224(r31)
	REX_STORE_U8(r31.u32 + 1224, ctx.r11.u8);
loc_82354C20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354C24:
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

DEFINE_REX_FUNC(sub_82356898) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823568a8
	if (!ctx.cr6.eq) goto loc_823568A8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_823568A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,412
	ctx.r10.s64 = ctx.r3.s64 + 412;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bne cr6,0x823568c8
	if (!ctx.cr6.eq) goto loc_823568C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823568C8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823568f8
	if (ctx.cr6.eq) goto loc_823568F8;
loc_823568D0:
	// lwz r9,76(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82356900
	if (ctx.cr6.eq) goto loc_82356900;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bne cr6,0x823568f0
	if (!ctx.cr6.eq) goto loc_823568F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823568F0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823568d0
	if (!ctx.cr6.eq) goto loc_823568D0;
loc_823568F8:
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
loc_82356900:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82359CB8) {
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
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359cf0
	if (ctx.cr6.eq) goto loc_82359CF0;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// addi r9,r10,-25864
	ctx.r9.s64 = ctx.r10.s64 + -25864;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82359CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82359CF0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x8233e770
	ctx.lr = 0x82359CFC;
	sub_8233E770(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,10492
	ctx.r5.s64 = ctx.r10.s64 + 10492;
	// li r6,101
	ctx.r6.s64 = 101;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82359D20;
	sub_82330D00(ctx, base);
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

DEFINE_REX_FUNC(sub_8235D938) {
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
	ctx.lr = 0x8235D940;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r27,4356(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bne cr6,0x8235d970
	if (!ctx.cr6.eq) goto loc_8235D970;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8235D970:
	// clrlwi r28,r5,24
	r28.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8235d988
	if (ctx.cr6.eq) goto loc_8235D988;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8235D984;
	sub_8233E7E0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
loc_8235D988:
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// addi r9,r29,1572
	ctx.r9.s64 = r29.s64 + 1572;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	REX_STORE_U32(r31.u32 + 140, r30.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r5,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r5.u32);
	// stw r5,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// stw r30,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r30.u32);
	// lwz r6,1572(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 1572);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r7,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// beq cr6,0x8235da48
	if (ctx.cr6.eq) goto loc_8235DA48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235DA44;
	sub_8233E820(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_8235DA48:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235da5c
	if (ctx.cr6.eq) goto loc_8235DA5C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8233e820
	ctx.lr = 0x8235DA5C;
	sub_8233E820(ctx, base);
loc_8235DA5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82364A40) {
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
	// addi r31,r11,2912
	r31.s64 = ctx.r11.s64 + 2912;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82364A68;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,12276
	ctx.r4.s64 = ctx.r10.s64 + 12276;
	// bl 0x82331480
	ctx.lr = 0x82364A78;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r3,-32202
	ctx.r3.s64 = -2110390272;
	// addi r9,r11,2672
	ctx.r9.s64 = ctx.r11.s64 + 2672;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// addi r10,r10,18640
	ctx.r10.s64 = ctx.r10.s64 + 18640;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// addi r9,r3,18664
	ctx.r9.s64 = ctx.r3.s64 + 18664;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r4,-32202
	ctx.r4.s64 = -2110390272;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r5,-32202
	ctx.r5.s64 = -2110390272;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// addi r11,r4,18688
	ctx.r11.s64 = ctx.r4.s64 + 18688;
	// addi r10,r5,18808
	ctx.r10.s64 = ctx.r5.s64 + 18808;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r6,-32202
	ctx.r6.s64 = -2110390272;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r11,r6,18832
	ctx.r11.s64 = ctx.r6.s64 + 18832;
	// addi r10,r7,18856
	ctx.r10.s64 = ctx.r7.s64 + 18856;
	// addi r9,r8,18880
	ctx.r9.s64 = ctx.r8.s64 + 18880;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,384
	ctx.r9.s64 = 384;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_8236C5A0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236c5b0
	if (!ctx.cr6.eq) goto loc_8236C5B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236C5B0:
	// b 0x8236be08
	sub_8236BE08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236CA40) {
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
	ctx.lr = 0x8236CA48;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f13,312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x8236d09c
	if (ctx.cr6.eq) goto loc_8236D09C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8236caa0
	if (!ctx.cr6.eq) goto loc_8236CAA0;
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x8236CA94;
	sub_823EF2F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1ce0
	return;
loc_8236CAA0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8236d09c
	if (ctx.cr6.eq) goto loc_8236D09C;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r22,0
	r22.s64 = 0;
	// lfs f8,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f8.f64 = double(temp.f32);
	// lis r31,0
	r31.s64 = 0;
	// lfs f9,3712(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3712);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,10520(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 10520);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r23,r7,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,3704(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// mr r25,r22
	r25.u64 = r22.u64;
	// lfs f13,15504(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15504);
	ctx.f13.f64 = double(temp.f32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r27,r3,8
	r27.s64 = ctx.r3.s64 + 8;
	// ori r21,r31,32857
	r21.u64 = r31.u64 | 32857;
loc_8236CAF0:
	// lfs f0,344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,340(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// fctidz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,332(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r5,r6
	ctx.r9.u64 = uint32_t(ctx.r6.u32 ? ctx.r5.u32 / ctx.r6.u32 : 0);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// fsubs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// subf r6,r8,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r8.u64;
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// addi r30,r6,1
	r30.s64 = ctx.r6.s64 + 1;
	// blt cr6,0x8236ce78
	if (ctx.cr6.lt) goto loc_8236CE78;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// subf r28,r4,r3
	r28.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8236CB64:
	// lhz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// lfs f10,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// and r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 & r31.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8236cb80
	if (!ctx.cr6.eq) goto loc_8236CB80;
	// stfsx f10,r28,r9
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r28.u32 + ctx.r9.u32, temp.u32);
	// b 0x8236cc18
	goto loc_8236CC18;
loc_8236CB80:
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r29,328(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lwz r20,340(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// fmuls f5,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f4,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f2,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// add r19,r5,r10
	r19.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r5,r30,r7
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// fctiwz f1,f5
	ctx.f1.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r5,r10
	r18.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r5,r7,r20
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(r20.s32);
	// lhzx r20,r19,r29
	r20.u64 = REX_LOAD_U16(r19.u32 + r29.u32);
	// lhz r19,86(r1)
	r19.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r20,r20
	r20.s64 = r20.s16;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// std r20,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r20.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r20,r18,r29
	r20.u64 = REX_LOAD_U16(r18.u32 + r29.u32);
	// sthx r19,r5,r29
	REX_STORE_U16(ctx.r5.u32 + r29.u32, r19.u16);
	// extsh r20,r20
	r20.s64 = r20.s16;
	// std r20,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r20.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f6,f1,f6,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f5,f6,f2,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfsx f5,r28,r9
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r28.u32 + ctx.r9.u32, temp.u32);
loc_8236CC18:
	// lhz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// rotlwi r29,r31,1
	r29.u64 = __builtin_rotateleft32(r31.u32, 1);
	// lfs f10,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// and r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 & r29.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8236cc38
	if (!ctx.cr6.eq) goto loc_8236CC38;
	// stfs f10,-4(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// b 0x8236ccdc
	goto loc_8236CCDC;
loc_8236CC38:
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r20,328(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// fmuls f5,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f4,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lwz r19,340(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// fsubs f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f2,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r31,r30,r7
	r31.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// fctiwz f1,f5
	ctx.f1.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r18,r5,1
	r18.s64 = ctx.r5.s64 + 1;
	// add r5,r31,r10
	ctx.r5.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r31,r18,1,0,30
	r31.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r5,1
	r18.s64 = ctx.r5.s64 + 1;
	// mullw r5,r7,r19
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(r19.s32);
	// lhzx r31,r31,r20
	r31.u64 = REX_LOAD_U16(r31.u32 + r20.u32);
	// lhz r19,86(r1)
	r19.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// std r31,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r31.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lhzx r18,r18,r20
	r18.u64 = REX_LOAD_U16(r18.u32 + r20.u32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r18
	r31.s64 = r18.s16;
	// std r31,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r31.u64);
	// lfd f1,120(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// sthx r19,r5,r20
	REX_STORE_U16(ctx.r5.u32 + r20.u32, r19.u16);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f6,f4,f6,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f5,f6,f2,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f5,-4(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + -4, temp.u32);
loc_8236CCDC:
	// lhz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// rotlwi r29,r29,1
	r29.u64 = __builtin_rotateleft32(r29.u32, 1);
	// lfs f10,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// and r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 & r29.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8236ccfc
	if (!ctx.cr6.eq) goto loc_8236CCFC;
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// b 0x8236cda0
	goto loc_8236CDA0;
loc_8236CCFC:
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r20,328(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// fmuls f5,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f4,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lwz r19,340(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// fsubs f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f2,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// add r31,r5,r10
	r31.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r5,r30,r7
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// fctiwz f1,f5
	ctx.f1.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r5,2
	r18.s64 = ctx.r5.s64 + 2;
	// mullw r5,r7,r19
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(r19.s32);
	// lhzx r31,r31,r20
	r31.u64 = REX_LOAD_U16(r31.u32 + r20.u32);
	// lhz r19,86(r1)
	r19.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// std r31,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r31.u64);
	// lfd f10,128(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f10
	ctx.f1.f64 = double(ctx.f10.s64);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// lhzx r31,r18,r20
	r31.u64 = REX_LOAD_U16(r18.u32 + r20.u32);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// std r31,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, r31.u64);
	// lfd f5,136(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// sthx r19,r5,r20
	REX_STORE_U16(ctx.r5.u32 + r20.u32, r19.u16);
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f6,f1,f6,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f5,f6,f2,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f5,0(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_8236CDA0:
	// lhz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// rotlwi r29,r29,1
	r29.u64 = __builtin_rotateleft32(r29.u32, 1);
	// lfs f10,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// and r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 & r29.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8236cdc0
	if (!ctx.cr6.eq) goto loc_8236CDC0;
	// stfs f10,4(r8)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// b 0x8236ce64
	goto loc_8236CE64;
loc_8236CDC0:
	// mullw r5,r30,r7
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// lwz r20,328(r11)
	r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// fmuls f5,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f4,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lwz r19,340(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// fsubs f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f2,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mullw r31,r6,r7
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// fctiwz f1,f5
	ctx.f1.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// addi r18,r5,3
	r18.s64 = ctx.r5.s64 + 3;
	// add r5,r31,r10
	ctx.r5.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r31,r18,1,0,30
	r31.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r5,3
	r18.s64 = ctx.r5.s64 + 3;
	// mullw r5,r7,r19
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(r19.s32);
	// lhzx r31,r31,r20
	r31.u64 = REX_LOAD_U16(r31.u32 + r20.u32);
	// lhz r19,86(r1)
	r19.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// std r31,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, r31.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lhzx r31,r18,r20
	r31.u64 = REX_LOAD_U16(r18.u32 + r20.u32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// std r31,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, r31.u64);
	// lfd f1,152(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// sthx r19,r5,r20
	REX_STORE_U16(ctx.r5.u32 + r20.u32, r19.u16);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f6,f1,f6,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f5,f6,f2,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
loc_8236CE64:
	// rotlwi r31,r29,1
	r31.u64 = __builtin_rotateleft32(r29.u32, 1);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x8236cb64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236CB64;
loc_8236CE78:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8236cf5c
	if (!ctx.cr6.lt) goto loc_8236CF5C;
	// add r9,r25,r10
	ctx.r9.u64 = r25.u64 + ctx.r10.u64;
	// subf r8,r10,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r4,r3
	ctx.r5.u64 = ctx.r3.u64 - ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8236CE98:
	// lhz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// lfs f10,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// and r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 & r31.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8236ceb4
	if (!ctx.cr6.eq) goto loc_8236CEB4;
	// stfsx f10,r9,r5
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
	// b 0x8236cf4c
	goto loc_8236CF4C;
loc_8236CEB4:
	// mullw r8,r6,r7
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwz r29,328(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lwz r28,340(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// fmuls f5,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f4,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f2,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f2.f64 = double(temp.f32);
	// add r20,r8,r10
	r20.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r30,r7
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(ctx.r7.s32);
	// fctiwz f1,f5
	ctx.f1.s64 = std::isnan(ctx.f5.f64) ? int64_t(0x80000000U) : (ctx.f5.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r8,r10
	r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r7,r28
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(r28.s32);
	// lhzx r28,r20,r29
	r28.u64 = REX_LOAD_U16(r20.u32 + r29.u32);
	// lhz r20,86(r1)
	r20.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r28,r28
	r28.s64 = r28.s16;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// std r28,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, r28.u64);
	// lfd f4,168(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r19,r29
	r28.u64 = REX_LOAD_U16(r19.u32 + r29.u32);
	// extsh r28,r28
	r28.s64 = r28.s16;
	// std r28,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, r28.u64);
	// sthx r20,r8,r29
	REX_STORE_U16(ctx.r8.u32 + r29.u32, r20.u16);
	// lfd f10,160(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// fcfid f10,f4
	ctx.f10.f64 = double(ctx.f4.s64);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f6,f10,f6,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f1.f64)));
	// fmadds f5,f6,f2,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfsx f5,r9,r5
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, temp.u32);
loc_8236CF4C:
	// rotlwi r31,r31,1
	r31.u64 = __builtin_rotateleft32(r31.u32, 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8236ce98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236CE98;
loc_8236CF5C:
	// lwz r10,340(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8236cfa4
	if (!ctx.cr6.eq) goto loc_8236CFA4;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8236cfa4
	if (!ctx.cr6.gt) goto loc_8236CFA4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8236CF7C:
	// lwz r8,332(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r6,328(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// lhzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r10.u32);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sthx r5,r8,r6
	REX_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r5.u16);
	// bdnz 0x8236cf7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236CF7C;
loc_8236CFA4:
	// lwz r10,340(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// lwz r8,332(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,340(r11)
	REX_STORE_U32(ctx.r11.u32 + 340, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8236cfc0
	if (ctx.cr6.lt) goto loc_8236CFC0;
	// stw r22,340(r11)
	REX_STORE_U32(ctx.r11.u32 + 340, r22.u32);
loc_8236CFC0:
	// lfs f10,348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8236cfe4
	if (!ctx.cr6.lt) goto loc_8236CFE4;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
loc_8236CFE4:
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// srawi r9,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 13;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x8236d050
	if (ctx.cr6.gt) goto loc_8236D050;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236d018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236D018;
	// bdzf 4*cr6+eq,0x8236d02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236D02C;
	// bne cr6,0x8236d040
	if (!ctx.cr6.eq) goto loc_8236D040;
	// addi r10,r10,90
	ctx.r10.s64 = ctx.r10.s64 + 90;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8236d054
	goto loc_8236D054;
loc_8236D018:
	// subfic r10,r10,16473
	ctx.xer.ca = ctx.r10.u32 <= 16473;
	ctx.r10.u64 = static_cast<uint64_t>(16473) - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8236d054
	goto loc_8236D054;
loc_8236D02C:
	// addi r10,r10,-16294
	ctx.r10.s64 = ctx.r10.s64 + -16294;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8236d054
	goto loc_8236D054;
loc_8236D040:
	// subf r10,r10,r21
	ctx.r10.u64 = r21.u64 - ctx.r10.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8236d054
	goto loc_8236D054;
loc_8236D050:
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
loc_8236D054:
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f6,352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 352);
	ctx.f6.f64 = double(temp.f32);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,348(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 348, temp.u32);
	// add r25,r25,r7
	r25.u64 = r25.u64 + ctx.r7.u64;
	// std r9,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r9.u64);
	// lfd f4,176(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// add r27,r23,r27
	r27.u64 = r23.u64 + r27.u64;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// add r26,r23,r26
	r26.u64 = r23.u64 + r26.u64;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f0,344(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 344, temp.u32);
	// bne 0x8236caf0
	if (!ctx.cr0.eq) goto loc_8236CAF0;
loc_8236D09C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_823B2658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823B2660;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8264ce50
	ctx.lr = 0x823B2684;
	sub_8264CE50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823b269c
	if (!ctx.cr6.eq) goto loc_823B269C;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_823B269C:
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ce78
	ctx.lr = 0x823B26B0;
	sub_8264CE78(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823b26c4
	if (!ctx.cr6.eq) goto loc_823B26C4;
loc_823B26B8:
	// li r3,53
	ctx.r3.s64 = 53;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_823B26C4:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x823B26D4;
	sub_823EF5F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r30.u16);
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ceb0
	ctx.lr = 0x823B26F8;
	sub_8264CEB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823b26b8
	if (ctx.cr6.eq) goto loc_823B26B8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264cec8
	ctx.lr = 0x823B270C;
	sub_8264CEC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823b26b8
	if (ctx.cr6.eq) goto loc_823B26B8;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823BE1D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10524(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BE248) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x823be088
	sub_823BE088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823BF0D0) {
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
	// bl 0x826a1cac
	ctx.lr = 0x823BF0D8;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// blt cr6,0x823bf574
	if (ctx.cr6.lt) goto loc_823BF574;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,30464
	ctx.r10.u64 = ctx.r11.u64 | 30464;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823bf574
	if (ctx.cr6.gt) goto loc_823BF574;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823bf564
	if (ctx.cr6.lt) goto loc_823BF564;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgt cr6,0x823bf564
	if (ctx.cr6.gt) goto loc_823BF564;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// blt cr6,0x823bf554
	if (ctx.cr6.lt) goto loc_823BF554;
	// cmpwi cr6,r5,1024
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1024, ctx.xer);
	// bgt cr6,0x823bf554
	if (ctx.cr6.gt) goto loc_823BF554;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823bf554
	if (!ctx.cr0.eq) goto loc_823BF554;
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r27,r11,-31680
	r27.s64 = ctx.r11.s64 + -31680;
	// andc r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r3,112
	ctx.r3.s64 = 112;
	// divw r26,r9,r8
	r26.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x82331180
	ctx.lr = 0x823BF17C;
	sub_82331180(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lis r11,32458
	ctx.r11.s64 = 2127167488;
	// stw r28,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// addi r5,r3,20
	ctx.r5.s64 = ctx.r3.s64 + 20;
	// ori r10,r11,4257
	ctx.r10.u64 = ctx.r11.u64 | 4257;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823be668
	ctx.lr = 0x823BF1B0;
	sub_823BE668(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823be940
	ctx.lr = 0x823BF1C8;
	sub_823BE940(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r30,640
	ctx.cr6.compare<int32_t>(r30.s32, 640, ctx.xer);
	// lfs f0,19812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19812);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// ble cr6,0x823bf204
	if (!ctx.cr6.gt) goto loc_823BF204;
	// srawi r11,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	ctx.r11.s64 = r30.s32 >> 4;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r8,r9,r30
	ctx.r8.u64 = r30.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823bf204
	if (!ctx.cr0.eq) goto loc_823BF204;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823bf304
	goto loc_823BF304;
loc_823BF204:
	// cmpwi cr6,r30,384
	ctx.cr6.compare<int32_t>(r30.s32, 384, ctx.xer);
	// ble cr6,0x823bf25c
	if (!ctx.cr6.gt) goto loc_823BF25C;
	// srawi r11,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r11.s64 = r30.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r8,r9,r30
	ctx.r8.u64 = r30.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823bf228
	if (!ctx.cr0.eq) goto loc_823BF228;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823bf304
	goto loc_823BF304;
loc_823BF228:
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// ori r10,r11,26215
	ctx.r10.u64 = ctx.r11.u64 | 26215;
	// mulhw r9,r30,r10
	ctx.r9.s64 = (int64_t(r30.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r6,r7,r30
	ctx.r6.u64 = r30.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x823bf25c
	if (!ctx.cr0.eq) goto loc_823BF25C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x823bf304
	goto loc_823BF304;
loc_823BF25C:
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// ori r11,r11,43691
	ctx.r11.u64 = ctx.r11.u64 | 43691;
	// ble cr6,0x823bf2b0
	if (!ctx.cr6.gt) goto loc_823BF2B0;
	// mulhw r10,r30,r11
	ctx.r10.s64 = (int64_t(r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r9,r30
	ctx.r8.u64 = r30.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823bf294
	if (!ctx.cr0.eq) goto loc_823BF294;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823bf304
	goto loc_823BF304;
loc_823BF294:
	// srawi r10,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r10.s64 = r30.s32 >> 3;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r7,r8,r30
	ctx.r7.u64 = r30.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x823bf2b0
	if (!ctx.cr0.eq) goto loc_823BF2B0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x823bf304
	goto loc_823BF304;
loc_823BF2B0:
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// ble cr6,0x823bf2d4
	if (!ctx.cr6.gt) goto loc_823BF2D4;
	// srawi r10,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r10.s64 = r30.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r7,r8,r30
	ctx.r7.u64 = r30.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x823bf2d4
	if (!ctx.cr0.eq) goto loc_823BF2D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823bf304
	goto loc_823BF304;
loc_823BF2D4:
	// cmpwi cr6,r30,128
	ctx.cr6.compare<int32_t>(r30.s32, 128, ctx.xer);
	// ble cr6,0x823bf300
	if (!ctx.cr6.gt) goto loc_823BF300;
	// mulhw r11,r30,r11
	ctx.r11.s64 = (int64_t(r30.s32) * int64_t(ctx.r11.s32)) >> 32;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,3
	ctx.r11.s64 = 3;
	// subf. r9,r10,r30
	ctx.r9.u64 = r30.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823bf304
	if (ctx.cr0.eq) goto loc_823BF304;
loc_823BF300:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823BF304:
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823bf338
	if (!ctx.cr6.gt) goto loc_823BF338;
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 1);
	// divw r9,r30,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(r30.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r30.s32 / ctx.r11.s32 : 0);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// b 0x823bf344
	goto loc_823BF344;
loc_823BF338:
	// srawi r11,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r11.s64 = r30.s32 >> 1;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_823BF344:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823beb90
	ctx.lr = 0x823BF350;
	sub_823BEB90(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82331180
	ctx.lr = 0x823BF370;
	sub_82331180(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823bf41c
	if (!ctx.cr6.gt) goto loc_823BF41C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// lfd f31,-31280(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -31280);
	// lfd f30,32424(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
loc_823BF3A0:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// fadd f29,f13,f30
	f29.f64 = ctx.f13.f64 + f30.f64;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f10,f29,f31
	ctx.f10.f64 = f29.f64 * f31.f64;
	// fdiv f1,f10,f11
	ctx.f1.f64 = ctx.f10.f64 / ctx.f11.f64;
	// bl 0x826a14e0
	ctx.lr = 0x823BF3D4;
	sub_826A14E0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// fmul f9,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f29.f64 * f31.f64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fdiv f1,f9,f7
	ctx.f1.f64 = ctx.f9.f64 / ctx.f7.f64;
	// bl 0x826a14e0
	ctx.lr = 0x823BF3F8;
	sub_826A14E0(ctx, base);
	// fmul f6,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = f29.f64 * ctx.f1.f64;
	// fmul f1,f6,f31
	ctx.f1.f64 = ctx.f6.f64 * f31.f64;
	// bl 0x826a14e0
	ctx.lr = 0x823BF404;
	sub_826A14E0(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stfsu f5,4(r29)
	ea = 4 + r29.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	r29.u32 = ea;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823bf3a0
	if (ctx.cr6.lt) goto loc_823BF3A0;
loc_823BF41C:
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d8ec0
	ctx.lr = 0x823BF42C;
	sub_823D8EC0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x823d8a70
	ctx.lr = 0x823BF448;
	sub_823D8A70(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823d7b70
	ctx.lr = 0x823BF464;
	sub_823D7B70(ctx, base);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x823d7400
	ctx.lr = 0x823BF46C;
	sub_823D7400(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stw r8,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x823d7b70
	ctx.lr = 0x823BF4A0;
	sub_823D7B70(ctx, base);
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// bl 0x823d6ef0
	ctx.lr = 0x823BF4B0;
	sub_823D6EF0(ctx, base);
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823bf530
	if (ctx.cr6.eq) goto loc_823BF530;
	// lis r11,-24304
	ctx.r11.s64 = -1592786944;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// ori r11,r11,51838
	ctx.r11.u64 = ctx.r11.u64 | 51838;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// beq cr6,0x823bf518
	if (ctx.cr6.eq) goto loc_823BF518;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_823BF518:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
loc_823BF530:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823bf540
	if (ctx.cr6.eq) goto loc_823BF540;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_823BF540:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823bf5a0
	if (ctx.cr6.eq) goto loc_823BF5A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bedc0
	ctx.lr = 0x823BF550;
	sub_823BEDC0(ctx, base);
	// b 0x823bf5a0
	goto loc_823BF5A0;
loc_823BF554:
	// bl 0x8269dfa8
	ctx.lr = 0x823BF558;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31336
	ctx.r5.s64 = ctx.r10.s64 + -31336;
	// b 0x823bf580
	goto loc_823BF580;
loc_823BF564:
	// bl 0x8269dfa8
	ctx.lr = 0x823BF568;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31368
	ctx.r5.s64 = ctx.r10.s64 + -31368;
	// b 0x823bf580
	goto loc_823BF580;
loc_823BF574:
	// bl 0x8269dfa8
	ctx.lr = 0x823BF578;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31416
	ctx.r5.s64 = ctx.r10.s64 + -31416;
loc_823BF580:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// bl 0x8269f3c0
	ctx.lr = 0x823BF590;
	sub_8269F3C0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x823bf5a0
	if (ctx.cr6.eq) goto loc_823BF5A0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_823BF5A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823DD258) {
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
	ctx.lr = 0x823DD260;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r28.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,-1
	r29.s64 = -1;
loc_823DD27C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823dd2f0
	if (!ctx.cr6.lt) goto loc_823DD2F0;
loc_823DD28C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw. r10,r8,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823dd360
	if (!ctx.cr0.eq) goto loc_823DD360;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x823dc810
	ctx.lr = 0x823DD2D0;
	sub_823DC810(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x823dd28c
	if (ctx.cr6.lt) goto loc_823DD28C;
loc_823DD2F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dd344
	if (ctx.cr6.eq) goto loc_823DD344;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// slw r5,r29,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// slw. r10,r3,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823dd41c
	if (!ctx.cr0.eq) goto loc_823DD41C;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r8.u32);
loc_823DD344:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823dc8c8
	ctx.lr = 0x823DD350;
	sub_823DC8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823dd27c
	if (!ctx.cr6.eq) goto loc_823DD27C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823DD360:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bgt cr6,0x823dd394
	if (ctx.cr6.gt) goto loc_823DD394;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// addi r9,r11,-4000
	ctx.r9.s64 = ctx.r11.s64 + -4000;
	// bgt cr6,0x823dd384
	if (ctx.cr6.gt) goto loc_823DD384;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x823dd3c4
	goto loc_823DD3C4;
loc_823DD384:
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x823dd3c4
	goto loc_823DD3C4;
loc_823DD394:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// addi r9,r11,-4000
	ctx.r9.s64 = ctx.r11.s64 + -4000;
	// bgt cr6,0x823dd3bc
	if (ctx.cr6.gt) goto loc_823DD3BC;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x823dd3c4
	goto loc_823DD3C4;
loc_823DD3BC:
	// rlwinm r10,r10,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
loc_823DD3C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x823dd410
	if (ctx.cr6.lt) goto loc_823DD410;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x823dc810
	ctx.lr = 0x823DD400;
	sub_823DC810(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
loc_823DD410:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823DD41C:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bgt cr6,0x823dd450
	if (ctx.cr6.gt) goto loc_823DD450;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// addi r9,r11,-4000
	ctx.r9.s64 = ctx.r11.s64 + -4000;
	// bgt cr6,0x823dd440
	if (ctx.cr6.gt) goto loc_823DD440;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x823dd480
	goto loc_823DD480;
loc_823DD440:
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x823dd480
	goto loc_823DD480;
loc_823DD450:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// addi r9,r11,-4000
	ctx.r9.s64 = ctx.r11.s64 + -4000;
	// bgt cr6,0x823dd478
	if (ctx.cr6.gt) goto loc_823DD478;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x823dd480
	goto loc_823DD480;
loc_823DD478:
	// rlwinm r10,r10,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// lbzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
loc_823DD480:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823EA628) {
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
	ctx.lr = 0x823EA630;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,3208
	ctx.r5.s64 = 3208;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x82393af8
	ctx.lr = 0x823EA64C;
	sub_82393AF8(ctx, base);
	// li r5,3208
	ctx.r5.s64 = 3208;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r25,28(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EA660;
	sub_823EF5F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA66C;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ea690
	if (ctx.cr6.lt) goto loc_823EA690;
	// beq cr6,0x823ea6c0
	if (ctx.cr6.eq) goto loc_823EA6C0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA684;
	sub_823E2DA8(ctx, base);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// bgt 0x823ea6c8
	if (ctx.cr0.gt) goto loc_823EA6C8;
loc_823EA690:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x823ea6b4
	if (ctx.cr6.eq) goto loc_823EA6B4;
	// li r5,3208
	ctx.r5.s64 = 3208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EA6A8;
	sub_823EF5F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EA6B4;
	sub_82393BF0(ctx, base);
loc_823EA6B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823EA6C0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_823EA6C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA6D4;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ea690
	if (ctx.cr6.lt) goto loc_823EA690;
	// beq cr6,0x823ea7b4
	if (ctx.cr6.eq) goto loc_823EA7B4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA6EC;
	sub_823E2DA8(ctx, base);
	// addic. r11,r3,1
	ctx.xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r11.s64 = ctx.r3.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1156(r26)
	REX_STORE_U32(r26.u32 + 1156, ctx.r11.u32);
	// ble 0x823ea690
	if (!ctx.cr0.gt) goto loc_823EA690;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ea7b4
	if (!ctx.cr6.gt) goto loc_823EA7B4;
	// addi r30,r26,2184
	r30.s64 = r26.s64 + 2184;
loc_823EA708:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea730
	if (ctx.cr6.eq) goto loc_823EA730;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ea730
	if (ctx.cr0.eq) goto loc_823EA730;
loc_823EA720:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ea720
	if (!ctx.cr6.eq) goto loc_823EA720;
loc_823EA730:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA738;
	sub_823E2DA8(ctx, base);
	// stw r3,-1024(r30)
	REX_STORE_U32(r30.u32 + -1024, ctx.r3.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ea768
	if (ctx.cr6.eq) goto loc_823EA768;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ea768
	if (ctx.cr0.eq) goto loc_823EA768;
loc_823EA758:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ea758
	if (!ctx.cr6.eq) goto loc_823EA758;
loc_823EA768:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA770;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// blt cr6,0x823ea690
	if (ctx.cr6.lt) goto loc_823EA690;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ea690
	if (ctx.cr6.lt) goto loc_823EA690;
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x823ea690
	if (ctx.cr6.eq) goto loc_823EA690;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ea690
	if (!ctx.cr6.lt) goto loc_823EA690;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ea690
	if (!ctx.cr6.lt) goto loc_823EA690;
	// lwz r11,1156(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1156);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ea708
	if (ctx.cr6.lt) goto loc_823EA708;
loc_823EA7B4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA7C0;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ea690
	if (!ctx.cr6.eq) goto loc_823EA690;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823ea820
	if (!ctx.cr6.gt) goto loc_823EA820;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823ea820
	if (!ctx.cr6.gt) goto loc_823EA820;
	// addi r31,r26,4
	r31.s64 = r26.s64 + 4;
loc_823EA7E8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA7F4;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ea690
	if (!ctx.cr6.lt) goto loc_823EA690;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ea690
	if (ctx.cr6.lt) goto loc_823EA690;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ea7e8
	if (ctx.cr6.lt) goto loc_823EA7E8;
loc_823EA820:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ea898
	if (!ctx.cr6.gt) goto loc_823EA898;
	// addi r31,r26,1092
	r31.s64 = r26.s64 + 1092;
loc_823EA830:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA83C;
	sub_823E2DA8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA848;
	sub_823E2DA8(ctx, base);
	// stw r3,-64(r31)
	REX_STORE_U32(r31.u32 + -64, ctx.r3.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ea690
	if (!ctx.cr6.lt) goto loc_823EA690;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ea690
	if (ctx.cr6.lt) goto loc_823EA690;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EA86C;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ea690
	if (!ctx.cr6.lt) goto loc_823EA690;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823ea690
	if (ctx.cr6.lt) goto loc_823EA690;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ea830
	if (ctx.cr6.lt) goto loc_823EA830;
loc_823EA898:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823F59F0) {
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
	ctx.lr = 0x823F59F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// subfe r31,r31,r31
	temp.u8 = (~r31.u32 + r31.u32 < ~r31.u32) | (~r31.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~r31.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// addi r9,r9,4353
	ctx.r9.s64 = ctx.r9.s64 + 4353;
	// subfe r30,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// addi r29,r9,3
	r29.s64 = ctx.r9.s64 + 3;
	// subfe r28,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// rlwinm r29,r29,0,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// lis r26,2
	r26.s64 = 131072;
	// subfe r24,r27,r27
	temp.u8 = (~r27.u32 + r27.u32 < ~r27.u32) | (~r27.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	r24.u64 = ~r27.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r8,r29,r9
	ctx.r8.u64 = r29.u64 + ctx.r9.u64;
	// lis r25,0
	r25.s64 = 0;
	// lis r27,9
	r27.s64 = 589824;
	// ori r26,r26,24616
	r26.u64 = r26.u64 | 24616;
	// add r23,r8,r9
	r23.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ori r25,r25,32768
	r25.u64 = r25.u64 | 32768;
	// ori r22,r27,55452
	r22.u64 = r27.u64 | 55452;
	// and r27,r28,r26
	r27.u64 = r28.u64 & r26.u64;
	// and r8,r24,r25
	ctx.r8.u64 = r24.u64 & r25.u64;
	// addis r28,r23,9
	r28.s64 = r23.s64 + 589824;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// addi r28,r28,32048
	r28.s64 = r28.s64 + 32048;
	// and r26,r30,r22
	r26.u64 = r30.u64 & r22.u64;
	// and r31,r31,r28
	r31.u64 = r31.u64 & r28.u64;
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + r26.u64;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823f5bdc
	if (ctx.cr6.eq) goto loc_823F5BDC;
	// add r31,r3,r7
	r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// li r30,0
	r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stwx r30,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, r30.u32);
	// addi r10,r31,17376
	ctx.r10.s64 = r31.s64 + 17376;
	// stw r11,2152(r31)
	REX_STORE_U32(r31.u32 + 2152, ctx.r11.u32);
	// li r24,1
	r24.s64 = 1;
	// stw r5,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// addi r7,r8,12484
	ctx.r7.s64 = ctx.r8.s64 + 12484;
	// stw r6,2424(r31)
	REX_STORE_U32(r31.u32 + 2424, ctx.r6.u32);
	// stw r30,17216(r31)
	REX_STORE_U32(r31.u32 + 17216, r30.u32);
	// stw r30,17204(r31)
	REX_STORE_U32(r31.u32 + 17204, r30.u32);
	// stw r30,17208(r31)
	REX_STORE_U32(r31.u32 + 17208, r30.u32);
	// stw r30,17200(r31)
	REX_STORE_U32(r31.u32 + 17200, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,17188(r31)
	REX_STORE_U32(r31.u32 + 17188, r30.u32);
	// stw r30,17192(r31)
	REX_STORE_U32(r31.u32 + 17192, r30.u32);
	// stw r30,9516(r31)
	REX_STORE_U32(r31.u32 + 9516, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,2132(r31)
	REX_STORE_U32(r31.u32 + 2132, r30.u32);
	// stw r30,17248(r31)
	REX_STORE_U32(r31.u32 + 17248, r30.u32);
	// stw r30,17372(r31)
	REX_STORE_U32(r31.u32 + 17372, r30.u32);
loc_823F5AFC:
	// lwz r8,2152(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 2152);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,2152(r31)
	REX_STORE_U32(r31.u32 + 2152, ctx.r6.u32);
	// slw r8,r24,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r8.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823f5afc
	if (ctx.cr6.lt) goto loc_823F5AFC;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,17188(r31)
	REX_STORE_U32(r31.u32 + 17188, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,17192(r31)
	REX_STORE_U32(r31.u32 + 17192, ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,17184(r31)
	REX_STORE_U32(r31.u32 + 17184, ctx.r11.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r10,17184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 17184);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// addi r29,r11,8192
	r29.s64 = ctx.r11.s64 + 8192;
	// bl 0x823f7d70
	ctx.lr = 0x823F5B5C;
	sub_823F7D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7df8
	ctx.lr = 0x823F5B64;
	sub_823F7DF8(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// stw r29,2132(r31)
	REX_STORE_U32(r31.u32 + 2132, r29.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// addi r11,r11,-26624
	ctx.r11.s64 = ctx.r11.s64 + -26624;
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// stw r11,9516(r31)
	REX_STORE_U32(r31.u32 + 9516, ctx.r11.u32);
	// addi r10,r10,-32432
	ctx.r10.s64 = ctx.r10.s64 + -32432;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addis r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 262144;
	// rotlwi r10,r29,0
	ctx.r10.u64 = __builtin_rotateleft32(r29.u32, 0);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// stw r10,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r10.u32);
	// addi r9,r9,-26688
	ctx.r9.s64 = ctx.r9.s64 + -26688;
	// stw r9,2140(r31)
	REX_STORE_U32(r31.u32 + 2140, ctx.r9.u32);
	// beq cr6,0x823f5bc0
	if (ctx.cr6.eq) goto loc_823F5BC0;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// stw r27,17228(r31)
	REX_STORE_U32(r31.u32 + 17228, r27.u32);
	// stw r11,17224(r31)
	REX_STORE_U32(r31.u32 + 17224, ctx.r11.u32);
	// stw r30,17236(r31)
	REX_STORE_U32(r31.u32 + 17236, r30.u32);
	// stw r30,17244(r31)
	REX_STORE_U32(r31.u32 + 17244, r30.u32);
	// stw r10,17240(r31)
	REX_STORE_U32(r31.u32 + 17240, ctx.r10.u32);
	// stb r24,17256(r31)
	REX_STORE_U8(r31.u32 + 17256, r24.u8);
	// b 0x823f5bd4
	goto loc_823F5BD4;
loc_823F5BC0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x823f5bd4
	if (ctx.cr6.eq) goto loc_823F5BD4;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// stw r11,17248(r31)
	REX_STORE_U32(r31.u32 + 17248, ctx.r11.u32);
	// stw r10,17372(r31)
	REX_STORE_U32(r31.u32 + 17372, ctx.r10.u32);
loc_823F5BD4:
	// stw r28,17368(r31)
	REX_STORE_U32(r31.u32 + 17368, r28.u32);
	// stb r24,2160(r31)
	REX_STORE_U8(r31.u32 + 2160, r24.u8);
loc_823F5BDC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82404240) {
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
	ctx.lr = 0x82404248;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82404628
	if (ctx.cr6.eq) goto loc_82404628;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82404628
	if (ctx.cr6.eq) goto loc_82404628;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82404288
	if (!ctx.cr6.eq) goto loc_82404288;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82404288
	if (!ctx.cr6.eq) goto loc_82404288;
loc_82404280:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82404630
	goto loc_82404630;
loc_82404288:
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r21,0
	r21.s64 = 0;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r19,1
	r19.s64 = 1;
	// li r23,3
	r23.s64 = 3;
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r19,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r19.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// mr r24,r21
	r24.u64 = r21.u64;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
loc_824042DC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r26,r19
	r26.u64 = r19.u64;
	// stw r20,64(r31)
	REX_STORE_U32(r31.u32 + 64, r20.u32);
	// stw r23,68(r31)
	REX_STORE_U32(r31.u32 + 68, r23.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// bgt cr6,0x824043d8
	if (ctx.cr6.gt) goto loc_824043D8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82404360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82404360;
	// bdzf 4*cr6+eq,0x824043b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824043B0;
	// bdzf 4*cr6+eq,0x82404374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82404374;
	// bdzf 4*cr6+eq,0x8240434c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8240434C;
	// bdzf 4*cr6+eq,0x82404334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82404334;
	// bdzf 4*cr6+eq,0x824043c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824043C4;
	// bdzf 4*cr6+eq,0x8240439c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8240439C;
	// bne cr6,0x82404388
	if (!ctx.cr6.eq) goto loc_82404388;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824041c8
	ctx.lr = 0x82404330;
	sub_824041C8(ctx, base);
	// b 0x824043d4
	goto loc_824043D4;
loc_82404334:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82403168
	ctx.lr = 0x82404344;
	sub_82403168(ctx, base);
loc_82404344:
	// mr r26,r21
	r26.u64 = r21.u64;
	// b 0x824043d4
	goto loc_824043D4;
loc_8240434C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82403cc8
	ctx.lr = 0x8240435C;
	sub_82403CC8(ctx, base);
	// b 0x824043d4
	goto loc_824043D4;
loc_82404360:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824026f0
	ctx.lr = 0x82404370;
	sub_824026F0(ctx, base);
	// b 0x82404344
	goto loc_82404344;
loc_82404374:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82403460
	ctx.lr = 0x82404384;
	sub_82403460(ctx, base);
	// b 0x824043d4
	goto loc_824043D4;
loc_82404388:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82400d28
	ctx.lr = 0x82404398;
	sub_82400D28(ctx, base);
	// b 0x824043d4
	goto loc_824043D4;
loc_8240439C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82401130
	ctx.lr = 0x824043AC;
	sub_82401130(ctx, base);
	// b 0x824043d4
	goto loc_824043D4;
loc_824043B0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82402a70
	ctx.lr = 0x824043C0;
	sub_82402A70(ctx, base);
	// b 0x824043d4
	goto loc_824043D4;
loc_824043C4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82401b38
	ctx.lr = 0x824043D4;
	sub_82401B38(ctx, base);
loc_824043D4:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824043D8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x82404488
	if (!ctx.cr6.lt) goto loc_82404488;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404400
	if (ctx.cr6.eq) goto loc_82404400;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82404400
	if (ctx.cr6.eq) goto loc_82404400;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x82404400;
	sub_823F0350(ctx, base);
loc_82404400:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82404420
	if (ctx.cr6.eq) goto loc_82404420;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82404420
	if (ctx.cr6.eq) goto loc_82404420;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x82404420;
	sub_823F0350(ctx, base);
loc_82404420:
	// lwz r27,76(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82404440
	if (ctx.cr6.eq) goto loc_82404440;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82400c48
	ctx.lr = 0x82404434;
	sub_82400C48(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f0350
	ctx.lr = 0x82404440;
	sub_823F0350(ctx, base);
loc_82404440:
	// lwz r27,80(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82404460
	if (ctx.cr6.eq) goto loc_82404460;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82400c48
	ctx.lr = 0x82404454;
	sub_82400C48(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f0350
	ctx.lr = 0x82404460;
	sub_823F0350(ctx, base);
loc_82404460:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stw r21,4(r31)
	REX_STORE_U32(r31.u32 + 4, r21.u32);
	// stw r21,8(r31)
	REX_STORE_U32(r31.u32 + 8, r21.u32);
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// stw r21,56(r31)
	REX_STORE_U32(r31.u32 + 56, r21.u32);
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(r24.u32, 9, ctx.xer);
	// stw r21,60(r31)
	REX_STORE_U32(r31.u32 + 60, r21.u32);
	// stw r21,76(r31)
	REX_STORE_U32(r31.u32 + 76, r21.u32);
	// stw r21,80(r31)
	REX_STORE_U32(r31.u32 + 80, r21.u32);
	// blt cr6,0x824042dc
	if (ctx.cr6.lt) goto loc_824042DC;
loc_82404488:
	// cmplwi cr6,r24,9
	ctx.cr6.compare<uint32_t>(r24.u32, 9, ctx.xer);
	// bne cr6,0x8240449c
	if (!ctx.cr6.eq) goto loc_8240449C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82404630
	goto loc_82404630;
loc_8240449C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82404554
	if (ctx.cr6.eq) goto loc_82404554;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82404554
	if (ctx.cr6.eq) goto loc_82404554;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_824044B0:
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82404548
	if (ctx.cr6.eq) goto loc_82404548;
loc_824044BC:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// bl 0x823f02b8
	ctx.lr = 0x824044D8;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x824045b0
	if (ctx.cr0.eq) goto loc_824045B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r28,20(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x824e3d88
	ctx.lr = 0x82404518;
	sub_824E3D88(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r28,r30,56
	r28.s64 = r30.s64 + 56;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82404534
	if (ctx.cr6.eq) goto loc_82404534;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x823f0350
	ctx.lr = 0x82404534;
	sub_823F0350(ctx, base);
loc_82404534:
	// lwz r30,76(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 76);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824044bc
	if (!ctx.cr6.eq) goto loc_824044BC;
loc_82404548:
	// lwz r26,80(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 80);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x824044b0
	if (!ctx.cr6.eq) goto loc_824044B0;
loc_82404554:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824045dc
	if (ctx.cr6.eq) goto loc_824045DC;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8240456C;
	sub_826A2E60(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r22)
	REX_STORE_U32(r22.u32 + 4, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// stw r19,12(r22)
	REX_STORE_U32(r22.u32 + 12, r19.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x823fcd10
	ctx.lr = 0x82404590;
	sub_823FCD10(ctx, base);
	// stw r3,16(r22)
	REX_STORE_U32(r22.u32 + 16, ctx.r3.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// stw r10,20(r22)
	REX_STORE_U32(r22.u32 + 20, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r10,24(r22)
	REX_STORE_U32(r22.u32 + 24, ctx.r10.u32);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// b 0x824045d4
	goto loc_824045D4;
loc_824045B0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82404630
	goto loc_82404630;
loc_824045BC:
	// lwz r10,12(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r22)
	REX_STORE_U32(r22.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_824045D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824045bc
	if (!ctx.cr6.eq) goto loc_824045BC;
loc_824045DC:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82404618
	if (ctx.cr6.eq) goto loc_82404618;
loc_824045E8:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r21,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r21.u32);
	// stw r21,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r21.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r21,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r21.u32);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824045e8
	if (!ctx.cr6.eq) goto loc_824045E8;
loc_82404618:
	// lwz r31,80(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824045dc
	if (!ctx.cr6.eq) goto loc_824045DC;
	// b 0x82404280
	goto loc_82404280;
loc_82404628:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82404630:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82415B90) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82415bc0
	if (ctx.cr6.eq) goto loc_82415BC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82415b90
	ctx.lr = 0x82415BC0;
	sub_82415B90(ctx, base);
loc_82415BC0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82415bd4
	if (ctx.cr0.eq) goto loc_82415BD4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82415BD4;
	sub_823F0350(ctx, base);
loc_82415BD4:
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

DEFINE_REX_FUNC(sub_82417E68) {
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
	ctx.lr = 0x82417E70;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// ble cr6,0x82417e94
	if (!ctx.cr6.gt) goto loc_82417E94;
	// stw r26,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r26.u32);
loc_82417E94:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241837c
	if (!ctx.cr6.eq) goto loc_8241837C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subfic r9,r31,16
	ctx.xer.ca = r31.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - r31.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82417EC0;
	sub_826A2E60(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82417f10
	if (ctx.cr6.eq) goto loc_82417F10;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82417ED0:
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417f40
	if (ctx.cr6.eq) goto loc_82417F40;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r8,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r8.u32);
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r8,108(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 108);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// bne cr6,0x82417ed0
	if (!ctx.cr6.eq) goto loc_82417ED0;
loc_82417F10:
	// cmplwi cr6,r27,46
	ctx.cr6.compare<uint32_t>(r27.u32, 46, ctx.xer);
	// bgt cr6,0x82418348
	if (ctx.cr6.gt) goto loc_82418348;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r27,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,23120
	ctx.r12.s64 = ctx.r12.s64 + 23120;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32191
	ctx.r12.s64 = -2109669376;
	// addi r12,r12,32576
	ctx.r12.s64 = ctx.r12.s64 + 32576;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r27.u32) {
	case 0:
		goto loc_82417F60;
	case 1:
		goto loc_82417F78;
	case 2:
		goto loc_82417F8C;
	case 3:
		goto loc_82417FBC;
	case 4:
		goto loc_82418004;
	case 5:
		goto loc_82418010;
	case 6:
		goto loc_8241801C;
	case 7:
		goto loc_82418030;
	case 8:
		goto loc_82418050;
	case 9:
		goto loc_82418074;
	case 10:
		goto loc_82418088;
	case 11:
		goto loc_82418094;
	case 12:
		goto loc_824180A0;
	case 13:
		goto loc_824180BC;
	case 14:
		goto loc_824180CC;
	case 15:
		goto loc_824180D8;
	case 16:
		goto loc_824180D8;
	case 17:
		goto loc_824180E0;
	case 18:
		goto loc_82418104;
	case 19:
		goto loc_824180D8;
	case 20:
		goto loc_82418134;
	case 21:
		goto loc_82418150;
	case 22:
		goto loc_824180D8;
	case 23:
		goto loc_824180D8;
	case 24:
		goto loc_82418160;
	case 25:
		goto loc_82418178;
	case 26:
		goto loc_824180D8;
	case 27:
		goto loc_824181C4;
	case 28:
		goto loc_824181DC;
	case 29:
		goto loc_824180D8;
	case 30:
		goto loc_824181F4;
	case 31:
		goto loc_82418214;
	case 32:
		goto loc_8241822C;
	case 33:
		goto loc_8241824C;
	case 34:
		goto loc_824180D8;
	case 35:
		goto loc_82418264;
	case 36:
		goto loc_8241827C;
	case 37:
		goto loc_824180D8;
	case 38:
		goto loc_8241829C;
	case 39:
		goto loc_824180D8;
	case 40:
		goto loc_824182CC;
	case 41:
		goto loc_824180D8;
	case 42:
		goto loc_824182F8;
	case 43:
		goto loc_824180D8;
	case 44:
		goto loc_82418318;
	case 45:
		goto loc_82418318;
	case 46:
		goto loc_82418318;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82417F40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,24260
	ctx.r6.s64 = ctx.r11.s64 + 24260;
loc_82417F48:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,640
	ctx.r4.s64 = r30.s64 + 640;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82417F58;
	sub_8241A4F0(ctx, base);
	// stw r26,80(r30)
	REX_STORE_U32(r30.u32 + 80, r26.u32);
	// b 0x8241837c
	goto loc_8241837C;
loc_82417F60:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82417110
	ctx.lr = 0x82417F74;
	sub_82417110(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_82417F78:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82416628
	ctx.lr = 0x82417F88;
	sub_82416628(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_82417F8C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,632(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 632);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// lwz r11,640(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 640);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82418348
	if (ctx.cr6.eq) goto loc_82418348;
	// lwz r11,632(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 632);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x82418348
	goto loc_82418348;
loc_82417FBC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,632(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 632);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// lwz r11,640(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 640);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82417ff0
	if (ctx.cr6.eq) goto loc_82417FF0;
	// lwz r11,632(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 632);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82417FF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82418348
	if (ctx.cr6.eq) goto loc_82418348;
	// lwz r11,632(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 632);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// b 0x82418348
	goto loc_82418348;
loc_82418004:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82417b38
	ctx.lr = 0x8241800C;
	sub_82417B38(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_82418010:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82414a20
	ctx.lr = 0x82418018;
	sub_82414A20(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_8241801C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82418024:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824166d0
	ctx.lr = 0x8241802C;
	sub_824166D0(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_82418030:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82415868
	ctx.lr = 0x82418048;
	sub_82415868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82418024
	goto loc_82418024;
loc_82418050:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82415868
	ctx.lr = 0x82418068;
	sub_82415868(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82418024
	goto loc_82418024;
loc_82418074:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82414b88
	ctx.lr = 0x82418084;
	sub_82414B88(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_82418088:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82414c48
	ctx.lr = 0x82418090;
	sub_82414C48(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_82418094:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82416788
	ctx.lr = 0x8241809C;
	sub_82416788(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_824180A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824166d0
	ctx.lr = 0x824180AC;
	sub_824166D0(ctx, base);
loc_824180AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,632(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 632);
	// bl 0x8241ab70
	ctx.lr = 0x824180B8;
	sub_8241AB70(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_824180BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82414b88
	ctx.lr = 0x824180C8;
	sub_82414B88(ctx, base);
	// b 0x824180ac
	goto loc_824180AC;
loc_824180CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82417490
	ctx.lr = 0x824180D4;
	sub_82417490(ctx, base);
	// b 0x82418348
	goto loc_82418348;
loc_824180D8:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82418348
	goto loc_82418348;
loc_824180E0:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82416f28
	ctx.lr = 0x824180FC;
	sub_82416F28(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// b 0x82418348
	goto loc_82418348;
loc_82418104:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82415868
	ctx.lr = 0x82418128;
	sub_82415868(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r26,100(r30)
	REX_STORE_U32(r30.u32 + 100, r26.u32);
	// b 0x82418348
	goto loc_82418348;
loc_82418134:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8241813C:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82418144:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x82418348
	goto loc_82418348;
loc_82418150:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x82418144
	goto loc_82418144;
loc_82418160:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// b 0x82418144
	goto loc_82418144;
loc_82418178:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824181a4
	if (ctx.cr6.eq) goto loc_824181A4;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// b 0x82418348
	goto loc_82418348;
loc_824181A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1503
	ctx.r5.s64 = 1503;
	// addi r6,r11,24216
	ctx.r6.s64 = ctx.r11.s64 + 24216;
	// addi r4,r30,640
	ctx.r4.s64 = r30.s64 + 640;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x824181BC;
	sub_8241A4F0(ctx, base);
	// stw r26,80(r30)
	REX_STORE_U32(r30.u32 + 80, r26.u32);
	// b 0x82418348
	goto loc_82418348;
loc_824181C4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82418144
	goto loc_82418144;
loc_824181DC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// b 0x82418144
	goto loc_82418144;
loc_824181F4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_82418208:
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// b 0x82418144
	goto loc_82418144;
loc_82418214:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// b 0x82418208
	goto loc_82418208;
loc_8241822C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subfc r10,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
loc_82418240:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfze r10,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82418144
	goto loc_82418144;
loc_8241824C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subfc r10,r10,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// b 0x82418240
	goto loc_82418240;
loc_82418264:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// b 0x8241813c
	goto loc_8241813C;
loc_8241827C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82418144
	goto loc_82418144;
loc_8241829C:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824182c0
	if (ctx.cr6.eq) goto loc_824182C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne cr6,0x824182c4
	if (!ctx.cr6.eq) goto loc_824182C4;
loc_824182C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824182C4:
	// stw r11,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r11.u32);
	// b 0x82418348
	goto loc_82418348;
loc_824182CC:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824182f0
	if (!ctx.cr6.eq) goto loc_824182F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x824182c4
	if (ctx.cr6.eq) goto loc_824182C4;
loc_824182F0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x824182c4
	goto loc_824182C4;
loc_824182F8:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82418310
	if (!ctx.cr6.eq) goto loc_82418310;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82418310:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x824182c4
	goto loc_824182C4;
loc_82418318:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x82418320;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82418338
	if (ctx.cr0.eq) goto loc_82418338;
	// addi r4,r30,640
	ctx.r4.s64 = r30.s64 + 640;
	// bl 0x82444d78
	ctx.lr = 0x82418330;
	sub_82444D78(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8241833c
	goto loc_8241833C;
loc_82418338:
	// li r28,0
	r28.s64 = 0;
loc_8241833C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824159e8
	ctx.lr = 0x82418348;
	sub_824159E8(ctx, base);
loc_82418348:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8241837c
	if (!ctx.cr6.eq) goto loc_8241837C;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82418384
	if (ctx.cr6.eq) goto loc_82418384;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r10.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// lwz r10,104(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 104);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82418378:
	// stw r3,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r3.u32);
loc_8241837C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d00
	return;
loc_82418384:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8241838C;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824183ac
	if (ctx.cr0.eq) goto loc_824183AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,104(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 104);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,24208
	ctx.r6.s64 = ctx.r11.s64 + 24208;
	// bl 0x82444918
	ctx.lr = 0x824183A8;
	sub_82444918(ctx, base);
	// b 0x824183b0
	goto loc_824183B0;
loc_824183AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824183B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82418378
	if (!ctx.cr6.eq) goto loc_82418378;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,24176
	ctx.r6.s64 = ctx.r11.s64 + 24176;
	// b 0x82417f48
	goto loc_82417F48;
}

DEFINE_REX_FUNC(sub_824484C8) {
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
	ctx.lr = 0x824484E4;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82444608
	ctx.lr = 0x824484F4;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8244852c
	if (ctx.cr0.eq) goto loc_8244852C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r10,-7912
	ctx.r10.s64 = ctx.r10.s64 + -7912;
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
	// b 0x82448530
	goto loc_82448530;
loc_8244852C:
	// li r31,0
	r31.s64 = 0;
loc_82448530:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82448540
	if (!ctx.cr6.eq) goto loc_82448540;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8244857c
	goto loc_8244857C;
loc_82448540:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82448578
	if (ctx.cr6.eq) goto loc_82448578;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8244857c
	if (ctx.cr0.eq) goto loc_8244857C;
loc_82448578:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8244857C:
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

DEFINE_REX_FUNC(sub_8244F500) {
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
	ctx.lr = 0x8244F508;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8244f528
	if (!ctx.cr6.eq) goto loc_8244F528;
loc_8244F520:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8244f5d8
	goto loc_8244F5D8;
loc_8244F528:
	// lwz r31,112(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// li r29,0
	r29.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8244f5c8
	if (ctx.cr6.eq) goto loc_8244F5C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,6036
	r28.s64 = ctx.r11.s64 + 6036;
loc_8244F544:
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8244F55C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x8244f580
	if (ctx.cr0.eq) goto loc_8244F580;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8244f55c
	if (ctx.cr6.eq) goto loc_8244F55C;
loc_8244F580:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8244f5a4
	if (!ctx.cr0.eq) goto loc_8244F5A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8244f5e0
	if (!ctx.cr6.eq) goto loc_8244F5E0;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8244f5f8
	if (ctx.cr6.eq) goto loc_8244F5F8;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// b 0x8244f5c0
	goto loc_8244F5C0;
loc_8244F5A4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8244f5c0
	if (ctx.cr6.eq) goto loc_8244F5C0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8244beb0
	ctx.lr = 0x8244F5BC;
	sub_8244BEB0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_8244F5C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8244f544
	if (!ctx.cr6.eq) goto loc_8244F544;
loc_8244F5C8:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & r29.u64;
loc_8244F5D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_8244F5E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,2184
	ctx.r4.s64 = ctx.r11.s64 + 2184;
loc_8244F5E8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8244beb0
	ctx.lr = 0x8244F5F4;
	sub_8244BEB0(ctx, base);
	// b 0x8244f520
	goto loc_8244F520;
loc_8244F5F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,2408
	ctx.r4.s64 = ctx.r11.s64 + 2408;
	// b 0x8244f5e8
	goto loc_8244F5E8;
}

DEFINE_REX_FUNC(sub_824570A8) {
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
	ctx.lr = 0x824570B0;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82455688
	ctx.lr = 0x824570C4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r20,r11,14352
	r20.s64 = ctx.r11.s64 + 14352;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824555b8
	ctx.lr = 0x824570E0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r19,r11,14100
	r19.s64 = ctx.r11.s64 + 14100;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r11,388(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 388);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r24,r11,14096
	r24.s64 = ctx.r11.s64 + 14096;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457134;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r9,1816(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r25,r10,14172
	r25.s64 = ctx.r10.s64 + 14172;
	// addi r26,r11,14160
	r26.s64 = ctx.r11.s64 + 14160;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82457204
	if (!ctx.cr6.gt) goto loc_82457204;
loc_8245715C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457164;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82457184;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457198;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824571A8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824571D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824571EC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245715c
	if (ctx.cr6.lt) goto loc_8245715C;
loc_82457204:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245720C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457220;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r21,r11,14344
	r21.s64 = ctx.r11.s64 + 14344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,412(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245724C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457260;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r10,1816(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r22,r11,14372
	r22.s64 = ctx.r11.s64 + 14372;
	// ble cr6,0x82457328
	if (!ctx.cr6.gt) goto loc_82457328;
loc_82457280:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457288;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824572A8;
	sub_82404168(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824572BC;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824572CC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824572FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457310;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457280
	if (ctx.cr6.lt) goto loc_82457280;
loc_82457328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457330;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457344;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245737C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245738C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,14392
	r28.s64 = ctx.r11.s64 + 14392;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824555b8
	ctx.lr = 0x824573A8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,14424
	ctx.r4.s64 = ctx.r10.s64 + 14424;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824573DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824573F0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245748c
	if (!ctx.cr6.gt) goto loc_8245748C;
loc_82457408:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457410;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x8245742C;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245743C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457474;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457408
	if (ctx.cr6.lt) goto loc_82457408;
loc_8245748C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457494;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824574A8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r23,r11,14384
	r23.s64 = ctx.r11.s64 + 14384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r11,468(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824574D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824574E8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457580
	if (ctx.cr6.eq) goto loc_82457580;
loc_82457500:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457508;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457524;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457534;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,504(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457568;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457500
	if (ctx.cr6.lt) goto loc_82457500;
loc_82457580:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457610
	if (ctx.cr6.eq) goto loc_82457610;
loc_8245758C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457594;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824575B0;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824575C0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 500);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824575E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824575F8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245758c
	if (ctx.cr6.lt) goto loc_8245758C;
loc_82457610:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824576b4
	if (ctx.cr6.eq) goto loc_824576B4;
loc_8245761C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457624;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82457640;
	sub_82404168(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457654;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457664;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245769C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245761c
	if (ctx.cr6.lt) goto loc_8245761C;
loc_824576B4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457740
	if (ctx.cr6.eq) goto loc_82457740;
loc_824576C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824576C8;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824576E4;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824576F4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,508(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457728;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824576c0
	if (ctx.cr6.lt) goto loc_824576C0;
loc_82457740:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457748;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245775C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245778C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245784c
	if (!ctx.cr6.gt) goto loc_8245784C;
loc_824577A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824577AC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824577CC;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x824577E0;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824577F0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457834;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824577a4
	if (ctx.cr6.lt) goto loc_824577A4;
loc_8245784C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8244a6e0
	ctx.lr = 0x8245785C;
	sub_8244A6E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,14148
	r29.s64 = ctx.r10.s64 + 14148;
	// beq cr6,0x8245793c
	if (ctx.cr6.eq) goto loc_8245793C;
loc_824578A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824578A8;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x824578C8;
	sub_82404168(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x824578DC;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824578EC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,476(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457924;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824578a0
	if (ctx.cr6.lt) goto loc_824578A0;
loc_8245793C:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824579e4
	if (ctx.cr6.eq) goto loc_824579E4;
loc_82457948:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457950;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x8245796C;
	sub_82404168(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457980;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457990;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824579B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824579CC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457948
	if (ctx.cr6.lt) goto loc_82457948;
loc_824579E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824579EC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457A00;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457A44;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457A54;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14412
	ctx.r4.s64 = ctx.r11.s64 + 14412;
	// bl 0x824555b8
	ctx.lr = 0x82457A6C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457AB0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82457b6c
	if (!ctx.cr6.gt) goto loc_82457B6C;
loc_82457AC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457AD0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82457AEC;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457B00;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457B10;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457B54;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457ac8
	if (ctx.cr6.lt) goto loc_82457AC8;
loc_82457B6C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8244a6e0
	ctx.lr = 0x82457B7C;
	sub_8244A6E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lis r4,29600
	ctx.r4.s64 = 1939865600;
	// lwz r11,484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457BA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457c54
	if (ctx.cr6.eq) goto loc_82457C54;
loc_82457BB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457BC0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82457BDC;
	sub_82404168(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457BF0;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457C00;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457C28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457C3C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457bb8
	if (ctx.cr6.lt) goto loc_82457BB8;
loc_82457C54:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457cfc
	if (ctx.cr6.eq) goto loc_82457CFC;
loc_82457C60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457C68;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82457C84;
	sub_82404168(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457C98;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457CA8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457CD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457CE4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457c60
	if (ctx.cr6.lt) goto loc_82457C60;
loc_82457CFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457D04;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457D18;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457D5C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457e10
	if (ctx.cr6.eq) goto loc_82457E10;
loc_82457D74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457D7C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82457D98;
	sub_82404168(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457DAC;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457DBC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457DE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457DF8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457d74
	if (ctx.cr6.lt) goto loc_82457D74;
loc_82457E10:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82457ec4
	if (ctx.cr6.eq) goto loc_82457EC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r29,r11,14404
	r29.s64 = ctx.r11.s64 + 14404;
loc_82457E24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82457E2C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82457E4C;
	sub_82404168(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82457E60;
	sub_82404168(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457E70;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82457E98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82457EAC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82457ec8
	if (ctx.cr0.lt) goto loc_82457EC8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82457e24
	if (ctx.cr6.lt) goto loc_82457E24;
loc_82457EC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82457EC8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_824B7DA8) {
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
	ctx.lr = 0x824B7DB0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7df0
	if (!ctx.cr6.gt) goto loc_824B7DF0;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824B7DD0:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r26,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r26.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b7dd0
	if (ctx.cr6.lt) goto loc_824B7DD0;
loc_824B7DF0:
	// mr r30,r26
	r30.u64 = r26.u64;
	// li r23,1
	r23.s64 = 1;
loc_824B7DF8:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b7e34
	if (ctx.cr6.eq) goto loc_824B7E34;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fa98
	ctx.lr = 0x824B7E1C;
	sub_8245FA98(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8245fb18
	ctx.lr = 0x824B7E34;
	sub_8245FB18(ctx, base);
loc_824B7E34:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b7e4c
	if (ctx.cr6.eq) goto loc_824B7E4C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r23,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r23.u32);
loc_824B7E4C:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// blt cr6,0x824b7df8
	if (ctx.cr6.lt) goto loc_824B7DF8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lis r22,29200
	r22.s64 = 1913651200;
	// lis r21,4352
	r21.s64 = 285212672;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7ee8
	if (!ctx.cr6.gt) goto loc_824B7EE8;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
loc_824B7E74:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x824aab40
	ctx.lr = 0x824B7E8C;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b7ed4
	if (!ctx.cr0.eq) goto loc_824B7ED4;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// beq cr6,0x824b7ed4
	if (ctx.cr6.eq) goto loc_824B7ED4;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// beq cr6,0x824b7ed4
	if (ctx.cr6.eq) goto loc_824B7ED4;
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824b81a0
	if (!ctx.cr6.lt) goto loc_824B81A0;
	// lwz r10,40(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824b7ed4
	if (!ctx.cr6.eq) goto loc_824B7ED4;
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
loc_824B7ED4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b7e74
	if (ctx.cr6.lt) goto loc_824B7E74;
loc_824B7EE8:
	// lwz r8,560(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824b7f30
	if (ctx.cr6.eq) goto loc_824B7F30;
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7f30
	if (!ctx.cr6.gt) goto loc_824B7F30;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824B7F10:
	// lwzx r7,r11,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r7,r24
	r24.u64 = ctx.r7.u64 & r24.u64;
	// blt cr6,0x824b7f10
	if (ctx.cr6.lt) goto loc_824B7F10;
loc_824B7F30:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// mr r25,r26
	r25.u64 = r26.u64;
	// addi r27,r11,16000
	r27.s64 = ctx.r11.s64 + 16000;
loc_824B7F3C:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0840
	ctx.lr = 0x824B7F4C;
	sub_824B0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b8348
	if (ctx.cr0.lt) goto loc_824B8348;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b59e8
	ctx.lr = 0x824B7F6C;
	sub_824B59E8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7ff8
	if (!ctx.cr6.gt) goto loc_824B7FF8;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r27,-4
	ctx.r7.s64 = r27.s64 + -4;
loc_824B7F88:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b7fe4
	if (ctx.cr6.eq) goto loc_824B7FE4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824b7fb4
	if (ctx.cr6.eq) goto loc_824B7FB4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824b7fdc
	if (!ctx.cr6.eq) goto loc_824B7FDC;
loc_824B7FB4:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x824aab40
	ctx.lr = 0x824B7FBC;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b7fdc
	if (!ctx.cr0.eq) goto loc_824B7FDC;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// beq cr6,0x824b7fdc
	if (ctx.cr6.eq) goto loc_824B7FDC;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// beq cr6,0x824b7fdc
	if (ctx.cr6.eq) goto loc_824B7FDC;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_824B7FDC:
	// cmplwi cr6,r6,512
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 512, ctx.xer);
	// bge cr6,0x824b8350
	if (!ctx.cr6.lt) goto loc_824B8350;
loc_824B7FE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b7f88
	if (ctx.cr6.lt) goto loc_824B7F88;
loc_824B7FF8:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b59e8
	ctx.lr = 0x824B800C;
	sub_824B59E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x824b803c
	if (!ctx.cr6.lt) goto loc_824B803C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824b829c
	if (!ctx.cr6.gt) goto loc_824B829C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824b829c
	if (!ctx.cr6.eq) goto loc_824B829C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x824b829c
	if (!ctx.cr6.eq) goto loc_824B829C;
loc_824B803C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b81d0
	if (!ctx.cr6.gt) goto loc_824B81D0;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_824B8050:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824b8188
	if (!ctx.cr6.eq) goto loc_824B8188;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x824aab40
	ctx.lr = 0x824B8074;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b8188
	if (!ctx.cr0.eq) goto loc_824B8188;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// beq cr6,0x824b8188
	if (ctx.cr6.eq) goto loc_824B8188;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824b80cc
	if (ctx.cr6.eq) goto loc_824B80CC;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
loc_824B80A0:
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lbz r6,111(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 111);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x824b80cc
	if (ctx.cr6.eq) goto loc_824B80CC;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824b80a0
	if (ctx.cr6.lt) goto loc_824B80A0;
loc_824B80CC:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824b8188
	if (!ctx.cr6.eq) goto loc_824B8188;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824b812c
	if (!ctx.cr6.eq) goto loc_824B812C;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824b8124
	if (ctx.cr6.eq) goto loc_824B8124;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
loc_824B80F8:
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// beq cr6,0x824b8124
	if (ctx.cr6.eq) goto loc_824B8124;
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824b80f8
	if (ctx.cr6.lt) goto loc_824B80F8;
loc_824B8124:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824b8188
	if (!ctx.cr6.eq) goto loc_824B8188;
loc_824B812C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824b8188
	if (!ctx.cr0.eq) goto loc_824B8188;
	// stw r23,40(r30)
	REX_STORE_U32(r30.u32 + 40, r23.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b1220
	ctx.lr = 0x824B8168;
	sub_824B1220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b8184
	if (!ctx.cr0.eq) goto loc_824B8184;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b1390
	ctx.lr = 0x824B817C;
	sub_824B1390(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824b81ac
	if (ctx.cr0.eq) goto loc_824B81AC;
loc_824B8184:
	// stw r26,40(r30)
	REX_STORE_U32(r30.u32 + 40, r26.u32);
loc_824B8188:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b8050
	if (ctx.cr6.lt) goto loc_824B8050;
	// b 0x824b81d0
	goto loc_824B81D0;
loc_824B81A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b8348
	goto loc_824B8348;
loc_824B81AC:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824b8350
	if (!ctx.cr6.lt) goto loc_824B8350;
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
loc_824B81D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824b829c
	if (ctx.cr6.eq) goto loc_824B829C;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0840
	ctx.lr = 0x824B81EC;
	sub_824B0840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b8348
	if (ctx.cr0.lt) goto loc_824B8348;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b59e8
	ctx.lr = 0x824B820C;
	sub_824B59E8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b7ff8
	if (!ctx.cr6.gt) goto loc_824B7FF8;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r27,-4
	ctx.r7.s64 = r27.s64 + -4;
loc_824B8228:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b8284
	if (ctx.cr6.eq) goto loc_824B8284;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x824b8254
	if (ctx.cr6.eq) goto loc_824B8254;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824b827c
	if (!ctx.cr6.eq) goto loc_824B827C;
loc_824B8254:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x824aab40
	ctx.lr = 0x824B825C;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b827c
	if (!ctx.cr0.eq) goto loc_824B827C;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// beq cr6,0x824b827c
	if (ctx.cr6.eq) goto loc_824B827C;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// beq cr6,0x824b827c
	if (ctx.cr6.eq) goto loc_824B827C;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_824B827C:
	// cmplwi cr6,r6,512
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 512, ctx.xer);
	// bge cr6,0x824b8350
	if (!ctx.cr6.lt) goto loc_824B8350;
loc_824B8284:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b8228
	if (ctx.cr6.lt) goto loc_824B8228;
	// b 0x824b7ff8
	goto loc_824B7FF8;
loc_824B829C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(r25.u32, 2, ctx.xer);
	// blt cr6,0x824b7f3c
	if (ctx.cr6.lt) goto loc_824B7F3C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b8344
	if (!ctx.cr6.gt) goto loc_824B8344;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
loc_824B82BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r7,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824b82d8
	if (!ctx.cr6.eq) goto loc_824B82D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_824B82D8:
	// lwz r8,552(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 552);
	// cmplwi cr6,r8,512
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 512, ctx.xer);
	// bge cr6,0x824b81a0
	if (!ctx.cr6.lt) goto loc_824B81A0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,40(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// bne cr6,0x824b8330
	if (!ctx.cr6.eq) goto loc_824B8330;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x824aab40
	ctx.lr = 0x824B8300;
	sub_824AAB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824b8330
	if (!ctx.cr0.eq) goto loc_824B8330;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// beq cr6,0x824b8330
	if (ctx.cr6.eq) goto loc_824B8330;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// beq cr6,0x824b8330
	if (ctx.cr6.eq) goto loc_824B8330;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r11.u32);
loc_824B8330:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b82bc
	if (ctx.cr6.lt) goto loc_824B82BC;
loc_824B8344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B8348:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_824B8350:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824b8348
	goto loc_824B8348;
}

DEFINE_REX_FUNC(sub_824D7C40) {
	REX_FUNC_PROLOGUE();
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824d7c94
	if (!ctx.cr6.lt) goto loc_824D7C94;
loc_824D7C54:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 60, ctx.xer);
	// beq cr6,0x824d7c6c
	if (ctx.cr6.eq) goto loc_824D7C6C;
	// cmpwi cr6,r9,62
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 62, ctx.xer);
	// bne cr6,0x824d7c74
	if (!ctx.cr6.eq) goto loc_824D7C74;
loc_824D7C6C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x824d7c88
	goto loc_824D7C88;
loc_824D7C74:
	// cmpwi cr6,r9,38
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 38, ctx.xer);
	// bne cr6,0x824d7c84
	if (!ctx.cr6.eq) goto loc_824D7C84;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x824d7c88
	goto loc_824D7C88;
loc_824D7C84:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824D7C88:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824d7c54
	if (ctx.cr6.lt) goto loc_824D7C54;
loc_824D7C94:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D8888) {
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
	ctx.lr = 0x824D8890;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D88A4;
	sub_824D7948(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r20,r11,21336
	r20.s64 = ctx.r11.s64 + 21336;
	// addi r21,r10,28488
	r21.s64 = ctx.r10.s64 + 28488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D88C4;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D88CC;
	sub_824D8700(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// extsw r30,r10
	r30.s64 = ctx.r10.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824d8a04
	if (!ctx.cr6.lt) goto loc_824D8A04;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r22,r5,28496
	r22.s64 = ctx.r5.s64 + 28496;
	// addi r27,r6,21252
	r27.s64 = ctx.r6.s64 + 21252;
	// addi r26,r7,21228
	r26.s64 = ctx.r7.s64 + 21228;
	// addi r25,r8,21328
	r25.s64 = ctx.r8.s64 + 21328;
	// addi r24,r9,21320
	r24.s64 = ctx.r9.s64 + 21320;
	// addi r23,r10,21316
	r23.s64 = ctx.r10.s64 + 21316;
	// addi r29,r11,21308
	r29.s64 = ctx.r11.s64 + 21308;
loc_824D8924:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D892C;
	sub_824D7948(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D893C;
	sub_824EAC90(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8950;
	sub_824EAC90(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824D8960;
	sub_824D7B08(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,268(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,264(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 264);
	// bl 0x824eac90
	ctx.lr = 0x824D8978;
	sub_824EAC90(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d89e4
	if (ctx.cr6.eq) goto loc_824D89E4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D8990;
	sub_824EAC90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r4,272(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 272);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_824D89A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824d89a4
	if (!ctx.cr6.eq) goto loc_824D89A4;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D89D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7a18
	ctx.lr = 0x824D89E0;
	sub_824D7A18(ctx, base);
	// b 0x824d89e8
	goto loc_824D89E8;
loc_824D89E4:
	// bl 0x824d86b0
	ctx.lr = 0x824D89E8;
	sub_824D86B0(ctx, base);
loc_824D89E8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,276
	r30.s64 = r30.s64 + 276;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,276
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d8924
	if (ctx.cr6.lt) goto loc_824D8924;
loc_824D8A04:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D8A10;
	sub_824D79A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824DF908) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// stb r30,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, r30.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// bctrl 
	ctx.lr = 0x824DF954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,8(r31)
	REX_STORE_U16(r31.u32 + 8, r30.u16);
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

DEFINE_REX_FUNC(sub_824E32A8) {
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
	ctx.lr = 0x824E32B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824e32d0
	if (!ctx.cr6.eq) goto loc_824E32D0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwbrx r11,0,r3
	REX_STORE_U32(ctx.r3.u32, __builtin_bswap32(ctx.r11.u32));
	// b 0x824e33f4
	goto loc_824E33F4;
loc_824E32D0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824e32ec
	if (!ctx.cr6.eq) goto loc_824E32EC;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// sthbrx r11,0,r3
	REX_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r11.u16));
	// b 0x824e33f4
	goto loc_824E33F4;
loc_824E32EC:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824e331c
	if (!ctx.cr6.eq) goto loc_824E331C;
	// lwbrx r11,0,r4
	ctx.r11.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r4.u32));
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// sthbrx r9,0,r3
	REX_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r9.u16));
	// sthbrx r11,r10,r3
	REX_STORE_U16(ctx.r10.u32 + ctx.r3.u32, __builtin_bswap16(ctx.r11.u16));
	// b 0x824e33f4
	goto loc_824E33F4;
loc_824E331C:
	// clrlwi. r31,r5,16
	r31.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r5,r5,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// beq 0x824e33e8
	if (ctx.cr0.eq) goto loc_824E33E8;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x824e33e8
	if (ctx.cr6.eq) goto loc_824E33E8;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// beq cr6,0x824e338c
	if (ctx.cr6.eq) goto loc_824E338C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e33f4
	if (ctx.cr6.eq) goto loc_824E33F4;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// neg r27,r31
	r27.s64 = static_cast<int64_t>(-r31.u64);
	// add r29,r10,r4
	r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_824E3368:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824E3378;
	sub_826A1E70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// add r28,r28,r31
	r28.u64 = r28.u64 + r31.u64;
	// bne 0x824e3368
	if (!ctx.cr0.eq) goto loc_824E3368;
	// b 0x824e33f4
	goto loc_824E33F4;
loc_824E338C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm. r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824e33f4
	if (ctx.cr0.eq) goto loc_824E33F4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// neg r7,r31
	ctx.r7.s64 = static_cast<int64_t>(-r31.u64);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_824E33A8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824e33d4
	if (ctx.cr6.eq) goto loc_824E33D4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_824E33BC:
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r6,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u8);
	// stb r5,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x824e33bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824E33BC;
loc_824E33D4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bne 0x824e33a8
	if (!ctx.cr0.eq) goto loc_824E33A8;
	// b 0x824e33f4
	goto loc_824E33F4;
loc_824E33E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824e33f4
	if (ctx.cr6.eq) goto loc_824E33F4;
	// bl 0x826a1e70
	ctx.lr = 0x824E33F4;
	sub_826A1E70(ctx, base);
loc_824E33F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824EC0C0) {
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
	ctx.lr = 0x824EC0C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ec0f8
	if (!ctx.cr0.eq) goto loc_824EC0F8;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ec0f8
	if (!ctx.cr0.eq) goto loc_824EC0F8;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ec0f8
	if (ctx.cr0.eq) goto loc_824EC0F8;
	// li r28,1
	r28.s64 = 1;
loc_824EC0F8:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-18712
	r29.s64 = ctx.r11.s64 + -18712;
	// rlwinm r11,r10,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// addi r10,r29,-600
	ctx.r10.s64 = r29.s64 + -600;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824eb568
	ctx.lr = 0x824EC118;
	sub_824EB568(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x824ec12c
	if (!ctx.cr0.eq) goto loc_824EC12C;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_824EC12C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x824ec13c
	if (!ctx.cr6.eq) goto loc_824EC13C;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_824EC13C:
	// rlwinm r10,r11,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824eb648
	ctx.lr = 0x824EC154;
	sub_824EB648(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,9192
	ctx.r4.s64 = ctx.r11.s64 + 9192;
	// bl 0x824eace8
	ctx.lr = 0x824EC164;
	sub_824EACE8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// rlwinm r8,r9,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// addi r11,r11,-19112
	ctx.r11.s64 = ctx.r11.s64 + -19112;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x824ec254
	if (ctx.cr6.lt) goto loc_824EC254;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r10,r7,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1;
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// beq 0x824ec1a8
	if (ctx.cr0.eq) goto loc_824EC1A8;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x824ec1d0
	goto loc_824EC1D0;
loc_824EC1A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ec1bc
	if (ctx.cr0.eq) goto loc_824EC1BC;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x824ec1d0
	goto loc_824EC1D0;
loc_824EC1BC:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_824EC1D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r6,r11,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x824ec200
	if (!ctx.cr0.eq) goto loc_824EC200;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x824ec200
	if (ctx.cr6.eq) goto loc_824EC200;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x824ebca0
	ctx.lr = 0x824EC1FC;
	sub_824EBCA0(ctx, base);
	// b 0x824ec254
	goto loc_824EC254;
loc_824EC200:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x824ec21c
	if (ctx.cr6.eq) goto loc_824EC21C;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x824ec21c
	if (!ctx.cr6.eq) goto loc_824EC21C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x824ec224
	goto loc_824EC224;
loc_824EC21C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_824EC224:
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r11,r8,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824eb9e0
	ctx.lr = 0x824EC254;
	sub_824EB9E0(ctx, base);
loc_824EC254:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824FCB40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824FCB48;
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824fcb70
	if (!ctx.cr6.eq) goto loc_824FCB70;
loc_824FCB64:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824fcbfc
	goto loc_824FCBFC;
loc_824FCB70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824FCB80;
	sub_826A1E70(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x824fcb64
	if (ctx.cr6.eq) goto loc_824FCB64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_824FCB94:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x824fcb64
	if (!ctx.cr6.lt) goto loc_824FCB64;
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
	// bne cr6,0x824fcb94
	if (!ctx.cr6.eq) goto loc_824FCB94;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bge cr6,0x824fcbe4
	if (!ctx.cr6.lt) goto loc_824FCBE4;
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
	// beq cr6,0x824fcbe4
	if (ctx.cr6.eq) goto loc_824FCBE4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824FCBDC:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824fcbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824FCBDC;
loc_824FCBE4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fc808
	ctx.lr = 0x824FCBFC;
	sub_824FC808(ctx, base);
loc_824FCBFC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82502168) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82502170;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82502188:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82502198
	if (!ctx.cr6.eq) goto loc_82502198;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_82502198:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// blt cr6,0x82502188
	if (ctx.cr6.lt) goto loc_82502188;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82501c88
	ctx.lr = 0x825021B4;
	sub_82501C88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825021c0
	if (ctx.cr0.eq) goto loc_825021C0;
	// stw r31,48(r30)
	REX_STORE_U32(r30.u32 + 48, r31.u32);
loc_825021C0:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_825021C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825021e8
	if (ctx.cr6.eq) goto loc_825021E8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82502110
	ctx.lr = 0x825021E0;
	sub_82502110(ctx, base);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825021c4
	goto loc_825021C4;
loc_825021E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82504518) {
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
	// bl 0x82504458
	ctx.lr = 0x82504530;
	sub_82504458(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504540
	if (ctx.cr0.eq) goto loc_82504540;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82504564
	goto loc_82504564;
loc_82504540:
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504560
	if (ctx.cr0.eq) goto loc_82504560;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// blt cr6,0x82504564
	if (ctx.cr6.lt) goto loc_82504564;
loc_82504560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82504564:
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

DEFINE_REX_FUNC(sub_82509448) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
loc_8250944C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509484
	if (ctx.cr6.eq) goto loc_82509484;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8250947c
	if (ctx.cr6.eq) goto loc_8250947C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8250947c
	if (!ctx.cr6.eq) goto loc_8250947C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8250947C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8250944c
	goto loc_8250944C;
loc_82509484:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250B470) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8250b490
	goto loc_8250B490;
loc_8250B488:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8250B490:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8250b488
	if (!ctx.cr6.eq) goto loc_8250B488;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8250b4b8
	goto loc_8250B4B8;
loc_8250B4B0:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_8250B4B8:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8250b4b0
	if (!ctx.cr6.eq) goto loc_8250B4B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x824f7a20
	sub_824F7A20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8250F318) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8250f39c
	if (!ctx.cr0.eq) goto loc_8250F39C;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8250f39c
	if (ctx.cr0.eq) goto loc_8250F39C;
loc_8250F344:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r31,r9,r8
	r31.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x824e4308
	ctx.lr = 0x8250F390;
	sub_824E4308(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8250f344
	if (!ctx.cr6.eq) goto loc_8250F344;
loc_8250F39C:
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

DEFINE_REX_FUNC(sub_8251D988) {
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
	ctx.lr = 0x8251D990;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82519798
	ctx.lr = 0x8251D9A8;
	sub_82519798(ctx, base);
	// lwz r11,700(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251df4c
	if (ctx.cr6.eq) goto loc_8251DF4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250f530
	ctx.lr = 0x8251D9BC;
	sub_8250F530(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r18,0
	r18.s64 = 0;
	// beq 0x8251da1c
	if (ctx.cr0.eq) goto loc_8251DA1C;
	// stw r18,680(r30)
	REX_STORE_U32(r30.u32 + 680, r18.u32);
	// addi r3,r30,972
	ctx.r3.s64 = r30.s64 + 972;
	// stw r18,684(r30)
	REX_STORE_U32(r30.u32 + 684, r18.u32);
	// stw r18,696(r30)
	REX_STORE_U32(r30.u32 + 696, r18.u32);
	// stw r18,700(r30)
	REX_STORE_U32(r30.u32 + 700, r18.u32);
	// stw r18,704(r30)
	REX_STORE_U32(r30.u32 + 704, r18.u32);
	// stw r18,708(r30)
	REX_STORE_U32(r30.u32 + 708, r18.u32);
	// bl 0x824e4528
	ctx.lr = 0x8251D9E8;
	sub_824E4528(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82519798
	ctx.lr = 0x8251D9FC;
	sub_82519798(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251da10
	if (ctx.cr0.eq) goto loc_8251DA10;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251DA10;
	sub_824E4368(ctx, base);
loc_8251DA10:
	// lwz r11,700(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251df4c
	if (ctx.cr6.eq) goto loc_8251DF4C;
loc_8251DA1C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
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
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251dae0
	if (!ctx.cr0.eq) goto loc_8251DAE0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251dae0
	if (ctx.cr0.eq) goto loc_8251DAE0;
loc_8251DA48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x8251dac4
	if (!ctx.cr6.eq) goto loc_8251DAC4;
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 536);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8251da98
	if (ctx.cr6.eq) goto loc_8251DA98;
	// addi r11,r30,352
	ctx.r11.s64 = r30.s64 + 352;
loc_8251DA6C:
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm. r8,r8,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8251da84
	if (ctx.cr0.eq) goto loc_8251DA84;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8251da98
	if (ctx.cr6.eq) goto loc_8251DA98;
loc_8251DA84:
	// lwz r8,536(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 536);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8251da6c
	if (ctx.cr6.lt) goto loc_8251DA6C;
loc_8251DA98:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8251dac4
	if (ctx.cr6.lt) goto loc_8251DAC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,18(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8251DAAC;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,192(r11)
	REX_STORE_U32(ctx.r11.u32 + 192, ctx.r10.u32);
loc_8251DAC4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251dae0
	if (!ctx.cr0.eq) goto loc_8251DAE0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251da48
	if (!ctx.cr6.eq) goto loc_8251DA48;
loc_8251DAE0:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251daf8
	if (ctx.cr0.eq) goto loc_8251DAF8;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8251dafc
	if (ctx.cr0.eq) goto loc_8251DAFC;
loc_8251DAF8:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8251DAFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251dc2c
	if (ctx.cr0.eq) goto loc_8251DC2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82503468
	ctx.lr = 0x8251DB0C;
	sub_82503468(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251dc2c
	if (!ctx.cr0.eq) goto loc_8251DC2C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251dc2c
	if (ctx.cr0.eq) goto loc_8251DC2C;
loc_8251DB24:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251db54
	if (ctx.cr0.eq) goto loc_8251DB54;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251db48
	if (ctx.cr0.eq) goto loc_8251DB48;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
	// b 0x8251db5c
	goto loc_8251DB5C;
loc_8251DB48:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r29,r28,24
	r29.s64 = r28.s64 + 24;
	// b 0x8251db5c
	goto loc_8251DB5C;
loc_8251DB54:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20);
	// addi r29,r28,16
	r29.s64 = r28.s64 + 16;
loc_8251DB5C:
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
	// b 0x8251dc08
	goto loc_8251DC08;
loc_8251DB70:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251dbb0
	if (ctx.cr0.eq) goto loc_8251DBB0;
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251dba4
	if (ctx.cr0.eq) goto loc_8251DBA4;
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251dba4
	if (ctx.cr0.eq) goto loc_8251DBA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516938
	ctx.lr = 0x8251DB98;
	sub_82516938(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
loc_8251DBA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8251DBB0:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251dbc8
	if (!ctx.cr0.eq) goto loc_8251DBC8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251db70
	if (!ctx.cr6.eq) goto loc_8251DB70;
loc_8251DBC8:
	// addi r10,r28,32
	ctx.r10.s64 = r28.s64 + 32;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8251dc10
	if (ctx.cr6.eq) goto loc_8251DC10;
	// addi r11,r28,24
	ctx.r11.s64 = r28.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8251dbf8
	if (ctx.cr6.eq) goto loc_8251DBF8;
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251dbf8
	if (!ctx.cr0.eq) goto loc_8251DBF8;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x8251dc00
	goto loc_8251DC00;
loc_8251DBF8:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_8251DC00:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251dc10
	if (!ctx.cr0.eq) goto loc_8251DC10;
loc_8251DC08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251db70
	if (!ctx.cr6.eq) goto loc_8251DB70;
loc_8251DC10:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251dc2c
	if (!ctx.cr0.eq) goto loc_8251DC2C;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251db24
	if (!ctx.cr6.eq) goto loc_8251DB24;
loc_8251DC2C:
	// lwz r11,700(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 700);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x8251DC40;
	sub_824F7DC0(ctx, base);
	// lwz r31,696(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 696);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251dcd4
	if (ctx.cr6.eq) goto loc_8251DCD4;
	// addi r24,r3,-4
	r24.s64 = ctx.r3.s64 + -4;
loc_8251DC54:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251dcc8
	if (ctx.cr0.eq) goto loc_8251DCC8;
	// stwu r31,4(r24)
	ea = 4 + r24.u32;
	REX_STORE_U32(ea, r31.u32);
	r24.u32 = ea;
	// mr r27,r18
	r27.u64 = r18.u64;
	// lwz r28,192(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 192);
	// rlwinm. r11,r28,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251dca8
	if (ctx.cr0.eq) goto loc_8251DCA8;
	// clrlwi. r11,r28,29
	ctx.r11.u64 = r28.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r18
	r26.u64 = r18.u64;
	// beq 0x8251dca8
	if (ctx.cr0.eq) goto loc_8251DCA8;
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(r28.u32, 0);
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// clrlwi r25,r11,29
	r25.u64 = ctx.r11.u32 & 0x7;
loc_8251DC8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82516d80
	ctx.lr = 0x8251DC94;
	sub_82516D80(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// blt cr6,0x8251dc8c
	if (ctx.cr6.lt) goto loc_8251DC8C;
loc_8251DCA8:
	// clrlwi r11,r28,29
	ctx.r11.u64 = r28.u32 & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8251dcc0
	if (!ctx.cr6.lt) goto loc_8251DCC0;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r27,r10,r11
	r27.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
loc_8251DCC0:
	// rlwimi r28,r27,3,18,28
	r28.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x3FF8) | (r28.u64 & 0xFFFFFFFFFFFFC007);
	// stw r28,192(r31)
	REX_STORE_U32(r31.u32 + 192, r28.u32);
loc_8251DCC8:
	// lwz r31,200(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251dc54
	if (!ctx.cr6.eq) goto loc_8251DC54;
loc_8251DCD4:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// lwz r4,700(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 700);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,26112
	ctx.r6.s64 = ctx.r11.s64 + 26112;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826a0028
	ctx.lr = 0x8251DCEC;
	sub_826A0028(ctx, base);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// lwz r11,792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r18,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r18.u64);
	// std r18,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r18.u64);
	// std r18,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r18.u64);
	// std r18,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r18.u64);
	// bne cr6,0x8251dd14
	if (!ctx.cr6.eq) goto loc_8251DD14;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8251DD14:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8251dd2c
	if (!ctx.cr6.lt) goto loc_8251DD2C;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8251ed40
	ctx.lr = 0x8251DD2C;
	sub_8251ED40(ctx, base);
loc_8251DD2C:
	// lwz r11,700(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 700);
	// mr r19,r18
	r19.u64 = r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8251def8
	if (!ctx.cr6.gt) goto loc_8251DEF8;
	// mr r20,r23
	r20.u64 = r23.u64;
	// li r22,-1
	r22.s64 = -1;
loc_8251DD44:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r27,0(r20)
	r27.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
	// lwz r11,192(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825185b0
	ctx.lr = 0x8251DD80;
	sub_825185B0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8251df54
	if (ctx.cr6.eq) goto loc_8251DF54;
	// lwz r11,192(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 192);
	// mr r21,r18
	r21.u64 = r18.u64;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251debc
	if (ctx.cr0.eq) goto loc_8251DEBC;
	// rlwinm r24,r3,0,0,27
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r28,r18
	r28.u64 = r18.u64;
	// addi r26,r27,16
	r26.s64 = r27.s64 + 16;
loc_8251DDA8:
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// rlwinm r9,r28,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r9,r28,27
	ctx.r9.u64 = r28.u32 & 0x1F;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r8,r22,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// or r25,r11,r24
	r25.u64 = ctx.r11.u64 | r24.u64;
	// b 0x8251de80
	goto loc_8251DE80;
loc_8251DDF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251DE00;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,192(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 192);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251de64
	if (!ctx.cr0.eq) goto loc_8251DE64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// beq cr6,0x8251de64
	if (ctx.cr6.eq) goto loc_8251DE64;
	// lwz r11,692(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 692);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r3,1,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// rlwinm r8,r3,30,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82502350
	ctx.lr = 0x8251DE58;
	sub_82502350(ctx, base);
	// lwz r11,192(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 192);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,192(r29)
	REX_STORE_U32(r29.u32 + 192, ctx.r11.u32);
loc_8251DE64:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251de7c
	if (!ctx.cr6.eq) goto loc_8251DE7C;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x8251de90
	goto loc_8251DE90;
loc_8251DE7C:
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
loc_8251DE80:
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x82501ce0
	ctx.lr = 0x8251DE8C;
	sub_82501CE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8251DE90:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8251ddf4
	if (!ctx.cr6.gt) goto loc_8251DDF4;
	// lwz r11,192(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 192);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8251dda8
	if (ctx.cr6.lt) goto loc_8251DDA8;
loc_8251DEBC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,16384
	ctx.r10.s64 = 16384;
	// lwz r9,192(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 192);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwimi r10,r23,4,18,23
	ctx.r10.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0x3F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwinm r9,r9,0,18,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF0003FFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,192(r27)
	REX_STORE_U32(r27.u32 + 192, ctx.r11.u32);
	// lwz r11,700(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 700);
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8251dd44
	if (ctx.cr6.lt) goto loc_8251DD44;
loc_8251DEF8:
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 668);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8251df4c
	if (!ctx.cr6.gt) goto loc_8251DF4C;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r10,4
	r28.s64 = ctx.r10.s64 + 4;
loc_8251DF14:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251df4c
	if (ctx.cr6.eq) goto loc_8251DF4C;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8251df38
	if (ctx.cr6.eq) goto loc_8251DF38;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516c38
	ctx.lr = 0x8251DF34;
	sub_82516C38(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8251DF38:
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8251df14
	if (ctx.cr6.lt) goto loc_8251DF14;
loc_8251DF4C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce0
	return;
loc_8251DF54:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251df7c
	if (ctx.cr0.eq) goto loc_8251DF7C;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251df7c
	if (!ctx.cr0.eq) goto loc_8251DF7C;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// bl 0x824e3ff0
	ctx.lr = 0x8251DF7C;
	sub_824E3FF0(ctx, base);
loc_8251DF7C:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// rlwinm. r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251dfa4
	if (!ctx.cr0.eq) goto loc_8251DFA4;
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251dfa4
	if (ctx.cr0.eq) goto loc_8251DFA4;
	// ori r11,r11,1025
	ctx.r11.u64 = ctx.r11.u64 | 1025;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// bl 0x824e3ff0
	ctx.lr = 0x8251DFA4;
	sub_824E3FF0(ctx, base);
loc_8251DFA4:
	// li r4,3562
	ctx.r4.s64 = 3562;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251DFB0;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82561980) {
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
	// bl 0x826a1c88
	ctx.lr = 0x82561988;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r17,r4,4
	r17.s64 = ctx.r4.s64 + 4;
loc_825619B0:
	// lwz r29,0(r17)
	r29.u64 = REX_LOAD_U32(r17.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82561e88
	if (ctx.cr6.eq) goto loc_82561E88;
	// lwz r19,16(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82561e74
	if (ctx.cr6.eq) goto loc_82561E74;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r8,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561e74
	if (ctx.cr0.eq) goto loc_82561E74;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561a10
	if (ctx.cr6.eq) goto loc_82561A10;
	// rlwinm r9,r8,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825619E8:
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmpw cr6,r16,r7
	ctx.cr6.compare<int32_t>(r16.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82561a48
	if (ctx.cr6.eq) goto loc_82561A48;
	// lwz r7,0(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825619e8
	if (ctx.cr6.lt) goto loc_825619E8;
loc_82561A10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82561A14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561e74
	if (ctx.cr0.eq) goto loc_82561E74;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82561af0
	if (ctx.cr6.eq) goto loc_82561AF0;
	// rlwinm. r11,r22,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82561a70
	if (!ctx.cr0.eq) goto loc_82561A70;
	// rlwinm. r10,r22,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// beq 0x82561a50
	if (ctx.cr0.eq) goto loc_82561A50;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82561a50
	if (ctx.cr0.eq) goto loc_82561A50;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82561a68
	goto loc_82561A68;
loc_82561A48:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82561a14
	goto loc_82561A14;
loc_82561A50:
	// rlwinm. r10,r22,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82561a64
	if (ctx.cr0.eq) goto loc_82561A64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x82561a68
	if (!ctx.cr0.eq) goto loc_82561A68;
loc_82561A64:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82561A68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82561af0
	if (!ctx.cr0.eq) goto loc_82561AF0;
loc_82561A70:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,28(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82561A84;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r20,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r28,r10,-36
	r28.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r28.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x8250acc8
	ctx.lr = 0x82561AD4;
	sub_8250ACC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82561AE0;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r23,r31
	r23.u64 = r31.u64;
	// li r21,0
	r21.s64 = 0;
	// li r22,0
	r22.s64 = 0;
loc_82561AF0:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r9,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82561c8c
	if (!ctx.cr0.eq) goto loc_82561C8C;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r31,r11,25,25,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,112
	ctx.cr6.compare<uint32_t>(r31.u32, 112, ctx.xer);
	// bne cr6,0x82561b3c
	if (!ctx.cr6.eq) goto loc_82561B3C;
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 28);
	// lwz r10,28(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82561b3c
	if (!ctx.cr6.eq) goto loc_82561B3C;
	// lwz r10,28(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 28);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82561e74
	if (!ctx.cr6.eq) goto loc_82561E74;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x82561e74
	if (ctx.cr6.eq) goto loc_82561E74;
loc_82561B3C:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82550640
	ctx.lr = 0x82561B4C;
	sub_82550640(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561e74
	if (ctx.cr0.eq) goto loc_82561E74;
	// cmplwi cr6,r31,112
	ctx.cr6.compare<uint32_t>(r31.u32, 112, ctx.xer);
	// bne cr6,0x82561be4
	if (!ctx.cr6.eq) goto loc_82561BE4;
	// lwz r4,28(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 28);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82561be4
	if (ctx.cr6.eq) goto loc_82561BE4;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
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
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82561e74
	if (ctx.cr6.eq) goto loc_82561E74;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82549510
	ctx.lr = 0x82561B9C;
	sub_82549510(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82561bb4
	goto loc_82561BB4;
loc_82561BAC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82561BB4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x82561bac
	if (!ctx.cr6.eq) goto loc_82561BAC;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r9,57
	ctx.r9.s64 = 57;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwimi r11,r9,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// b 0x82561e5c
	goto loc_82561E5C;
loc_82561BE4:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82561bfc
	goto loc_82561BFC;
loc_82561BF4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82561BFC:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x82561bf4
	if (!ctx.cr6.eq) goto loc_82561BF4;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r21,5,22,26
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 5) & 0x3E0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rlwinm. r8,r22,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r7,r10,7296
	ctx.r7.u64 = ctx.r10.u64 | 7296;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r23)
	REX_STORE_U32(r23.u32 + 4, r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// stw r23,12(r29)
	REX_STORE_U32(r29.u32 + 12, r23.u32);
	// or r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// clrlwi r11,r9,27
	ctx.r11.u64 = ctx.r9.u32 & 0x1F;
	// beq 0x82561c58
	if (ctx.cr0.eq) goto loc_82561C58;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82561c58
	if (ctx.cr0.eq) goto loc_82561C58;
	// addi r10,r22,-4
	ctx.r10.s64 = r22.s64 + -4;
loc_82561C58:
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82561c6c
	if (ctx.cr0.eq) goto loc_82561C6C;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82561C6C:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82561c80
	if (ctx.cr0.eq) goto loc_82561C80;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82561c80
	if (ctx.cr0.eq) goto loc_82561C80;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82561C80:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwimi r11,r9,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// b 0x82561e5c
	goto loc_82561E5C;
loc_82561C8C:
	// li r30,0
	r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82561cd0
	if (ctx.cr6.eq) goto loc_82561CD0;
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r8,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
loc_82561CAC:
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// or r30,r7,r30
	r30.u64 = ctx.r7.u64 | r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82561cac
	if (ctx.cr6.lt) goto loc_82561CAC;
loc_82561CD0:
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lwz r4,28(r19)
	ctx.r4.u64 = REX_LOAD_U32(r19.u32 + 28);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// mr r28,r30
	r28.u64 = r30.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82561D0C;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x8255e698
	ctx.lr = 0x82561D58;
	sub_8255E698(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82561de4
	if (ctx.cr6.eq) goto loc_82561DE4;
	// addi r30,r31,44
	r30.s64 = r31.s64 + 44;
loc_82561D6C:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// subfic r25,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r25.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// cmpw cr6,r25,r16
	ctx.cr6.compare<int32_t>(r25.s32, r16.s32, ctx.xer);
	// bne cr6,0x82561da0
	if (!ctx.cr6.eq) goto loc_82561DA0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8250acc8
	ctx.lr = 0x82561D9C;
	sub_8250ACC8(ctx, base);
	// b 0x82561dac
	goto loc_82561DAC;
loc_82561DA0:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82561DAC;
	sub_8250AC70(ctx, base);
loc_82561DAC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82561DB8;
	sub_8250AD28(ctx, base);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// slw r9,r26,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r11.u8 & 0x3F));
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r11,r27,r11
	ctx.r11.u64 = r27.u64 & ~ctx.r11.u64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r27,r11,r9
	r27.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82561d6c
	if (!ctx.cr6.eq) goto loc_82561D6C;
loc_82561DE4:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82561dfc
	goto loc_82561DFC;
loc_82561DF4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82561DFC:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x82561df4
	if (!ctx.cr6.eq) goto loc_82561DF4;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r9,r11,24,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// stw r31,12(r29)
	REX_STORE_U32(r29.u32 + 12, r31.u32);
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,26,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r11,28,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r9,r27,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82561E5C:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x82561E70;
	sub_8255E698(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_82561E74:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x825619b0
	if (!ctx.cr6.eq) goto loc_825619B0;
	// addi r17,r29,8
	r17.s64 = r29.s64 + 8;
	// b 0x825619b0
	goto loc_825619B0;
loc_82561E88:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561ee4
	if (ctx.cr0.eq) goto loc_82561EE4;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x82561EA0;
	sub_8255E698(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8255e698
	ctx.lr = 0x82561EB0;
	sub_8255E698(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r30,r20,40
	r30.s64 = r20.s64 + 40;
loc_82561EB8:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82561f08
	if (!ctx.cr6.lt) goto loc_82561F08;
	// lwzu r11,4(r30)
	ea = 4 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8255e698
	ctx.lr = 0x82561EDC;
	sub_8255E698(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82561eb8
	goto loc_82561EB8;
loc_82561EE4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824f7708
	ctx.lr = 0x82561EEC;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82561f08
	if (ctx.cr0.eq) goto loc_82561F08;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825c2288
	ctx.lr = 0x82561F08;
	sub_825C2288(ctx, base);
loc_82561F08:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_8259F938) {
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
	ctx.lr = 0x8259F940;
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r5,r8,16,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// lwz r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// mr r20,r22
	r20.u64 = r22.u64;
	// lwz r3,104(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// mr r18,r22
	r18.u64 = r22.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// rlwinm r31,r7,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x1;
	// rlwinm r30,r11,14,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x8259f5c8
	ctx.lr = 0x8259F99C;
	sub_8259F5C8(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq 0x825a00c4
	if (ctx.cr0.eq) goto loc_825A00C4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,108(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r3,108(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x8259f5c8
	ctx.lr = 0x8259F9BC;
	sub_8259F5C8(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x825a00c4
	if (ctx.cr0.eq) goto loc_825A00C4;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r4,112(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r3,112(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x8259f5c8
	ctx.lr = 0x8259F9DC;
	sub_8259F5C8(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq 0x825a00c4
	if (ctx.cr0.eq) goto loc_825A00C4;
	// lwz r8,4(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// li r30,-1
	r30.s64 = -1;
	// ori r7,r9,21845
	ctx.r7.u64 = ctx.r9.u64 | 21845;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r9,0(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + 0);
	// add r15,r11,r16
	r15.u64 = ctx.r11.u64 + r16.u64;
	// add r14,r10,r20
	r14.u64 = ctx.r10.u64 + r20.u64;
	// lwz r31,112(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// add r19,r9,r18
	r19.u64 = ctx.r9.u64 + r18.u64;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, ctx.xer);
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x8259fa20
	if (!ctx.cr6.gt) goto loc_8259FA20;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8259FA20:
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8259fa34
	if (!ctx.cr6.gt) goto loc_8259FA34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259FA34:
	// bl 0x822f6280
	ctx.lr = 0x8259FA38;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8259fa74
	if (ctx.cr0.eq) goto loc_8259FA74;
	// addic. r11,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	ctx.r11.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// blt 0x8259fa6c
	if (ctx.cr0.lt) goto loc_8259FA6C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8259FA5C:
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// stw r22,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r22.u32);
	// stwu r22,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8259fa5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259FA5C;
loc_8259FA6C:
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// b 0x8259fa78
	goto loc_8259FA78;
loc_8259FA74:
	// mr r21,r22
	r21.u64 = r22.u64;
loc_8259FA78:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x825a00b8
	if (ctx.cr6.eq) goto loc_825A00B8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r17,r10,65535
	r17.u64 = ctx.r10.u64 | 65535;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259faa0
	if (!ctx.cr6.gt) goto loc_8259FAA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8259FAA0:
	// bl 0x822f6280
	ctx.lr = 0x8259FAA4;
	sub_822F6280(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a00b8
	if (ctx.cr6.eq) goto loc_825A00B8;
	// addi r7,r18,4
	ctx.r7.s64 = r18.s64 + 4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x8259fb1c
	if (!ctx.cr6.lt) goto loc_8259FB1C;
loc_8259FAC4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8259fb10
	if (!ctx.cr6.lt) goto loc_8259FB10;
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
loc_8259FAF0:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// bdnz 0x8259faf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259FAF0;
loc_8259FB10:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r19
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r19.u32, ctx.xer);
	// blt cr6,0x8259fac4
	if (ctx.cr6.lt) goto loc_8259FAC4;
loc_8259FB1C:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r19
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r19.u32, ctx.xer);
	// bge cr6,0x825a00ac
	if (!ctx.cr6.lt) goto loc_825A00AC;
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
loc_8259FB40:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r11,4
	r24.s64 = ctx.r11.s64 + 4;
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x8259fbf0
	if (!ctx.cr6.lt) goto loc_8259FBF0;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8259FB5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r31,r11,12
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259fbe4
	if (!ctx.cr6.eq) goto loc_8259FBE4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8259fb94
	if (ctx.cr6.eq) goto loc_8259FB94;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r31,r21
	REX_STORE_U32(r31.u32 + r21.u32, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// b 0x8259fbc4
	goto loc_8259FBC4;
loc_8259FB94:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x8259fbb4
	if (!ctx.cr6.gt) goto loc_8259FBB4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8259FBB4:
	// bl 0x822f6280
	ctx.lr = 0x8259FBB8;
	sub_822F6280(ctx, base);
	// stwx r3,r31,r21
	REX_STORE_U32(r31.u32 + r21.u32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a00b4
	if (ctx.cr6.eq) goto loc_825A00B4;
loc_8259FBC4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r31,r21
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r21.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x8259FBE4;
	sub_826A2E60(ctx, base);
loc_8259FBE4:
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(r30.u32, r23.u32, ctx.xer);
	// blt cr6,0x8259fb5c
	if (ctx.cr6.lt) goto loc_8259FB5C;
loc_8259FBF0:
	// addi r30,r20,4
	r30.s64 = r20.s64 + 4;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// bge cr6,0x8259fd74
	if (!ctx.cr6.lt) goto loc_8259FD74;
	// addi r26,r16,4
	r26.s64 = r16.s64 + 4;
loc_8259FC04:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8259FC2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r15
	ctx.cr6.compare<uint32_t>(r26.u32, r15.u32, ctx.xer);
	// bge cr6,0x8259fd64
	if (!ctx.cr6.lt) goto loc_8259FD64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8259FC40:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bge cr6,0x8259fd54
	if (!ctx.cr6.lt) goto loc_8259FD54;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
loc_8259FC58:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// bge cr6,0x8259fd48
	if (!ctx.cr6.lt) goto loc_8259FD48;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
loc_8259FC68:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwzx r10,r10,r21
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x8259fd3c
	if (!ctx.cr6.lt) goto loc_8259FD3C;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
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
loc_8259FCAC:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f13,f0,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f11.f64)));
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
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
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
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
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
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// bdnz 0x8259fcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259FCAC;
loc_8259FD3C:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x8259fc68
	if (ctx.cr6.lt) goto loc_8259FC68;
loc_8259FD48:
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r23.u32, ctx.xer);
	// blt cr6,0x8259fc58
	if (ctx.cr6.lt) goto loc_8259FC58;
loc_8259FD54:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r15.u32, ctx.xer);
	// blt cr6,0x8259fc40
	if (ctx.cr6.lt) goto loc_8259FC40;
loc_8259FD64:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r14
	ctx.cr6.compare<uint32_t>(r29.u32, r14.u32, ctx.xer);
	// blt cr6,0x8259fc04
	if (ctx.cr6.lt) goto loc_8259FC04;
loc_8259FD74:
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(r24.u32, r23.u32, ctx.xer);
	// bge cr6,0x825a0094
	if (!ctx.cr6.lt) goto loc_825A0094;
loc_8259FD80:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r30,r11,r21
	r30.u64 = ctx.r11.u64 + r21.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bne 0x825a0088
	if (!ctx.cr0.eq) goto loc_825A0088;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825a007c
	if (!ctx.cr6.gt) goto loc_825A007C;
loc_8259FDB0:
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x8259ff74
	if (ctx.cr6.eq) goto loc_8259FF74;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8259feac
	if (ctx.cr6.eq) goto loc_8259FEAC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x825a0038
	if (!ctx.cr6.eq) goto loc_825A0038;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a0038
	if (ctx.cr6.eq) goto loc_825A0038;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_8259FDF4:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x8259fe08
	if (!ctx.cr6.lt) goto loc_8259FE08;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x8259fe14
	goto loc_8259FE14;
loc_8259FE08:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x8259fe14
	if (ctx.cr6.lt) goto loc_8259FE14;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_8259FE14:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8259fe2c
	if (!ctx.cr6.lt) goto loc_8259FE2C;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x8259fe40
	goto loc_8259FE40;
loc_8259FE2C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8259fe3c
	if (!ctx.cr6.lt) goto loc_8259FE3C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8259fe40
	goto loc_8259FE40;
loc_8259FE3C:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8259FE40:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8259fe58
	if (!ctx.cr6.lt) goto loc_8259FE58;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x8259fe6c
	goto loc_8259FE6C;
loc_8259FE58:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8259fe68
	if (!ctx.cr6.lt) goto loc_8259FE68;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8259fe6c
	goto loc_8259FE6C;
loc_8259FE68:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8259FE6C:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8259fe84
	if (!ctx.cr6.lt) goto loc_8259FE84;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
	// b 0x8259fe90
	goto loc_8259FE90;
loc_8259FE84:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8259fe90
	if (ctx.cr6.lt) goto loc_8259FE90;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8259FE90:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8259fdf4
	if (ctx.cr6.lt) goto loc_8259FDF4;
	// b 0x825a0038
	goto loc_825A0038;
loc_8259FEAC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a0038
	if (ctx.cr6.eq) goto loc_825A0038;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_8259FEBC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bge cr6,0x8259fed0
	if (!ctx.cr6.lt) goto loc_8259FED0;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x8259fedc
	goto loc_8259FEDC;
loc_8259FED0:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x8259fedc
	if (ctx.cr6.lt) goto loc_8259FEDC;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_8259FEDC:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8259fef4
	if (!ctx.cr6.lt) goto loc_8259FEF4;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x8259ff08
	goto loc_8259FF08;
loc_8259FEF4:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8259ff04
	if (!ctx.cr6.lt) goto loc_8259FF04;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8259ff08
	goto loc_8259FF08;
loc_8259FF04:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8259FF08:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8259ff20
	if (!ctx.cr6.lt) goto loc_8259FF20;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x8259ff34
	goto loc_8259FF34;
loc_8259FF20:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8259ff30
	if (!ctx.cr6.lt) goto loc_8259FF30;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8259ff34
	goto loc_8259FF34;
loc_8259FF30:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8259FF34:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8259ff4c
	if (!ctx.cr6.lt) goto loc_8259FF4C;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x8259ff58
	goto loc_8259FF58;
loc_8259FF4C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8259ff58
	if (ctx.cr6.lt) goto loc_8259FF58;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_8259FF58:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8259febc
	if (ctx.cr6.lt) goto loc_8259FEBC;
	// b 0x825a0038
	goto loc_825A0038;
loc_8259FF74:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a0038
	if (ctx.cr6.eq) goto loc_825A0038;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
loc_8259FF84:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, f29.f64);
	// bge cr6,0x8259ff98
	if (!ctx.cr6.lt) goto loc_8259FF98;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x8259ffa4
	goto loc_8259FFA4;
loc_8259FF98:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// blt cr6,0x8259ffa4
	if (ctx.cr6.lt) goto loc_8259FFA4;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_8259FFA4:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8259ffbc
	if (!ctx.cr6.lt) goto loc_8259FFBC;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x8259ffd0
	goto loc_8259FFD0;
loc_8259FFBC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8259ffcc
	if (!ctx.cr6.lt) goto loc_8259FFCC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8259ffd0
	goto loc_8259FFD0;
loc_8259FFCC:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8259FFD0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x8259ffe8
	if (!ctx.cr6.lt) goto loc_8259FFE8;
	// fmr f13,f29
	ctx.f13.f64 = f29.f64;
	// b 0x8259fffc
	goto loc_8259FFFC;
loc_8259FFE8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8259fff8
	if (!ctx.cr6.lt) goto loc_8259FFF8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8259fffc
	goto loc_8259FFFC;
loc_8259FFF8:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_8259FFFC:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// bge cr6,0x825a0014
	if (!ctx.cr6.lt) goto loc_825A0014;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
	// b 0x825a0020
	goto loc_825A0020;
loc_825A0014:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x825a0020
	if (ctx.cr6.lt) goto loc_825A0020;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_825A0020:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,104(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8259ff84
	if (ctx.cr6.lt) goto loc_8259FF84;
loc_825A0038:
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825A0068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8259fdb0
	if (ctx.cr6.lt) goto loc_8259FDB0;
loc_825A007C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_825A0088:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(r29.u32, r23.u32, ctx.xer);
	// blt cr6,0x8259fd80
	if (ctx.cr6.lt) goto loc_8259FD80;
loc_825A0094:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// blt cr6,0x8259fb40
	if (ctx.cr6.lt) goto loc_8259FB40;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r22,0
	r22.s64 = 0;
loc_825A00AC:
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x825a00cc
	goto loc_825A00CC;
loc_825A00B4:
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_825A00B8:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x825a00cc
	goto loc_825A00CC;
loc_825A00C4:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_825A00CC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x825a00e0
	if (ctx.cr6.eq) goto loc_825A00E0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8259f8b8
	ctx.lr = 0x825A00E0;
	sub_8259F8B8(ctx, base);
loc_825A00E0:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825A00E8;
	sub_8269CE98(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825A00F0;
	sub_8269CE98(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825A00F8;
	sub_8269CE98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x825A0100;
	sub_8269CE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269ce98
	ctx.lr = 0x825A0108;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

DEFINE_REX_FUNC(sub_825CF588) {
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
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r7,104(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r11,r8,r5
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823fbbb8
	ctx.lr = 0x825CF5DC;
	sub_823FBBB8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cf5f4
	if (ctx.cr6.eq) goto loc_825CF5F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CF5F4;
	sub_825C73B8(ctx, base);
loc_825CF5F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cf60c
	if (ctx.cr6.eq) goto loc_825CF60C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CF60C;
	sub_825C7788(ctx, base);
loc_825CF60C:
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

DEFINE_REX_FUNC(sub_825D0458) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// ori r11,r11,339
	ctx.r11.u64 = ctx.r11.u64 | 339;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825d0478
	if (!ctx.cr6.eq) goto loc_825D0478;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20240);
	ctx.f13.f64 = double(temp.f32);
	// b 0x825d0480
	goto loc_825D0480;
loc_825D0478:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f13.f64 = double(temp.f32);
loc_825D0480:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f9,f9,f13,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f12,20228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20228);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f11,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f12,20224(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20224);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmadds f8,f8,f12,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f0,20232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20236(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20236);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f9
	ctx.f11.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// fctiwz f11,f7
	ctx.f11.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f11.u64);
	// lwa r11,-28(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -28));
	// lwa r9,-12(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// stfd f11,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lwa r10,-20(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -20));
	// fctiwz f11,f8
	ctx.f11.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f11,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwa r11,-20(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -20));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D69E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825d69f0
	if (ctx.cr6.eq) goto loc_825D69F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_825D69F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D70B0) {
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
	ctx.lr = 0x825D70B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r10,-31152
	ctx.r9.s64 = ctx.r10.s64 + -31152;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r28,8(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,7552
	r26.s64 = ctx.r10.s64 + 7552;
	// bne cr6,0x825d7108
	if (!ctx.cr6.eq) goto loc_825D7108;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1690
	ctx.r7.s64 = 1690;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7108;
	sub_824EA978(ctx, base);
loc_825D7108:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b6b00
	ctx.lr = 0x825D7114;
	sub_825B6B00(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825d7134
	if (!ctx.cr0.eq) goto loc_825D7134;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,7652
	ctx.r5.s64 = ctx.r11.s64 + 7652;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1691
	ctx.r7.s64 = 1691;
	// bl 0x824ea978
	ctx.lr = 0x825D7134;
	sub_824EA978(ctx, base);
loc_825D7134:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// bl 0x825b6b00
	ctx.lr = 0x825D7148;
	sub_825B6B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825b6b00
	ctx.lr = 0x825D7174;
	sub_825B6B00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825DEE90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,100
	ctx.r11.s64 = 100;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x825deee8
	if (ctx.cr6.eq) goto loc_825DEEE8;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x825deee8
	if (ctx.cr6.eq) goto loc_825DEEE8;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x825deee8
	if (ctx.cr6.eq) goto loc_825DEEE8;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x825deee8
	if (ctx.cr6.eq) goto loc_825DEEE8;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825deeec
	if (!ctx.cr6.eq) goto loc_825DEEEC;
loc_825DEEE8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825DEEEC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E4118) {
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
	ctx.lr = 0x825E4120;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bne cr6,0x825e415c
	if (!ctx.cr6.eq) goto loc_825E415C;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x825e4160
	goto loc_825E4160;
loc_825E415C:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
loc_825E4160:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r9,-21368
	ctx.r9.s64 = ctx.r9.s64 + -21368;
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm. r9,r9,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r26,r10,11616
	r26.s64 = ctx.r10.s64 + 11616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x825e4334
	if (ctx.cr0.eq) goto loc_825E4334;
	// bctrl 
	ctx.lr = 0x825E41A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x825e41d4
	if (!ctx.cr6.gt) goto loc_825E41D4;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e41d4
	if (ctx.cr6.eq) goto loc_825E41D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,13244
	ctx.r5.s64 = ctx.r11.s64 + 13244;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2470
	ctx.r7.s64 = 2470;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E41D4;
	sub_824EA978(ctx, base);
loc_825E41D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E41E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x825e4310
	if (ctx.cr6.lt) goto loc_825E4310;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2338
	ctx.lr = 0x825E4204;
	sub_825E2338(ctx, base);
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// lbz r10,133(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 133);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e422c
	if (!ctx.cr6.eq) goto loc_825E422C;
	// lbz r10,134(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 134);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e422c
	if (!ctx.cr6.eq) goto loc_825E422C;
	// lbz r10,135(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 135);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e4248
	if (ctx.cr6.eq) goto loc_825E4248;
loc_825E422C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,13096
	ctx.r5.s64 = ctx.r11.s64 + 13096;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2475
	ctx.r7.s64 = 2475;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E4248;
	sub_824EA978(ctx, base);
loc_825E4248:
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// addic. r11,r11,-3
	ctx.xer.ca = ctx.r11.u32 > 2;
	ctx.r11.s64 = ctx.r11.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x825e4258
	if (!ctx.cr0.lt) goto loc_825E4258;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825E4258:
	// rlwinm r11,r11,6,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E4274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x825e42e0
	if (!ctx.cr6.gt) goto loc_825E42E0;
	// lbz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 136);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x825e428c
	if (!ctx.cr0.lt) goto loc_825E428C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825E428C:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
	// lbz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 136);
	// lbz r10,137(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 137);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e42c0
	if (!ctx.cr6.eq) goto loc_825E42C0;
	// lbz r10,138(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 138);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e42c0
	if (!ctx.cr6.eq) goto loc_825E42C0;
	// lbz r10,139(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 139);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e4310
	if (ctx.cr6.eq) goto loc_825E4310;
loc_825E42C0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,12944
	ctx.r5.s64 = ctx.r11.s64 + 12944;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2480
	ctx.r7.s64 = 2480;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E42DC;
	sub_824EA978(ctx, base);
	// b 0x825e4310
	goto loc_825E4310;
loc_825E42E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x825e42f4
	if (ctx.cr6.eq) goto loc_825E42F4;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bne cr6,0x825e4310
	if (!ctx.cr6.eq) goto loc_825E4310;
loc_825E42F4:
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 132);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x825e4304
	if (!ctx.cr0.lt) goto loc_825E4304;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825E4304:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
loc_825E4310:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,27328
	ctx.r10.s64 = ctx.r10.s64 + 27328;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r9,r11,26,0,5
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000) | (ctx.r9.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// b 0x825e449c
	goto loc_825E449C;
loc_825E4334:
	// bctrl 
	ctx.lr = 0x825E4338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,256
	r28.s64 = 16777216;
	// lis r29,2
	r29.s64 = 131072;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x825e439c
	if (ctx.cr6.lt) goto loc_825E439C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2338
	ctx.lr = 0x825E435C;
	sub_825E2338(ctx, base);
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
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r29,r11
	ctx.r8.u64 = ctx.r11.u64 - r29.u64;
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
loc_825E439C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E43B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x825e440c
	if (ctx.cr6.lt) goto loc_825E440C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2338
	ctx.lr = 0x825E43CC;
	sub_825E2338(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r29,r11
	ctx.r8.u64 = ctx.r11.u64 - r29.u64;
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
	// stb r11,6(r30)
	REX_STORE_U8(r30.u32 + 6, ctx.r11.u8);
loc_825E440C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E4420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x825e447c
	if (ctx.cr6.lt) goto loc_825E447C;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e2338
	ctx.lr = 0x825E443C;
	sub_825E2338(ctx, base);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + r28.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r29,r11
	ctx.r8.u64 = ctx.r11.u64 - r29.u64;
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
	// stb r11,7(r30)
	REX_STORE_U8(r30.u32 + 7, ctx.r11.u8);
loc_825E447C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r10,r10,27328
	ctx.r10.s64 = ctx.r10.s64 + 27328;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r9,r11,24,3,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F000000) | (ctx.r9.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
loc_825E449C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e28b0
	ctx.lr = 0x825E44A8;
	sub_825E28B0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e44dc
	if (ctx.cr0.eq) goto loc_825E44DC;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825e44dc
	if (ctx.cr6.eq) goto loc_825E44DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,12916
	ctx.r5.s64 = ctx.r11.s64 + 12916;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2519
	ctx.r7.s64 = 2519;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E44DC;
	sub_824EA978(ctx, base);
loc_825E44DC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r10,r11,27,3,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x18000000) | (ctx.r10.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825FC610) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fc640
	if (ctx.cr6.eq) goto loc_825FC640;
	// bl 0x825fc510
	ctx.lr = 0x825FC640;
	sub_825FC510(ctx, base);
loc_825FC640:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
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

DEFINE_REX_FUNC(sub_825FE5B8) {
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
	ctx.lr = 0x825FE5C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825d79a0
	ctx.lr = 0x825FE5CC;
	sub_825D79A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// bne 0x825fe698
	if (!ctx.cr0.eq) goto loc_825FE698;
	// lbz r11,2116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2116);
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x825fe60c
	if (ctx.cr0.eq) goto loc_825FE60C;
	// lwz r6,2124(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2124);
	// lwz r7,2128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 2128);
	// neg r11,r6
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// lwz r5,2120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// stw r11,2132(r31)
	REX_STORE_U32(r31.u32 + 2132, ctx.r11.u32);
	// bl 0x825f42b0
	ctx.lr = 0x825FE608;
	sub_825F42B0(ctx, base);
	// b 0x825fe620
	goto loc_825FE620;
loc_825FE60C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825f42b0
	ctx.lr = 0x825FE61C;
	sub_825F42B0(ctx, base);
	// stw r30,2132(r31)
	REX_STORE_U32(r31.u32 + 2132, r30.u32);
loc_825FE620:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r29,r31,1096
	r29.s64 = r31.s64 + 1096;
	// stw r11,2084(r31)
	REX_STORE_U32(r31.u32 + 2084, ctx.r11.u32);
loc_825FE62C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825fe684
	if (ctx.cr6.eq) goto loc_825FE684;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e9338
	ctx.lr = 0x825FE644;
	sub_825E9338(ctx, base);
	// lbz r11,2116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825fe684
	if (ctx.cr0.eq) goto loc_825FE684;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,2120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x825fe684
	if (!ctx.cr6.eq) goto loc_825FE684;
	// lwz r11,2128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2128);
	// lwz r10,2124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2124);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x825fe684
	if (!ctx.cr6.lt) goto loc_825FE684;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e92d8
	ctx.lr = 0x825FE684;
	sub_825E92D8(ctx, base);
loc_825FE684:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x825fe62c
	if (ctx.cr6.lt) goto loc_825FE62C;
	// b 0x825fe8dc
	goto loc_825FE8DC;
loc_825FE698:
	// lbz r11,2100(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2100);
	// li r23,1
	r23.s64 = 1;
	// stw r30,2112(r31)
	REX_STORE_U32(r31.u32 + 2112, r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,2132(r31)
	REX_STORE_U32(r31.u32 + 2132, r30.u32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// beq 0x825fe798
	if (ctx.cr0.eq) goto loc_825FE798;
	// lwz r11,2104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2104);
	// lwz r9,2108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2108);
	// subfic r8,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stw r8,2112(r31)
	REX_STORE_U32(r31.u32 + 2112, ctx.r8.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// addi r24,r10,1
	r24.s64 = ctx.r10.s64 + 1;
	// bge cr6,0x825fe798
	if (!ctx.cr6.lt) goto loc_825FE798;
loc_825FE6D8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x825e6c30
	ctx.lr = 0x825FE6EC;
	sub_825E6C30(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x825fe788
	if (ctx.cr0.eq) goto loc_825FE788;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_825FE700:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825fe718
	if (!ctx.cr6.gt) goto loc_825FE718;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x825fe724
	goto loc_825FE724;
loc_825FE718:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwzx r28,r10,r27
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
loc_825FE724:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fe758
	if (ctx.cr0.eq) goto loc_825FE758;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 228);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825fe74c
	if (ctx.cr0.eq) goto loc_825FE74C;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,228(r28)
	REX_STORE_U32(r28.u32 + 228, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7d20
	ctx.lr = 0x825FE74C;
	sub_825D7D20(ctx, base);
loc_825FE74C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x825fe700
	goto loc_825FE700;
loc_825FE758:
	// lwz r11,2112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r23,5(r26)
	REX_STORE_U8(r26.u32 + 5, r23.u8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r11.u32);
	// lwz r11,2112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2112);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x825e9338
	ctx.lr = 0x825FE778;
	sub_825E9338(ctx, base);
	// lwz r11,2112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x825e92d8
	ctx.lr = 0x825FE788;
	sub_825E92D8(ctx, base);
loc_825FE788:
	// lwz r11,2108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2108);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825fe6d8
	if (ctx.cr6.lt) goto loc_825FE6D8;
loc_825FE798:
	// lbz r11,2116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825fe8b8
	if (ctx.cr0.eq) goto loc_825FE8B8;
	// lwz r11,2124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2124);
	// lwz r10,2128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2128);
	// subf r9,r11,r24
	ctx.r9.u64 = r24.u64 - ctx.r11.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stw r9,2132(r31)
	REX_STORE_U32(r31.u32 + 2132, ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825fe8b8
	if (!ctx.cr6.lt) goto loc_825FE8B8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r26,-32250
	r26.s64 = -2113536000;
	// addi r25,r9,-20260
	r25.s64 = ctx.r9.s64 + -20260;
	// addi r28,r8,22852
	r28.s64 = ctx.r8.s64 + 22852;
	// addi r24,r10,-20268
	r24.s64 = ctx.r10.s64 + -20268;
	// addi r27,r11,-20568
	r27.s64 = ctx.r11.s64 + -20568;
loc_825FE7E4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,2120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e6c30
	ctx.lr = 0x825FE7F4;
	sub_825E6C30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825fe8a8
	if (ctx.cr0.eq) goto loc_825FE8A8;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r4,-30160(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + -30160);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FE824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x825fe844
	if (!ctx.cr0.eq) goto loc_825FE844;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4505
	ctx.r7.s64 = 4505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FE844;
	sub_824EA978(ctx, base);
loc_825FE844:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FE858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825fe878
	if (!ctx.cr0.eq) goto loc_825FE878;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,4506
	ctx.r7.s64 = 4506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FE878;
	sub_824EA978(ctx, base);
loc_825FE878:
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r23,5(r30)
	REX_STORE_U8(r30.u32 + 5, r23.u8);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x825e9338
	ctx.lr = 0x825FE898;
	sub_825E9338(ctx, base);
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x825e92d8
	ctx.lr = 0x825FE8A8;
	sub_825E92D8(ctx, base);
loc_825FE8A8:
	// lwz r11,2128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2128);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825fe7e4
	if (ctx.cr6.lt) goto loc_825FE7E4;
loc_825FE8B8:
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f42b0
	ctx.lr = 0x825FE8D4;
	sub_825F42B0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// stw r11,2084(r31)
	REX_STORE_U32(r31.u32 + 2084, ctx.r11.u32);
loc_825FE8DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825f3728
	ctx.lr = 0x825FE8E4;
	sub_825F3728(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826168E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826168F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 364);
	// b 0x82616944
	goto loc_82616944;
loc_8261691C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82616938
	if (ctx.cr6.eq) goto loc_82616938;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8261693c
	goto loc_8261693C;
loc_82616938:
	// li r31,0
	r31.s64 = 0;
loc_8261693C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x82616950
	if (ctx.cr6.eq) goto loc_82616950;
loc_82616944:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261691c
	if (!ctx.cr6.eq) goto loc_8261691C;
	// b 0x82616974
	goto loc_82616974;
loc_82616950:
	// addi r3,r30,340
	ctx.r3.s64 = r30.s64 + 340;
	// bl 0x82625870
	ctx.lr = 0x82616958;
	sub_82625870(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x82616974;
	sub_8264C3D0(ctx, base);
loc_82616974:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8261B368) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261DB28) {
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
	ctx.lr = 0x8261DB30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// bl 0x826e07e0
	ctx.lr = 0x8261DB50;
	sub_826E07E0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261dc38
	if (ctx.cr6.eq) goto loc_8261DC38;
	// lhz r11,34(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261dc2c
	if (ctx.cr6.eq) goto loc_8261DC2C;
	// li r29,0
	r29.s64 = 0;
loc_8261DB6C:
	// mulli r11,r29,1776
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1776));
	// li r3,28
	ctx.r3.s64 = 28;
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x826e07e0
	ctx.lr = 0x8261DB7C;
	sub_826E07E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r3.u32);
	// beq cr6,0x8261dc38
	if (ctx.cr6.eq) goto loc_8261DC38;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8261DB98:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8261db98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261DB98;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// bl 0x826e07e0
	ctx.lr = 0x8261DBB0;
	sub_826E07E0(ctx, base);
	// lwz r10,424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 424);
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,424(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8261dc38
	if (ctx.cr6.eq) goto loc_8261DC38;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,7
	ctx.r5.s64 = ctx.r11.s64 + 7;
	// bl 0x826a2e60
	ctx.lr = 0x8261DBDC;
	sub_826A2E60(ctx, base);
	// lwz r8,424(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 424);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// extsh r29,r10
	r29.s64 = ctx.r10.s16;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r6,424(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// lwz r3,424(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lhz r10,34(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 34);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8261db6c
	if (ctx.cr6.lt) goto loc_8261DB6C;
loc_8261DC2C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8261DC38:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82628268) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82628290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826282A8;
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

DEFINE_REX_FUNC(sub_826295F8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826298c0
	sub_826298C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82629620) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82629CD8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82629d08
	if (ctx.cr6.eq) goto loc_82629D08;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// bl 0x823f0350
	ctx.lr = 0x82629D00;
	sub_823F0350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82629D08:
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

DEFINE_REX_FUNC(sub_8262E4F0) {
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
	// bl 0x826a2c70
	ctx.lr = 0x8262E500;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
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
	// lfs f0,15504(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f12,88(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f19,f12,f0
	f19.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,84(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,92(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f20,f13,f0
	f20.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,48(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f11,f0
	f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f28,f11,f0
	f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,60(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,64(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f26,f11,f0
	f26.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f25,f12,f0
	f25.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,68(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,72(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f24,f11,f0
	f24.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f23,f12,f0
	f23.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f11,76(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,80(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f22,f11,f0
	f22.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f20,-172(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fmuls f21,f12,f0
	f21.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f19,-168(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f13,-164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// bne cr6,0x8262e7d8
	if (!ctx.cr6.eq) goto loc_8262E7D8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8262ec10
	if (ctx.cr6.eq) goto loc_8262EC10;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8262E614:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.r6.u64);
	// lfd f13,-464(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// std r5,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.r5.u64);
	// lfd f0,-472(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.r5.u64);
	// lfd f0,-312(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// fcfid f18,f0
	f18.f64 = double(ctx.f0.s64);
	// std r3,-448(r1)
	REX_STORE_U64(ctx.r1.u32 + -448, ctx.r3.u64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// lfd f12,-448(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -448);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f18
	ctx.f12.f64 = double(float(f18.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
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
	// beq cr6,0x8262e750
	if (ctx.cr6.eq) goto loc_8262E750;
	// stfd f8,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f8.u64);
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
	// lfd f8,-328(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
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
	// b 0x8262e7bc
	goto loc_8262E7BC;
loc_8262E750:
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
loc_8262E7BC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8262e614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262E614;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262E7CC;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8262E7D8:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f10,-480(r1)
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f10.u64);
	// stfd f9,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f9.u64);
	// stfd f8,-448(r1)
	REX_STORE_U64(ctx.r1.u32 + -448, ctx.f8.u64);
	// stfd f7,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f7.u64);
	// stfd f6,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.f6.u64);
	// stfd f5,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.f5.u64);
	// stfd f4,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.f4.u64);
	// stfd f3,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f3.u64);
	// stfd f2,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f2.u64);
	// stfd f1,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f1.u64);
	// stfd f31,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, f31.u64);
	// stfd f30,-456(r1)
	REX_STORE_U64(ctx.r1.u32 + -456, f30.u64);
	// stfd f29,-440(r1)
	REX_STORE_U64(ctx.r1.u32 + -440, f29.u64);
	// stfd f28,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, f28.u64);
	// stfd f27,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, f27.u64);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f18,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	f18.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f17,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	f17.f64 = double(temp.f32);
	// fmuls f18,f18,f0
	f18.f64 = double(float(f18.f64 * ctx.f0.f64));
	// lfs f16,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f16.f64 = double(temp.f32);
	// fmuls f17,f17,f0
	f17.f64 = double(float(f17.f64 * ctx.f0.f64));
	// lfs f15,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	f15.f64 = double(temp.f32);
	// fmuls f16,f16,f0
	f16.f64 = double(float(f16.f64 * ctx.f0.f64));
	// lfs f14,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f14.f64 = double(temp.f32);
	// fmuls f15,f15,f0
	f15.f64 = double(float(f15.f64 * ctx.f0.f64));
	// lfs f10,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f14,f14,f0
	f14.f64 = double(float(f14.f64 * ctx.f0.f64));
	// lfs f9,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,56(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,60(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f31,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	f31.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f30,76(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 76);
	f30.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f29,80(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 80);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f28,84(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 84);
	f28.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * ctx.f0.f64));
	// lfs f27,88(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 88);
	f27.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	f28.f64 = double(float(f28.f64 * ctx.f0.f64));
	// stfd f26,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, f26.u64);
	// fmuls f27,f27,f0
	f27.f64 = double(float(f27.f64 * ctx.f0.f64));
	// lfs f26,92(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 92);
	f26.f64 = double(temp.f32);
	// stfs f11,-432(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 * ctx.f0.f64));
	// stfs f12,-428(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// stfs f13,-424(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// stfs f18,-420(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// stfs f17,-416(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// stfs f16,-412(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// stfs f15,-408(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// stfs f14,-404(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// stfs f10,-400(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// stfs f9,-396(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// stfs f8,-392(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// stfs f7,-388(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// stfs f6,-384(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// stfs f5,-380(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// stfs f4,-376(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// stfs f3,-372(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -372, temp.u32);
	// stfs f2,-368(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// stfs f1,-364(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// stfs f31,-360(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// stfs f30,-356(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// stfs f29,-352(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// stfs f28,-348(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// stfs f27,-344(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// lfd f10,-480(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// lfd f9,-328(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// lfd f8,-448(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -448);
	// lfd f7,-312(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// lfd f6,-464(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// lfd f5,-472(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// lfd f4,-272(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// lfd f3,-288(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f2,-296(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// lfd f1,-280(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// lfd f31,-264(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// lfd f30,-456(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -456);
	// lfd f29,-440(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -440);
	// lfd f28,-336(r1)
	f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// lfd f27,-320(r1)
	f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// lfd f26,-304(r1)
	f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// stfs f0,-340(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// beq cr6,0x8262ec10
	if (ctx.cr6.eq) goto loc_8262EC10;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8262E998:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r6.u64);
	// lfd f0,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// std r5,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r5.u64);
	// lfd f12,-320(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r5,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r5.u64);
	// lfd f11,-336(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// std r3,-440(r1)
	REX_STORE_U64(ctx.r1.u32 + -440, ctx.r3.u64);
	// lfd f11,-440(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -440);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f18,f0,f8
	f18.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmuls f19,f0,f19
	f19.f64 = double(float(ctx.f0.f64 * f19.f64));
	// fmadds f18,f11,f7,f18
	f18.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, f18.f64)));
	// beq cr6,0x8262eac8
	if (ctx.cr6.eq) goto loc_8262EAC8;
	// fmuls f16,f0,f4
	f16.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfd f8,-456(r1)
	REX_STORE_U64(ctx.r1.u32 + -456, ctx.f8.u64);
	// fmuls f15,f0,f31
	f15.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f20,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	f20.f64 = double(temp.f32);
	// fmuls f14,f0,f27
	f14.f64 = double(float(ctx.f0.f64 * f27.f64));
	// lfs f17,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	f17.f64 = double(temp.f32);
	// fmuls f8,f0,f23
	ctx.f8.f64 = double(float(ctx.f0.f64 * f23.f64));
	// lfs f0,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f16,f11,f3,f16
	f16.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f16.f64)));
	// fmadds f15,f11,f30,f15
	f15.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f15.f64)));
	// fmadds f14,f11,f26,f14
	f14.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f14.f64)));
	// fmadds f8,f11,f22,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, ctx.f8.f64)));
	// fmadds f11,f11,f0,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, f19.f64)));
	// fmadds f19,f12,f9,f18
	f19.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f12,f5,f16
	f18.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, f16.f64)));
	// fmadds f16,f12,f1,f15
	f16.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, f15.f64)));
	// fmadds f15,f12,f28,f14
	f15.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f14.f64)));
	// fmadds f14,f12,f24,f8
	f14.f64 = double(float(std::fma(ctx.f12.f64, f24.f64, ctx.f8.f64)));
	// lfd f8,-456(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -456);
	// fmadds f12,f12,f20,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f11.f64)));
	// fmadds f11,f13,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, f19.f64)));
	// fmadds f19,f13,f6,f18
	f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, f18.f64)));
	// fmadds f18,f13,f2,f16
	f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, f16.f64)));
	// fmadds f16,f13,f29,f15
	f16.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, f15.f64)));
	// fmadds f15,f13,f25,f14
	f15.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f14.f64)));
	// fmadds f13,f13,f21,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f12.f64)));
	// fadds f12,f11,f17
	ctx.f12.f64 = double(float(ctx.f11.f64 + f17.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f19,f11
	ctx.f12.f64 = double(float(f19.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f18,f11
	ctx.f12.f64 = double(float(f18.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f16,f11
	ctx.f12.f64 = double(float(f16.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f15,f11
	ctx.f12.f64 = double(float(f15.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8262eb38
	goto loc_8262EB38;
loc_8262EAC8:
	// fmuls f17,f0,f4
	ctx.fpscr.disableFlushMode();
	f17.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f16,f0,f31
	f16.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f15,f0,f27
	f15.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f14,f0,f23
	f14.f64 = double(float(ctx.f0.f64 * f23.f64));
	// lfs f0,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f17,f11,f3,f17
	f17.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, f17.f64)));
	// fmadds f16,f11,f30,f16
	f16.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, f16.f64)));
	// fmadds f15,f11,f26,f15
	f15.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f15.f64)));
	// fmadds f14,f11,f22,f14
	f14.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, f14.f64)));
	// fmadds f11,f11,f0,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, f19.f64)));
	// fmadds f19,f12,f9,f18
	f19.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, f18.f64)));
	// fmadds f18,f12,f5,f17
	f18.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, f17.f64)));
	// fmadds f17,f12,f1,f16
	f17.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, f16.f64)));
	// fmadds f16,f12,f28,f15
	f16.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f15.f64)));
	// fmadds f15,f12,f24,f14
	f15.f64 = double(float(std::fma(ctx.f12.f64, f24.f64, f14.f64)));
	// fmadds f12,f12,f20,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f11.f64)));
	// fmadds f11,f13,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, f19.f64)));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f11,f13,f6,f18
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, f18.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f2,f17
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, f17.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f29,f16
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, f16.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f25,f15
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, f15.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f13,f13,f21,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f12.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_8262EB38:
	// lfs f12,-348(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -348);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f20,f12,f20
	f20.f64 = double(float(ctx.f12.f64 + f20.f64));
	// lfs f13,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -340);
	ctx.f12.f64 = double(temp.f32);
	// fadds f19,f11,f13
	f19.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,-432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-428(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f12,-424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f11,-420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// lfs f12,-412(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// lfs f11,-408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// lfs f12,-400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// lfs f11,-396(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-392(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f12,-388(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f13,f31
	f31.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fadds f30,f12,f30
	f30.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lfs f11,-384(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-380(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f11,f29
	f29.f64 = double(float(ctx.f11.f64 + f29.f64));
	// lfs f12,-376(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f13,f28
	f28.f64 = double(float(ctx.f13.f64 + f28.f64));
	// fadds f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 + f27.f64));
	// lfs f11,-372(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-368(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f26,f11,f26
	f26.f64 = double(float(ctx.f11.f64 + f26.f64));
	// lfs f12,-364(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f13,f25
	f25.f64 = double(float(ctx.f13.f64 + f25.f64));
	// fadds f24,f12,f24
	f24.f64 = double(float(ctx.f12.f64 + f24.f64));
	// lfs f11,-360(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-356(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f13.f64 = double(temp.f32);
	// fadds f23,f11,f23
	f23.f64 = double(float(ctx.f11.f64 + f23.f64));
	// lfs f12,-352(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -352);
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
	// bdnz 0x8262e998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262E998;
loc_8262EC10:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262EC18;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826677D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826677D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,132
	r29.s64 = ctx.r3.s64 + 132;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x826677F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82667818
	if (ctx.cr6.lt) goto loc_82667818;
	// beq cr6,0x82667810
	if (ctx.cr6.eq) goto loc_82667810;
	// lis r31,-32646
	r31.s64 = -2139488256;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
	// b 0x8266783c
	goto loc_8266783C;
loc_82667810:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82667820
	goto loc_82667820;
loc_82667818:
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// ori r5,r5,4114
	ctx.r5.u64 = ctx.r5.u64 | 4114;
loc_82667820:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// clrlwi r4,r30,31
	ctx.r4.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665e68
	ctx.lr = 0x82667838;
	sub_82665E68(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8266783C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82667844;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8266A4A0) {
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
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266a4ec
	if (!ctx.cr0.eq) goto loc_8266A4EC;
	// lwz r11,60(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// li r10,4
	ctx.r10.s64 = 4;
	// sth r6,85(r1)
	REX_STORE_U16(ctx.r1.u32 + 85, ctx.r6.u16);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r7,87(r1)
	REX_STORE_U32(ctx.r1.u32 + 87, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,11
	ctx.r6.s64 = 11;
	// stw r11,81(r1)
	REX_STORE_U32(ctx.r1.u32 + 81, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826698e0
	ctx.lr = 0x8266A4E8;
	sub_826698E0(ctx, base);
	// b 0x8266a4f0
	goto loc_8266A4F0;
loc_8266A4EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266A4F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8266D460) {
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
	// bl 0x826a1c84
	ctx.lr = 0x8266D468;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// li r15,0
	r15.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r26,r15
	r26.u64 = r15.u64;
	// mr r16,r15
	r16.u64 = r15.u64;
	// bne 0x8266d4a0
	if (!ctx.cr0.eq) goto loc_8266D4A0;
loc_8266D494:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
	// b 0x8266da28
	goto loc_8266DA28;
loc_8266D4A0:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266d494
	if (!ctx.cr6.eq) goto loc_8266D494;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8266d958
	if (ctx.cr6.eq) goto loc_8266D958;
	// cmplwi cr6,r6,42
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 42, ctx.xer);
	// blt cr6,0x8266d494
	if (ctx.cr6.lt) goto loc_8266D494;
	// lwz r17,1(r28)
	r17.u64 = REX_LOAD_U32(r28.u32 + 1);
	// addi r9,r6,-42
	ctx.r9.s64 = ctx.r6.s64 + -42;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
	// lwz r18,5(r28)
	r18.u64 = REX_LOAD_U32(r28.u32 + 5);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
	// lwz r19,9(r28)
	r19.u64 = REX_LOAD_U32(r28.u32 + 9);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
	// cmplw cr6,r18,r19
	ctx.cr6.compare<uint32_t>(r18.u32, r19.u32, ctx.xer);
	// beq cr6,0x8266d494
	if (ctx.cr6.eq) goto loc_8266D494;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lbz r24,13(r28)
	r24.u64 = REX_LOAD_U8(r28.u32 + 13);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8266d960
	if (ctx.cr6.gt) goto loc_8266D960;
	// mulli r11,r24,42
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(42));
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8266d960
	if (ctx.cr6.gt) goto loc_8266D960;
	// lwz r20,14(r28)
	r20.u64 = REX_LOAD_U32(r28.u32 + 14);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266d494
	if (!ctx.cr6.eq) goto loc_8266D494;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8266d494
	if (ctx.cr6.gt) goto loc_8266D494;
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8266d494
	if (!ctx.cr6.lt) goto loc_8266D494;
	// addi r29,r31,360
	r29.s64 = r31.s64 + 360;
	// addi r4,r28,18
	ctx.r4.s64 = r28.s64 + 18;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8266D550;
	sub_826A1E70(ctx, base);
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 72);
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - r19.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r23,r11,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82675b48
	ctx.lr = 0x8266D56C;
	sub_82675B48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8264c828
	ctx.lr = 0x8266D584;
	sub_8264C828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266d5f4
	if (!ctx.cr0.eq) goto loc_8266D5F4;
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8266d608
	if (ctx.cr6.eq) goto loc_8266D608;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r8,r29,8
	ctx.r8.s64 = r29.s64 + 8;
loc_8266D5A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8266d5c4
	if (!ctx.cr0.eq) goto loc_8266D5C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8266d5a4
	if (!ctx.cr6.eq) goto loc_8266D5A4;
loc_8266D5C4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8266d608
	if (ctx.cr0.eq) goto loc_8266D608;
	// addi r4,r31,368
	ctx.r4.s64 = r31.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c800
	ctx.lr = 0x8266D5D8;
	sub_8264C800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266d5f4
	if (!ctx.cr0.eq) goto loc_8266D5F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826b49d0
	ctx.lr = 0x8266D5EC;
	sub_826B49D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266d600
	if (ctx.cr0.eq) goto loc_8266D600;
loc_8266D5F4:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4107
	r30.u64 = r30.u64 | 4107;
	// b 0x8266d968
	goto loc_8266D968;
loc_8266D600:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
loc_8266D608:
	// addi r27,r31,432
	r27.s64 = r31.s64 + 432;
loc_8266D60C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r22
	ea = r22.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r22
	ea = r22.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266d60c
	if (!ctx.cr0.eq) goto loc_8266D60C;
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,2
	r21.s64 = 2;
	// li r16,1
	r16.s64 = 1;
	// addi r28,r28,42
	r28.s64 = r28.s64 + 42;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stwx r22,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, r22.u32);
	// lwz r11,292(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 292);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,292(r22)
	REX_STORE_U32(r22.u32 + 292, ctx.r11.u32);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// beq cr6,0x8266d830
	if (ctx.cr6.eq) goto loc_8266D830;
	// addi r25,r28,4
	r25.s64 = r28.s64 + 4;
loc_8266D668:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8266d960
	if (ctx.cr6.eq) goto loc_8266D960;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8266d960
	if (ctx.cr6.gt) goto loc_8266D960;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266d960
	if (!ctx.cr6.eq) goto loc_8266D960;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8266D6A4;
	sub_826A1E70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82670c20
	ctx.lr = 0x8266D6B4;
	sub_82670C20(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x8266d85c
	if (ctx.cr0.eq) goto loc_8266D85C;
	// lwz r11,292(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 292);
	// stw r30,60(r26)
	REX_STORE_U32(r26.u32 + 60, r30.u32);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,292(r26)
	REX_STORE_U32(r26.u32 + 292, ctx.r11.u32);
loc_8266D6CC:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r26
	ea = r26.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r26
	ea = r26.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266d6cc
	if (!ctx.cr0.eq) goto loc_8266D6CC;
	// stwx r26,r29,r27
	REX_STORE_U32(r29.u32 + r27.u32, r26.u32);
	// subf r11,r19,r30
	ctx.r11.u64 = r30.u64 - r19.u64;
	// lwz r10,292(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 292);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,292(r26)
	REX_STORE_U32(r26.u32 + 292, ctx.r10.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r26,20
	ctx.r4.s64 = r26.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r23,r11,r23
	r23.u64 = ctx.r11.u64 | r23.u64;
	// bl 0x82661668
	ctx.lr = 0x8266D71C;
	sub_82661668(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// li r10,257
	ctx.r10.s64 = 257;
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lhz r8,384(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 384);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// stb r21,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r21.u8);
	// sth r10,113(r1)
	REX_STORE_U16(ctx.r1.u32 + 113, ctx.r10.u16);
	// stw r18,117(r1)
	REX_STORE_U32(ctx.r1.u32 + 117, r18.u32);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// sth r8,115(r1)
	REX_STORE_U16(ctx.r1.u32 + 115, ctx.r8.u16);
	// ble cr6,0x8266d758
	if (!ctx.cr6.gt) goto loc_8266D758;
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x8266d75c
	goto loc_8266D75C;
loc_8266D758:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8266D75C:
	// stb r11,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, ctx.r11.u8);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266d778
	if (ctx.cr6.eq) goto loc_8266D778;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, ctx.r11.u32);
	// b 0x8266d77c
	goto loc_8266D77C;
loc_8266D778:
	// stw r15,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, r15.u32);
loc_8266D77C:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82675a60
	ctx.lr = 0x8266D79C;
	sub_82675A60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8266d968
	if (ctx.cr0.lt) goto loc_8266D968;
loc_8266D7A4:
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
	// bne 0x8266d7a4
	if (!ctx.cr0.eq) goto loc_8266D7A4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,72(r26)
	REX_STORE_U32(r26.u32 + 72, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266d7ec
	if (ctx.cr6.eq) goto loc_8266D7EC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82661c08
	ctx.lr = 0x8266D7E4;
	sub_82661C08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
loc_8266D7EC:
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r11,r31,240
	ctx.r11.s64 = r31.s64 + 240;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r9,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r9.u32);
	// addi r28,r28,42
	r28.s64 = r28.s64 + 42;
	// stw r11,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r11.u32);
	// addi r25,r25,42
	r25.s64 = r25.s64 + 42;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// mr r26,r15
	r26.u64 = r15.u64;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// bne 0x8266d668
	if (!ctx.cr0.eq) goto loc_8266D668;
loc_8266D830:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x8266d960
	if (ctx.cr6.eq) goto loc_8266D960;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8266d88c
	if (ctx.cr6.eq) goto loc_8266D88C;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,258
	ctx.r3.s64 = 258;
	// bl 0x82663958
	ctx.lr = 0x8266D850;
	sub_82663958(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// bne 0x8266d868
	if (!ctx.cr0.eq) goto loc_8266D868;
loc_8266D85C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8266d968
	goto loc_8266D968;
loc_8266D868:
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
	// bne 0x8266d868
	if (!ctx.cr0.eq) goto loc_8266D868;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
loc_8266D88C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82670d68
	ctx.lr = 0x8266D894;
	sub_82670D68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// bl 0x82675a58
	ctx.lr = 0x8266D8A0;
	sub_82675A58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8266d968
	if (ctx.cr0.lt) goto loc_8266D968;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 184);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8266d8dc
	if (!ctx.cr6.gt) goto loc_8266D8DC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8266D8BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8266d8dc
	if (ctx.cr6.eq) goto loc_8266D8DC;
	// lwz r9,184(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8266d8bc
	if (ctx.cr6.lt) goto loc_8266D8BC;
loc_8266D8DC:
	// clrlwi r10,r18,24
	ctx.r10.u64 = r18.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266d960
	if (!ctx.cr6.eq) goto loc_8266D960;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r17,196(r31)
	REX_STORE_U32(r31.u32 + 196, r17.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stwx r9,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// stw r17,264(r31)
	REX_STORE_U32(r31.u32 + 264, r17.u32);
	// bl 0x826726c0
	ctx.lr = 0x8266D914;
	sub_826726C0(ctx, base);
	// lwz r11,60(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 60);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8266d928
	if (!ctx.cr6.eq) goto loc_8266D928;
	// stw r22,32(r31)
	REX_STORE_U32(r31.u32 + 32, r22.u32);
loc_8266D928:
	// stw r21,180(r31)
	REX_STORE_U32(r31.u32 + 180, r21.u32);
	// lwz r11,292(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 292);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r11,292(r22)
	REX_STORE_U32(r22.u32 + 292, ctx.r11.u32);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// bne 0x8266d958
	if (!ctx.cr0.eq) goto loc_8266D958;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266bb58
	ctx.lr = 0x8266D950;
	sub_8266BB58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266d968
	if (!ctx.cr0.eq) goto loc_8266D968;
loc_8266D958:
	// mr r30,r15
	r30.u64 = r15.u64;
	// b 0x8266da28
	goto loc_8266DA28;
loc_8266D960:
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4106
	r30.u64 = r30.u64 | 4106;
loc_8266D968:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266d998
	if (ctx.cr6.eq) goto loc_8266D998;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266D988;
	sub_8266BFC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8266d9cc
	if (ctx.cr0.lt) goto loc_8266D9CC;
	// mr r30,r15
	r30.u64 = r15.u64;
	// b 0x8266d9cc
	goto loc_8266D9CC;
loc_8266D998:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8266d9cc
	if (ctx.cr6.eq) goto loc_8266D9CC;
loc_8266D9A0:
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// bne 0x8266d9a0
	if (!ctx.cr0.eq) goto loc_8266D9A0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266d9cc
	if (!ctx.cr6.eq) goto loc_8266D9CC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266D9CC;
	sub_82670CD8(ctx, base);
loc_8266D9CC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x8266da28
	if (ctx.cr6.eq) goto loc_8266DA28;
	// lwz r29,240(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r28,r31,240
	r28.s64 = r31.s64 + 240;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x8266da1c
	if (ctx.cr6.eq) goto loc_8266DA1C;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x8266da1c
	if (ctx.cr0.eq) goto loc_8266DA1C;
loc_8266D9EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// cmplw cr6,r4,r22
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r22.u32, ctx.xer);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x8266da14
	if (ctx.cr6.eq) goto loc_8266DA14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266c148
	ctx.lr = 0x8266DA14;
	sub_8266C148(ctx, base);
loc_8266DA14:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8266d9ec
	if (!ctx.cr6.eq) goto loc_8266D9EC;
loc_8266DA1C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826652d0
	ctx.lr = 0x8266DA28;
	sub_826652D0(ctx, base);
loc_8266DA28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82692220) {
	REX_FUNC_PROLOGUE();
	// b 0x82692160
	sub_82692160(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826924C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826924D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823ecc50
	ctx.lr = 0x826924E8;
	sub_823ECC50(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82692370
	ctx.lr = 0x826924F8;
	sub_82692370(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ecc50
	ctx.lr = 0x82692504;
	sub_823ECC50(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,-6000
	ctx.r11.s64 = ctx.r11.s64 + -6000;
	// ld r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// bge cr6,0x82692528
	if (!ctx.cr6.lt) goto loc_82692528;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82692528:
	// ld r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// ble cr6,0x82692538
	if (!ctx.cr6.gt) goto loc_82692538;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_82692538:
	// ld r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82695B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r8,r11,23
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 23;
	// clrlwi r7,r11,9
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFF;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// oris r8,r7,16256
	ctx.r8.u64 = ctx.r7.u64 | 1065353216;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f12,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3804(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82699748) {
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
	ctx.lr = 0x82699750;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// li r31,16384
	r31.s64 = 16384;
	// lfs f0,19036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19036);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,32324(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5640(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 5640);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f11.u64);
	// lwz r5,-44(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f11,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f11.u64);
	// lwz r8,-44(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// divw r29,r3,r5
	r29.u64 = uint32_t((ctx.r5.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r5.s32 == -1)) ? ctx.r3.s32 / ctx.r5.s32 : 0);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bge cr6,0x826997cc
	if (!ctx.cr6.lt) goto loc_826997CC;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_826997B8:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// blt cr6,0x826997b8
	if (ctx.cr6.lt) goto loc_826997B8;
loc_826997CC:
	// addi r9,r29,2048
	ctx.r9.s64 = r29.s64 + 2048;
	// srawi r5,r9,12
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 12;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82699868
	if (!ctx.cr6.lt) goto loc_82699868;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lfs f10,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f10.f64 = double(temp.f32);
	// lwz r30,24720(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 24720);
loc_826997F0:
	// addis r31,r31,1
	r31.s64 = r31.s64 + 65536;
	// fmr f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f0.f64;
	// addi r31,r31,-32768
	r31.s64 = r31.s64 + -32768;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bge cr6,0x82699848
	if (!ctx.cr6.lt) goto loc_82699848;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
loc_8269980C:
	// srawi r11,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 7;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r9,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lwzx r9,r28,r4
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r4.u32);
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsel f11,f8,f9,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// blt cr6,0x8269980c
	if (ctx.cr6.lt) goto loc_8269980C;
loc_82699848:
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// srawi r5,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 12;
	// lfsx f9,r9,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// fmadds f13,f9,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f12.f64)));
	// blt cr6,0x826997f0
	if (ctx.cr6.lt) goto loc_826997F0;
loc_82699868:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,8944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8944);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f13,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fmuls f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826A08B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a08ec
	if (!ctx.cr6.eq) goto loc_826A08EC;
	// bl 0x826a33d0
	ctx.lr = 0x826A08D4;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A08E0;
	sub_8269CB20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// b 0x826a0954
	goto loc_826A0954;
loc_826A08EC:
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r31,r11,27400
	r31.s64 = ctx.r11.s64 + 27400;
	// lwz r11,27400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27400);
loc_826A08F8:
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x826a091c
	if (!ctx.cr6.gt) goto loc_826A091C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826ab498
	ctx.lr = 0x826A0914;
	sub_826AB498(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x826a0930
	goto loc_826A0930;
loc_826A091C:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_826A0930:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826a0940
	if (ctx.cr6.eq) goto loc_826A0940;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x826a08f8
	goto loc_826A08F8;
loc_826A0940:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ab4d0
	ctx.lr = 0x826A0950;
	sub_826AB4D0(ctx, base);
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
loc_826A0954:
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

DEFINE_REX_FUNC(sub_826A3920) {
	REX_FUNC_PROLOGUE();
	// b 0x82793f04
	__imp__KeTlsSetValue(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_14) {
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
	uint32_t ea{};
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx v14,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx v15,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx v16,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx v17,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx v18,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx v19,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx v20,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_94) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AE2D8) {
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
	ctx.lr = 0x826AE2E0;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r4,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r5,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r5.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r6,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r6.u32);
	// bl 0x826ae138
	ctx.lr = 0x826AE30C;
	sub_826AE138(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// beq cr6,0x826ae348
	if (ctx.cr6.eq) goto loc_826AE348;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_826AE324:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826ae348
	if (!ctx.cr6.eq) goto loc_826AE348;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// stw r27,204(r31)
	REX_STORE_U32(r31.u32 + 204, r27.u32);
	// bne cr6,0x826ae324
	if (!ctx.cr6.eq) goto loc_826AE324;
loc_826AE348:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bne cr6,0x826ae358
	if (!ctx.cr6.eq) goto loc_826AE358;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x826ae44c
	if (ctx.cr6.eq) goto loc_826AE44C;
loc_826AE358:
	// bl 0x826a3a68
	ctx.lr = 0x826AE35C;
	sub_826A3A68(ctx, base);
	// addi r10,r3,132
	ctx.r10.s64 = ctx.r3.s64 + 132;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_826AE370:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// beq cr6,0x826ae418
	if (ctx.cr6.eq) goto loc_826AE418;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// ble cr6,0x826ae38c
	if (!ctx.cr6.gt) goto loc_826AE38C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ae390
	if (ctx.cr6.lt) goto loc_826AE390;
loc_826AE38C:
	// bl 0x826af230
	ctx.lr = 0x826AE390;
	sub_826AF230(ctx, base);
loc_826AE390:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r29,r28,3,0,28
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826ae3e8
	if (ctx.cr6.eq) goto loc_826AE3E8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826ae178
	ctx.lr = 0x826AE3CC;
	sub_826AE178(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826b2650
	ctx.lr = 0x826AE3E8;
	sub_826B2650(ctx, base);
loc_826AE3E8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826ae40c
	goto loc_826AE40C;
loc_826AE40C:
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826ae370
	goto loc_826AE370;
loc_826AE418:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x826ae454
	ctx.lr = 0x826AE424;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826AE454(ctx, base);
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826ae438
	if (ctx.cr6.eq) goto loc_826AE438;
	// bl 0x826af230
	ctx.lr = 0x826AE438;
	sub_826AF230(ctx, base);
loc_826AE438:
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r5,196(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// bl 0x826ae178
	ctx.lr = 0x826AE44C;
	sub_826AE178(ctx, base);
loc_826AE44C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826B9678) {
	REX_FUNC_PROLOGUE();
	// lwz r3,592(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 592);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x826b94b0
	sub_826B94B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826B9C28) {
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
	ctx.lr = 0x826B9C30;
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
	// beq cr6,0x826b9c68
	if (ctx.cr6.eq) goto loc_826B9C68;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9C64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
loc_826B9C68:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9c88
	if (ctx.cr6.eq) goto loc_826B9C88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_826B9C88:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b9ca8
	if (ctx.cr6.eq) goto loc_826B9CA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9CA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
loc_826B9CA8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826b9cc8
	if (ctx.cr6.eq) goto loc_826B9CC8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
loc_826B9CC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826b9ce8
	if (ctx.cr6.eq) goto loc_826B9CE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	REX_STORE_U32(r31.u32 + 60, r28.u32);
loc_826B9CE8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826b9d08
	if (ctx.cr6.eq) goto loc_826B9D08;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
loc_826B9D08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826C17A8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,444(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1858) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,29792
	ctx.r10.s64 = ctx.r11.s64 + 29792;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826c8ab0
	ctx.lr = 0x826C1884;
	sub_826C8AB0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c18a4
	if (ctx.cr6.eq) goto loc_826C18A4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32823
	ctx.r4.u64 = ctx.r4.u64 | 32823;
	// bl 0x823f0350
	ctx.lr = 0x826C18A0;
	sub_823F0350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826C18A4:
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

DEFINE_REX_FUNC(sub_826C34E0) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x82793e64
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C35E0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C3BF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C3BF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3C10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826c3edc
	if (!ctx.cr6.eq) goto loc_826C3EDC;
	// li r29,0
	r29.s64 = 0;
loc_826C3C20:
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3C40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826c3e80
	if (ctx.cr6.eq) goto loc_826C3E80;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,260(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x826c3e2c
	if (!ctx.cr6.eq) goto loc_826C3E2C;
loc_826C3C8C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3CA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c1ad0
	ctx.lr = 0x826C3CA8;
	sub_826C1AD0(ctx, base);
	// lwz r9,248(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 248);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x826c3db4
	if (!ctx.cr6.gt) goto loc_826C3DB4;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c1b30
	ctx.lr = 0x826C3CBC;
	sub_826C1B30(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,136(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 136);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3D0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3D24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lwz r28,0(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bctrl 
	ctx.lr = 0x826C3D40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,120(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 120);
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826C3D58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// blt cr6,0x826c3e00
	if (ctx.cr6.lt) goto loc_826C3E00;
	// bctrl 
	ctx.lr = 0x826C3D74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c1c30
	ctx.lr = 0x826C3D7C;
	sub_826C1C30(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,208(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 208);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826c3e2c
	if (ctx.cr6.eq) goto loc_826C3E2C;
	// b 0x826c3ddc
	goto loc_826C3DDC;
loc_826C3DB4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,168(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 168);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C3DDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3DF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826c3c8c
	if (ctx.cr6.eq) goto loc_826C3C8C;
	// b 0x826c3e2c
	goto loc_826C3E2C;
loc_826C3E00:
	// bctrl 
	ctx.lr = 0x826C3E04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,96(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C3E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C3E2C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3E40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c3e60
	if (ctx.cr6.eq) goto loc_826C3E60;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3E5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_826C3E60:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826c3e80
	if (ctx.cr6.eq) goto loc_826C3E80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3E7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_826C3E80:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3E94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x826c3edc
	if (!ctx.cr6.eq) goto loc_826C3EDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3EB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,268(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 268);
	// bl 0x823ed0c0
	ctx.lr = 0x826C3EBC;
	sub_823ED0C0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,260(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C3ED0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826c3c20
	if (ctx.cr6.eq) goto loc_826C3C20;
loc_826C3EDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C3EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826DDFC8) {
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
	ctx.lr = 0x826DDFD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r4,31252(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 31252);
	// bl 0x826c6958
	ctx.lr = 0x826DDFEC;
	sub_826C6958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de0c0
	if (ctx.cr6.lt) goto loc_826DE0C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826de024
	if (ctx.cr6.eq) goto loc_826DE024;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r4,31264(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 31264);
	// bl 0x826c6718
	ctx.lr = 0x826DE00C;
	sub_826C6718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826de024
	if (ctx.cr6.eq) goto loc_826DE024;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826DE024:
	// lis r11,-32146
	ctx.r11.s64 = -2106720256;
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// lis r9,-32146
	ctx.r9.s64 = -2106720256;
	// addi r11,r11,-13944
	ctx.r11.s64 = ctx.r11.s64 + -13944;
	// addi r10,r10,-11304
	ctx.r10.s64 = ctx.r10.s64 + -11304;
	// addi r9,r9,-11000
	ctx.r9.s64 = ctx.r9.s64 + -11000;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32146
	ctx.r8.s64 = -2106720256;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r7,-32146
	ctx.r7.s64 = -2106720256;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lis r6,-32146
	ctx.r6.s64 = -2106720256;
	// lis r5,-32146
	ctx.r5.s64 = -2106720256;
	// lis r4,-32146
	ctx.r4.s64 = -2106720256;
	// lis r29,-32146
	r29.s64 = -2106720256;
	// lis r28,-32146
	r28.s64 = -2106720256;
	// lis r27,-32146
	r27.s64 = -2106720256;
	// addi r8,r8,-8792
	ctx.r8.s64 = ctx.r8.s64 + -8792;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r7,-8680
	ctx.r7.s64 = ctx.r7.s64 + -8680;
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// addi r6,r6,-10992
	ctx.r6.s64 = ctx.r6.s64 + -10992;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r5,r5,-10584
	ctx.r5.s64 = ctx.r5.s64 + -10584;
	// stw r7,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// addi r4,r4,-10408
	ctx.r4.s64 = ctx.r4.s64 + -10408;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// addi r11,r29,-10104
	ctx.r11.s64 = r29.s64 + -10104;
	// stw r5,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r10,r28,-9512
	ctx.r10.s64 = r28.s64 + -9512;
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// addi r9,r27,-11168
	ctx.r9.s64 = r27.s64 + -11168;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826de0c0
	if (!ctx.cr6.eq) goto loc_826DE0C0;
	// lis r3,80
	ctx.r3.s64 = 5242880;
loc_826DE0C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E1418) {
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
	// ble cr6,0x826e143c
	if (!ctx.cr6.gt) goto loc_826E143C;
	// bl 0x826e3fc0
	ctx.lr = 0x826E143C;
	sub_826E3FC0(ctx, base);
loc_826E143C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e37d0
	ctx.lr = 0x826E1444;
	sub_826E37D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e3c80
	ctx.lr = 0x826E144C;
	sub_826E3C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e145c
	if (ctx.cr6.lt) goto loc_826E145C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826f5638
	ctx.lr = 0x826E145C;
	sub_826F5638(ctx, base);
loc_826E145C:
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

DEFINE_REX_FUNC(sub_826E2E70) {
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
	ctx.lr = 0x826E2E78;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,356(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r29,348(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lhz r28,342(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 342);
	// lhz r27,334(r1)
	r27.u64 = REX_LOAD_U16(ctx.r1.u32 + 334);
	// lwz r26,324(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r25,316(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r24,308(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r29,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// sth r28,118(r1)
	REX_STORE_U16(ctx.r1.u32 + 118, r28.u16);
	// sth r27,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, r27.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// bl 0x826e0aa8
	ctx.lr = 0x826E2EC4;
	sub_826E0AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e2f14
	if (ctx.cr6.lt) goto loc_826E2F14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e26e0
	ctx.lr = 0x826E2ED4;
	sub_826E26E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e2f14
	if (ctx.cr6.lt) goto loc_826E2F14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e2d80
	ctx.lr = 0x826E2EE4;
	sub_826E2D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e2f14
	if (ctx.cr6.lt) goto loc_826E2F14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e0e30
	ctx.lr = 0x826E2EF4;
	sub_826E0E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e2f14
	if (ctx.cr6.lt) goto loc_826E2F14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e1418
	ctx.lr = 0x826E2F04;
	sub_826E1418(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826e2f14
	if (ctx.cr6.lt) goto loc_826E2F14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82635be0
	ctx.lr = 0x826E2F14;
	sub_82635BE0(ctx, base);
loc_826E2F14:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826ED110) {
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
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r31,0
	r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x826ed1ac
	if (ctx.cr6.eq) goto loc_826ED1AC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x826ed170
	if (ctx.cr6.eq) goto loc_826ED170;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x826ed158
	if (ctx.cr6.eq) goto loc_826ED158;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x826ed1b0
	goto loc_826ED1B0;
loc_826ED158:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r3,r10,-29900
	ctx.r3.s64 = ctx.r10.s64 + -29900;
	// rlwinm r4,r11,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x826ed080
	ctx.lr = 0x826ED16C;
	sub_826ED080(ctx, base);
	// b 0x826ed1b0
	goto loc_826ED1B0;
loc_826ED170:
	// subfic r11,r6,24
	ctx.xer.ca = ctx.r6.u32 <= 24;
	ctx.r11.u64 = static_cast<uint64_t>(24) - ctx.r6.u64;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826ed194
	if (ctx.cr6.lt) goto loc_826ED194;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r3,r9,-29900
	ctx.r3.s64 = ctx.r9.s64 + -29900;
	// bl 0x826ed080
	ctx.lr = 0x826ED190;
	sub_826ED080(ctx, base);
	// b 0x826ed1b0
	goto loc_826ED1B0;
loc_826ED194:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// sraw r4,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r4.s64 = ctx.r10.s32 >> temp.u32;
	// addi r3,r8,-29900
	ctx.r3.s64 = ctx.r8.s64 + -29900;
	// bl 0x826ed080
	ctx.lr = 0x826ED1A8;
	sub_826ED080(ctx, base);
	// b 0x826ed1b0
	goto loc_826ED1B0;
loc_826ED1AC:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
loc_826ED1B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826ed1bc
	if (ctx.cr6.eq) goto loc_826ED1BC;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_826ED1BC:
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

DEFINE_REX_FUNC(sub_826F2CC0) {
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
	// lwz r30,32(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 68);
	// bl 0x82702fd0
	ctx.lr = 0x826F2CF4;
	sub_82702FD0(ctx, base);
	// lwz r9,108(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lhz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bl 0x826f2818
	ctx.lr = 0x826F2D08;
	sub_826F2818(ctx, base);
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

DEFINE_REX_FUNC(sub_826F4C28) {
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
	ctx.lr = 0x826F4C30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,40(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r29,36(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subf. r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x826f4c9c
	if (!ctx.cr0.gt) goto loc_826F4C9C;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826f4ce4
	if (!ctx.cr6.gt) goto loc_826F4CE4;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_826F4C68:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U16(ctx.r6.u32 + r30.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826f4c68
	if (ctx.cr6.lt) goto loc_826F4C68;
	// b 0x826f4ce4
	goto loc_826F4CE4;
loc_826F4C9C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826f4ce4
	if (!ctx.cr6.lt) goto loc_826F4CE4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826f4ce4
	if (!ctx.cr6.gt) goto loc_826F4CE4;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_826F4CB8:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r5,r30
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + r30.u32);
	// subf r9,r3,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r3.u64;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x826f4cb8
	if (ctx.cr6.lt) goto loc_826F4CB8;
loc_826F4CE4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826f4d28
	if (!ctx.cr6.eq) goto loc_826F4D28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r5,r29
	ctx.r3.u64 = ctx.r5.u64 + r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826F4D04;
	sub_826A1E70(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r5,r30
	ctx.r3.u64 = ctx.r5.u64 + r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826F4D18;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// b 0x826f4d30
	goto loc_826F4D30;
loc_826F4D28:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_826F4D30:
	// lwz r11,720(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 720);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826f4d4c
	if (!ctx.cr6.gt) goto loc_826F4D4C;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r29
	REX_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r11.u32);
	// b 0x826f4d74
	goto loc_826F4D74;
loc_826F4D4C:
	// lwz r11,724(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 724);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826f4d68
	if (!ctx.cr6.lt) goto loc_826F4D68;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r29
	REX_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r11.u32);
	// b 0x826f4d74
	goto loc_826F4D74;
loc_826F4D68:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, r28.u32);
loc_826F4D74:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x826f4d84
	if (!ctx.cr6.gt) goto loc_826F4D84;
	// lhz r10,30(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 30);
	// b 0x826f4da8
	goto loc_826F4DA8;
loc_826F4D84:
	// bge cr6,0x826f4da4
	if (!ctx.cr6.lt) goto loc_826F4DA4;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r7,r9
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// sthx r7,r8,r30
	REX_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r7.u16);
	// b 0x826f4db4
	goto loc_826F4DB4;
loc_826F4DA4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826F4DA8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	REX_STORE_U16(ctx.r9.u32 + r30.u32, ctx.r10.u16);
loc_826F4DB4:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// sthx r8,r11,r30
	REX_STORE_U16(ctx.r11.u32 + r30.u32, ctx.r8.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r11,r30
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// sthx r4,r11,r30
	REX_STORE_U16(ctx.r11.u32 + r30.u32, ctx.r4.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827078C8) {
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
	ctx.lr = 0x827078D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4008(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4008);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827078f8
	if (!ctx.cr6.eq) goto loc_827078F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r10,4004(r3)
	REX_STORE_U32(ctx.r3.u32 + 4004, ctx.r10.u32);
	// b 0x82707bd4
	goto loc_82707BD4;
loc_827078F8:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// stw r29,472(r27)
	REX_STORE_U32(r27.u32 + 472, r29.u32);
	// stw r29,4004(r27)
	REX_STORE_U32(r27.u32 + 4004, r29.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8270792c
	if (!ctx.cr0.lt) goto loc_8270792C;
	// bl 0x82725e38
	ctx.lr = 0x8270792C;
	sub_82725E38(ctx, base);
loc_8270792C:
	// stw r31,280(r27)
	REX_STORE_U32(r27.u32 + 280, r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82707be4
	if (ctx.cr6.eq) goto loc_82707BE4;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x827079ac
	if (!ctx.cr6.lt) goto loc_827079AC;
loc_82707954:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827079ac
	if (ctx.cr6.eq) goto loc_827079AC;
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
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x8270799c
	if (!ctx.cr0.lt) goto loc_8270799C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8270799C;
	sub_82725E38(ctx, base);
loc_8270799C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707954
	if (ctx.cr6.gt) goto loc_82707954;
loc_827079AC:
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
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x827079e4
	if (!ctx.cr0.lt) goto loc_827079E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827079E4;
	sub_82725E38(ctx, base);
loc_827079E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x827079f8
	if (!ctx.cr6.eq) goto loc_827079F8;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,4004(r27)
	REX_STORE_U32(r27.u32 + 4004, ctx.r11.u32);
	// b 0x82707bbc
	goto loc_82707BBC;
loc_827079F8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82707acc
	if (!ctx.cr6.eq) goto loc_82707ACC;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82707a70
	if (!ctx.cr6.lt) goto loc_82707A70;
loc_82707A18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707a70
	if (ctx.cr6.eq) goto loc_82707A70;
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
	// bge 0x82707a60
	if (!ctx.cr0.lt) goto loc_82707A60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707A60;
	sub_82725E38(ctx, base);
loc_82707A60:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707a18
	if (ctx.cr6.gt) goto loc_82707A18;
loc_82707A70:
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
	// bge 0x82707aa8
	if (!ctx.cr0.lt) goto loc_82707AA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707AA8;
	sub_82725E38(ctx, base);
loc_82707AA8:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// beq cr6,0x82707ac0
	if (ctx.cr6.eq) goto loc_82707AC0;
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r11,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// stw r10,4004(r27)
	REX_STORE_U32(r27.u32 + 4004, ctx.r10.u32);
	// b 0x82707bbc
	goto loc_82707BBC;
loc_82707AC0:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,4004(r27)
	REX_STORE_U32(r27.u32 + 4004, ctx.r11.u32);
	// b 0x82707bbc
	goto loc_82707BBC;
loc_82707ACC:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x82707b88
	if (!ctx.cr6.eq) goto loc_82707B88;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82707b40
	if (!ctx.cr6.lt) goto loc_82707B40;
loc_82707AE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707b40
	if (ctx.cr6.eq) goto loc_82707B40;
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
	// bge 0x82707b30
	if (!ctx.cr0.lt) goto loc_82707B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707B30;
	sub_82725E38(ctx, base);
loc_82707B30:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707ae8
	if (ctx.cr6.gt) goto loc_82707AE8;
loc_82707B40:
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
	// bge 0x82707b78
	if (!ctx.cr0.lt) goto loc_82707B78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707B78;
	sub_82725E38(ctx, base);
loc_82707B78:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r10,r11,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// stw r10,4004(r27)
	REX_STORE_U32(r27.u32 + 4004, ctx.r10.u32);
	// b 0x82707bbc
	goto loc_82707BBC;
loc_82707B88:
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bne cr6,0x82707bbc
	if (!ctx.cr6.eq) goto loc_82707BBC;
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
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
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82707bb8
	if (!ctx.cr0.lt) goto loc_82707BB8;
	// bl 0x82725e38
	ctx.lr = 0x82707BB8;
	sub_82725E38(ctx, base);
loc_82707BB8:
	// stw r31,472(r27)
	REX_STORE_U32(r27.u32 + 472, r31.u32);
loc_82707BBC:
	// lwz r11,472(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82707bd4
	if (!ctx.cr6.eq) goto loc_82707BD4;
	// lwz r11,4004(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707be4
	if (ctx.cr6.eq) goto loc_82707BE4;
loc_82707BD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8275de60
	ctx.lr = 0x82707BE0;
	sub_8275DE60(ctx, base);
	// stw r3,4012(r27)
	REX_STORE_U32(r27.u32 + 4012, ctx.r3.u32);
loc_82707BE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82725C58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82725C60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82725c84
	if (ctx.cr6.eq) goto loc_82725C84;
	// add r30,r11,r4
	r30.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82725C84:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82725d04
	if (!ctx.cr6.gt) goto loc_82725D04;
loc_82725C94:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82725cdc
	if (ctx.cr6.gt) goto loc_82725CDC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x82725d2c
	if (ctx.cr6.gt) goto loc_82725D2C;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// b 0x82725cf4
	goto loc_82725CF4;
loc_82725CDC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82725d04
	if (!ctx.cr6.eq) goto loc_82725D04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725a90
	ctx.lr = 0x82725CF0;
	sub_82725A90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_82725CF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82725c94
	if (ctx.cr6.gt) goto loc_82725C94;
loc_82725D04:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// li r10,-1
	ctx.r10.s64 = -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// srw r9,r10,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// and r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82725D2C:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82725d04
	if (!ctx.cr6.gt) goto loc_82725D04;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r7,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - r30.u64;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// srd r11,r8,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r4.u8 & 0x7F));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// srd r11,r3,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r5.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// srw r9,r10,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// and r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827318C0) {
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
loc_827318D0:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x827318d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827318D0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82731B08) {
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
	ctx.lr = 0x82731B10;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20912(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20912);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r9,364(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 364);
	// li r31,0
	r31.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r25,1
	r25.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r23,256
	r23.s64 = 16777216;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r24,1
	r24.s64 = 65536;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,30912
	r27.s64 = ctx.r11.s64 + 30912;
loc_82731B4C:
	// lwz r11,1996(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 1996);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,76(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8275de38
	ctx.lr = 0x82731B60;
	sub_8275DE38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82731b78
	if (ctx.cr6.eq) goto loc_82731B78;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq cr6,0x82731b7c
	if (ctx.cr6.eq) goto loc_82731B7C;
loc_82731B78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82731B7C:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and r29,r7,r8
	r29.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bl 0x8275de48
	ctx.lr = 0x82731BA0;
	sub_8275DE48(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82731bb4
	if (ctx.cr6.eq) goto loc_82731BB4;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// beq cr6,0x82731bb8
	if (ctx.cr6.eq) goto loc_82731BB8;
loc_82731BB4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82731BB8:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r25,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r3.u8 & 0x3F));
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// slw r9,r25,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// subf r6,r10,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r4,r7,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r5,r11,-256
	ctx.r5.s64 = ctx.r11.s64 + -256;
	// and r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 & ctx.r6.u64;
	// subf r11,r24,r4
	ctx.r11.u64 = ctx.r4.u64 - r24.u64;
	// slw r8,r25,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r8,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r10,4,24,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// subf r4,r23,r7
	ctx.r4.u64 = ctx.r7.u64 - r23.u64;
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// cmpwi cr6,r31,36
	ctx.cr6.compare<int32_t>(r31.s32, 36, ctx.xer);
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r9,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r26.u32 = ea;
	// blt cr6,0x82731b4c
	if (ctx.cr6.lt) goto loc_82731B4C;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82731C24:
	// lwz r11,1996(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 1996);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,76(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8275de38
	ctx.lr = 0x82731C38;
	sub_8275DE38(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82731c4c
	if (ctx.cr6.eq) goto loc_82731C4C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq cr6,0x82731c50
	if (ctx.cr6.eq) goto loc_82731C50;
loc_82731C4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82731C50:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// subf r7,r11,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r11,r7,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r29,r9,r5
	r29.u64 = ctx.r9.u64 | ctx.r5.u64;
	// bl 0x8275de48
	ctx.lr = 0x82731C7C;
	sub_8275DE48(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82731c90
	if (ctx.cr6.eq) goto loc_82731C90;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// beq cr6,0x82731c94
	if (ctx.cr6.eq) goto loc_82731C94;
loc_82731C90:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82731C94:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,360(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 360);
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// subf r6,r11,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r11,r6,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// or r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 | ctx.r4.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | r29.u64;
	// sthx r10,r30,r9
	REX_STORE_U16(r30.u32 + ctx.r9.u32, ctx.r10.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpwi cr6,r30,72
	ctx.cr6.compare<int32_t>(r30.s32, 72, ctx.xer);
	// blt cr6,0x82731c24
	if (ctx.cr6.lt) goto loc_82731C24;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82741F60) {
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
	// bl 0x826a1ca4
	ctx.lr = 0x82741F68;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r30,r6,r30
	r30.u64 = r30.u64 - ctx.r6.u64;
	// lvx128 v6,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r23,r6,28
	r23.u64 = ctx.r6.u32 & 0xF;
	// lvx128 v11,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lvx128 v9,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r10,r4
	r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v8,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r28,r9,r4
	r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v4,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r8,r4
	r27.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r26,r7,r4
	r26.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r25,r31,r4
	r25.u64 = r31.u64 + ctx.r4.u64;
	// add r24,r30,r4
	r24.u64 = r30.u64 + ctx.r4.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82742030
	if (!ctx.cr6.eq) goto loc_82742030;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82742010
	if (!ctx.cr6.eq) goto loc_82742010;
	// vmrghb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_82742008:
	// vmrghb v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x827420d0
	goto loc_827420D0;
loc_82742010:
	// vmrglb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x827420cc
	goto loc_827420CC;
loc_82742030:
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// vmrghb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82742044
	if (ctx.cr6.eq) goto loc_82742044;
	// vmrglb v3,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_82742044:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// vmrghb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82742058
	if (ctx.cr6.eq) goto loc_82742058;
	// vmrglb v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_82742058:
	// clrlwi r11,r29,28
	ctx.r11.u64 = r29.u32 & 0xF;
	// vmrghb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274206c
	if (ctx.cr6.eq) goto loc_8274206C;
	// vmrglb v7,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_8274206C:
	// clrlwi r11,r28,28
	ctx.r11.u64 = r28.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82742080
	if (!ctx.cr6.eq) goto loc_82742080;
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// b 0x82742084
	goto loc_82742084;
loc_82742080:
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_82742084:
	// clrlwi r11,r27,28
	ctx.r11.u64 = r27.u32 & 0xF;
	// vmrghb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82742098
	if (ctx.cr6.eq) goto loc_82742098;
	// vmrglb v11,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_82742098:
	// clrlwi r11,r26,28
	ctx.r11.u64 = r26.u32 & 0xF;
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827420ac
	if (ctx.cr6.eq) goto loc_827420AC;
	// vmrglb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_827420AC:
	// clrlwi r11,r25,28
	ctx.r11.u64 = r25.u32 & 0xF;
	// vmrghb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827420c0
	if (ctx.cr6.eq) goto loc_827420C0;
	// vmrglb v13,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_827420C0:
	// clrlwi r11,r24,28
	ctx.r11.u64 = r24.u32 & 0xF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82742008
	if (ctx.cr6.eq) goto loc_82742008;
loc_827420CC:
	// vmrglb v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
loc_827420D0:
	// lvx128 v9,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vadduhm v8,v3,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// li r4,32
	ctx.r4.s64 = 32;
	// li r29,48
	r29.s64 = 48;
	// li r28,64
	r28.s64 = 64;
	// li r27,80
	r27.s64 = 80;
	// lvx128 v6,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v63,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// li r26,96
	r26.s64 = 96;
	// vadduhm v5,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// li r25,112
	r25.s64 = 112;
	// lvx128 v4,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,4
	ctx.r11.s64 = 4;
	// lvx128 v2,r5,r29
	ea = (ctx.r5.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r5,r28
	ea = (ctx.r5.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v3,v7,v4
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// lvx128 v31,r5,r27
	ea = (ctx.r5.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus128 v62,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v30,r5,r26
	ea = (ctx.r5.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lvx128 v29,r5,r25
	ea = (ctx.r5.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// stvewx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// vpkshus128 v61,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// vadduhm v28,v10,v2
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// stvewx128 v62,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// vadduhm v27,v11,v1
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v26,v12,v31
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vpkshus128 v60,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vadduhm v25,v13,v30
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v24,v0,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vpkshus128 v59,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvewx128 v62,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stvewx128 v61,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v58,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vpkshus128 v57,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vpkshus128 v56,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// stvewx128 v61,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// stvewx128 v60,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stvewx128 v59,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// stvewx128 v58,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r31,r3
	ctx.r11.u64 = r31.u64 + ctx.r3.u64;
	// stvewx128 v57,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r30,r3
	ctx.r11.u64 = r30.u64 + ctx.r3.u64;
	// stvewx128 v56,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v56,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8275A518) {
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
	ctx.lr = 0x8275A520;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// addi r5,r10,15
	ctx.r5.s64 = ctx.r10.s64 + 15;
	// addze r20,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r20.s64 = temp.s64;
	// clrlwi r16,r11,28
	r16.u64 = ctx.r11.u32 & 0xF;
	// srawi r3,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 4;
	// clrlwi r15,r10,28
	r15.u64 = ctx.r10.u32 & 0xF;
	// addze r18,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r18.s64 = temp.s64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x8275a56c
	if (!ctx.cr6.eq) goto loc_8275A56C;
	// li r16,16
	r16.s64 = 16;
loc_8275A56C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne cr6,0x8275a578
	if (!ctx.cr6.eq) goto loc_8275A578;
	// li r15,16
	r15.s64 = 16;
loc_8275A578:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// lwz r7,3740(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3740);
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r29,8(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,15660(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15660);
	// srawi r28,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r28.s64 = ctx.r6.s32 >> 1;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// addze r11,r28
	temp.s64 = r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r28.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// add r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r5,r29,r8
	ctx.r5.u64 = r29.u64 + ctx.r8.u64;
	// add r8,r3,r10
	ctx.r8.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r23,r6,r9
	r23.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r25,r8,r11
	r25.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r21,r10,r11
	r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r22,r7,r4
	r22.u64 = ctx.r7.u64 + ctx.r4.u64;
	// beq cr6,0x8275a6e0
	if (ctx.cr6.eq) goto loc_8275A6E0;
loc_8275A5F0:
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8275a6b8
	if (ctx.cr6.eq) goto loc_8275A6B8;
	// addi r17,r20,-1
	r17.s64 = r20.s64 + -1;
	// addi r19,r18,-1
	r19.s64 = r18.s64 + -1;
	// subf r26,r25,r21
	r26.u64 = r21.u64 - r25.u64;
loc_8275A614:
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(r27.u32, r17.u32, ctx.xer);
	// beq cr6,0x8275a65c
	if (ctx.cr6.eq) goto loc_8275A65C;
	// cmplw cr6,r24,r19
	ctx.cr6.compare<uint32_t>(r24.u32, r19.u32, ctx.xer);
	// beq cr6,0x8275a654
	if (ctx.cr6.eq) goto loc_8275A654;
	// lwz r11,15904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15904);
	// add r7,r26,r30
	ctx.r7.u64 = r26.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,15652(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8275A650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8275a69c
	goto loc_8275A69C;
loc_8275A654:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8275a660
	goto loc_8275A660;
loc_8275A65C:
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_8275A660:
	// cmplw cr6,r24,r19
	ctx.cr6.compare<uint32_t>(r24.u32, r19.u32, ctx.xer);
	// li r11,16
	ctx.r11.s64 = 16;
	// bne cr6,0x8275a670
	if (!ctx.cr6.eq) goto loc_8275A670;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_8275A670:
	// lwz r14,15908(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 15908);
	// add r7,r26,r30
	ctx.r7.u64 = r26.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r14
	ctx.ctr.u64 = r14.u64;
	// bctrl 
	ctx.lr = 0x8275A69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8275A69C:
	// lwz r11,15664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15664);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// blt cr6,0x8275a614
	if (ctx.cr6.lt) goto loc_8275A614;
loc_8275A6B8:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,15676(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15676);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r23,r23,r9
	r23.u64 = r23.u64 + ctx.r9.u64;
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// cmplw cr6,r24,r18
	ctx.cr6.compare<uint32_t>(r24.u32, r18.u32, ctx.xer);
	// blt cr6,0x8275a5f0
	if (ctx.cr6.lt) goto loc_8275A5F0;
loc_8275A6E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82762CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82762CE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82762d88
	if (ctx.cr6.lt) goto loc_82762D88;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82762d10
	if (ctx.cr6.eq) goto loc_82762D10;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82762d1c
	if (!ctx.cr6.eq) goto loc_82762D1C;
loc_82762D10:
	// lwz r11,20984(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82762d28
	if (ctx.cr6.eq) goto loc_82762D28;
loc_82762D1C:
	// lwz r11,280(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82762d88
	if (!ctx.cr6.eq) goto loc_82762D88;
loc_82762D28:
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82762D30:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82762d78
	if (!ctx.cr6.eq) goto loc_82762D78;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82762d60
	if (!ctx.cr0.lt) goto loc_82762D60;
	// bl 0x82725e38
	ctx.lr = 0x82762D60;
	sub_82725E38(ctx, base);
loc_82762D60:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// blt cr6,0x82762d30
	if (ctx.cr6.lt) goto loc_82762D30;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82762d80
	if (ctx.cr6.eq) goto loc_82762D80;
loc_82762D78:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// b 0x82762f2c
	goto loc_82762F2C;
loc_82762D80:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82762f2c
	goto loc_82762F2C;
loc_82762D88:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82762dfc
	if (!ctx.cr6.lt) goto loc_82762DFC;
loc_82762DA4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82762dfc
	if (ctx.cr6.eq) goto loc_82762DFC;
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
	// bge 0x82762dec
	if (!ctx.cr0.lt) goto loc_82762DEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82762DEC;
	sub_82725E38(ctx, base);
loc_82762DEC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82762da4
	if (ctx.cr6.gt) goto loc_82762DA4;
loc_82762DFC:
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
	// bge 0x82762e34
	if (!ctx.cr0.lt) goto loc_82762E34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82762E34;
	sub_82725E38(ctx, base);
loc_82762E34:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,1972(r28)
	REX_STORE_U32(r28.u32 + 1972, r30.u32);
	// bne cr6,0x82762f30
	if (!ctx.cr6.eq) goto loc_82762F30;
	// lwz r11,15504(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82762f00
	if (ctx.cr6.lt) goto loc_82762F00;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82762ec0
	if (!ctx.cr6.lt) goto loc_82762EC0;
loc_82762E68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82762ec0
	if (ctx.cr6.eq) goto loc_82762EC0;
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
	// bge 0x82762eb0
	if (!ctx.cr0.lt) goto loc_82762EB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82762EB0;
	sub_82725E38(ctx, base);
loc_82762EB0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82762e68
	if (ctx.cr6.gt) goto loc_82762E68;
loc_82762EC0:
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
	// bge 0x82762ef8
	if (!ctx.cr0.lt) goto loc_82762EF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82762EF8;
	sub_82725E38(ctx, base);
loc_82762EF8:
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// b 0x82762f2c
	goto loc_82762F2C;
loc_82762F00:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
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
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82762f28
	if (!ctx.cr0.lt) goto loc_82762F28;
	// bl 0x82725e38
	ctx.lr = 0x82762F28;
	sub_82725E38(ctx, base);
loc_82762F28:
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
loc_82762F2C:
	// stw r11,1972(r28)
	REX_STORE_U32(r28.u32 + 1972, ctx.r11.u32);
loc_82762F30:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82762fa4
	if (!ctx.cr6.lt) goto loc_82762FA4;
loc_82762F4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82762fa4
	if (ctx.cr6.eq) goto loc_82762FA4;
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
	// bge 0x82762f94
	if (!ctx.cr0.lt) goto loc_82762F94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82762F94;
	sub_82725E38(ctx, base);
loc_82762F94:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82762f4c
	if (ctx.cr6.gt) goto loc_82762F4C;
loc_82762FA4:
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
	// bge 0x82762fdc
	if (!ctx.cr0.lt) goto loc_82762FDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82762FDC;
	sub_82725E38(ctx, base);
loc_82762FDC:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// stw r11,1976(r28)
	REX_STORE_U32(r28.u32 + 1976, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8277BAE8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c80
	ctx.lr = 0x8277BAF0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c9c
	ctx.lr = 0x8277BAF8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// fcfid f25,f0
	f25.f64 = double(ctx.f0.s64);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r29.s64 = ctx.r3.s32 >> 1;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8277bd04
	if (!ctx.cr6.gt) goto loc_8277BD04;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r24,404(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// lwz r23,396(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r18,r11,r8
	r18.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r21,80(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f28,-22784(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + -22784);
	// fneg f26,f30
	f26.u64 = f30.u64 ^ 0x8000000000000000;
	// lfd f29,32424(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 32424);
	// li r25,0
	r25.s64 = 0;
	// subf r15,r8,r5
	r15.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lfd f27,-3744(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_8277BB90:
	// extsw r11,r26
	ctx.r11.s64 = r26.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f25,f13
	f31.f64 = f25.f64 - ctx.f13.f64;
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// bge cr6,0x8277bbbc
	if (!ctx.cr6.lt) goto loc_8277BBBC;
loc_8277BBAC:
	// add r11,r18,r15
	ctx.r11.u64 = r18.u64 + r15.u64;
	// li r30,0
	r30.s64 = 0;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// b 0x8277bbcc
	goto loc_8277BBCC;
loc_8277BBBC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8277bc20
	if (!ctx.cr6.gt) goto loc_8277BC20;
loc_8277BBC4:
	// li r30,2
	r30.s64 = 2;
	// add r4,r18,r27
	ctx.r4.u64 = r18.u64 + r27.u64;
loc_8277BBCC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BBD8;
	sub_826A1E70(ctx, base);
	// clrlwi r11,r26,31
	ctx.r11.u64 = r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277bcf0
	if (!ctx.cr6.eq) goto loc_8277BCF0;
	// srawi r11,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r11.s64 = r26.s32 >> 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// mullw r31,r11,r29
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// bne cr6,0x8277bca4
	if (!ctx.cr6.eq) goto loc_8277BCA4;
	// add. r11,r22,r26
	ctx.r11.u64 = r22.u64 + r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8277bc9c
	if (ctx.cr0.lt) goto loc_8277BC9C;
	// srawi r11,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r11.s64 = r22.s32 >> 1;
loc_8277BC00:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r30,r20
	ctx.r4.u64 = r30.u64 + r20.u64;
	// add r3,r31,r23
	ctx.r3.u64 = r31.u64 + r23.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BC18;
	sub_826A1E70(ctx, base);
	// add r4,r30,r19
	ctx.r4.u64 = r30.u64 + r19.u64;
	// b 0x8277bce4
	goto loc_8277BCE4;
loc_8277BC20:
	// fdiv f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x8269d370
	ctx.lr = 0x8277BC28;
	sub_8269D370(ctx, base);
	// fsub f0,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64 - ctx.f1.f64;
	// fmsub f13,f1,f30,f31
	ctx.f13.f64 = std::fma(ctx.f1.f64, f30.f64, -f31.f64);
	// fmsub f12,f0,f30,f31
	ctx.f12.f64 = std::fma(ctx.f0.f64, f30.f64, -f31.f64);
	// fadd f11,f13,f29
	ctx.f11.f64 = ctx.f13.f64 + f29.f64;
	// fadd f10,f12,f29
	ctx.f10.f64 = ctx.f12.f64 + f29.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r21,r11
	r21.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r22,r10
	r22.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// add. r9,r22,r26
	ctx.r9.u64 = r22.u64 + r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8277bc78
	if (ctx.cr0.lt) goto loc_8277BC78;
	// mullw r11,r22,r28
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + r17.u64;
	// b 0x8277bbcc
	goto loc_8277BBCC;
loc_8277BC78:
	// add. r11,r21,r26
	ctx.r11.u64 = r21.u64 + r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8277bbc4
	if (ctx.cr0.lt) goto loc_8277BBC4;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x8277bbac
	if (!ctx.cr6.gt) goto loc_8277BBAC;
	// mullw r11,r21,r28
	ctx.r11.s64 = int64_t(r21.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + r17.u64;
	// b 0x8277bbcc
	goto loc_8277BBCC;
loc_8277BC9C:
	// srawi r11,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	ctx.r11.s64 = r21.s32 >> 1;
	// b 0x8277bc00
	goto loc_8277BC00;
loc_8277BCA4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8277bcc4
	if (!ctx.cr6.eq) goto loc_8277BCC4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r20
	ctx.r4.u64 = r31.u64 + r20.u64;
	// add r3,r31,r23
	ctx.r3.u64 = r31.u64 + r23.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BCBC;
	sub_826A1E70(ctx, base);
	// add r4,r31,r19
	ctx.r4.u64 = r31.u64 + r19.u64;
	// b 0x8277bce4
	goto loc_8277BCE4;
loc_8277BCC4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x8277bcf0
	if (!ctx.cr6.eq) goto loc_8277BCF0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r14
	ctx.r4.u64 = r31.u64 + r14.u64;
	// add r3,r31,r23
	ctx.r3.u64 = r31.u64 + r23.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BCDC;
	sub_826A1E70(ctx, base);
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
loc_8277BCE4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r31,r24
	ctx.r3.u64 = r31.u64 + r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277BCF0;
	sub_826A1E70(ctx, base);
loc_8277BCF0:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r27,r27,r28
	r27.u64 = r27.u64 + r28.u64;
	// cmpw cr6,r26,r16
	ctx.cr6.compare<int32_t>(r26.s32, r16.s32, ctx.xer);
	// blt cr6,0x8277bb90
	if (ctx.cr6.lt) goto loc_8277BB90;
loc_8277BD04:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ce8
	ctx.lr = 0x8277BD10;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82789658) {
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
	ctx.lr = 0x82789660;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-22208
	ctx.r11.s64 = ctx.r11.s64 + -22208;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
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
	// addi r7,r10,13600
	ctx.r7.s64 = ctx.r10.s64 + 13600;
loc_82789688:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r10,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
loc_82789694:
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
loc_827896AC:
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
	// divw r30,r3,r6
	r30.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// clrlwi r5,r27,31
	ctx.r5.u64 = r27.u32 & 0x1;
	// clrlwi r3,r23,31
	ctx.r3.u64 = r23.u32 & 0x1;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + r30.u64;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r5,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r30,r25,31
	r30.u64 = r25.u32 & 0x1;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r26,r8,r10
	r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r25,r8,r10
	r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r23,r8,r10
	r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r7,514
	r22.s64 = ctx.r7.s64 + 514;
	// addi r28,r7,258
	r28.s64 = ctx.r7.s64 + 258;
	// addi r29,r7,3
	r29.s64 = ctx.r7.s64 + 3;
	// addi r21,r7,515
	r21.s64 = ctx.r7.s64 + 515;
	// rlwinm r3,r3,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// addi r27,r27,10
	r27.s64 = r27.s64 + 10;
	// addi r31,r31,10
	r31.s64 = r31.s64 + 10;
	// stbx r3,r24,r10
	REX_STORE_U8(r24.u32 + ctx.r10.u32, ctx.r3.u8);
	// rlwinm r5,r5,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stbx r27,r4,r22
	REX_STORE_U8(ctx.r4.u32 + r22.u32, r27.u8);
	// stbx r30,r25,r29
	REX_STORE_U8(r25.u32 + r29.u32, r30.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r5,r26,r28
	REX_STORE_U8(r26.u32 + r28.u32, ctx.r5.u8);
	// stbx r31,r23,r21
	REX_STORE_U8(r23.u32 + r21.u32, r31.u8);
	// bdnz 0x827896ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827896AC;
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
	// bne 0x82789694
	if (!ctx.cr0.eq) goto loc_82789694;
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
	// blt cr6,0x82789688
	if (ctx.cr6.lt) goto loc_82789688;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B2148) {
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
	ctx.lr = 0x827B2150;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r7,16
	ctx.r7.s64 = 16;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// li r28,-96
	r28.s64 = -96;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// li r29,-48
	r29.s64 = -48;
	// li r30,48
	r30.s64 = 48;
	// bne cr6,0x827b2274
	if (!ctx.cr6.eq) goto loc_827B2274;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827B2188:
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lvx128 v63,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v59,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v58,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v60,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v8,v61,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vperm128 v7,v59,v56,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v29,v0,v9
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vor v7,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v26,v10,v2,2
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vsldoi v25,v9,v29,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v29.u8), 14));
	// vsldoi v24,v8,v28,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vsldoi v23,v7,v27,2
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vaddshs v22,v10,v26
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v21,v9,v25
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v20,v8,v24
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v19,v7,v23
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vslh v18,v22,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// stvx128 v7,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x827b2188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B2188;
	// b 0x826a1cec
	return;
loc_827B2274:
	// li r10,4
	ctx.r10.s64 = 4;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r24,r4,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r25,-80
	r25.s64 = -80;
	// li r26,-32
	r26.s64 = -32;
	// li r27,64
	r27.s64 = 64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827B2290:
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r5,16(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// add r10,r24,r3
	ctx.r10.u64 = r24.u64 + ctx.r3.u64;
	// lvx128 v55,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,-160
	r23.s64 = ctx.r1.s64 + -160;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// lbz r22,16(r8)
	r22.u64 = REX_LOAD_U8(ctx.r8.u32 + 16);
	// addi r21,r1,-144
	r21.s64 = ctx.r1.s64 + -144;
	// sth r5,-160(r1)
	REX_STORE_U16(ctx.r1.u32 + -160, ctx.r5.u16);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// lvx128 v54,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// lvx128 v53,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// sth r22,-144(r1)
	REX_STORE_U16(ctx.r1.u32 + -144, r22.u16);
	// lvx128 v51,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 16);
	// lvx128 v49,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v55,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v48,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v3,v54,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v4,v53,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// sth r10,-128(r1)
	REX_STORE_U16(ctx.r1.u32 + -128, ctx.r10.u16);
	// vperm128 v2,v52,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// vmrglb v10,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// sth r8,-112(r1)
	REX_STORE_U16(ctx.r1.u32 + -112, ctx.r8.u16);
	// vmrglb v8,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r5,r1,-112
	ctx.r5.s64 = ctx.r1.s64 + -112;
	// vmrglb v9,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vmrglb v6,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v5,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi v31,v4,v9,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// lvx128 v47,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v30,v3,v8,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 14));
	// vsldoi v29,v2,v6,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 14));
	// vsldoi128 v28,v10,v47,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), 14));
	// vaddshs v27,v5,v1
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v26,v4,v31
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// lvx128 v46,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v3,v30
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v24,v2,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v23,v10,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsldoi128 v22,v9,v46,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), 14));
	// vslh v21,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v45,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v15,v9,v22
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// lvx128 v44,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v16,v8,v45,2
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// vslh v17,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v14,v6,v44,2
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vaddshs v10,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v3,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v2,v15,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsrah v1,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v2,v11
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v31,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v26,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v25,v8,v16
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v26,r11,r26
	ea = (ctx.r11.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v6,v14
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vslh v23,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v23,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v20,v22,v11
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v19,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bdnz 0x827b2290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B2290;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_827CBC00) {
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
	ctx.lr = 0x827CBC08;
	// stwu r1,-1792(r1)
	ea = -1792 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r8,1852(r1)
	REX_STORE_U32(ctx.r1.u32 + 1852, ctx.r8.u32);
	// addi r8,r1,860
	ctx.r8.s64 = ctx.r1.s64 + 860;
	// lhz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 52);
	// lhz r9,50(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 50);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r10,r1,287
	ctx.r10.s64 = ctx.r1.s64 + 287;
	// stw r3,1812(r1)
	REX_STORE_U32(ctx.r1.u32 + 1812, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r4,r8,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r4,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r4.u32);
	// rlwinm r17,r9,31,1,31
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r5,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r5.u32);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r8,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r17,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r17.u32);
	// bne cr6,0x827cbc88
	if (!ctx.cr6.eq) goto loc_827CBC88;
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// lwz r9,22488(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 22488);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r10,r17
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r17.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// b 0x827cbc98
	goto loc_827CBC98;
loc_827CBC88:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,1480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_827CBC98:
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,1368(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// mullw r11,r17,r7
	ctx.r11.s64 = int64_t(r17.s32) * int64_t(ctx.r7.s32);
	// lwz r9,224(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 224);
	// lhz r24,76(r31)
	r24.u64 = REX_LOAD_U16(r31.u32 + 76);
	// lwz r4,3748(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 3748);
	// lhz r25,74(r31)
	r25.u64 = REX_LOAD_U16(r31.u32 + 74);
	// lwz r3,3752(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 3752);
	// lwz r29,220(r14)
	r29.u64 = REX_LOAD_U32(r14.u32 + 220);
	// lwz r6,3744(r14)
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + 3744);
	// lwz r28,268(r14)
	r28.u64 = REX_LOAD_U32(r14.u32 + 268);
	// lbz r15,33(r31)
	r15.u64 = REX_LOAD_U8(r31.u32 + 33);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// mullw r5,r10,r7
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r5,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// stb r15,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r15.u8);
	// rlwinm r10,r7,1,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFE;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// sth r10,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r10.u16);
	// mullw r10,r8,r17
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r17.s32);
	// rlwinm r5,r25,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r22,76(r31)
	r22.u64 = REX_LOAD_U16(r31.u32 + 76);
	// mullw r5,r5,r26
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r26.s32);
	// lhz r23,74(r31)
	r23.u64 = REX_LOAD_U16(r31.u32 + 74);
	// add r20,r10,r8
	r20.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r21,r24,31,1,31
	r21.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mullw r10,r21,r26
	ctx.r10.s64 = int64_t(r21.s32) * int64_t(r26.s32);
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r26,r11,r8
	r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r3,r20,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r22,3
	ctx.r11.u64 = __builtin_rotateleft32(r22.u32, 3);
	// rotlwi r23,r23,4
	r23.u64 = __builtin_rotateleft32(r23.u32, 4);
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r9,r6,r29
	ctx.r9.u64 = ctx.r6.u64 + r29.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r6,r3,r28
	ctx.r6.u64 = ctx.r3.u64 + r28.u64;
	// rlwinm r5,r26,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r4,r23,r7
	ctx.r4.s64 = int64_t(r23.s32) * int64_t(ctx.r7.s32);
	// rotlwi r29,r24,3
	r29.u64 = __builtin_rotateleft32(r24.u32, 3);
	// rotlwi r3,r25,4
	ctx.r3.u64 = __builtin_rotateleft32(r25.u32, 4);
	// add r22,r5,r6
	r22.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r18,r4,r9
	r18.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r19,r11,r8
	r19.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// add r16,r11,r10
	r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r19.u32);
	// mullw r24,r3,r7
	r24.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// mullw r26,r29,r7
	r26.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r27.s32, ctx.xer);
	// bge cr6,0x827cc414
	if (!ctx.cr6.lt) goto loc_827CC414;
	// li r25,0
	r25.s64 = 0;
	// li r23,16384
	r23.s64 = 16384;
	// b 0x827cbd98
	goto loc_827CBD98;
loc_827CBD90:
	// lwz r26,140(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r24,148(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_827CBD98:
	// stw r24,8(r30)
	REX_STORE_U32(r30.u32 + 8, r24.u32);
	// mr r27,r25
	r27.u64 = r25.u64;
	// stw r26,12(r30)
	REX_STORE_U32(r30.u32 + 12, r26.u32);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// sth r25,18(r30)
	REX_STORE_U16(r30.u32 + 18, r25.u16);
	// ble cr6,0x827cbfe0
	if (!ctx.cr6.gt) goto loc_827CBFE0;
loc_827CBDB0:
	// rlwinm r11,r15,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x4;
	// clrlwi r9,r15,24
	ctx.r9.u64 = r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cbe30
	if (ctx.cr6.eq) goto loc_827CBE30;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827cbe30
	if (!ctx.cr6.eq) goto loc_827CBE30;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r15,r9,0,24,30
	r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE;
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stb r15,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r15.u8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r25.u32);
	// lwz r7,348(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, r25.u32);
	// lwz r4,348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r25.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r25,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r25.u32);
	// lwz r8,348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r25,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r25.u32);
loc_827CBE30:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_827CBE34:
	// srawi r11,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r11.s64 = r29.s32 >> 2;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r9,r29,140
	ctx.r9.s64 = r29.s64 + 140;
	// lwz r8,40(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 40);
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
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// lwzx r10,r5,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r30.u32);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r4,r3
	// dcbzl r0,r8
	ea = (ctx.r8.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// srawi r28,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	r28.s64 = r29.s32 >> 2;
	// lbz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U8(r22.u32 + 4);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// addi r8,r28,45
	ctx.r8.s64 = r28.s64 + 45;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,29980(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 29980);
	// lwz r9,1364(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1364);
	// lhzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + r31.u32);
	// bl 0x8277dbd0
	ctx.lr = 0x827CBEA4;
	sub_8277DBD0(ctx, base);
	// lbz r7,33(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 33);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827cbf70
	if (ctx.cr6.eq) goto loc_827CBF70;
	// clrlwi r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,54(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 54);
	// addi r7,r29,146
	ctx.r7.s64 = r29.s64 + 146;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// clrlwi r7,r28,16
	ctx.r7.u64 = r28.u32 & 0xFFFF;
	// sraw r6,r4,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r6.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r11,r5,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// rlwinm r10,r6,1,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFF0;
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// std r3,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// ld r4,8(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r4,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// stdux r3,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,32(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// stdux r7,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ld r6,40(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 40);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,48(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 48);
	// stdux r5,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ld r4,56(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 56);
	// std r4,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,64(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 64);
	// stdux r3,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 72);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r7,80(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 80);
	// stdux r7,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// ld r6,88(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 88);
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// ld r5,96(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 96);
	// stdux r5,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r5.u64);
	ctx.r11.u32 = ea;
	// ld r4,104(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 104);
	// std r4,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r4.u64);
	// ld r3,112(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 112);
	// stdux r3,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r3.u64);
	ctx.r11.u32 = ea;
	// ld r10,120(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 120);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
loc_827CBF70:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(r29.s32, 6, ctx.xer);
	// blt cr6,0x827cbe34
	if (ctx.cr6.lt) goto loc_827CBE34;
	// rlwinm r11,r15,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827cbf90
	if (ctx.cr6.eq) goto loc_827CBF90;
	// li r15,7
	r15.s64 = 7;
	// stb r15,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, r15.u8);
loc_827CBF90:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lhz r8,18(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 18);
	// addi r22,r22,24
	r22.s64 = r22.s64 + 24;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// stw r22,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stw r5,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// cmpw cr6,r27,r17
	ctx.cr6.compare<int32_t>(r27.s32, r17.s32, ctx.xer);
	// stw r4,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// sth r6,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r6.u16);
	// blt cr6,0x827cbdb0
	if (ctx.cr6.lt) goto loc_827CBDB0;
loc_827CBFE0:
	// lhz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 16);
	// clrlwi r9,r15,31
	ctx.r9.u64 = r15.u32 & 0x1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r8,16(r30)
	REX_STORE_U16(r30.u32 + 16, ctx.r8.u16);
	// lhz r11,50(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 50);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// lhz r21,76(r31)
	r21.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rotlwi r11,r21,3
	ctx.r11.u64 = __builtin_rotateleft32(r21.u32, 3);
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// lhz r26,74(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 74);
	// rotlwi r11,r26,4
	ctx.r11.u64 = __builtin_rotateleft32(r26.u32, 4);
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// stw r5,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r5.u32);
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// beq cr6,0x827cc274
	if (ctx.cr6.eq) goto loc_827CC274;
	// lhz r16,50(r31)
	r16.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r8,348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 348);
	// neg r11,r20
	ctx.r11.s64 = static_cast<int64_t>(-r20.u64);
	// rotlwi r6,r16,1
	ctx.r6.u64 = __builtin_rotateleft32(r16.u32, 1);
	// lwz r5,1304(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// rlwinm r7,r20,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// subf r4,r6,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// srawi r11,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 31;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r24,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	r24.s64 = r16.s32 >> 1;
	// add r23,r9,r8
	r23.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r9,r7,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// srawi r6,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 2;
	// rotlwi r15,r16,3
	r15.u64 = __builtin_rotateleft32(r16.u32, 3);
	// rlwinm r27,r17,1,0,30
	r27.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r23,2
	r22.s64 = r23.s64 + 2;
	// addi r20,r11,1
	r20.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r29,r31,1340
	r29.s64 = r31.s64 + 1340;
	// or r29,r20,r9
	r29.u64 = r20.u64 | ctx.r9.u64;
	// addi r28,r31,1348
	r28.s64 = r31.s64 + 1348;
	// rotlwi r28,r16,2
	r28.u64 = __builtin_rotateleft32(r16.u32, 2);
	// add r20,r11,r10
	r20.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82745428
	ctx.lr = 0x827CC0A8;
	sub_82745428(ctx, base);
	// rotlwi r18,r16,2
	r18.u64 = __builtin_rotateleft32(r16.u32, 2);
	// lwz r3,1336(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// add r11,r18,r23
	ctx.r11.u64 = r18.u64 + r23.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// addi r19,r11,2
	r19.s64 = ctx.r11.s64 + 2;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x82745428
	ctx.lr = 0x827CC0D0;
	sub_82745428(ctx, base);
	// addi r27,r20,2
	r27.s64 = r20.s64 + 2;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,1340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82745428
	ctx.lr = 0x827CC0F0;
	sub_82745428(ctx, base);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,1348(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82745428
	ctx.lr = 0x827CC10C;
	sub_82745428(ctx, base);
	// subf r11,r18,r23
	ctx.r11.u64 = r23.u64 - r18.u64;
	// addic r8,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r8.s64 = r29.s64 + -1;
	// lwz r18,116(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,1332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// li r23,16384
	r23.s64 = 16384;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// and r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CC154;
	sub_82745A30(ctx, base);
	// lwz r4,1336(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// lwz r3,1328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// add r6,r11,r18
	ctx.r6.u64 = ctx.r11.u64 + r18.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CC188;
	sub_82745A30(ctx, base);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,132(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addic r3,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r3.s64 = r29.s64 + -1;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// subf r11,r4,r20
	ctx.r11.u64 = r20.u64 - ctx.r4.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r3,1344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// and r29,r8,r7
	r29.u64 = ctx.r8.u64 & ctx.r7.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CC1D4;
	sub_82745A30(ctx, base);
	// lwz r16,124(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r3,1352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CC208;
	sub_82745A30(ctx, base);
	// lwz r6,1332(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// lwz r5,1344(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// lwz r11,1352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r4,1336(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r3,1340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// lwz r8,1348(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r7,1328(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// stw r6,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r6.u32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r20,120(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lbz r15,112(r1)
	r15.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// lwz r22,128(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r17,136(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r14,1812(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 1812);
	// stw r5,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r5.u32);
	// stw r11,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r11.u32);
	// stw r4,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r4.u32);
	// stw r8,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r8.u32);
	// stw r3,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r3.u32);
	// stw r7,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r7.u32);
	// stw r7,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r7.u32);
	// stw r6,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r6.u32);
	// stw r9,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r9.u32);
	// stw r10,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r10.u32);
	// stw r10,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r10.u32);
loc_827CC274:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r20,1
	ctx.r10.s64 = r20.s64 + 1;
	// lwz r9,1304(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1304);
	// subf r11,r11,r20
	ctx.r11.u64 = r20.u64 - ctx.r11.u64;
	// lhz r27,76(r31)
	r27.u64 = REX_LOAD_U16(r31.u32 + 76);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,74(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 74);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rotlwi r11,r27,3
	ctx.r11.u64 = __builtin_rotateleft32(r27.u32, 3);
	// srawi r10,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 31;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// lwzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r16,r11,r16
	r16.u64 = ctx.r11.u64 + r16.u64;
	// stw r19,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r19.u32);
	// rotlwi r10,r7,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 4);
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stw r16,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// clrlwi r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	// add r18,r10,r18
	r18.u64 = ctx.r10.u64 + r18.u64;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
	// stw r18,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827cc400
	if (ctx.cr6.eq) goto loc_827CC400;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r31,1340
	r29.s64 = r31.s64 + 1340;
	// lhz r21,50(r31)
	r21.u64 = REX_LOAD_U16(r31.u32 + 50);
	// addi r28,r31,1348
	r28.s64 = r31.s64 + 1348;
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r21,2
	ctx.r6.u64 = __builtin_rotateleft32(r21.u32, 2);
	// lwz r24,352(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 352);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,1328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// srawi r26,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r26.s64 = r21.s32 >> 1;
	// lwz r3,1332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// subf r8,r6,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r6.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r5,r21,3
	ctx.r5.u64 = __builtin_rotateleft32(r21.u32, 3);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// rotlwi r29,r21,2
	r29.u64 = __builtin_rotateleft32(r21.u32, 2);
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CC33C;
	sub_82745A30(ctx, base);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1340(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,1344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// subf r11,r11,r24
	ctx.r11.u64 = r24.u64 - ctx.r11.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// addi r24,r11,2
	r24.s64 = ctx.r11.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bl 0x82745a30
	ctx.lr = 0x827CC378;
	sub_82745A30(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1348(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lwz r3,1352(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x82745a30
	ctx.lr = 0x827CC3A8;
	sub_82745A30(ctx, base);
	// lwz r10,1332(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1332);
	// lwz r9,1352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1352);
	// lwz r6,1344(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1344);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,1336(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1336);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,1348(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1348);
	// lwz r3,1340(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1340);
	// lwz r11,1328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1328);
	// stw r10,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r10.u32);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r9.u32);
	// stw r6,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r6.u32);
	// stw r8,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r8.u32);
	// stw r3,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r3.u32);
	// stw r7,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r7.u32);
	// stw r11,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r11.u32);
	// stw r11,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r11.u32);
	// stw r10,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r10.u32);
	// stw r5,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r5.u32);
	// stw r5,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r5.u32);
	// stw r4,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r4.u32);
loc_827CC400:
	// lwz r11,1852(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1852);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// stw r20,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827cbd90
	if (ctx.cr6.lt) goto loc_827CBD90;
loc_827CC414:
	// clrlwi r11,r15,24
	ctx.r11.u64 = r15.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2992(r14)
	REX_STORE_U32(r14.u32 + 2992, ctx.r11.u32);
	// addi r1,r1,1792
	ctx.r1.s64 = ctx.r1.s64 + 1792;
	// b 0x826a1cd0
	return;
}

