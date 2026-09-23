#include "hydrothunder_funcs.63.h"

DEFINE_REX_FUNC(sub_82122EE0) {
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
	ctx.lr = 0x82122EE8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	r25.s64 = ctx.r5.s64 + 12;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r28,r24
	r28.u64 = r24.u64;
	// b 0x82122f34
	goto loc_82122F34;
loc_82122F10:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x82122F20;
	sub_82120780(ctx, base);
	// rlwinm. r28,r3,1,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82122f30
	if (ctx.cr0.eq) goto loc_82122F30;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82122f34
	goto loc_82122F34;
loc_82122F30:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_82122F34:
	// lbz r11,57(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82122f10
	if (ctx.cr0.eq) goto loc_82122F10;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// beq 0x82122f94
	if (ctx.cr0.eq) goto loc_82122F94;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82122f8c
	if (!ctx.cr6.eq) goto loc_82122F8C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82122F68:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82122ff0
	ctx.lr = 0x82122F78;
	sub_82122FF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82122fe0
	goto loc_82122FE0;
loc_82122F8C:
	// bl 0x82268e98
	ctx.lr = 0x82122F90;
	sub_82268E98(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82122F94:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82122FA0;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122fb4
	if (!ctx.cr0.lt) goto loc_82122FB4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82122f68
	goto loc_82122F68;
loc_82122FB4:
	// addi r3,r25,28
	ctx.r3.s64 = r25.s64 + 28;
	// bl 0x82122800
	ctx.lr = 0x82122FBC;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82122FCC;
	sub_82120AC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82122FD4;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82122FE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8212DD98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r6,r10,16592
	ctx.r6.s64 = ctx.r10.s64 + 16592;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r7,60
	ctx.r7.s64 = 60;
	// li r8,192
	ctx.r8.s64 = 192;
	// lfs f0,172(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// li r4,66
	ctx.r4.s64 = 66;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stb r10,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// stb r10,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// lfs f13,596(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,9(r3)
	REX_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// li r31,80
	r31.s64 = 80;
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r10,23(r3)
	REX_STORE_U8(ctx.r3.u32 + 23, ctx.r10.u8);
	// stb r10,22(r3)
	REX_STORE_U8(ctx.r3.u32 + 22, ctx.r10.u8);
	// lfs f0,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,21(r3)
	REX_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// lfs f13,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// li r30,90
	r30.s64 = 90;
	// stb r10,27(r3)
	REX_STORE_U8(ctx.r3.u32 + 27, ctx.r10.u8);
	// li r9,128
	ctx.r9.s64 = 128;
	// stb r10,26(r3)
	REX_STORE_U8(ctx.r3.u32 + 26, ctx.r10.u8);
	// lfs f12,228(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// stb r10,25(r3)
	REX_STORE_U8(ctx.r3.u32 + 25, ctx.r10.u8);
	// lfs f11,700(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 700);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,24(r3)
	REX_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,31(r3)
	REX_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
	// stb r11,30(r3)
	REX_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stb r11,29(r3)
	REX_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r5,47(r3)
	REX_STORE_U8(ctx.r3.u32 + 47, ctx.r5.u8);
	// stb r7,46(r3)
	REX_STORE_U8(ctx.r3.u32 + 46, ctx.r7.u8);
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stb r4,45(r3)
	REX_STORE_U8(ctx.r3.u32 + 45, ctx.r4.u8);
	// lfs f13,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stb r8,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, ctx.r8.u8);
	// stb r7,51(r3)
	REX_STORE_U8(ctx.r3.u32 + 51, ctx.r7.u8);
	// stb r31,50(r3)
	REX_STORE_U8(ctx.r3.u32 + 50, r31.u8);
	// stb r30,49(r3)
	REX_STORE_U8(ctx.r3.u32 + 49, r30.u8);
	// stb r8,48(r3)
	REX_STORE_U8(ctx.r3.u32 + 48, ctx.r8.u8);
	// stb r9,55(r3)
	REX_STORE_U8(ctx.r3.u32 + 55, ctx.r9.u8);
	// stb r9,54(r3)
	REX_STORE_U8(ctx.r3.u32 + 54, ctx.r9.u8);
	// stb r9,53(r3)
	REX_STORE_U8(ctx.r3.u32 + 53, ctx.r9.u8);
	// stb r11,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stb r11,59(r3)
	REX_STORE_U8(ctx.r3.u32 + 59, ctx.r11.u8);
	// stb r11,58(r3)
	REX_STORE_U8(ctx.r3.u32 + 58, ctx.r11.u8);
	// stb r11,57(r3)
	REX_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
	// stb r11,56(r3)
	REX_STORE_U8(ctx.r3.u32 + 56, ctx.r11.u8);
	// stb r11,63(r3)
	REX_STORE_U8(ctx.r3.u32 + 63, ctx.r11.u8);
	// stb r11,62(r3)
	REX_STORE_U8(ctx.r3.u32 + 62, ctx.r11.u8);
	// stb r11,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r11.u8);
	// stb r11,60(r3)
	REX_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82138400) {
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
	ctx.lr = 0x82138408;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x8212dd28
	ctx.lr = 0x8213842C;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8213843C;
	sub_826A1E70(ctx, base);
	// lbz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r9,r28,-8
	ctx.r9.s64 = r28.s64 + -8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r8,64(r31)
	REX_STORE_U8(r31.u32 + 64, ctx.r8.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stb r8,65(r31)
	REX_STORE_U8(r31.u32 + 65, ctx.r8.u8);
	// lbz r8,2(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r8,66(r31)
	REX_STORE_U8(r31.u32 + 66, ctx.r8.u8);
	// lbz r8,3(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stb r8,67(r31)
	REX_STORE_U8(r31.u32 + 67, ctx.r8.u8);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_82138474:
	// lfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82138474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82138474;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r9,-31520
	ctx.r7.s64 = ctx.r9.s64 + -31520;
	// lfs f1,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bne cr6,0x821384cc
	if (!ctx.cr6.eq) goto loc_821384CC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82139b18
	ctx.lr = 0x821384C8;
	sub_82139B18(ctx, base);
	// b 0x821384d4
	goto loc_821384D4;
loc_821384CC:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82139a08
	ctx.lr = 0x821384D4;
	sub_82139A08(ctx, base);
loc_821384D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8213F0C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8213F0C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213f114
	if (!ctx.cr0.eq) goto loc_8213F114;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
loc_8213F0EC:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8213f100
	if (!ctx.cr6.lt) goto loc_8213F100;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8213f108
	goto loc_8213F108;
loc_8213F100:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8213F108:
	// lbz r9,25(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8213f0ec
	if (ctx.cr0.eq) goto loc_8213F0EC;
loc_8213F114:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213f134
	if (ctx.cr6.eq) goto loc_8213F134;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8213f1b4
	if (!ctx.cr6.lt) goto loc_8213F1B4;
loc_8213F134:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r31,0
	r31.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213F154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822f6280
	ctx.lr = 0x8213F164;
	sub_822F6280(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8213f1c0
	if (ctx.cr0.eq) goto loc_8213F1C0;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addic. r11,r6,12
	ctx.xer.ca = ctx.r6.u32 > 4294967283;
	ctx.r11.s64 = ctx.r6.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stb r31,24(r6)
	REX_STORE_U8(ctx.r6.u32 + 24, r31.u8);
	// stb r31,25(r6)
	REX_STORE_U8(ctx.r6.u32 + 25, r31.u8);
	// beq 0x8213f1a0
	if (ctx.cr0.eq) goto loc_8213F1A0;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// std r10,4(r11)
	REX_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
loc_8213F1A0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213f790
	ctx.lr = 0x8213F1B0;
	sub_8213F790(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8213F1B4:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_8213F1C0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8213F1D8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82149220) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82149248
	if (ctx.cr6.eq) goto loc_82149248;
	// bl 0x82185fe8
	ctx.lr = 0x82149248;
	sub_82185FE8(ctx, base);
loc_82149248:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82149264
	goto loc_82149264;
loc_82149254:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8269d6a0
	ctx.lr = 0x8214925C;
	sub_8269D6A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82149264:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82149254
	if (!ctx.cr6.eq) goto loc_82149254;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x821492ac
	if (ctx.cr6.eq) goto loc_821492AC;
loc_82149294:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x8214929C;
	sub_8269CE98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82149294
	if (!ctx.cr6.eq) goto loc_82149294;
loc_821492AC:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8269ce98
	ctx.lr = 0x821492B4;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821492BC;
	sub_8269CE98(ctx, base);
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

DEFINE_REX_FUNC(sub_8214E7E8) {
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
	// bl 0x8214e950
	ctx.lr = 0x8214E808;
	sub_8214E950(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e818
	if (ctx.cr0.eq) goto loc_8214E818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8214E818;
	sub_8269CE98(ctx, base);
loc_8214E818:
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

DEFINE_REX_FUNC(sub_82150B00) {
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
	ctx.lr = 0x82150B24;
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
	ctx.lr = 0x82150B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6180(r10)
	REX_STORE_U32(ctx.r10.u32 + 6180, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82152540) {
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
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x8215257c
	if (ctx.cr6.lt) goto loc_8215257C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-11080
	ctx.r4.s64 = ctx.r11.s64 + -11080;
	// addi r3,r10,-10796
	ctx.r3.s64 = ctx.r10.s64 + -10796;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x821231d0
	ctx.lr = 0x8215257C;
	sub_821231D0(ctx, base);
loc_8215257C:
	// mulli r11,r31,104
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(104));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
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

DEFINE_REX_FUNC(sub_82155478) {
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
	ctx.lr = 0x82155480;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82155fd0
	ctx.lr = 0x8215548C;
	sub_82155FD0(ctx, base);
	// addis r27,r31,1
	r27.s64 = r31.s64 + 65536;
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// addi r27,r27,-25096
	r27.s64 = r27.s64 + -25096;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823edd78
	ctx.lr = 0x821554BC;
	sub_823EDD78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821554cc
	if (ctx.cr0.eq) goto loc_821554CC;
loc_821554C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82155594
	goto loc_82155594;
loc_821554CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,9856
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9856, ctx.xer);
	// beq cr6,0x821554f0
	if (ctx.cr6.eq) goto loc_821554F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-9184
	ctx.r3.s64 = ctx.r10.s64 + -9184;
	// li r5,323
	ctx.r5.s64 = 323;
	// bl 0x821231d0
	ctx.lr = 0x821554F0;
	sub_821231D0(ctx, base);
loc_821554F0:
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// li r5,9856
	ctx.r5.s64 = 9856;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82155504;
	sub_826A2E60(ctx, base);
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r26,r26,-25128
	r26.s64 = r26.s64 + -25128;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82155524;
	sub_826A2E60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r11,r11,40436
	ctx.r11.u64 = ctx.r11.u64 | 40436;
	// ori r10,r10,40420
	ctx.r10.u64 = ctx.r10.u64 | 40420;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stwx r11,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x823ede50
	ctx.lr = 0x82155554;
	sub_823EDE50(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82155568
	if (ctx.cr6.eq) goto loc_82155568;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x823ede68
	ctx.lr = 0x82155564;
	sub_823EDE68(ctx, base);
	// b 0x821554c4
	goto loc_821554C4;
loc_82155568:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// ori r10,r10,40448
	ctx.r10.u64 = ctx.r10.u64 | 40448;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r3,6
	ctx.r3.s64 = 6;
	// stwx r9,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stwx r11,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stw r8,10008(r30)
	REX_STORE_U32(r30.u32 + 10008, ctx.r8.u32);
loc_82155594:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8215C310) {
	REX_FUNC_PROLOGUE();
	// subf r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8215c320
	if (!ctx.cr6.lt) goto loc_8215C320;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8215C320:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215CC98) {
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
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215CCBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8215cce8
	if (ctx.cr6.eq) goto loc_8215CCE8;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
loc_8215CCE8:
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

DEFINE_REX_FUNC(sub_8215F5F8) {
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
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8215f64c
	if (ctx.cr6.eq) goto loc_8215F64C;
	// bl 0x8215f0f0
	ctx.lr = 0x8215F624;
	sub_8215F0F0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8215F634;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215f644
	if (ctx.cr0.eq) goto loc_8215F644;
	// bl 0x8215dd30
	ctx.lr = 0x8215F640;
	sub_8215DD30(ctx, base);
	// b 0x8215f648
	goto loc_8215F648;
loc_8215F644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215F648:
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8215F64C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82160068
	ctx.lr = 0x8215F658;
	sub_82160068(ctx, base);
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

DEFINE_REX_FUNC(sub_82162AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82162B00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,1024(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1024);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82162b74
	if (!ctx.cr6.eq) goto loc_82162B74;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x822f6338
	ctx.lr = 0x82162B24;
	sub_822F6338(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,1024(r31)
	REX_STORE_U32(r31.u32 + 1024, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82162b38
	goto loc_82162B38;
loc_82162B34:
	// lwz r3,1024(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1024);
loc_82162B38:
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82162B44:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// beq 0x82162b58
	if (ctx.cr0.eq) goto loc_82162B58;
	// xoris r10,r10,60856
	ctx.r10.u64 = ctx.r10.u64 ^ 3988258816;
	// xori r10,r10,33568
	ctx.r10.u64 = ctx.r10.u64 ^ 33568;
loc_82162B58:
	// bdnz 0x82162b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82162B44;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x82162b34
	if (ctx.cr6.lt) goto loc_82162B34;
	// lwz r9,1024(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1024);
loc_82162B74:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// not r10,r29
	ctx.r10.u64 = ~r29.u64;
	// b 0x82162ba0
	goto loc_82162BA0;
loc_82162B80:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
loc_82162BA0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82162b80
	if (!ctx.cr0.eq) goto loc_82162B80;
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8216A8F8) {
	REX_FUNC_PROLOGUE();
	// b 0x823eea88
	sub_823EEA88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216A9E8) {
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
	// bl 0x823eea98
	ctx.lr = 0x8216A9FC;
	sub_823EEA98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216aa1c
	if (!ctx.cr0.eq) goto loc_8216AA1C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,23924
	ctx.r4.s64 = ctx.r11.s64 + 23924;
	// addi r3,r10,24104
	ctx.r3.s64 = ctx.r10.s64 + 24104;
	// li r5,94
	ctx.r5.s64 = 94;
	// bl 0x821231d0
	ctx.lr = 0x8216AA1C;
	sub_821231D0(ctx, base);
loc_8216AA1C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216D0E0) {
	REX_FUNC_PROLOGUE();
	// b 0x8216ee58
	sub_8216EE58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216D5E0) {
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
	// li r3,192
	ctx.r3.s64 = 192;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x8216D614;
	sub_8269D1D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x8216D620;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x8216f9b8
	ctx.lr = 0x8216D634;
	sub_8216F9B8(ctx, base);
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

DEFINE_REX_FUNC(sub_82170BB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82170bd8
	if (ctx.cr6.eq) goto loc_82170BD8;
loc_82170BC8:
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82170BD0:
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_82170BD8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82170bc8
	if (!ctx.cr6.eq) goto loc_82170BC8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82170c0c
	if (ctx.cr6.eq) goto loc_82170C0C;
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
	// b 0x82170bd0
	goto loc_82170BD0;
loc_82170C0C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82170bc8
	if (!ctx.cr6.eq) goto loc_82170BC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82173DB8) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x82162210
	ctx.lr = 0x82173DE4;
	sub_82162210(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82173DFC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82173e10
	if (!ctx.cr6.eq) goto loc_82173E10;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x82173e18
	goto loc_82173E18;
loc_82173E10:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
loc_82173E18:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82173e50
	if (ctx.cr6.eq) goto loc_82173E50;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82173e34
	if (!ctx.cr6.gt) goto loc_82173E34;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82173dfc
	goto loc_82173DFC;
loc_82173E34:
	// bge cr6,0x82173e44
	if (!ctx.cr6.lt) goto loc_82173E44;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// b 0x82173e48
	goto loc_82173E48;
loc_82173E44:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_82173E48:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82173e54
	goto loc_82173E54;
loc_82173E50:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82173E54:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82173e68
	if (ctx.cr6.eq) goto loc_82173E68;
	// lhz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// b 0x82173e6c
	goto loc_82173E6C;
loc_82173E68:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82173E6C:
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

DEFINE_REX_FUNC(sub_8217A868) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217AB98) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8217ABC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217abc0
	if (!ctx.cr6.eq) goto loc_8217ABC0;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8217a390
	ctx.lr = 0x8217ABE4;
	sub_8217A390(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8217D890) {
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
	ctx.lr = 0x8217D898;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r30,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, r30.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8217a390
	ctx.lr = 0x8217D8CC;
	sub_8217A390(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// beq cr6,0x8217dac8
	if (ctx.cr6.eq) goto loc_8217DAC8;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217dac8
	if (ctx.cr0.eq) goto loc_8217DAC8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// beq cr6,0x8217d910
	if (ctx.cr6.eq) goto loc_8217D910;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8217d918
	goto loc_8217D918;
loc_8217D910:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8217D918:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// std r11,4(r31)
	REX_STORE_U64(r31.u32 + 4, ctx.r11.u64);
	// bne cr6,0x8217d98c
	if (!ctx.cr6.eq) goto loc_8217D98C;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d98c
	if (ctx.cr0.eq) goto loc_8217D98C;
	// cmplwi cr6,r11,239
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 239, ctx.xer);
	// bne cr6,0x8217d98c
	if (!ctx.cr6.eq) goto loc_8217D98C;
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d98c
	if (ctx.cr0.eq) goto loc_8217D98C;
	// cmplwi cr6,r11,187
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 187, ctx.xer);
	// bne cr6,0x8217d98c
	if (!ctx.cr6.eq) goto loc_8217D98C;
	// lbz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217d98c
	if (ctx.cr0.eq) goto loc_8217D98C;
	// cmplwi cr6,r11,191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 191, ctx.xer);
	// bne cr6,0x8217d98c
	if (!ctx.cr6.eq) goto loc_8217D98C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
loc_8217D98C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217D998;
	sub_8217D058(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8217dac8
	if (ctx.cr0.eq) goto loc_8217DAC8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r27,r11,29220
	r27.s64 = ctx.r11.s64 + 29220;
	// addi r26,r10,29212
	r26.s64 = ctx.r10.s64 + 29212;
loc_8217D9B0:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217daac
	if (ctx.cr0.eq) goto loc_8217DAAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217dba0
	ctx.lr = 0x8217D9CC;
	sub_8217DBA0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8217daac
	if (ctx.cr0.eq) goto loc_8217DAAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217D9F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217ac78
	ctx.lr = 0x8217DA04;
	sub_8217AC78(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8217da98
	if (!ctx.cr6.eq) goto loc_8217DA98;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217DA20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217da98
	if (ctx.cr0.eq) goto loc_8217DA98;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217DA3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217da6c
	if (ctx.cr0.eq) goto loc_8217DA6C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217DA64;
	sub_8217D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217da74
	if (ctx.cr0.eq) goto loc_8217DA74;
loc_8217DA6C:
	// li r28,1
	r28.s64 = 1;
	// b 0x8217da98
	goto loc_8217DA98;
loc_8217DA74:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217d470
	ctx.lr = 0x8217DA88;
	sub_8217D470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
loc_8217DA98:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8217d058
	ctx.lr = 0x8217DAA4;
	sub_8217D058(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8217d9b0
	if (!ctx.cr0.eq) goto loc_8217D9B0;
loc_8217DAAC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217dac0
	if (!ctx.cr6.eq) goto loc_8217DAC0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// b 0x8217dacc
	goto loc_8217DACC;
loc_8217DAC0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8217dae4
	goto loc_8217DAE4;
loc_8217DAC8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8217DACC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217daf0
	ctx.lr = 0x8217DAE0;
	sub_8217DAF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217DAE4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8218F4E8) {
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
	ctx.lr = 0x8218F4F0;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8218f760
	if (!ctx.cr6.gt) goto loc_8218F760;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r27,-32243
	r27.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r29,r4,100
	r29.s64 = ctx.r4.s64 + 100;
	// lfs f11,15048(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 15048);
	ctx.f11.f64 = double(temp.f32);
	// addi r28,r4,104
	r28.s64 = ctx.r4.s64 + 104;
	// lfs f9,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r4,96
	r30.s64 = ctx.r4.s64 + 96;
	// lfs f13,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f8,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r10,-27152
	r31.s64 = ctx.r10.s64 + -27152;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-27136
	ctx.r9.s64 = ctx.r9.s64 + -27136;
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
loc_8218F550:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r27,0(r28)
	r27.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x8218f740
	if (!ctx.cr6.eq) goto loc_8218F740;
	// lfs f12,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,196(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,192(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f6,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f4,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,244(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f2,240(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f5,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f10.f64)));
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
	// mfcr r27
	r27.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r27.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r27.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r27.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r27.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r27.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r27.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r27.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r27.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r27.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r27.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r27.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r27.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r27.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r27.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r27.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r27.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r27.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r27.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r27.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r27.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r27.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r27.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r27.u64 |= ctx.cr5.so ? 0x100 : 0;
	r27.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r27.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r27.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r27.u64 |= ctx.cr6.so ? 0x10 : 0;
	r27.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r27.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r27.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r27.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r26,r27,27,29,29
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x4;
	// rlwinm r27,r27,30,29,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x4;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// lfsx f5,r10,r27
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f6,f5,f12,f6
	ctx.f6.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f6.f64;
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x8218f740
	if (!ctx.cr6.lt) goto loc_8218F740;
	// fmadds f6,f10,f13,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f13.f64)));
	// addi r27,r11,256
	r27.s64 = ctx.r11.s64 + 256;
	// stfs f0,-128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -128, temp.u32);
	// addi r26,r1,-128
	r26.s64 = ctx.r1.s64 + -128;
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r25,r1,-144
	r25.s64 = ctx.r1.s64 + -144;
	// addi r24,r1,-136
	r24.s64 = ctx.r1.s64 + -136;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f11
	ctx.cr6.compare(ctx.f6.f64, ctx.f11.f64);
	// mfcr r23
	r23.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r23.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r23.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r23.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r23.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r23.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r23.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r23.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r23.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r23.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r23.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r23.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r23.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r23.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r23.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r23.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r23.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r23.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r23.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r23.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r23.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r23.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r23.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r23.u64 |= ctx.cr5.so ? 0x100 : 0;
	r23.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r23.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r23.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r23.u64 |= ctx.cr6.so ? 0x10 : 0;
	r23.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r23.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r23.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r23.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f6,f5,f9
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// rlwinm r22,r23,27,29,29
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 27) & 0x4;
	// rlwinm r23,r23,30,29,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 30) & 0x4;
	// or r23,r22,r23
	r23.u64 = r22.u64 | r23.u64;
	// lfsx f4,r27,r23
	temp.u32 = REX_LOAD_U32(r27.u32 + r23.u32);
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
	// stfs f6,-124(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -124, temp.u32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// stfs f5,-120(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -120, temp.u32);
	// fmuls f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f6,-116(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -116, temp.u32);
	// lvx128 v63,r0,r26
	ea = (r26.u32) & ~0xF;
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
	// stvewx128 v60,r0,r25
	ea = (r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r24
	ea = (r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f6,108(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f4.f64 = double(temp.f32);
	// fadds f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fmuls f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fcmpu cr6,f12,f5
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// fmuls f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// ble cr6,0x8218f734
	if (!ctx.cr6.gt) goto loc_8218F734;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// fsubs f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r27,r1,-112
	r27.s64 = ctx.r1.s64 + -112;
	// addi r26,r1,-140
	r26.s64 = ctx.r1.s64 + -140;
	// addi r25,r1,-136
	r25.s64 = ctx.r1.s64 + -136;
	// fdivs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f5.f64));
	// fmadds f12,f12,f13,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f13.f64)));
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
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
	// fmuls f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// rlwinm r23,r24,27,29,29
	r23.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 27) & 0x4;
	// rlwinm r24,r24,30,29,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x4;
	// or r24,r23,r24
	r24.u64 = r23.u64 | r24.u64;
	// lfsx f5,r10,r24
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r24.u32);
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
	// stfs f12,-108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f10,-104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,-100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// lvx128 v63,r0,r27
	ea = (r27.u32) & ~0xF;
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
	// stvewx128 v62,r0,r26
	ea = (r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r25
	ea = (r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-140(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f10,f12,f7
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
loc_8218F734:
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f12,f10,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f12.f64)));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8218F740:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r27,0(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpw cr6,r6,r27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r27.s32, ctx.xer);
	// blt cr6,0x8218f550
	if (ctx.cr6.lt) goto loc_8218F550;
loc_8218F760:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821AC030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821AC038;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// beq cr6,0x821ac06c
	if (ctx.cr6.eq) goto loc_821AC06C;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AC064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_821AC06C:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r28,6040(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,96(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r4,-15296(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -15296);
	// bl 0x82120600
	ctx.lr = 0x821AC084;
	sub_82120600(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AC0A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821AC0B4;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ac0cc
	if (ctx.cr0.eq) goto loc_821AC0CC;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821ac270
	ctx.lr = 0x821AC0C8;
	sub_821AC270(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
loc_821AC0CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B0F80) {
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
	ctx.lr = 0x821B0F88;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x821d4280
	ctx.lr = 0x821B0F9C;
	sub_821D4280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,-23248
	ctx.r10.s64 = ctx.r10.s64 + -23248;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,232
	r30.s64 = r31.s64 + 232;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B0FC4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b0ff4
	if (ctx.cr0.eq) goto loc_821B0FF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23264
	ctx.r4.s64 = ctx.r11.s64 + -23264;
	// bl 0x82120600
	ctx.lr = 0x821B0FDC;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821a0530
	ctx.lr = 0x821B0FF0;
	sub_821A0530(ctx, base);
	// b 0x821b0ff8
	goto loc_821B0FF8;
loc_821B0FF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0FF8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821B1008;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b1020
	if (ctx.cr0.eq) goto loc_821B1020;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821B1020;
	sub_82120AC0(ctx, base);
loc_821B1020:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B1028;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1040
	if (ctx.cr0.eq) goto loc_821B1040;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821b0e38
	ctx.lr = 0x821B1038;
	sub_821B0E38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b1044
	goto loc_821B1044;
loc_821B1040:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B1044:
	// stw r4,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B1054;
	sub_821D3988(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B105C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b1074
	if (ctx.cr0.eq) goto loc_821B1074;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B106C;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b1078
	goto loc_821B1078;
loc_821B1074:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B1078:
	// stw r4,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B1084;
	sub_821D3988(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821B108C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b10a4
	if (ctx.cr0.eq) goto loc_821B10A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dffe8
	ctx.lr = 0x821B109C;
	sub_821DFFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b10a8
	goto loc_821B10A8;
loc_821B10A4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821B10A8:
	// stw r4,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B10B4;
	sub_821D3988(ctx, base);
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r3,224(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 224);
	// bl 0x821a1ff8
	ctx.lr = 0x821B10C0;
	sub_821A1FF8(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 228);
	// bl 0x821e00d0
	ctx.lr = 0x821B10CC;
	sub_821E00D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B9458) {
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
	// li r3,288
	ctx.r3.s64 = 288;
	// bl 0x822f6280
	ctx.lr = 0x821B946C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b947c
	if (ctx.cr0.eq) goto loc_821B947C;
	// bl 0x821b9490
	ctx.lr = 0x821B9478;
	sub_821B9490(ctx, base);
	// b 0x821b9480
	goto loc_821B9480;
loc_821B947C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B9480:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BB910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BB918;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82120600
	ctx.lr = 0x821BB938;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BB944;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, r31.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
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
	ctx.lr = 0x821BB968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BB978;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x82120600
	ctx.lr = 0x821BB988;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BB994;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BB9B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821BB9C8;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bb9d8
	if (!ctx.cr6.eq) goto loc_821BB9D8;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821BB9D8:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bb9ec
	if (!ctx.cr6.eq) goto loc_821BB9EC;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
loc_821BB9EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C08B0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,116(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 116);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C1D70) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x821C1D78;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca4
	ctx.lr = 0x821C1D80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c20c0
	if (!ctx.cr0.eq) goto loc_821C20C0;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821C1DA8;
	sub_8212DD28(ctx, base);
	// lwz r10,6060(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r5,r8,1608
	ctx.r5.s64 = ctx.r8.s64 + 1608;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbz r6,104(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 104);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f31,15048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// rlwinm r8,r6,4,25,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x70;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r7,r10,8424
	ctx.r7.s64 = ctx.r10.s64 + 8424;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// addi r8,r8,212
	ctx.r8.s64 = ctx.r8.s64 + 212;
	// lwz r9,6096(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 6096);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// ld r8,64(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 64);
	// std r8,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 72);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lfs f0,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x821C1E28;
	sub_82139B18(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f12,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lfs f10,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r30,256
	ctx.r8.s64 = r30.s64 + 256;
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f13,1188(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1188);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, f31.f64);
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
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, f31.f64);
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
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
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r6,r5,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x4;
	// rlwinm r5,r5,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x4;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f8,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f11,f8,f9,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// lfsx f9,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f12,f9,f0,f12
	ctx.f12.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// lfs f9,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// lfs f0,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
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
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f0,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// fsubs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f8,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,152(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 152);
	// fsubs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f0,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f5,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f6,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fsel f13,f6,f13,f11
	ctx.f13.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// lfs f11,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r30,256
	ctx.r10.s64 = r30.s64 + 256;
	// lfs f30,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f30.f64 = double(temp.f32);
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// addi r8,r30,256
	ctx.r8.s64 = r30.s64 + 256;
	// fmadds f4,f9,f9,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f4.f64)));
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f4,f8,f8,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f8.f64, ctx.f4.f64)));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, f31.f64);
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
	// fsqrts f27,f4
	f27.f64 = double(float(sqrt(ctx.f4.f64)));
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfsx f4,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, f31.f64);
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
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// fdivs f3,f30,f27
	ctx.f3.f64 = double(float(f30.f64 / f27.f64));
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// fsel f28,f4,f31,f13
	f28.f64 = ctx.f4.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lfsx f7,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f0,f7,f0,f12
	ctx.f0.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fmuls f13,f10,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f10,f9,f3
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f9,f3,f8
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
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
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// fmadds f13,f6,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f13.f64)));
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f12,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f29,f12,f31,f0
	f29.f64 = ctx.f12.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// fmadds f1,f9,f5,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, ctx.f13.f64)));
	// beq 0x821c1fb4
	if (ctx.cr0.eq) goto loc_821C1FB4;
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
loc_821C1FB4:
	// bl 0x82186c18
	ctx.lr = 0x821C1FB8;
	sub_82186C18(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bge cr6,0x821c20c0
	if (!ctx.cr6.lt) goto loc_821C20C0;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, f28.f64);
	// ble cr6,0x821c1fd4
	if (!ctx.cr6.gt) goto loc_821C1FD4;
	// fsubs f0,f29,f1
	ctx.f0.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsubs f13,f29,f28
	ctx.f13.f64 = double(float(f29.f64 - f28.f64));
	// fdivs f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_821C1FD4:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq 0x821c20c0
	if (ctx.cr0.eq) goto loc_821C20C0;
	// lbz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 188);
	// lfs f30,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	f30.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c2040
	if (ctx.cr0.eq) goto loc_821C2040;
	// lfs f0,232(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f12,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_821C2040:
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821C204C;
	sub_8212DD28(ctx, base);
	// lwz r10,6060(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r8,9152
	ctx.r7.s64 = ctx.r8.s64 + 9152;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbz r8,104(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r10,r8,4,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x70;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,212
	ctx.r10.s64 = ctx.r10.s64 + 212;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// ld r8,64(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 64);
	// std r8,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r8.u64);
	// ld r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 72);
	// stfs f30,36(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lfs f0,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f0,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82139b18
	ctx.lr = 0x821C20C0;
	sub_82139B18(ctx, base);
loc_821C20C0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf0
	ctx.lr = 0x821C20CC;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821ECEC8) {
	REX_FUNC_PROLOGUE();
	// stw r4,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r4.u32);
	// stw r4,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EDAA0) {
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
	ctx.lr = 0x821EDAA8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821edb40
	goto loc_821EDB40;
loc_821EDAC0:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwz r29,8(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821edb00
	if (ctx.cr6.eq) goto loc_821EDB00;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
loc_821EDAD8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x821EDAE8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821edb18
	if (ctx.cr0.eq) goto loc_821EDB18;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821edad8
	if (!ctx.cr6.eq) goto loc_821EDAD8;
loc_821EDB00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EDB04:
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821edb20
	if (!ctx.cr6.eq) goto loc_821EDB20;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821edb30
	goto loc_821EDB30;
loc_821EDB18:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821edb04
	goto loc_821EDB04;
loc_821EDB20:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_821EDB30:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821edb88
	if (ctx.cr0.eq) goto loc_821EDB88;
	// lwz r27,0(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 44);
loc_821EDB40:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821edac0
	if (!ctx.cr6.eq) goto loc_821EDAC0;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r9,132(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,136(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 136);
	// lwz r7,128(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 128);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r3,6060(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6060);
	// bl 0x8212ebc8
	ctx.lr = 0x821EDB78;
	sub_8212EBC8(ctx, base);
	// stw r3,108(r26)
	REX_STORE_U32(r26.u32 + 108, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EDB80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_821EDB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821edb80
	goto loc_821EDB80;
}

DEFINE_REX_FUNC(sub_821F6A48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x821f6a70
	if (!ctx.cr6.eq) goto loc_821F6A70;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F6A70:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F6A88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F6A9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23760
	ctx.r4.s64 = ctx.r11.s64 + 23760;
	// bl 0x82120600
	ctx.lr = 0x821F6AB0;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x821F6AC0;
	sub_82180E18(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821F6AD4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
	// addi r4,r10,23776
	ctx.r4.s64 = ctx.r10.s64 + 23776;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f6fc8
	ctx.lr = 0x821F6AF4;
	sub_821F6FC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r11,23788
	ctx.r4.s64 = ctx.r11.s64 + 23788;
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f6fc8
	ctx.lr = 0x821F6B0C;
	sub_821F6FC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,23800
	ctx.r6.s64 = ctx.r11.s64 + 23800;
	// addi r4,r10,23816
	ctx.r4.s64 = ctx.r10.s64 + 23816;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f6fc8
	ctx.lr = 0x821F6B28;
	sub_821F6FC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r6,r11,23828
	ctx.r6.s64 = ctx.r11.s64 + 23828;
	// addi r4,r10,23844
	ctx.r4.s64 = ctx.r10.s64 + 23844;
	// addi r5,r31,60
	ctx.r5.s64 = r31.s64 + 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f6fc8
	ctx.lr = 0x821F6B44;
	sub_821F6FC8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,29568
	ctx.r10.s64 = ctx.r10.s64 + 29568;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x821F6B68;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f6b90
	if (ctx.cr0.eq) goto loc_821F6B90;
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
	// b 0x821f6b94
	goto loc_821F6B94;
loc_821F6B90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F6B94:
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
	ctx.lr = 0x821F6BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_82200500) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8220053c
	if (ctx.cr6.eq) goto loc_8220053C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// addi r3,r10,28248
	ctx.r3.s64 = ctx.r10.s64 + 28248;
	// li r5,667
	ctx.r5.s64 = 667;
	// bl 0x821231d0
	ctx.lr = 0x8220053C;
	sub_821231D0(ctx, base);
loc_8220053C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8220054C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82200578
	if (ctx.cr0.eq) goto loc_82200578;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,1232
	ctx.r10.s64 = ctx.r10.s64 + 1232;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8220057c
	goto loc_8220057C;
loc_82200578:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8220057C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82200598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,28296
	ctx.r4.s64 = ctx.r10.s64 + 28296;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822005B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822005d0
	if (!ctx.cr6.eq) goto loc_822005D0;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x822005d4
	goto loc_822005D4;
loc_822005D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822005D4:
	// stb r11,14(r10)
	REX_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82205240) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,30080
	ctx.r11.s64 = ctx.r11.s64 + 30080;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x82205270;
	sub_8269D1B8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,30060
	ctx.r11.s64 = ctx.r11.s64 + 30060;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x8220528c
	if (ctx.cr0.eq) goto loc_8220528C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220528C;
	sub_8269CE98(ctx, base);
loc_8220528C:
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

DEFINE_REX_FUNC(sub_82207F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stb r10,44(r3)
	REX_STORE_U8(ctx.r3.u32 + 44, ctx.r10.u8);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x82208480
	sub_82208480(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82209C60) {
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
	// bl 0x826a1c98
	ctx.lr = 0x82209C68;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2c84
	ctx.lr = 0x82209C70;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12912(r1)
	ea = -12912 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r26,16(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220a56c
	if (ctx.cr6.eq) goto loc_8220A56C;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r22,r10,16592
	r22.s64 = ctx.r10.s64 + 16592;
	// lfs f0,920(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 920);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8220a56c
	if (!ctx.cr6.gt) goto loc_8220A56C;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,128(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r8,r1,248
	ctx.r8.s64 = ctx.r1.s64 + 248;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82209CC0:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x82209cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82209CC0;
	// ld r10,1024(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 1024);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// ld r8,1032(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 1032);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// bl 0x8216cfa0
	ctx.lr = 0x82209CF0;
	sub_8216CFA0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r28,r11,-25252
	r28.s64 = ctx.r11.s64 + -25252;
	// addi r25,r10,-25320
	r25.s64 = ctx.r10.s64 + -25320;
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lbz r10,705(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 705);
	// lwz r29,468(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82209d98
	if (ctx.cr0.eq) goto loc_82209D98;
	// lwz r31,488(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82209d98
	if (!ctx.cr6.gt) goto loc_82209D98;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82209d40
	if (ctx.cr6.gt) goto loc_82209D40;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82209D40;
	sub_821231D0(ctx, base);
loc_82209D40:
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_82209D5C:
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82209d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82209D5C;
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 20);
	// lwz r31,488(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 488);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82209d8c
	if (ctx.cr6.gt) goto loc_82209D8C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82209D8C;
	sub_821231D0(ctx, base);
loc_82209D8C:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,552(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 552);
loc_82209D98:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,6056(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6056);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82209e0c
	if (!ctx.cr6.gt) goto loc_82209E0C;
	// lfs f0,140(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_82209DC0:
	// lfs f12,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,312(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82209dfc
	if (!ctx.cr6.lt) goto loc_82209DFC;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82209DFC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,720
	ctx.r11.s64 = ctx.r11.s64 + 720;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82209dc0
	if (ctx.cr6.lt) goto loc_82209DC0;
loc_82209E0C:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220a56c
	if (ctx.cr0.eq) goto loc_8220A56C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,24(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 24);
	// li r24,0
	r24.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r24,12688(r1)
	REX_STORE_U32(ctx.r1.u32 + 12688, r24.u32);
	// lfs f28,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f28.f64 = double(temp.f32);
	// stfs f28,12692(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 12692, temp.u32);
	// fmr f25,f28
	f25.f64 = f28.f64;
	// fmr f27,f28
	f27.f64 = f28.f64;
	// fmr f26,f28
	f26.f64 = f28.f64;
	// bl 0x821e5d30
	ctx.lr = 0x82209E40;
	sub_821E5D30(ctx, base);
	// lwz r11,24(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82209e68
	if (ctx.cr6.gt) goto loc_82209E68;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82209E68;
	sub_821231D0(ctx, base);
loc_82209E68:
	// lwz r30,24(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 24);
	// lwz r31,152(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82209e8c
	if (ctx.cr6.gt) goto loc_82209E8C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82209E8C;
	sub_821231D0(ctx, base);
loc_82209E8C:
	// lwz r28,84(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 84);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8220a204
	if (!ctx.cr6.gt) goto loc_8220A204;
	// lfs f31,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
loc_82209EA0:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,-8
	r30.s64 = r31.s64 + -8;
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x8220a1f8
	if (!ctx.cr6.gt) goto loc_8220A1F8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823fbd18
	ctx.lr = 0x82209EE0;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbe48
	ctx.lr = 0x82209F08;
	sub_823FBE48(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lfs f0,64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f11,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,340(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f11,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f9,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f12
	ctx.f4.f64 = ctx.f12.f64;
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lfs f10,336(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 336);
	ctx.f10.f64 = double(temp.f32);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lfs f29,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmr f2,f10
	ctx.f2.f64 = ctx.f10.f64;
	// lfs f11,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// fsubs f30,f7,f11
	f30.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f23,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f23.f64 = double(temp.f32);
	// fmuls f22,f12,f5
	f22.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// lfs f8,328(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 328);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,320(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// lfs f21,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f21.f64 = double(temp.f32);
	// fmuls f20,f3,f9
	f20.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f6,324(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 324);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f19,f30,f10
	f19.f64 = double(float(f30.f64 * ctx.f10.f64));
	// fmsubs f3,f3,f10,f22
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -f22.f64)));
	// fmsubs f4,f30,f4,f20
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f4.f64, -f20.f64)));
	// fmsubs f5,f9,f5,f19
	ctx.f5.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, -f19.f64)));
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fadds f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fadds f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f3,f21,f3
	ctx.f3.f64 = double(float(f21.f64 * ctx.f3.f64));
	// fmadds f4,f4,f29,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, f29.f64, ctx.f3.f64)));
	// fmadds f5,f23,f5,f4
	ctx.f5.f64 = double(float(std::fma(f23.f64, ctx.f5.f64, ctx.f4.f64)));
	// fcmpu cr6,f5,f28
	ctx.cr6.compare(ctx.f5.f64, f28.f64);
	// ble cr6,0x8220a1f8
	if (!ctx.cr6.gt) goto loc_8220A1F8;
	// lwz r11,-28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -28);
	// lwz r10,-20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -20);
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// lwz r8,-24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + -24);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// mulli r7,r8,48
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(48));
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// add r10,r7,r28
	ctx.r10.u64 = ctx.r7.u64 + r28.u64;
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,36(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// or r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or. r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 | ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8220a1f8
	if (ctx.cr0.eq) goto loc_8220A1F8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8220a078
	if (ctx.cr6.eq) goto loc_8220A078;
	// ld r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r25,r9,16
	r25.s64 = ctx.r9.s64 + 16;
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// ld r30,16(r9)
	r30.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ld r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// std r8,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r8.u64);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// std r5,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// std r30,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r30.u64);
	// beq cr6,0x8220a050
	if (ctx.cr6.eq) goto loc_8220A050;
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// ld r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r10,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// b 0x8220a0d0
	goto loc_8220A0D0;
loc_8220A050:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// b 0x8220a0d0
	goto loc_8220A0D0;
loc_8220A078:
	// addi r20,r10,16
	r20.s64 = ctx.r10.s64 + 16;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// addi r20,r11,16
	r20.s64 = ctx.r11.s64 + 16;
	// ld r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ld r30,8(r11)
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// ld r21,16(r10)
	r21.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ld r20,16(r11)
	r20.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r25,r1,176
	r25.s64 = ctx.r1.s64 + 176;
	// ld r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// std r21,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, r21.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// std r5,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r5.u64);
	// std r30,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, r30.u64);
	// std r20,0(r25)
	REX_STORE_U64(r25.u32 + 0, r20.u64);
	// std r11,8(r25)
	REX_STORE_U64(r25.u32 + 8, ctx.r11.u64);
loc_8220A0D0:
	// lfs f4,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lfs f5,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// ld r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// fadds f29,f5,f4
	f29.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// lfs f2,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	f30.f64 = double(temp.f32);
	// fsubs f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f3,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lfs f1,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fadds f23,f3,f2
	f23.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f4,f1,f30
	ctx.f4.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lfs f22,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	f22.f64 = double(temp.f32);
	// fsubs f1,f30,f1
	ctx.f1.f64 = double(float(f30.f64 - ctx.f1.f64));
	// lfs f21,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f21.f64 = double(temp.f32);
	// fadds f30,f21,f22
	f30.f64 = double(float(f21.f64 + f22.f64));
	// lfs f22,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	f22.f64 = double(temp.f32);
	// lfs f21,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	f21.f64 = double(temp.f32);
	// fsubs f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fadds f2,f21,f22
	ctx.f2.f64 = double(float(f21.f64 + f22.f64));
	// lfs f21,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	f21.f64 = double(temp.f32);
	// lfs f22,176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	f22.f64 = double(temp.f32);
	// cmpwi cr6,r24,128
	ctx.cr6.compare<int32_t>(r24.s32, 128, ctx.xer);
	// fmuls f29,f29,f31
	f29.f64 = double(float(f29.f64 * f31.f64));
	// fadds f22,f22,f21
	f22.f64 = double(float(f22.f64 + f21.f64));
	// fmuls f23,f23,f31
	f23.f64 = double(float(f23.f64 * f31.f64));
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * f31.f64));
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f21,f30,f31
	f21.f64 = double(float(f30.f64 * f31.f64));
	// fmuls f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 * f31.f64));
	// fsubs f11,f29,f11
	ctx.f11.f64 = double(float(f29.f64 - ctx.f11.f64));
	// fmuls f29,f22,f31
	f29.f64 = double(float(f22.f64 * f31.f64));
	// fsubs f0,f23,f0
	ctx.f0.f64 = double(float(f23.f64 - ctx.f0.f64));
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmadds f5,f5,f5,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmuls f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f13,f9
	f30.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmadds f5,f3,f3,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f3.f64, ctx.f5.f64)));
	// fmsubs f0,f9,f0,f4
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f4.f64)));
	// fmsubs f13,f13,f10,f1
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, -ctx.f1.f64)));
	// fmsubs f12,f11,f12,f30
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, -f30.f64)));
	// fsqrts f30,f5
	f30.f64 = double(float(sqrt(ctx.f5.f64)));
	// fadds f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fsubs f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 - f21.f64));
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - f29.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f29,f30,f0
	f29.f64 = double(float(f30.f64 * ctx.f0.f64));
	// stfs f29,208(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bge cr6,0x8220a1f0
	if (!ctx.cr6.lt) goto loc_8220A1F0;
	// mulli r10,r24,96
	ctx.r10.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(96));
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x826a1e70
	ctx.lr = 0x8220A1D4;
	sub_826A1E70(ctx, base);
	// lwz r11,12688(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 12688);
	// lfs f13,12692(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 12692);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r11,1
	r24.s64 = ctx.r11.s64 + 1;
	// fadds f25,f13,f0
	f25.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f25,12692(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 12692, temp.u32);
	// stw r24,12688(r1)
	REX_STORE_U32(ctx.r1.u32 + 12688, r24.u32);
loc_8220A1F0:
	// fadds f27,f29,f27
	ctx.fpscr.disableFlushMode();
	f27.f64 = double(float(f29.f64 + f27.f64));
	// fadds f26,f30,f26
	f26.f64 = double(float(f30.f64 + f26.f64));
loc_8220A1F8:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bne 0x82209ea0
	if (!ctx.cr0.eq) goto loc_82209EA0;
loc_8220A204:
	// fcmpu cr6,f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f25.f64, f28.f64);
	// beq cr6,0x8220a56c
	if (ctx.cr6.eq) goto loc_8220A56C;
	// fdivs f0,f27,f26
	ctx.f0.f64 = double(float(f27.f64 / f26.f64));
	// lfs f13,104(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8220a56c
	if (ctx.cr6.lt) goto loc_8220A56C;
	// lfs f12,108(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f31,12(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r11,r22,256
	ctx.r11.s64 = r22.s64 + 256;
	// lfs f12,112(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r22,256
	ctx.r10.s64 = r22.s64 + 256;
	// lfs f11,28(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
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
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
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
	// fsel f0,f13,f28,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f28.f64 : ctx.f0.f64;
	// fmuls f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f30,f24,f11
	ctx.f0.f64 = double(float(std::fma(f30.f64, f24.f64, ctx.f11.f64)));
	// stfs f0,28(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x8220a56c
	if (!ctx.cr6.gt) goto loc_8220A56C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// addi r30,r11,-19032
	r30.s64 = ctx.r11.s64 + -19032;
loc_8220A2A0:
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8220a558
	if (ctx.cr0.eq) goto loc_8220A558;
	// lfs f0,28(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / f30.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8220A2D0;
	sub_821A33A0(ctx, base);
	// lfs f0,76(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,72(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r4,r26,116
	ctx.r4.s64 = r26.s64 + 116;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x8220A2F4;
	sub_82191980(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// bl 0x821a33a0
	ctx.lr = 0x8220A310;
	sub_821A33A0(ctx, base);
	// lfs f0,84(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,80(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8220A32C;
	sub_821A33A0(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// bl 0x82209288
	ctx.lr = 0x8220A340;
	sub_82209288(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,6168(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 6168);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// lfs f10,64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f3.f64 = double(temp.f32);
	// lfs f9,336(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 336);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,340(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 340);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,344(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 344);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,320(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 320);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,324(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 324);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,328(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmsubs f0,f7,f0,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fmsubs f12,f12,f8,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, -ctx.f11.f64)));
	// fmsubs f13,f13,f9,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f10.f64)));
	// fadds f26,f0,f5
	f26.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f29,f12,f6
	f29.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fadds f27,f13,f4
	f27.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// bl 0x82149900
	ctx.lr = 0x8220A3C4;
	sub_82149900(ctx, base);
	// lfs f13,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,332(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f10,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f9,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,128(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,124(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f5,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f26,f26
	ctx.f3.f64 = double(float(f26.f64 * f26.f64));
	// lfs f4,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f12,f27,f27,f3
	ctx.f12.f64 = double(float(std::fma(f27.f64, f27.f64, ctx.f3.f64)));
	// fmuls f3,f11,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f1,f13,f8
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f25,f8,f0
	f25.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmadds f12,f29,f29,f12
	ctx.f12.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f12.f64)));
	// fmadds f3,f10,f2,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f2.f64, ctx.f3.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmadds f3,f9,f0,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f3.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f11,f9,f3
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 / ctx.f10.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f13,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f0,f11,f25
	ctx.f0.f64 = double(float(ctx.f11.f64 + f25.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f5,f13
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fadds f13,f4,f12
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// bl 0x821a33a0
	ctx.lr = 0x8220A508;
	sub_821A33A0(ctx, base);
	// lfs f0,92(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,88(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8220A524;
	sub_821A33A0(ctx, base);
	// lfs f0,100(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,96(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x821a33a0
	ctx.lr = 0x8220A540;
	sub_821A33A0(ctx, base);
	// lfs f0,136(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lfs f13,132(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
loc_8220A558:
	// lfs f0,28(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// stfs f0,28(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 28, temp.u32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x8220a2a0
	if (ctx.cr6.gt) goto loc_8220A2A0;
loc_8220A56C:
	// addi r1,r1,12912
	ctx.r1.s64 = ctx.r1.s64 + 12912;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2cd0
	ctx.lr = 0x8220A578;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82262CC0) {
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
	ctx.lr = 0x82262CC8;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r5,r11,16592
	ctx.r5.s64 = ctx.r11.s64 + 16592;
	// addi r26,r3,572
	r26.s64 = ctx.r3.s64 + 572;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f31,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	f31.f64 = double(temp.f32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32106
	ctx.r6.s64 = -2104098816;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// addi r9,r9,-468
	ctx.r9.s64 = ctx.r9.s64 + -468;
	// addi r8,r8,-492
	ctx.r8.s64 = ctx.r8.s64 + -492;
	// li r17,0
	r17.s64 = 0;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r24,-32106
	r24.s64 = -2104098816;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r15,-32106
	r15.s64 = -2104098816;
	// addi r21,r11,-2544
	r21.s64 = ctx.r11.s64 + -2544;
	// addi r14,r10,-308
	r14.s64 = ctx.r10.s64 + -308;
	// addi r16,r7,-540
	r16.s64 = ctx.r7.s64 + -540;
	// addi r20,r6,1624
	r20.s64 = ctx.r6.s64 + 1624;
	// addi r22,r5,17480
	r22.s64 = ctx.r5.s64 + 17480;
	// addi r19,r4,-31460
	r19.s64 = ctx.r4.s64 + -31460;
	// addi r18,r3,-31468
	r18.s64 = ctx.r3.s64 + -31468;
	// b 0x82262d54
	goto loc_82262D54;
loc_82262D50:
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82262D54:
	// lbz r11,-36(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + -36);
	// addi r23,r26,-132
	r23.s64 = r26.s64 + -132;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822632e4
	if (ctx.cr0.eq) goto loc_822632E4;
	// lwz r3,6048(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262D78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822632e4
	if (!ctx.cr6.gt) goto loc_822632E4;
	// lwz r29,-4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + -4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82262f9c
	if (!ctx.cr6.gt) goto loc_82262F9C;
	// addi r28,r25,192
	r28.s64 = r25.s64 + 192;
	// bne 0x82262eb0
	if (!ctx.cr0.eq) goto loc_82262EB0;
loc_82262DC0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228c340
	ctx.lr = 0x82262DCC;
	sub_8228C340(ctx, base);
	// lwz r30,128(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82262e9c
	if (ctx.cr0.eq) goto loc_82262E9C;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227d2e0
	ctx.lr = 0x82262E04;
	sub_8227D2E0(ctx, base);
	// lbz r11,102(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 102);
	// li r5,2
	ctx.r5.s64 = 2;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8227d560
	ctx.lr = 0x82262E20;
	sub_8227D560(ctx, base);
	// lbz r11,101(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8227d560
	ctx.lr = 0x82262E3C;
	sub_8227D560(ctx, base);
	// lbz r11,99(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 99);
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8227d560
	ctx.lr = 0x82262E58;
	sub_8227D560(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227d388
	ctx.lr = 0x82262E6C;
	sub_8227D388(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82125d00
	ctx.lr = 0x82262E78;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82262e9c
	if (ctx.cr0.eq) goto loc_82262E9C;
	// lwz r5,116(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82262e9c
	if (ctx.cr6.eq) goto loc_82262E9C;
	// addi r4,r31,120
	ctx.r4.s64 = r31.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227d810
	ctx.lr = 0x82262E9C;
	sub_8227D810(ctx, base);
loc_82262E9C:
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82262dc0
	if (ctx.cr6.lt) goto loc_82262DC0;
	// b 0x82262f9c
	goto loc_82262F9C;
loc_82262EB0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228c340
	ctx.lr = 0x82262EBC;
	sub_8228C340(ctx, base);
	// lwz r31,128(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82262f8c
	if (!ctx.cr0.eq) goto loc_82262F8C;
	// addi r6,r23,40
	ctx.r6.s64 = r23.s64 + 40;
	// addi r5,r23,12
	ctx.r5.s64 = r23.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227d2e0
	ctx.lr = 0x82262EF4;
	sub_8227D2E0(ctx, base);
	// lbz r11,102(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 102);
	// li r5,2
	ctx.r5.s64 = 2;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8227d560
	ctx.lr = 0x82262F10;
	sub_8227D560(ctx, base);
	// lbz r11,101(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8227d560
	ctx.lr = 0x82262F2C;
	sub_8227D560(ctx, base);
	// lbz r11,99(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 99);
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8227d560
	ctx.lr = 0x82262F48;
	sub_8227D560(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227d388
	ctx.lr = 0x82262F5C;
	sub_8227D388(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82125d00
	ctx.lr = 0x82262F68;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82262f8c
	if (ctx.cr0.eq) goto loc_82262F8C;
	// lwz r5,116(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82262f8c
	if (ctx.cr6.eq) goto loc_82262F8C;
	// addi r4,r30,120
	ctx.r4.s64 = r30.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227d810
	ctx.lr = 0x82262F8C;
	sub_8227D810(ctx, base);
loc_82262F8C:
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82262eb0
	if (ctx.cr6.lt) goto loc_82262EB0;
loc_82262F9C:
	// lwz r3,6152(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822632d8
	if (ctx.cr0.eq) goto loc_822632D8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82263254
	if (!ctx.cr0.eq) goto loc_82263254;
	// lwz r3,6152(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6152);
	// addi r27,r25,192
	r27.s64 = r25.s64 + 192;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82262FEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r5,r5,32769
	ctx.r5.u64 = ctx.r5.u64 | 32769;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x8227d5e8
	ctx.lr = 0x82263000;
	sub_8227D5E8(ctx, base);
	// lwz r3,6152(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r6,r25,220
	ctx.r6.s64 = r25.s64 + 220;
	// bl 0x8227d5e8
	ctx.lr = 0x82263028;
	sub_8227D5E8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8215f338
	ctx.lr = 0x82263034;
	sub_8215F338(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215f338
	ctx.lr = 0x8226303C;
	sub_8215F338(ctx, base);
	// lwz r11,6152(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 6152);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,152(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82263070
	if (!ctx.cr0.eq) goto loc_82263070;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,413
	ctx.r5.s64 = 413;
	// bl 0x821231d0
	ctx.lr = 0x82263070;
	sub_821231D0(ctx, base);
loc_82263070:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r4,-32761
	ctx.r4.s64 = -32761;
	// bl 0x8217f4b0
	ctx.lr = 0x8226307C;
	sub_8217F4B0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r17.u32);
	// ori r11,r11,32785
	ctx.r11.u64 = ctx.r11.u64 | 32785;
	// stw r17,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r17.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,2(r21)
	REX_STORE_U32(r21.u32 + 2, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r21,6
	ctx.r5.s64 = r21.s64 + 6;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8215ab18
	ctx.lr = 0x822630AC;
	sub_8215AB18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822630e8
	if (ctx.cr0.eq) goto loc_822630E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r10,6
	ctx.r6.s64 = ctx.r10.s64 + 6;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822630E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822630f8
	goto loc_822630F8;
loc_822630E8:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,429
	ctx.r5.s64 = 429;
	// bl 0x821231d0
	ctx.lr = 0x822630F8;
	sub_821231D0(ctx, base);
loc_822630F8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82125d00
	ctx.lr = 0x82263104;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226320c
	if (ctx.cr0.eq) goto loc_8226320C;
	// lwz r11,276(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 276);
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226320c
	if (!ctx.cr6.gt) goto loc_8226320C;
	// addi r26,r25,280
	r26.s64 = r25.s64 + 280;
loc_82263124:
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82263130:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82263148
	if (ctx.cr0.eq) goto loc_82263148;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// beq cr6,0x82263284
	if (ctx.cr6.eq) goto loc_82263284;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82263148:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82263130
	if (ctx.cr6.lt) goto loc_82263130;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
loc_8226315C:
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82263168:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x82263180
	if (ctx.cr0.eq) goto loc_82263180;
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// beq cr6,0x82263294
	if (ctx.cr6.eq) goto loc_82263294;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82263180:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82263168
	if (ctx.cr6.lt) goto loc_82263168;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82263194:
	// lwz r31,12(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bge cr6,0x822631b4
	if (!ctx.cr6.lt) goto loc_822631B4;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// li r5,592
	ctx.r5.s64 = 592;
	// bl 0x821231d0
	ctx.lr = 0x822631B4;
	sub_821231D0(ctx, base);
loc_822631B4:
	// li r4,-32750
	ctx.r4.s64 = -32750;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8217f4b0
	ctx.lr = 0x822631C0;
	sub_8217F4B0(ctx, base);
	// stw r28,114(r1)
	REX_STORE_U32(ctx.r1.u32 + 114, r28.u32);
	// stw r30,118(r1)
	REX_STORE_U32(ctx.r1.u32 + 118, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,122(r1)
	REX_STORE_U32(ctx.r1.u32 + 122, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,6152(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6152);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822631F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,276(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 276);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82263124
	if (ctx.cr6.lt) goto loc_82263124;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8226320C:
	// lwz r3,6152(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r25,248
	ctx.r6.s64 = r25.s64 + 248;
	// bl 0x8227d388
	ctx.lr = 0x82263230;
	sub_8227D388(ctx, base);
	// lwz r3,6152(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r25,260
	ctx.r6.s64 = r25.s64 + 260;
	// bl 0x8227d388
	ctx.lr = 0x82263254;
	sub_8227D388(ctx, base);
loc_82263254:
	// addi r3,r25,192
	ctx.r3.s64 = r25.s64 + 192;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82125d00
	ctx.lr = 0x82263260;
	sub_82125D00(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822632d8
	if (ctx.cr0.eq) goto loc_822632D8;
	// lwz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 284);
	// lwz r10,364(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 364);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x822632a4
	if (ctx.cr6.gt) goto loc_822632A4;
	// stw r17,116(r23)
	REX_STORE_U32(r23.u32 + 116, r17.u32);
	// b 0x822632ac
	goto loc_822632AC;
loc_82263284:
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r8,r11,88
	ctx.r8.s64 = ctx.r11.s64 + 88;
	// b 0x8226315c
	goto loc_8226315C;
loc_82263294:
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// b 0x82263194
	goto loc_82263194;
loc_822632A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r23)
	REX_STORE_U32(r23.u32 + 116, ctx.r11.u32);
loc_822632AC:
	// lwz r11,116(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 116);
	// addi r4,r23,120
	ctx.r4.s64 = r23.s64 + 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r10,r11,284
	ctx.r10.s64 = ctx.r11.s64 + 284;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r10.u32);
	// lwz r5,116(r23)
	ctx.r5.u64 = REX_LOAD_U32(r23.u32 + 116);
	// bl 0x8227d810
	ctx.lr = 0x822632D8;
	sub_8227D810(ctx, base);
loc_822632D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r17,96(r23)
	REX_STORE_U8(r23.u32 + 96, r17.u8);
	// stb r11,97(r23)
	REX_STORE_U8(r23.u32 + 97, ctx.r11.u8);
loc_822632E4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r26,136
	ctx.r10.s64 = r26.s64 + 136;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne 0x82262d50
	if (!ctx.cr0.eq) goto loc_82262D50;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8228CA78) {
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
	// blt cr6,0x8228caa8
	if (ctx.cr6.lt) goto loc_8228CAA8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228cac0
	if (ctx.cr6.lt) goto loc_8228CAC0;
loc_8228CAA8:
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
	ctx.lr = 0x8228CAC0;
	sub_821231D0(ctx, base);
loc_8228CAC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
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

DEFINE_REX_FUNC(sub_8228F280) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228F288;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F2B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228f2d0
	if (ctx.cr0.eq) goto loc_8228F2D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822a6b68
	ctx.lr = 0x8228F2CC;
	sub_822A6B68(ctx, base);
	// b 0x8228f2d4
	goto loc_8228F2D4;
loc_8228F2D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F2D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82290CB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82290cc8
	if (ctx.cr6.eq) goto loc_82290CC8;
	// lwz r31,12(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// b 0x82290ccc
	goto loc_82290CCC;
loc_82290CC8:
	// li r31,-1
	r31.s64 = -1;
loc_82290CCC:
	// lwz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82290ce0
	if (ctx.cr6.eq) goto loc_82290CE0;
	// lwz r8,12(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// b 0x82290ce4
	goto loc_82290CE4;
loc_82290CE0:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82290CE4:
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82290cf8
	if (ctx.cr6.eq) goto loc_82290CF8;
	// lwz r9,12(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// b 0x82290cfc
	goto loc_82290CFC;
loc_82290CF8:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82290CFC:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82290d10
	if (ctx.cr6.eq) goto loc_82290D10;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82290d14
	goto loc_82290D14;
loc_82290D10:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82290D14:
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82290d54
	if (ctx.cr6.gt) goto loc_82290D54;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82290d4c
	if (!ctx.cr6.eq) goto loc_82290D4C;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82290d54
	if (ctx.cr6.gt) goto loc_82290D54;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82290d4c
	if (!ctx.cr6.eq) goto loc_82290D4C;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82290d4c
	if (!ctx.cr6.eq) goto loc_82290D4C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82290d54
	if (ctx.cr6.gt) goto loc_82290D54;
loc_82290D4C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82290d58
	goto loc_82290D58;
loc_82290D54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82290D58:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82298C00) {
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
	// bl 0x826a1cb4
	ctx.lr = 0x82298C08;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
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
	ctx.lr = 0x82298C28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// beq 0x82298d0c
	if (ctx.cr0.eq) goto loc_82298D0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298C4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298C5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82298d0c
	if (ctx.cr0.eq) goto loc_82298D0C;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298C78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// ble 0x82298d0c
	if (!ctx.cr0.gt) goto loc_82298D0C;
loc_82298C94:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298CAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,792(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82298d00
	if (!ctx.cr6.gt) goto loc_82298D00;
	// addi r30,r3,96
	r30.s64 = ctx.r3.s64 + 96;
loc_82298CBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298CD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r5,r30,-16
	ctx.r5.s64 = r30.s64 + -16;
	// lwz r7,64(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r4,r30,-48
	ctx.r4.s64 = r30.s64 + -48;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,192
	r30.s64 = r30.s64 + 192;
	// bne 0x82298cbc
	if (!ctx.cr0.eq) goto loc_82298CBC;
loc_82298D00:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x82298c94
	if (ctx.cr6.lt) goto loc_82298C94;
loc_82298D0C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82298f5c
	if (ctx.cr0.eq) goto loc_82298F5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298D3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298D4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82298f5c
	if (ctx.cr0.eq) goto loc_82298F5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82298f5c
	if (!ctx.cr6.gt) goto loc_82298F5C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
loc_82298D74:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r30,r29,r11
	r30.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 212);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82298f48
	if (!ctx.cr0.eq) goto loc_82298F48;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82298ed0
	if (ctx.cr0.eq) goto loc_82298ED0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298DB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82298ed0
	if (ctx.cr0.eq) goto loc_82298ED0;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 224);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82298e88
	if (ctx.cr6.eq) goto loc_82298E88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82298e70
	if (ctx.cr6.eq) goto loc_82298E70;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82298e58
	if (ctx.cr6.eq) goto loc_82298E58;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82298e40
	if (ctx.cr6.eq) goto loc_82298E40;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82298e28
	if (ctx.cr6.eq) goto loc_82298E28;
	// stfs f30,128(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82298ea0
	goto loc_82298EA0;
loc_82298E28:
	// stfs f31,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stfs f30,192(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,196(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// b 0x82298ea0
	goto loc_82298EA0;
loc_82298E40:
	// stfs f30,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x82298e9c
	goto loc_82298E9C;
loc_82298E58:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x82298e9c
	goto loc_82298E9C;
loc_82298E70:
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// b 0x82298e9c
	goto loc_82298E9C;
loc_82298E88:
	// stfs f30,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_82298E9C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82298EA0:
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,204(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298ED0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82298ED0:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82298f48
	if (ctx.cr6.eq) goto loc_82298F48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82298f48
	if (ctx.cr0.eq) goto loc_82298F48;
	// stfs f30,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82298F48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82298d74
	if (ctx.cr6.lt) goto loc_82298D74;
loc_82298F5C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822BBF80) {
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
	ctx.lr = 0x822BBF88;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lbz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 244);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,7592
	ctx.r11.s64 = ctx.r11.s64 + 7592;
	// lis r26,-32126
	r26.s64 = -2105409536;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822bbff0
	if (ctx.cr0.eq) goto loc_822BBFF0;
	// lwz r3,176(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BBFC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,176(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bbff0
	if (ctx.cr6.eq) goto loc_822BBFF0;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BBFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BBFF0:
	// lbz r11,245(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 245);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822bc03c
	if (ctx.cr0.eq) goto loc_822BC03C;
	// lwz r3,172(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 172);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,172(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bc03c
	if (ctx.cr6.eq) goto loc_822BC03C;
	// lwz r11,112(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BC03C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC03C:
	// lwz r11,260(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 260);
	// addi r31,r27,248
	r31.s64 = r27.s64 + 248;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc07c
	if (ctx.cr6.eq) goto loc_822BC07C;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822bc078
	if (ctx.cr0.eq) goto loc_822BC078;
	// lwz r10,112(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BC078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC078:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_822BC07C:
	// li r25,1
	r25.s64 = 1;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r30,r27,200
	r30.s64 = r27.s64 + 200;
	// stb r25,16(r31)
	REX_STORE_U8(r31.u32 + 16, r25.u8);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,212(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 212);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bc0cc
	if (ctx.cr6.eq) goto loc_822BC0CC;
	// lbz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822bc0c8
	if (ctx.cr0.eq) goto loc_822BC0C8;
	// lwz r10,112(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BC0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC0C8:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
loc_822BC0CC:
	// stb r25,16(r30)
	REX_STORE_U8(r30.u32 + 16, r25.u8);
	// addi r3,r27,180
	ctx.r3.s64 = r27.s64 + 180;
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// bl 0x821eced8
	ctx.lr = 0x822BC0E4;
	sub_821ECED8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,7464
	ctx.r11.s64 = ctx.r11.s64 + 7464;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// bl 0x822947a0
	ctx.lr = 0x822BC0F8;
	sub_822947A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822C2428) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12024(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,12024(r3)
	REX_STORE_U32(ctx.r3.u32 + 12024, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,12024(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12024);
	// bne 0x822c246c
	if (!ctx.cr0.eq) goto loc_822C246C;
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
loc_822C246C:
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

DEFINE_REX_FUNC(sub_822C33D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3790) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10616);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C39D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10560(r3)
	REX_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4488) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r7,r10,11,20,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srd r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C8268) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x822C8270;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// stw r4,12924(r3)
	REX_STORE_U32(ctx.r3.u32 + 12924, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x822c82fc
	if (ctx.cr6.eq) goto loc_822C82FC;
	// addi r8,r31,13164
	ctx.r8.s64 = r31.s64 + 13164;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r11,r5,-12
	ctx.r11.s64 = ctx.r5.s64 + -12;
	// addi r10,r31,12924
	ctx.r10.s64 = r31.s64 + 12924;
loc_822C82B0:
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x822c82c0
	if (ctx.cr6.gt) goto loc_822C82C0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
loc_822C82C0:
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x822c82d0
	if (ctx.cr6.gt) goto loc_822C82D0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_822C82D0:
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// rlwinm r26,r5,0,0,26
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r6,r9,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stwu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stw r26,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r26.u32);
	// stwu r6,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x822c82b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C82B0;
loc_822C82FC:
	// lbz r10,10943(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,13356(r31)
	REX_STORE_U32(r31.u32 + 13356, r30.u32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r3,13360(r31)
	REX_STORE_U32(r31.u32 + 13360, ctx.r3.u32);
	// stw r29,13364(r31)
	REX_STORE_U32(r31.u32 + 13364, r29.u32);
	// addi r30,r11,7944
	r30.s64 = ctx.r11.s64 + 7944;
	// bne 0x822c841c
	if (!ctx.cr0.eq) goto loc_822C841C;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c8374
	if (ctx.cr6.eq) goto loc_822C8374;
	// addi r10,r31,12940
	ctx.r10.s64 = r31.s64 + 12940;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r11,r31,13172
	ctx.r11.s64 = r31.s64 + 13172;
loc_822C8338:
	// lwz r7,-4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subf r7,r5,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r5.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x822c835c
	if (ctx.cr6.gt) goto loc_822C835C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_822C835C:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x822c8368
	if (ctx.cr6.gt) goto loc_822C8368;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_822C8368:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x822c8338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8338;
loc_822C8374:
	// addi r4,r31,12824
	ctx.r4.s64 = r31.s64 + 12824;
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x826a1e70
	ctx.lr = 0x822C8394;
	sub_826A1E70(ctx, base);
	// lwz r11,12852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12852);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,12856(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12856);
	// lwz r8,12860(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12860);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,12864(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12864);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x822c45e0
	ctx.lr = 0x822C83C4;
	sub_822C45E0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,7968
	ctx.r4.s64 = ctx.r11.s64 + 7968;
	// bl 0x822c44e8
	ctx.lr = 0x822C83D4;
	sub_822C44E8(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d1458
	ctx.lr = 0x822C83F0;
	sub_822D1458(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f6,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c1f80
	ctx.lr = 0x822C8410;
	sub_822C1F80(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c44e8
	ctx.lr = 0x822C841C;
	sub_822C44E8(ctx, base);
loc_822C841C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822c8434
	if (ctx.cr6.eq) goto loc_822C8434;
	// li r11,13376
	ctx.r11.s64 = 13376;
	// lvx128 v63,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822c843c
	goto loc_822C843C;
loc_822C8434:
	// std r29,13376(r31)
	REX_STORE_U64(r31.u32 + 13376, r29.u64);
	// std r29,13384(r31)
	REX_STORE_U64(r31.u32 + 13384, r29.u64);
loc_822C843C:
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// stfs f31,13392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 13392, temp.u32);
	// stw r27,13396(r31)
	REX_STORE_U32(r31.u32 + 13396, r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x822c8458
	if (!ctx.cr6.eq) goto loc_822C8458;
	// lwz r10,12632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12632);
loc_822C8458:
	// lbz r9,10940(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,12620(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r6,12624(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// lwz r5,12628(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r4,12632(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// rlwinm. r3,r9,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,12900(r31)
	REX_STORE_U32(r31.u32 + 12900, ctx.r10.u32);
	// stw r11,12904(r31)
	REX_STORE_U32(r31.u32 + 12904, ctx.r11.u32);
	// stw r7,12908(r31)
	REX_STORE_U32(r31.u32 + 12908, ctx.r7.u32);
	// stw r6,12912(r31)
	REX_STORE_U32(r31.u32 + 12912, ctx.r6.u32);
	// stw r5,12916(r31)
	REX_STORE_U32(r31.u32 + 12916, ctx.r5.u32);
	// stw r4,12920(r31)
	REX_STORE_U32(r31.u32 + 12920, ctx.r4.u32);
	// stw r8,12896(r31)
	REX_STORE_U32(r31.u32 + 12896, ctx.r8.u32);
	// stb r9,10940(r31)
	REX_STORE_U8(r31.u32 + 10940, ctx.r9.u8);
	// stw r29,12892(r31)
	REX_STORE_U32(r31.u32 + 12892, r29.u32);
	// bne 0x822c84e0
	if (!ctx.cr0.eq) goto loc_822C84E0;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c84e0
	if (!ctx.cr0.eq) goto loc_822C84E0;
	// lbz r11,12363(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12363);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822c84e0
	if (!ctx.cr0.eq) goto loc_822C84E0;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c84cc
	if (ctx.cr0.eq) goto loc_822C84CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822c84d4
	goto loc_822C84D4;
loc_822C84CC:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_822C84D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822c84e4
	if (!ctx.cr0.eq) goto loc_822C84E4;
loc_822C84E0:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_822C84E4:
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r29,12888(r31)
	REX_STORE_U32(r31.u32 + 12888, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r9,12884(r31)
	REX_STORE_U32(r31.u32 + 12884, ctx.r9.u32);
	// stw r29,10932(r31)
	REX_STORE_U32(r31.u32 + 10932, r29.u32);
	// stw r29,10936(r31)
	REX_STORE_U32(r31.u32 + 10936, r29.u32);
	// stb r10,10940(r31)
	REX_STORE_U8(r31.u32 + 10940, ctx.r10.u8);
	// bl 0x822de2f8
	ctx.lr = 0x822C850C;
	sub_822DE2F8(ctx, base);
	// lwz r11,13580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13580);
	// lwz r9,13584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 13584);
	// addi r3,r31,13568
	ctx.r3.s64 = r31.s64 + 13568;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822c852c
	if (!ctx.cr6.gt) goto loc_822C852C;
	// bl 0x822d4978
	ctx.lr = 0x822C8528;
	sub_822D4978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C852C:
	// lis r10,-31232
	ctx.r10.s64 = -2046820352;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r9,13580(r31)
	REX_STORE_U32(r31.u32 + 13580, ctx.r9.u32);
	// ble cr6,0x822c8558
	if (!ctx.cr6.gt) goto loc_822C8558;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C8554;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C8558:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,25
	ctx.r9.s64 = 25;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// li r4,70
	ctx.r4.s64 = 70;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822d48b8
	ctx.lr = 0x822C857C;
	sub_822D48B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822c8588
	if (ctx.cr0.eq) goto loc_822C8588;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822C8588:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c45e0
	ctx.lr = 0x822C8594;
	sub_822C45E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c1ad8
	ctx.lr = 0x822C85A0;
	sub_822C1AD8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822E1D70) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16932(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16932);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1f1c
	if (ctx.cr0.eq) goto loc_822E1F1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1db4
	if (ctx.cr6.eq) goto loc_822E1DB4;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822e1db8
	goto loc_822E1DB8;
loc_822E1DB4:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822E1DB8:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E1DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16936(r31)
	REX_STORE_U32(r31.u32 + 16936, ctx.r3.u32);
loc_822E1DC8:
	// stw r30,16932(r31)
	REX_STORE_U32(r31.u32 + 16932, r30.u32);
loc_822E1DCC:
	// lwz r11,21796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21796);
	// lwz r10,21792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21792);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x822e1e00
	if (ctx.cr6.eq) goto loc_822E1E00;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,21788(r31)
	REX_STORE_U32(r31.u32 + 21788, ctx.r11.u32);
loc_822E1E00:
	// ld r8,21808(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 21808);
	// ld r10,21816(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 21816);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,21856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21856);
	// stw r8,21824(r31)
	REX_STORE_U32(r31.u32 + 21824, ctx.r8.u32);
	// std r30,21808(r31)
	REX_STORE_U64(r31.u32 + 21808, r30.u64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,21796(r31)
	REX_STORE_U32(r31.u32 + 21796, ctx.r9.u32);
	// stw r7,21792(r31)
	REX_STORE_U32(r31.u32 + 21792, ctx.r7.u32);
	// stw r10,21828(r31)
	REX_STORE_U32(r31.u32 + 21828, ctx.r10.u32);
	// std r30,21816(r31)
	REX_STORE_U64(r31.u32 + 21816, r30.u64);
	// bne cr6,0x822e1f88
	if (!ctx.cr6.eq) goto loc_822E1F88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1c70
	ctx.lr = 0x822E1E3C;
	sub_822E1C70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1f80
	if (ctx.cr0.eq) goto loc_822E1F80;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a2e60
	ctx.lr = 0x822E1E54;
	sub_826A2E60(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,13
	ctx.r8.s64 = 13;
	// lbz r10,10942(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r9,37
	ctx.r9.s64 = 37;
	// stw r8,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r11,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stw r11,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r8.u32);
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// li r9,30
	ctx.r9.s64 = 30;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r11,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// stw r8,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// bne 0x822e1ee4
	if (!ctx.cr0.eq) goto loc_822E1EE4;
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822e1ed8
	if (ctx.cr6.eq) goto loc_822E1ED8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5fd8
	ctx.lr = 0x822E1ED0;
	sub_822D5FD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82793d44
	ctx.lr = 0x822E1ED8;
	__imp__VdEnableDisableClockGating(ctx, base);
loc_822E1ED8:
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r11.u8);
loc_822E1EE4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d70b8
	ctx.lr = 0x822E1EF0;
	sub_822D70B8(ctx, base);
	// lwz r11,21852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21852);
	// stw r30,21860(r31)
	REX_STORE_U32(r31.u32 + 21860, r30.u32);
	// stw r30,21864(r31)
	REX_STORE_U32(r31.u32 + 21864, r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e1f10
	if (!ctx.cr6.eq) goto loc_822E1F10;
	// lwz r11,21844(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21844);
	// addi r11,r11,1920
	ctx.r11.s64 = ctx.r11.s64 + 1920;
	// stw r11,21852(r31)
	REX_STORE_U32(r31.u32 + 21852, ctx.r11.u32);
loc_822E1F10:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,21856(r31)
	REX_STORE_U32(r31.u32 + 21856, ctx.r11.u32);
	// b 0x822e1ffc
	goto loc_822E1FFC;
loc_822E1F1C:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e1dcc
	if (ctx.cr0.eq) goto loc_822E1DCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2272);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1f40
	if (ctx.cr6.eq) goto loc_822E1F40;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822e1f44
	goto loc_822E1F44;
loc_822E1F40:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822E1F44:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// rlwinm r4,r10,20,4,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFF00000;
	// addi r3,r9,12976
	ctx.r3.s64 = ctx.r9.s64 + 12976;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E1F5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16936(r31)
	REX_STORE_U32(r31.u32 + 16936, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822e1dc8
	if (ctx.cr0.lt) goto loc_822E1DC8;
	// lwz r11,16932(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16932);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,10,23,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,16932(r31)
	REX_STORE_U32(r31.u32 + 16932, ctx.r11.u32);
	// b 0x822e1dcc
	goto loc_822E1DCC;
loc_822E1F80:
	// stw r30,21856(r31)
	REX_STORE_U32(r31.u32 + 21856, r30.u32);
	// b 0x822e1ffc
	goto loc_822E1FFC;
loc_822E1F88:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x822e1ffc
	if (!ctx.cr6.eq) goto loc_822E1FFC;
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e1fc8
	if (!ctx.cr0.eq) goto loc_822E1FC8;
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822e1fbc
	if (ctx.cr6.eq) goto loc_822E1FBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5fd8
	ctx.lr = 0x822E1FB4;
	sub_822D5FD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82793d44
	ctx.lr = 0x822E1FBC;
	__imp__VdEnableDisableClockGating(ctx, base);
loc_822E1FBC:
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r11.u8);
loc_822E1FC8:
	// lwz r11,21864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21864);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822e1fd8
	if (ctx.cr6.eq) goto loc_822E1FD8;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
loc_822E1FD8:
	// lwz r11,21860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21860);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e1ffc
	if (ctx.cr6.eq) goto loc_822E1FFC;
	// lwz r10,21848(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21848);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d7750
	ctx.lr = 0x822E1FF8;
	sub_822D7750(ctx, base);
	// stw r30,21864(r31)
	REX_STORE_U32(r31.u32 + 21864, r30.u32);
loc_822E1FFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e1608
	ctx.lr = 0x822E2004;
	sub_822E1608(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e2030
	if (ctx.cr6.eq) goto loc_822E2030;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e2030
	if (ctx.cr6.eq) goto loc_822E2030;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822E2030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822E2030:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

DEFINE_REX_FUNC(sub_822F4250) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822f4300
	if (!ctx.cr6.gt) goto loc_822F4300;
	// addic. r5,r5,8
	ctx.xer.ca = ctx.r5.u32 > 4294967287;
	ctx.r5.s64 = ctx.r5.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822f4300
	if (ctx.cr0.eq) goto loc_822F4300;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// blt cr6,0x822f4300
	if (ctx.cr6.lt) goto loc_822F4300;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822f4190
	ctx.lr = 0x822F428C;
	sub_822F4190(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f4300
	if (ctx.cr6.eq) goto loc_822F4300;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + r30.u64;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_822F42A4:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_822F42C4:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r6,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f42e8
	if (!ctx.cr6.eq) goto loc_822F42E8;
	// stdcx. r4,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f42c4
	if (!ctx.cr0.eq) goto loc_822F42C4;
	// b 0x822f42f0
	goto loc_822F42F0;
loc_822F42E8:
	// stdcx. r6,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F42F0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f42a4
	if (!ctx.cr6.eq) goto loc_822F42A4;
	// b 0x822f4304
	goto loc_822F4304;
loc_822F4300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F4304:
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

DEFINE_REX_FUNC(sub_822F8550) {
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
	ctx.lr = 0x822F8558;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// beq 0x822f869c
	if (ctx.cr0.eq) goto loc_822F869C;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8580
	if (ctx.cr6.eq) goto loc_822F8580;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f8584
	goto loc_822F8584;
loc_822F8580:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F8584:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f85a0
	if (ctx.cr6.eq) goto loc_822F85A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f859c
	if (ctx.cr6.eq) goto loc_822F859C;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f85a0
	goto loc_822F85A0;
loc_822F859C:
	// li r28,0
	r28.s64 = 0;
loc_822F85A0:
	// lhz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 100);
	// stw r27,136(r28)
	REX_STORE_U32(r28.u32 + 136, r27.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f8634
	if (ctx.cr0.eq) goto loc_822F8634;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822f86a0
	if (!ctx.cr6.gt) goto loc_822F86A0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822F85D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f8620
	if (ctx.cr6.eq) goto loc_822F8620;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f85f4
	if (ctx.cr6.eq) goto loc_822F85F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f85f8
	goto loc_822F85F8;
loc_822F85F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F85F8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822f8620
	if (!ctx.cr6.eq) goto loc_822F8620;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f8620
	if (ctx.cr0.eq) goto loc_822F8620;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822f8550
	ctx.lr = 0x822F8618;
	sub_822F8550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f86a4
	if (!ctx.cr0.eq) goto loc_822F86A4;
loc_822F8620:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x822f85d4
	if (ctx.cr6.lt) goto loc_822F85D4;
	// b 0x822f86a0
	goto loc_822F86A0;
loc_822F8634:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822f86a0
	if (!ctx.cr6.gt) goto loc_822F86A0;
	// li r31,0
	r31.s64 = 0;
loc_822F864C:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822f8680
	if (ctx.cr6.eq) goto loc_822F8680;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f8680
	if (ctx.cr6.eq) goto loc_822F8680;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822f8550
	ctx.lr = 0x822F8678;
	sub_822F8550(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f86a4
	if (!ctx.cr0.eq) goto loc_822F86A4;
loc_822F8680:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822f864c
	if (ctx.cr6.lt) goto loc_822F864C;
	// b 0x822f86a0
	goto loc_822F86A0;
loc_822F869C:
	// stw r27,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, r27.u32);
loc_822F86A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F86A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82300F60) {
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
	// beq cr6,0x82300f9c
	if (ctx.cr6.eq) goto loc_82300F9C;
	// lbz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82300fb8
	if (!ctx.cr0.eq) goto loc_82300FB8;
	// bl 0x82335138
	ctx.lr = 0x82300F8C;
	sub_82335138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300fbc
	if (!ctx.cr0.eq) goto loc_82300FBC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82300fb4
	goto loc_82300FB4;
loc_82300F9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82335138
	ctx.lr = 0x82300FA8;
	sub_82335138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82300fbc
	if (!ctx.cr0.eq) goto loc_82300FBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82300FB4:
	// stb r11,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r11.u8);
loc_82300FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82300FBC:
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

DEFINE_REX_FUNC(sub_82302E60) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82302eb0
	if (ctx.cr6.eq) goto loc_82302EB0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82302eb0
	if (ctx.cr6.eq) goto loc_82302EB0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82301478
	ctx.lr = 0x82302E8C;
	sub_82301478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82302eb4
	if (!ctx.cr0.eq) goto loc_82302EB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x826a1e70
	ctx.lr = 0x82302EA8;
	sub_826A1E70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82302eb4
	goto loc_82302EB4;
loc_82302EB0:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82302EB4:
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

DEFINE_REX_FUNC(sub_823081D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823081f4
	if (!ctx.cr6.eq) goto loc_823081F4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823081F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82308AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82308AF8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822fcb30
	ctx.lr = 0x82308B08;
	sub_822FCB30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308bc4
	if (ctx.cr0.eq) goto loc_82308BC4;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82308bc4
	if (!ctx.cr6.gt) goto loc_82308BC4;
	// li r30,0
	r30.s64 = 0;
loc_82308B28:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8230c800
	ctx.lr = 0x82308B34;
	sub_8230C800(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308bac
	if (ctx.cr0.eq) goto loc_82308BAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f78f8
	ctx.lr = 0x82308B48;
	sub_822F78F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82308bac
	if (ctx.cr0.eq) goto loc_82308BAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7c68
	ctx.lr = 0x82308B58;
	sub_822F7C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308bac
	if (!ctx.cr0.eq) goto loc_82308BAC;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8230dcf8
	ctx.lr = 0x82308B74;
	sub_8230DCF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308bc8
	if (!ctx.cr0.eq) goto loc_82308BC8;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x8230d308
	ctx.lr = 0x82308B94;
	sub_8230D308(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82308bc8
	if (!ctx.cr0.eq) goto loc_82308BC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7960
	ctx.lr = 0x82308BAC;
	sub_822F7960(ctx, base);
loc_82308BAC:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82308b28
	if (ctx.cr6.lt) goto loc_82308B28;
loc_82308BC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82308BC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8230FAF0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230fb00
	if (!ctx.cr6.eq) goto loc_8230FB00;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8230FB00:
	// lbz r11,29(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 29);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82310690) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82311588) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82311590;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82311710
	if (ctx.cr6.eq) goto loc_82311710;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,-10820(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -10820);
	// lwz r8,20(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// stw r8,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// lwz r10,164(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 164);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823116d0
	if (ctx.cr0.eq) goto loc_823116D0;
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r9,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r9.u32);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r8
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x82311618;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// neg r8,r8
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r8,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// bl 0x826a2d14
	ctx.lr = 0x82311634;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// ble cr6,0x823116c4
	if (!ctx.cr6.gt) goto loc_823116C4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82311660
	goto loc_82311660;
loc_8231165C:
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
loc_82311660:
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r6,40(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r6,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823116a4
	if (!ctx.cr6.eq) goto loc_823116A4;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r6,104(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r8,40(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,20(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// stwx r8,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// b 0x823116ac
	goto loc_823116AC;
loc_823116A4:
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_823116AC:
	// lwz r8,100(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8231165c
	if (ctx.cr6.lt) goto loc_8231165C;
loc_823116C4:
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// b 0x823116d8
	goto loc_823116D8;
loc_823116D0:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_823116D8:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822f7c10
	ctx.lr = 0x823116E4;
	sub_822F7C10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82311710
	if (!ctx.cr6.eq) goto loc_82311710;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82311710
	if (ctx.cr6.lt) goto loc_82311710;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82311710
	if (!ctx.cr6.lt) goto loc_82311710;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82311710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8231A450) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8231A458;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231a47c
	if (!ctx.cr6.eq) goto loc_8231A47C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8231a4b8
	goto loc_8231A4B8;
loc_8231A47C:
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x823150e0
	ctx.lr = 0x8231A484;
	sub_823150E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8231a494
	if (!ctx.cr0.eq) goto loc_8231A494;
loc_8231A48C:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8231a4c0
	goto loc_8231A4C0;
loc_8231A494:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8231a48c
	if (ctx.cr6.gt) goto loc_8231A48C;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8231A4B4;
	sub_823EF2F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8231A4B8:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A4C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82320318) {
	REX_FUNC_PROLOGUE();
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// bne 0x8232039c
	if (!ctx.cr0.eq) goto loc_8232039C;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232039c
	if (!ctx.cr0.eq) goto loc_8232039C;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823203a4
	if (!ctx.cr6.gt) goto loc_823203A4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8232034C:
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82320380
	if (!ctx.cr6.eq) goto loc_82320380;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82320388
	if (!ctx.cr6.gt) goto loc_82320388;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82320388
	goto loc_82320388;
loc_82320380:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8232039c
	if (!ctx.cr6.eq) goto loc_8232039C;
loc_82320388:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8232034c
	if (ctx.cr6.lt) goto loc_8232034C;
	// b 0x823203a4
	goto loc_823203A4;
loc_8232039C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_823203A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823251A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823251e8
	if (ctx.cr6.lt) goto loc_823251E8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823251e8
	if (ctx.cr6.eq) goto loc_823251E8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823251dc
	if (!ctx.cr6.gt) goto loc_823251DC;
loc_823251CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823251e8
	if (ctx.cr6.eq) goto loc_823251E8;
	// bdnz 0x823251cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823251CC;
loc_823251DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823251ec
	if (!ctx.cr6.eq) goto loc_823251EC;
loc_823251E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823251EC:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r11,37
	ctx.r11.s64 = 37;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329090) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823290c4
	if (ctx.cr6.eq) goto loc_823290C4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82331a00
	ctx.lr = 0x823290C4;
	sub_82331A00(ctx, base);
loc_823290C4:
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

DEFINE_REX_FUNC(sub_8232AA00) {
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
	ctx.lr = 0x8232AA08;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// bl 0x823165d8
	ctx.lr = 0x8232AA20;
	sub_823165D8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AA34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x8232aa44
	if (!ctx.cr0.eq) goto loc_8232AA44;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8232accc
	goto loc_8232ACCC;
loc_8232AA44:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AA58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,0
	r28.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232abc8
	if (!ctx.cr0.eq) goto loc_8232ABC8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232accc
	if (!ctx.cr0.eq) goto loc_8232ACCC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r11.u64);
	// lbz r11,29(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8232acc8
	if (ctx.cr0.eq) goto loc_8232ACC8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8232d410
	ctx.lr = 0x8232AABC;
	sub_8232D410(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232ab58
	if (!ctx.cr0.eq) goto loc_8232AB58;
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r28,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r28.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stb r28,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, r28.u8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// std r28,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r28.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
loc_8232AB04:
	// ldu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8232ab04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232AB04;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ab50
	if (ctx.cr6.eq) goto loc_8232AB50;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r28,156(r9)
	REX_STORE_U32(ctx.r9.u32 + 156, r28.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,156(r9)
	REX_STORE_U32(ctx.r9.u32 + 156, ctx.r10.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8232d440
	ctx.lr = 0x8232AB40;
	sub_8232D440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232accc
	if (!ctx.cr0.eq) goto loc_8232ACCC;
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// b 0x8232aca4
	goto loc_8232ACA4;
loc_8232AB50:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8232accc
	goto loc_8232ACCC;
loc_8232AB58:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AB6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232acc8
	if (ctx.cr0.eq) goto loc_8232ACC8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232aba8
	if (ctx.cr0.eq) goto loc_8232ABA8;
	// clrldi r4,r3,32
	ctx.r4.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82329648
	ctx.lr = 0x8232AB9C;
	sub_82329648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232acc8
	if (ctx.cr0.eq) goto loc_8232ACC8;
	// b 0x8232accc
	goto loc_8232ACCC;
loc_8232ABA8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232a370
	ctx.lr = 0x8232ABB4;
	sub_8232A370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232accc
	if (!ctx.cr0.eq) goto loc_8232ACCC;
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// std r28,136(r31)
	REX_STORE_U64(r31.u32 + 136, r28.u64);
	// b 0x8232aca4
	goto loc_8232ACA4;
loc_8232ABC8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8232acc8
	if (!ctx.cr6.eq) goto loc_8232ACC8;
	// lbz r11,29(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 29);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8232acc8
	if (ctx.cr0.eq) goto loc_8232ACC8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82329710
	ctx.lr = 0x8232ABE8;
	sub_82329710(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8232ac00
	if (!ctx.cr0.eq) goto loc_8232AC00;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82329fd0
	ctx.lr = 0x8232ABFC;
	sub_82329FD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8232AC00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8232acc8
	if (ctx.cr6.eq) goto loc_8232ACC8;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AC28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232accc
	if (!ctx.cr0.eq) goto loc_8232ACCC;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r11.u64);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232AC5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8232d440
	ctx.lr = 0x8232AC68;
	sub_8232D440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232accc
	if (!ctx.cr0.eq) goto loc_8232ACCC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8232d410
	ctx.lr = 0x8232AC80;
	sub_8232D410(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232aca4
	if (!ctx.cr0.eq) goto loc_8232ACA4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r28,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
loc_8232ACA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8232acc8
	if (ctx.cr6.eq) goto loc_8232ACC8;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232acc4
	if (ctx.cr0.eq) goto loc_8232ACC4;
	// stw r25,28(r30)
	REX_STORE_U32(r30.u32 + 28, r25.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8232ef38
	ctx.lr = 0x8232ACC0;
	sub_8232EF38(ctx, base);
	// b 0x8232acc8
	goto loc_8232ACC8;
loc_8232ACC4:
	// stw r28,28(r30)
	REX_STORE_U32(r30.u32 + 28, r28.u32);
loc_8232ACC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232ACCC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82342E40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82342E48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82342E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82342e7c
	if (ctx.cr6.eq) goto loc_82342E7C;
	// lwz r30,292(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 292);
loc_82342E7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r29,224(r31)
	REX_STORE_U32(r31.u32 + 224, r29.u32);
	// beq cr6,0x82342e8c
	if (ctx.cr6.eq) goto loc_82342E8C;
	// stw r29,224(r30)
	REX_STORE_U32(r30.u32 + 224, r29.u32);
loc_82342E8C:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82342eb4
	if (!ctx.cr6.eq) goto loc_82342EB4;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r10,21920(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21920);
	// stw r10,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r10.u32);
	// beq cr6,0x82342eb4
	if (ctx.cr6.eq) goto loc_82342EB4;
	// lwz r11,21920(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21920);
	// stw r11,224(r30)
	REX_STORE_U32(r30.u32 + 224, ctx.r11.u32);
loc_82342EB4:
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r3,15880(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 15880);
	// bl 0x8233e7e0
	ctx.lr = 0x82342EC0;
	sub_8233E7E0(ctx, base);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r11,r31,228
	ctx.r11.s64 = r31.s64 + 228;
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,228(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r7,232(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// stw r28,236(r31)
	REX_STORE_U32(r31.u32 + 236, r28.u32);
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r6.u32);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r5,232(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 232);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r31,236(r31)
	REX_STORE_U32(r31.u32 + 236, r31.u32);
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r4,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r4,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r28,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r28.u32);
	// lwz r8,224(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r11,r11,21924
	ctx.r11.s64 = ctx.r11.s64 + 21924;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r8,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r3,15880(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 15880);
	// bl 0x8233e820
	ctx.lr = 0x82342F64;
	sub_8233E820(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8234D5C0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234d5d0
	if (!ctx.cr6.eq) goto loc_8234D5D0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234D5D0:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d5e8
	if (!ctx.cr6.eq) goto loc_8234D5E8;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8234D5E8:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234E480) {
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
	ctx.lr = 0x8234E488;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f31,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	f31.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,76
	r30.s64 = ctx.r3.s64 + 76;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e4bc
	if (!ctx.cr6.eq) goto loc_8234E4BC;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
loc_8234E4BC:
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8234e4cc
	if (!ctx.cr6.lt) goto loc_8234E4CC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8234E4CC:
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8234e4dc
	if (!ctx.cr6.gt) goto loc_8234E4DC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8234E4DC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stfs f1,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234e528
	if (!ctx.cr6.gt) goto loc_8234E528;
loc_8234E4F0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f1,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234E508;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8234e514
	if (!ctx.cr6.eq) goto loc_8234E514;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8234E514:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234e4f0
	if (ctx.cr6.lt) goto loc_8234E4F0;
loc_8234E528:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e570
	if (ctx.cr6.eq) goto loc_8234E570;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x8234e550
	if (!ctx.cr6.lt) goto loc_8234E550;
	// lfs f13,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8234e564
	if (ctx.cr6.gt) goto loc_8234E564;
loc_8234E550:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x8234e570
	if (!ctx.cr6.gt) goto loc_8234E570;
	// lfs f13,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8234e570
	if (!ctx.cr6.lt) goto loc_8234E570;
loc_8234E564:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d998
	ctx.lr = 0x8234E570;
	sub_8234D998(ctx, base);
loc_8234E570:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82354FB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82354FC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235501c
	if (!ctx.cr6.gt) goto loc_8235501C;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
loc_82354FE0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8235f468
	ctx.lr = 0x82354FF0;
	sub_8235F468(ctx, base);
	// lbzx r10,r28,r31
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82355008
	if (!ctx.cr6.eq) goto loc_82355008;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82355028
	if (!ctx.cr6.eq) goto loc_82355028;
loc_82355008:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82354fe0
	if (ctx.cr6.lt) goto loc_82354FE0;
loc_8235501C:
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82355028:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82357B40) {
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
	ctx.lr = 0x82357B48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82357e60
	if (ctx.cr6.eq) goto loc_82357E60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82357e60
	if (ctx.cr6.eq) goto loc_82357E60;
	// lwz r31,0(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,112(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// lis r28,-32129
	r28.s64 = -2105606144;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r29,r11,10216
	r29.s64 = ctx.r11.s64 + 10216;
	// bne cr6,0x82357da8
	if (!ctx.cr6.eq) goto loc_82357DA8;
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 116);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82357e60
	if (ctx.cr6.gt) goto loc_82357E60;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357c0c
	if (ctx.cr6.eq) goto loc_82357C0C;
	// bdz 0x82357c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82357C60;
	// bdz 0x82357c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82357C60;
	// bdz 0x82357c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82357C60;
	// bdz 0x82357c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82357C60;
	// bdz 0x82357c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82357C60;
	// bdz 0x82357bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82357BBC;
	// bdz 0x82357d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82357D4C;
	// b 0x82357d0c
	goto loc_82357D0C;
loc_82357BBC:
	// cmplwi cr6,r4,308
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 308, ctx.xer);
	// bge cr6,0x82357bc8
	if (!ctx.cr6.lt) goto loc_82357BC8;
	// li r4,308
	ctx.r4.s64 = 308;
loc_82357BC8:
	// stw r4,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r4.u32);
	// cmplwi cr6,r4,308
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 308, ctx.xer);
	// bge cr6,0x82357bd8
	if (!ctx.cr6.lt) goto loc_82357BD8;
	// li r4,308
	ctx.r4.s64 = 308;
loc_82357BD8:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1492
	ctx.r6.s64 = 1492;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82357BF0;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357d94
	if (ctx.cr6.eq) goto loc_82357D94;
	// bl 0x8234a268
	ctx.lr = 0x82357C00;
	sub_8234A268(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,10248
	ctx.r10.s64 = ctx.r11.s64 + 10248;
	// b 0x82357d88
	goto loc_82357D88;
loc_82357C0C:
	// cmplwi cr6,r4,308
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 308, ctx.xer);
	// bge cr6,0x82357c18
	if (!ctx.cr6.lt) goto loc_82357C18;
	// li r4,308
	ctx.r4.s64 = 308;
loc_82357C18:
	// stw r4,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r4.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// li r6,1567
	ctx.r6.s64 = 1567;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82357C34;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82357c4c
	if (!ctx.cr6.eq) goto loc_82357C4C;
loc_82357C40:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82357C4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234a268
	ctx.lr = 0x82357C54;
	sub_8234A268(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,8784
	ctx.r10.s64 = ctx.r11.s64 + 8784;
	// b 0x82357d88
	goto loc_82357D88;
loc_82357C60:
	// cmplwi cr6,r4,1224
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1224, ctx.xer);
	// bge cr6,0x82357c6c
	if (!ctx.cr6.lt) goto loc_82357C6C;
	// li r4,1224
	ctx.r4.s64 = 1224;
loc_82357C6C:
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82357c7c
	if (!ctx.cr6.eq) goto loc_82357C7C;
	// lis r7,48
	ctx.r7.s64 = 3145728;
loc_82357C7C:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1706
	ctx.r6.s64 = 1706;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82357C90;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357c40
	if (ctx.cr6.eq) goto loc_82357C40;
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82357cb0
	if (!ctx.cr6.eq) goto loc_82357CB0;
	// bl 0x82357780
	ctx.lr = 0x82357CAC;
	sub_82357780(ctx, base);
	// b 0x82357d8c
	goto loc_82357D8C;
loc_82357CB0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82357cc4
	if (!ctx.cr6.eq) goto loc_82357CC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357870
	ctx.lr = 0x82357CC0;
	sub_82357870(ctx, base);
	// b 0x82357d8c
	goto loc_82357D8C;
loc_82357CC4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82357cd8
	if (!ctx.cr6.eq) goto loc_82357CD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357960
	ctx.lr = 0x82357CD4;
	sub_82357960(ctx, base);
	// b 0x82357d8c
	goto loc_82357D8C;
loc_82357CD8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82357cec
	if (!ctx.cr6.eq) goto loc_82357CEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357960
	ctx.lr = 0x82357CE8;
	sub_82357960(ctx, base);
	// b 0x82357d8c
	goto loc_82357D8C;
loc_82357CEC:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82357d00
	if (!ctx.cr6.eq) goto loc_82357D00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357a50
	ctx.lr = 0x82357CFC;
	sub_82357A50(ctx, base);
	// b 0x82357d8c
	goto loc_82357D8C;
loc_82357D00:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82357D0C:
	// cmplwi cr6,r4,464
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 464, ctx.xer);
	// bge cr6,0x82357d18
	if (!ctx.cr6.lt) goto loc_82357D18;
	// li r4,464
	ctx.r4.s64 = 464;
loc_82357D18:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1784
	ctx.r6.s64 = 1784;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82357D30;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357c40
	if (ctx.cr6.eq) goto loc_82357C40;
	// bl 0x8235f4c8
	ctx.lr = 0x82357D40;
	sub_8235F4C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,10032
	ctx.r10.s64 = ctx.r11.s64 + 10032;
	// b 0x82357d88
	goto loc_82357D88;
loc_82357D4C:
	// cmplwi cr6,r4,368
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 368, ctx.xer);
	// bge cr6,0x82357d58
	if (!ctx.cr6.lt) goto loc_82357D58;
	// li r4,368
	ctx.r4.s64 = 368;
loc_82357D58:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1827
	ctx.r6.s64 = 1827;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82357D70;
	sub_82330E40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357c40
	if (ctx.cr6.eq) goto loc_82357C40;
	// bl 0x8234a268
	ctx.lr = 0x82357D80;
	sub_8234A268(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,10128
	ctx.r10.s64 = ctx.r11.s64 + 10128;
loc_82357D88:
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82357D8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82357da8
	if (!ctx.cr6.eq) goto loc_82357DA8;
loc_82357D94:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82357DA8:
	// lwz r11,700(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 700);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82357DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357dfc
	if (ctx.cr6.eq) goto loc_82357DFC;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1860
	ctx.r6.s64 = 1860;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82357DF0;
	sub_82330D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82357DFC:
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82357e50
	if (ctx.cr6.eq) goto loc_82357E50;
	// stw r31,28(r31)
	REX_STORE_U32(r31.u32 + 28, r31.u32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82357E1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357e50
	if (ctx.cr6.eq) goto loc_82357E50;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1911
	ctx.r6.s64 = 1911;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82357E44;
	sub_82330D00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82357E50:
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82357E60:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8236F6C0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x8236f814
	if (ctx.cr6.gt) goto loc_8236F814;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236f728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236F728;
	// bdzf 4*cr6+eq,0x8236f768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236F768;
	// bdzf 4*cr6+eq,0x8236f7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236F7A8;
	// bne cr6,0x8236f7e8
	if (!ctx.cr6.eq) goto loc_8236F7E8;
	// lfs f0,312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,312(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236F714;
	sub_826A0568(ctx, base);
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
loc_8236F728:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r9,12268
	ctx.r4.s64 = ctx.r9.s64 + 12268;
	// lfs f0,3820(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3820);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236F754;
	sub_826A0568(ctx, base);
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
loc_8236F768:
	// lwz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r4,r9,28480
	ctx.r4.s64 = ctx.r9.s64 + 28480;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r5,328(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// bl 0x826a0568
	ctx.lr = 0x8236F794;
	sub_826A0568(ctx, base);
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
loc_8236F7A8:
	// lfs f0,320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,12268
	ctx.r4.s64 = ctx.r9.s64 + 12268;
	// lfs f0,3820(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236F7D4;
	sub_826A0568(ctx, base);
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
loc_8236F7E8:
	// lfs f0,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r9,12268
	ctx.r4.s64 = ctx.r9.s64 + 12268;
	// lfs f0,3820(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236F814;
	sub_826A0568(ctx, base);
loc_8236F814:
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

DEFINE_REX_FUNC(sub_8237DC68) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8237dc78
	if (!ctx.cr6.eq) goto loc_8237DC78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8237DC78:
	// b 0x8237d908
	sub_8237D908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8237F1A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8237F1A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11676(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11676);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237f1e8
	if (!ctx.cr6.gt) goto loc_8237F1E8;
	// li r30,0
	r30.s64 = 0;
loc_8237F1C4:
	// lwz r11,11700(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11700);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8237e900
	ctx.lr = 0x8237F1D4;
	sub_8237E900(ctx, base);
	// lwz r11,11676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11676);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237f1c4
	if (ctx.cr6.lt) goto loc_8237F1C4;
loc_8237F1E8:
	// addi r29,r31,384
	r29.s64 = r31.s64 + 384;
	// li r30,16
	r30.s64 = 16;
loc_8237F1F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8237d420
	ctx.lr = 0x8237F1F8;
	sub_8237D420(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,704
	r29.s64 = r29.s64 + 704;
	// bne 0x8237f1f0
	if (!ctx.cr0.eq) goto loc_8237F1F0;
	// lwz r10,11668(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11668);
	// lfs f0,11708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 11708);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,11660(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11660);
	// lfs f13,11664(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 11664);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,11708(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 11708, temp.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,11668(r31)
	REX_STORE_U32(r31.u32 + 11668, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82387BD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82387BE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,116
	ctx.r5.s64 = 116;
	// addi r28,r31,14864
	r28.s64 = r31.s64 + 14864;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82387BFC;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,19632
	ctx.r11.s64 = ctx.r11.s64 + 19632;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,1794
	ctx.r9.s64 = 1794;
	// stw r11,14864(r31)
	REX_STORE_U32(r31.u32 + 14864, ctx.r11.u32);
	// lis r29,-32200
	r29.s64 = -2110259200;
	// stw r10,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// lis r30,-32200
	r30.s64 = -2110259200;
	// stw r9,12(r28)
	REX_STORE_U32(r28.u32 + 12, ctx.r9.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r29,31680
	ctx.r10.s64 = r29.s64 + 31680;
	// addi r9,r30,19344
	ctx.r9.s64 = r30.s64 + 19344;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lis r3,-32195
	ctx.r3.s64 = -2109931520;
	// stw r10,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r10.u32);
	// lis r31,-32200
	r31.s64 = -2110259200;
	// stw r9,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r9.u32);
	// lis r4,-32200
	ctx.r4.s64 = -2110259200;
	// addi r10,r3,-29712
	ctx.r10.s64 = ctx.r3.s64 + -29712;
	// addi r11,r31,20480
	ctx.r11.s64 = r31.s64 + 20480;
	// addi r9,r4,19368
	ctx.r9.s64 = ctx.r4.s64 + 19368;
	// stw r10,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r10.u32);
	// lis r5,-32195
	ctx.r5.s64 = -2109931520;
	// stw r11,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r11.u32);
	// lis r6,-32195
	ctx.r6.s64 = -2109931520;
	// stw r9,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r9.u32);
	// lis r7,-32195
	ctx.r7.s64 = -2109931520;
	// addi r11,r5,-29600
	ctx.r11.s64 = ctx.r5.s64 + -29600;
	// addi r10,r6,-29504
	ctx.r10.s64 = ctx.r6.s64 + -29504;
	// addi r9,r7,-29456
	ctx.r9.s64 = ctx.r7.s64 + -29456;
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// stw r10,92(r28)
	REX_STORE_U32(r28.u32 + 92, ctx.r10.u32);
	// stw r9,96(r28)
	REX_STORE_U32(r28.u32 + 96, ctx.r9.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r8,-29352
	ctx.r11.s64 = ctx.r8.s64 + -29352;
	// li r9,16004
	ctx.r9.s64 = 16004;
	// stw r10,64(r28)
	REX_STORE_U32(r28.u32 + 64, ctx.r10.u32);
	// stw r11,100(r28)
	REX_STORE_U32(r28.u32 + 100, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,68(r28)
	REX_STORE_U32(r28.u32 + 68, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82390CF8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82390d08
	if (!ctx.cr6.eq) goto loc_82390D08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82390D08:
	// b 0x82390a00
	sub_82390A00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82390DA8) {
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
	ctx.lr = 0x82390DB0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// lwz r21,260(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// lwz r22,4348(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 4348);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82390f10
	if (ctx.cr6.eq) goto loc_82390F10;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82390f10
	if (ctx.cr6.gt) goto loc_82390F10;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3584
	ctx.r12.s64 = ctx.r12.s64 + 3584;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82390E70;
	case 1:
		goto loc_82390E30;
	case 2:
		goto loc_82390E38;
	case 3:
		goto loc_82390E40;
	case 4:
		goto loc_82390E48;
	case 5:
		goto loc_82390E48;
	case 6:
		goto loc_82390E70;
	case 7:
		goto loc_82390E70;
	case 8:
		goto loc_82390E70;
	case 9:
		goto loc_82390E70;
	case 10:
		goto loc_82390E70;
	case 11:
		goto loc_82390E70;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82390E30:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82390e4c
	goto loc_82390E4C;
loc_82390E38:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82390e4c
	goto loc_82390E4C;
loc_82390E40:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82390e4c
	goto loc_82390E4C;
loc_82390E48:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82390E4C:
	// li r10,0
	ctx.r10.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r10,r20,3,29
	ctx.r10.u64 = (__builtin_rotateleft64(r20.u64, 3) & 0x7FFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFF800000007);
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 ? ctx.r10.u64 / ctx.r11.u64 : 0;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x82390f14
	goto loc_82390F14;
loc_82390E70:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3720
	ctx.r12.s64 = ctx.r12.s64 + 3720;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82390F00;
	case 1:
		goto loc_82390F10;
	case 2:
		goto loc_82390F10;
	case 3:
		goto loc_82390F10;
	case 4:
		goto loc_82390F10;
	case 5:
		goto loc_82390F10;
	case 6:
		goto loc_82390EB8;
	case 7:
		goto loc_82390ECC;
	case 8:
		goto loc_82390EE4;
	case 9:
		goto loc_82390EF8;
	case 10:
		goto loc_82390EF8;
	case 11:
		goto loc_82390EF8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82390EB8:
	// mulli r11,r20,14
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(14));
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x82390f14
	goto loc_82390F14;
loc_82390ECC:
	// rlwinm r11,r20,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,36
	ctx.r10.s64 = 36;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x82390f14
	goto loc_82390F14;
loc_82390EE4:
	// mulli r11,r20,28
	ctx.r11.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(28));
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x82390f14
	goto loc_82390F14;
loc_82390EF8:
	// mr r26,r20
	r26.u64 = r20.u64;
	// b 0x82390f14
	goto loc_82390F14;
loc_82390F00:
	// li r11,0
	ctx.r11.s64 = 0;
	// twllei r21,0
	if (r21.s32 == 0 || r21.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r26,r11,r21
	r26.u64 = uint32_t(r21.u32 ? ctx.r11.u32 / r21.u32 : 0);
	// b 0x82390f14
	goto loc_82390F14;
loc_82390F10:
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82390F14:
	// lbz r11,2164(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 2164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391130
	if (ctx.cr6.eq) goto loc_82391130;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2144(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 2144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82391130
	if (ctx.cr6.eq) goto loc_82391130;
	// lwz r28,1252(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 1252);
	// li r29,0
	r29.s64 = 0;
	// mr r25,r19
	r25.u64 = r19.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8239112c
	if (ctx.cr6.eq) goto loc_8239112C;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r23,14
	r23.s64 = 14;
	// li r24,28
	r24.s64 = 28;
loc_82390F54:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82390f7c
	if (!ctx.cr6.eq) goto loc_82390F7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823908d0
	ctx.lr = 0x82390F68;
	sub_823908D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82391140
	if (!ctx.cr6.eq) goto loc_82391140;
	// lwz r11,1256(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1256);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x82390f80
	goto loc_82390F80;
loc_82390F7C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82390F80:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// ble cr6,0x82390f90
	if (!ctx.cr6.gt) goto loc_82390F90;
	// subf r11,r29,r26
	ctx.r11.u64 = r26.u64 - r29.u64;
loc_82390F90:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x82390F9C;
	sub_8233E7E0(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82390fe4
	if (ctx.cr6.eq) goto loc_82390FE4;
	// lwz r3,524(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 524);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r8,1264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1264);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82390FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82391148
	if (!ctx.cr6.eq) goto loc_82391148;
	// lwz r11,1264(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1264);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1264(r27)
	REX_STORE_U32(r27.u32 + 1264, ctx.r11.u32);
loc_82390FE4:
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x8239110c
	if (ctx.cr6.gt) goto loc_8239110C;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4108
	ctx.r12.s64 = ctx.r12.s64 + 4108;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82391070;
	case 1:
		goto loc_8239103C;
	case 2:
		goto loc_82391044;
	case 3:
		goto loc_8239104C;
	case 4:
		goto loc_82391054;
	case 5:
		goto loc_82391054;
	case 6:
		goto loc_82391070;
	case 7:
		goto loc_82391070;
	case 8:
		goto loc_82391070;
	case 9:
		goto loc_82391070;
	case 10:
		goto loc_82391070;
	case 11:
		goto loc_82391070;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8239103C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82391058
	goto loc_82391058;
loc_82391044:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82391058
	goto loc_82391058;
loc_8239104C:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82391058
	goto loc_82391058;
loc_82391054:
	// li r11,32
	ctx.r11.s64 = 32;
loc_82391058:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// mulld r7,r9,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * ctx.r8.u64);
	// rldicl r6,r7,61,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// b 0x82391108
	goto loc_82391108;
loc_82391070:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4232
	ctx.r12.s64 = ctx.r12.s64 + 4232;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82391104;
	case 1:
		goto loc_8239110C;
	case 2:
		goto loc_8239110C;
	case 3:
		goto loc_8239110C;
	case 4:
		goto loc_8239110C;
	case 5:
		goto loc_8239110C;
	case 6:
		goto loc_823910B8;
	case 7:
		goto loc_823910CC;
	case 8:
		goto loc_823910E8;
	case 9:
		goto loc_823910FC;
	case 10:
		goto loc_823910FC;
	case 11:
		goto loc_823910FC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823910B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,13
	ctx.r10.s64 = ctx.r11.s64 + 13;
	// divwu r9,r10,r23
	ctx.r9.u64 = uint32_t(r23.u32 ? ctx.r10.u32 / r23.u32 : 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82391108
	goto loc_82391108;
loc_823910CC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,63
	ctx.r10.s64 = ctx.r11.s64 + 63;
	// rlwinm r11,r10,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82391108
	goto loc_82391108;
loc_823910E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,27
	ctx.r10.s64 = ctx.r11.s64 + 27;
	// divwu r9,r10,r24
	ctx.r9.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82391108
	goto loc_82391108;
loc_823910FC:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8239110c
	goto loc_8239110C;
loc_82391104:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82391108:
	// mullw r30,r11,r21
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
loc_8239110C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x82391114;
	sub_8233E820(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// blt cr6,0x82390f54
	if (ctx.cr6.lt) goto loc_82390F54;
loc_8239112C:
	// stw r28,1252(r27)
	REX_STORE_U32(r27.u32 + 1252, r28.u32);
loc_82391130:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8239113c
	if (ctx.cr6.eq) goto loc_8239113C;
	// stw r20,0(r18)
	REX_STORE_U32(r18.u32 + 0, r20.u32);
loc_8239113C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82391140:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
loc_82391148:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8233e820
	ctx.lr = 0x82391150;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_823AB238) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823ab324
	if (ctx.cr6.gt) goto loc_823AB324;
	// bl 0x823aabd8
	ctx.lr = 0x823AB268;
	sub_823AABD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ab328
	if (!ctx.cr6.eq) goto loc_823AB328;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ab324
	if (!ctx.cr6.eq) goto loc_823AB324;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,22444
	ctx.r4.s64 = ctx.r11.s64 + 22444;
	// bl 0x823aade0
	ctx.lr = 0x823AB294;
	sub_823AADE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ab328
	if (!ctx.cr6.eq) goto loc_823AB328;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r11,24980
	ctx.r4.s64 = ctx.r11.s64 + 24980;
	// bl 0x823aade0
	ctx.lr = 0x823AB2B0;
	sub_823AADE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ab328
	if (!ctx.cr6.eq) goto loc_823AB328;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823ab2d0
	if (!ctx.cr6.eq) goto loc_823AB2D0;
	// li r31,0
	r31.s64 = 0;
loc_823AB2D0:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823ab324
	if (ctx.cr6.eq) goto loc_823AB324;
loc_823AB2DC:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823ab300
	if (!ctx.cr6.eq) goto loc_823AB300;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823aade0
	ctx.lr = 0x823AB2F8;
	sub_823AADE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ab328
	if (!ctx.cr6.eq) goto loc_823AB328;
loc_823AB300:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823ab314
	if (!ctx.cr6.eq) goto loc_823AB314;
	// li r31,0
	r31.s64 = 0;
loc_823AB314:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ab2dc
	if (!ctx.cr6.eq) goto loc_823AB2DC;
loc_823AB324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB328:
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

DEFINE_REX_FUNC(sub_823B73E0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x823B73E8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2c9c
	ctx.lr = 0x823B73F0;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x823b9c4c
	if (ctx.cr6.gt) goto loc_823B9C4C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823b7dc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B7DC4;
	// bdzf 4*cr6+eq,0x823b8800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B8800;
	// bdzf 4*cr6+eq,0x823b8bdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823B8BDC;
	// bne cr6,0x823b9600
	if (!ctx.cr6.eq) goto loc_823B9600;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b78b8
	if (!ctx.cr6.eq) goto loc_823B78B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f9,8620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f10,5020(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,15200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32280);
	ctx.f12.f64 = double(temp.f32);
	// beq 0x823b77bc
	if (ctx.cr0.eq) goto loc_823B77BC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B7458:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// ld r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r30,-1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// extsb r6,r31
	ctx.r6.s64 = r31.s8;
	// std r11,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r11.u64);
	// lfd f8,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// std r6,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r6.u64);
	// lfd f7,-224(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// std r9,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r9.u64);
	// extsb r9,r30
	ctx.r9.s64 = r30.s8;
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// lfd f6,-200(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// std r9,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r9.u64);
	// lfd f5,-184(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lfd f4,-168(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lbz r31,-1(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// fcfid f8,f5
	ctx.f8.f64 = double(ctx.f5.s64);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// fcfid f7,f4
	ctx.f7.f64 = double(ctx.f4.s64);
	// std r6,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r6.u64);
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// fcfid f1,f6
	ctx.f1.f64 = double(ctx.f6.s64);
	// lfd f6,-152(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f4,f2
	ctx.f4.f64 = double(float(ctx.f2.f64));
	// extsb r6,r31
	ctx.r6.s64 = r31.s8;
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// std r6,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r6.u64);
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// std r9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lfd f1,-192(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lfd f8,-208(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fsubs f31,f5,f4
	f31.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmadds f30,f4,f11,f3
	f30.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f3.f64)));
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f29,f5,f10,f2
	f29.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f2.f64)));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmsubs f3,f31,f9,f3
	ctx.f3.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, -ctx.f3.f64)));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fnmsubs f31,f29,f13,f30
	f31.f64 = double(float(-std::fma(f29.f64, ctx.f13.f64, -f30.f64)));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f3,f2,f7,f31
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, f31.f64)));
	// fmadds f2,f3,f7,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmadds f7,f2,f7,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f5.f64)));
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r30,-1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// std r9,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r9.u64);
	// lfd f4,-232(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// std r6,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r6.u64);
	// lfd f3,-160(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// extsb r6,r31
	ctx.r6.s64 = r31.s8;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r6,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.r6.u64);
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// extsb r31,r30
	r31.s64 = r30.s8;
	// std r9,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r9.u64);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// std r6,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r6.u64);
	// lfd f30,-248(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// std r11,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r11.u64);
	// lfd f31,-176(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// std r31,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, r31.u64);
	// fcfid f8,f3
	ctx.f8.f64 = double(ctx.f3.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// lfd f4,-256(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// lfd f3,-216(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lbz r29,0(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// lbz r31,2(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fcfid f30,f30
	f30.f64 = double(f30.s64);
	// fsubs f29,f5,f2
	f29.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fmadds f28,f2,f11,f1
	f28.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f1.f64)));
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f27,f5,f10,f8
	f27.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f8.f64)));
	// frsp f30,f30
	f30.f64 = double(float(f30.f64));
	// fmsubs f1,f29,f9,f1
	ctx.f1.f64 = double(float(std::fma(f29.f64, ctx.f9.f64, -ctx.f1.f64)));
	// lfd f29,-240(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f29,f29
	f29.f64 = double(f29.s64);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fnmsubs f28,f27,f13,f28
	f28.f64 = double(float(-std::fma(f27.f64, ctx.f13.f64, -f28.f64)));
	// fmuls f30,f30,f0
	f30.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fadds f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// fsubs f8,f4,f31
	ctx.f8.f64 = double(float(ctx.f4.f64 - f31.f64));
	// frsp f29,f29
	f29.f64 = double(float(f29.f64));
	// fmadds f27,f31,f11,f3
	f27.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, ctx.f3.f64)));
	// fmadds f26,f4,f10,f30
	f26.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, f30.f64)));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmsubs f8,f8,f9,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f3.f64)));
	// fmuls f29,f29,f12
	f29.f64 = double(float(f29.f64 * ctx.f12.f64));
	// fnmsubs f27,f26,f13,f27
	f27.f64 = double(float(-std::fma(f26.f64, ctx.f13.f64, -f27.f64)));
	// fmadds f1,f1,f6,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, f28.f64)));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// fmadds f2,f1,f6,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmuls f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f8,f2,f6,f5
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f5.f64)));
	// fsubs f5,f31,f3
	ctx.f5.f64 = double(float(f31.f64 - ctx.f3.f64));
	// fmadds f6,f1,f29,f27
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f27.f64)));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r31,r31
	r31.s64 = r31.s8;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// fmadds f2,f6,f29,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, f29.f64, ctx.f3.f64)));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r31,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, r31.u64);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// std r11,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r11.u64);
	// lfd f5,-296(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// std r29,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, r29.u64);
	// lfd f31,-288(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfd f6,-272(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// lfd f5,-280(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r30,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, r30.u64);
	// fmadds f4,f2,f29,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, f29.f64, ctx.f4.f64)));
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// frsp f7,f31
	ctx.f7.f64 = double(float(f31.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfd f1,-264(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// fmadds f8,f3,f10,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f4.f64)));
	// fsubs f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fmsubs f7,f7,f9,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f6.f64)));
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f5,f2,f11,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f6.f64)));
	// fsubs f2,f2,f6
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// fadds f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fnmsubs f6,f8,f13,f5
	ctx.f6.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fmuls f5,f2,f13
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f8,f2,f1,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, ctx.f6.f64)));
	// fmadds f7,f8,f1,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f5.f64)));
	// fmadds f6,f7,f1,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, ctx.f3.f64)));
	// stfs f6,12(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b7458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B7458;
loc_823B77BC:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823B77D0:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// lfd f8,-288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lbz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,-1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// std r11,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r11.u64);
	// lfd f2,-296(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r9,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r9.u64);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// lfd f8,-272(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// std r3,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r3.u64);
	// std r11,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r11.u64);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// lfd f4,-280(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f7,f2
	ctx.f7.f64 = double(ctx.f2.s64);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lfd f4,-264(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f8,f6,f4
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmadds f7,f4,f11,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f3.f64)));
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f6,f10,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f2.f64)));
	// fmsubs f3,f8,f9,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f3.f64)));
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fnmsubs f1,f1,f13,f7
	ctx.f1.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fadds f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f3,f4,f5,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f2,f3,f5,f8
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, ctx.f8.f64)));
	// fmadds f1,f2,f5,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f6.f64)));
	// stfsu f1,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r9,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// bdnz 0x823b77d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B77D0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B78B4;
	// b 0x826a1cf8
	return;
loc_823B78B8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f9,8620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,5020(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,15200(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 15200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,32280(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32280);
	ctx.f8.f64 = double(temp.f32);
loc_823B78F4:
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r3,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r3.u64);
	// lfd f13,-288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f6,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// blt cr6,0x823b7cb4
	if (ctx.cr6.lt) goto loc_823B7CB4;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B7928:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// addi r31,r6,-1
	r31.s64 = ctx.r6.s64 + -1;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// lbzx r31,r30,r5
	r31.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lbzx r30,r30,r5
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// std r30,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, r30.u64);
	// lfd f5,-296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lbzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// extsb r31,r31
	r31.s64 = r31.s8;
	// std r3,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r3.u64);
	// lfd f1,-264(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r31,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, r31.u64);
	// lfd f7,-280(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lbzx r3,r6,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f7,f6
	ctx.f7.f64 = double(float(ctx.f6.f64));
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// fcfid f6,f1
	ctx.f6.f64 = double(ctx.f1.s64);
	// std r3,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r3.u64);
	// lfd f3,-272(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// frsp f4,f2
	ctx.f4.f64 = double(float(ctx.f2.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f5,f3,f11,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f1.f64)));
	// fsubs f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsubs f3,f6,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// fmadds f2,f6,f10,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmsubs f3,f3,f9,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fnmsubs f2,f2,f12,f5
	ctx.f2.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f5.f64)));
	// fadds f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fmuls f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmadds f5,f7,f13,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f4,f5,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,-1
	r31.s64 = ctx.r6.s64 + -1;
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lbz r31,1(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r3,1(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// extsb r31,r31
	r31.s64 = r31.s8;
	// std r3,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r3.u64);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// std r31,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, r31.u64);
	// addi r31,r6,2
	r31.s64 = ctx.r6.s64 + 2;
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// lfd f1,-248(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// fcfid f6,f1
	ctx.f6.f64 = double(ctx.f1.s64);
	// lfd f2,-240(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f7,f2
	ctx.f7.f64 = double(ctx.f2.s64);
	// add r31,r6,r5
	r31.u64 = ctx.r6.u64 + ctx.r5.u64;
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r3,1(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 1);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// std r3,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r3.u64);
	// lbz r6,1(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// std r3,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// lfd f1,-176(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// lfd f6,-216(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// fmadds f6,f2,f10,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f1.f64)));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fmadds f7,f5,f11,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f3.f64)));
	// fsubs f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fmsubs f4,f4,f9,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, -ctx.f3.f64)));
	// fnmsubs f3,f6,f12,f7
	ctx.f3.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmuls f7,f5,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f6,f4,f1
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f4,f5,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f3,f4,f13,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f2,f3,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r6,2
	ctx.r3.s64 = ctx.r6.s64 + 2;
	// add r30,r31,r5
	r30.u64 = r31.u64 + ctx.r5.u64;
	// addi r29,r6,1
	r29.s64 = ctx.r6.s64 + 1;
	// mullw r31,r6,r9
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lbz r30,2(r30)
	r30.u64 = REX_LOAD_U8(r30.u32 + 2);
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r29,r9
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// std r30,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r30.u64);
	// lfd f1,-256(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r3,2(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r31,2(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 2);
	// extsb r31,r31
	r31.s64 = r31.s8;
	// std r31,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, r31.u64);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// lbz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// std r3,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r3.u64);
	// lfd f6,-160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f5,-232(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// lfd f3,-192(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f7,f5,f11,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f6.f64)));
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsubs f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmsubs f3,f2,f9,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, -ctx.f6.f64)));
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f5,f4,f10,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f6.f64)));
	// fadds f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fnmsubs f2,f5,f12,f7
	ctx.f2.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmuls f7,f3,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f6,f7,f13,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f5,f6,f13,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f4,f5,f13,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f4,12(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// addi r30,r6,1
	r30.s64 = ctx.r6.s64 + 1;
	// mullw r31,r6,r9
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r29,r6,2
	r29.s64 = ctx.r6.s64 + 2;
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r30,r9
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r31,3(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 3);
	// lbz r3,3(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r6,3(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// extsb r31,r31
	r31.s64 = r31.s8;
	// std r6,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r6.u64);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// lfd f3,-208(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r31.u64);
	// lfd f2,-152(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// std r3,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r3.u64);
	// lfd f7,-168(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r6,3(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 3);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// fcfid f6,f2
	ctx.f6.f64 = double(ctx.f2.s64);
	// std r3,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r3.u64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// lfd f3,-184(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f7,f3
	ctx.f7.f64 = double(ctx.f3.s64);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f1,f5,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmadds f6,f4,f11,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f2.f64)));
	// fsubs f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fmsubs f3,f1,f9,f2
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f2.f64)));
	// fmadds f2,f5,f10,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fadds f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fnmsubs f6,f2,f12,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f6.f64)));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f2,f3,f13,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f1,f2,f13,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f5.f64)));
	// stfs f1,16(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823b7928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B7928;
loc_823B7CB4:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b7da0
	if (!ctx.cr6.lt) goto loc_823B7DA0;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B7CC4:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r30,r6,2
	r30.s64 = ctx.r6.s64 + 2;
	// addi r29,r6,-1
	r29.s64 = ctx.r6.s64 + -1;
	// mullw r6,r30,r9
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lbzx r31,r31,r5
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r5.u32);
	// lbzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// extsb r31,r31
	r31.s64 = r31.s8;
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// std r31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, r31.u64);
	// lfd f4,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// add r30,r6,r11
	r30.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r3,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r3.u64);
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// lbzx r30,r30,r5
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r5.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// extsb r3,r30
	ctx.r3.s64 = r30.s8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r3,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r3.u64);
	// lfd f7,-200(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lbzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// lfd f5,-224(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// extsb r3,r6
	ctx.r3.s64 = ctx.r6.s8;
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// std r3,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r3.u64);
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfd f3,-304(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// fmadds f7,f4,f10,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f5.f64)));
	// fsubs f6,f4,f2
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmsubs f6,f6,f9,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fmadds f3,f2,f11,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f1.f64)));
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fadds f1,f6,f5
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fnmsubs f7,f7,f12,f3
	ctx.f7.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f3.f64)));
	// fmuls f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f5,f1,f12
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmadds f3,f5,f13,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f2,f3,f13,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f1,f2,f13,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfsu f1,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b7cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B7CC4;
loc_823B7DA0:
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b78f4
	if (!ctx.cr0.eq) goto loc_823B78F4;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B7DC0;
	// b 0x826a1cf8
	return;
loc_823B7DC4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b82a4
	if (!ctx.cr6.eq) goto loc_823B82A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f0,15504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,5020(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,32280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32280);
	ctx.f12.f64 = double(temp.f32);
	// beq 0x823b8194
	if (ctx.cr0.eq) goto loc_823B8194;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B7E08:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// std r9,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r9.u64);
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r30,2(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r11,-2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// extsh r30,r30
	r30.s64 = r30.s16;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// extsh r11,r31
	ctx.r11.s64 = r31.s16;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r11,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r11.u64);
	// lfd f1,-296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// std r9,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r9.u64);
	// lfd f6,-288(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// std r30,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, r30.u64);
	// lfd f8,-304(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f8,f1
	ctx.f8.f64 = double(ctx.f1.s64);
	// std r6,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r6.u64);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r6,-2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// lfd f7,-272(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// lfd f4,-280(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// lfd f4,-264(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fcfid f5,f4
	ctx.f5.f64 = double(ctx.f4.s64);
	// fsubs f4,f2,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// fmadds f31,f8,f11,f1
	f31.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f3,f2,f10,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f7.f64)));
	// std r6,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r6.u64);
	// fsubs f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// std r6,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r6.u64);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// fmsubs f4,f4,f9,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, -ctx.f1.f64)));
	// lfd f1,-240(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// fadds f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fnmsubs f3,f3,f13,f31
	ctx.f3.f64 = double(float(-std::fma(ctx.f3.f64, ctx.f13.f64, -f31.f64)));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f3,f7,f6,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f3.f64)));
	// fmadds f1,f3,f6,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f8.f64)));
	// fmadds f8,f1,f6,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f2.f64)));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lfd f7,-248(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// std r6,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// std r9,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.r9.u64);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfd f6,-176(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// std r31,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, r31.u64);
	// lhzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// lhz r31,2(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lfd f2,-256(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// lhz r11,-2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lfd f30,-232(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// std r9,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r9.u64);
	// lfd f29,-192(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f30,f30
	f30.f64 = double(f30.s64);
	// fcfid f29,f29
	f29.f64 = double(f29.s64);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcfid f7,f2
	ctx.f7.f64 = double(ctx.f2.s64);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r6,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r6.u64);
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r6.u64);
	// lfd f27,-208(r1)
	f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r9,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// lfd f2,-160(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfd f6,-216(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fsubs f31,f3,f1
	f31.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmadds f28,f1,f11,f4
	f28.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f4.f64)));
	// fcfid f27,f27
	f27.f64 = double(f27.s64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// fsubs f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// fmsubs f4,f31,f9,f4
	ctx.f4.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, -ctx.f4.f64)));
	// lhzx r31,r9,r5
	r31.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// frsp f31,f30
	f31.f64 = double(float(f30.f64));
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// frsp f30,f29
	f30.f64 = double(float(f29.f64));
	// frsp f29,f27
	f29.f64 = double(float(f27.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmadds f27,f3,f10,f7
	f27.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f7.f64)));
	// fadds f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fmuls f4,f31,f12
	ctx.f4.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f31,f30,f0
	f31.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fmuls f30,f29,f0
	f30.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fnmsubs f29,f27,f13,f28
	f29.f64 = double(float(-std::fma(f27.f64, ctx.f13.f64, -f28.f64)));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmadds f7,f7,f5,f29
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, f29.f64)));
	// fmadds f1,f7,f5,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f7,f1,f5,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f5.f64, ctx.f3.f64)));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f5,f31,f30
	ctx.f5.f64 = double(float(f31.f64 - f30.f64));
	// fmadds f1,f30,f11,f2
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, ctx.f2.f64)));
	// fsubs f6,f30,f2
	ctx.f6.f64 = double(float(f30.f64 - ctx.f2.f64));
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lhz r30,2(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fmsubs f5,f5,f9,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f2.f64)));
	// std r31,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r31.u64);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lhz r30,-2(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// fmadds f2,f31,f10,f3
	ctx.f2.f64 = double(float(std::fma(f31.f64, ctx.f10.f64, ctx.f3.f64)));
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f30,f30
	f30.f64 = double(f30.s64);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r31,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r31.u64);
	// extsh r31,r30
	r31.s64 = r30.s16;
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// std r31,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, r31.u64);
	// lfd f29,-168(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// fcfid f29,f29
	f29.f64 = double(f29.s64);
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fnmsubs f3,f2,f13,f1
	ctx.f3.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f13.f64, -ctx.f1.f64)));
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lfd f2,-184(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// frsp f8,f29
	ctx.f8.f64 = double(float(f29.f64));
	// frsp f30,f30
	f30.f64 = double(float(f30.f64));
	// std r9,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r9.u64);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f5,f5,f4,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f3.f64)));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfd f8,-224(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fmuls f2,f30,f0
	ctx.f2.f64 = double(float(f30.f64 * ctx.f0.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfd f1,-200(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fmadds f6,f5,f4,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f6.f64)));
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f5,f2,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmadds f6,f6,f4,f31
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f4.f64, f31.f64)));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fmadds f29,f3,f11,f7
	f29.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmsubs f5,f5,f9,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f7.f64)));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fsubs f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f30,f2,f10,f1
	f30.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f1.f64)));
	// fadds f6,f5,f1
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fnmsubs f4,f30,f13,f29
	ctx.f4.f64 = double(float(-std::fma(f30.f64, ctx.f13.f64, -f29.f64)));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f4,f5,f8,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f4.f64)));
	// fmadds f3,f4,f8,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f7.f64)));
	// fmadds f2,f3,f8,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b7e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B7E08;
loc_823B8194:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823B81A8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r6,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r6.u64);
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r9,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r5.u32);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lhzx r4,r3,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lhz r11,-2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// std r9,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r9.u64);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// std r6,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r6.u64);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// lfd f4,-280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// std r11,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r11.u64);
	// lfd f1,-296(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// std r9,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r9.u64);
	// lfd f8,-304(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// lfd f6,-288(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fcfid f8,f1
	ctx.f8.f64 = double(ctx.f1.s64);
	// frsp f4,f3
	ctx.f4.f64 = double(float(ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// lfd f7,-272(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f2,f7,f11,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f5.f64)));
	// fmuls f4,f1,f12
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fsubs f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fmadds f1,f8,f10,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmsubs f5,f3,f9,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fnmsubs f3,f1,f13,f2
	ctx.f3.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f13.f64, -ctx.f2.f64)));
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f6,f7,f4,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmadds f5,f6,f4,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f4.f64, ctx.f2.f64)));
	// fmadds f4,f5,f4,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f8.f64)));
	// stfsu f4,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// bdnz 0x823b81a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B81A8;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B82A0;
	// b 0x826a1cf8
	return;
loc_823B82A4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f0,15504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8620(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,3720(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,5020(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32280(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32280);
	ctx.f8.f64 = double(temp.f32);
loc_823B82E0:
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r3,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r3.u64);
	// lfd f13,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f6,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// blt cr6,0x823b86e0
	if (ctx.cr6.lt) goto loc_823B86E0;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B8314:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// mullw r31,r3,r9
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r6,2
	r29.s64 = ctx.r6.s64 + 2;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r6,r30,r9
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// rlwinm r30,r6,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// std r3,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r3.u64);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// std r31,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, r31.u64);
	// lfd f7,-288(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lhzx r31,r30,r5
	r31.u64 = REX_LOAD_U16(r30.u32 + ctx.r5.u32);
	// lfd f5,-280(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// std r31,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, r31.u64);
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// std r6,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r6.u64);
	// lfd f7,-272(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f3,-296(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fcfid f6,f3
	ctx.f6.f64 = double(ctx.f3.s64);
	// fmuls f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fsubs f7,f4,f3
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmsubs f2,f7,f9,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f6.f64)));
	// fmadds f1,f3,f11,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f7,f4,f10,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f5.f64)));
	// fsubs f6,f3,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fadds f5,f2,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fnmsubs f3,f7,f12,f1
	ctx.f3.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f7,f1,f13,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f6,f7,f13,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f5,f6,f13,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mullw r31,r6,r9
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r6,2
	r30.s64 = ctx.r6.s64 + 2;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// std r3,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r3.u64);
	// lfd f4,-264(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// std r31,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, r31.u64);
	// mullw r3,r30,r9
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// lfd f7,-240(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// std r6,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r6.u64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lfd f4,-248(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// std r3,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// lfd f7,-176(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fsubs f6,f3,f2
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f5,f2,f11,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f4,f2,f1
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fmsubs f1,f6,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fmadds f2,f3,f10,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmuls f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fadds f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// fnmsubs f5,f2,f12,f5
	ctx.f5.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f12.f64, -ctx.f5.f64)));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f1,f2,f13,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f7,f1,f13,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f6,f7,f13,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r31,r6,r9
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r30,r6,1
	r30.s64 = ctx.r6.s64 + 1;
	// addi r29,r3,2
	r29.s64 = ctx.r3.s64 + 2;
	// mullw r3,r30,r9
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// std r31,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, r31.u64);
	// rlwinm r31,r29,1,0,30
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f5,-216(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// std r31,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r31.u64);
	// lfd f4,-256(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// std r3,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r3.u64);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// addi r3,r6,2
	ctx.r3.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r6,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lfd f4,-160(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// std r3,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r3.u64);
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f7,f6,f1
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fmadds f4,f1,f11,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f5.f64)));
	// fsubs f3,f1,f5
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fmsubs f2,f7,f9,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f5.f64)));
	// lfd f7,-232(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f5,f6,f10,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f7.f64)));
	// fadds f3,f2,f7
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fnmsubs f2,f5,f12,f4
	ctx.f2.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f12.f64, -ctx.f4.f64)));
	// fmuls f7,f3,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f5,f7,f13,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f4,f5,f13,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r6,2
	ctx.r3.s64 = ctx.r6.s64 + 2;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// addi r29,r6,1
	r29.s64 = ctx.r6.s64 + 1;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r31,r3,r11
	r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r3,r31,3
	ctx.r3.s64 = r31.s64 + 3;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// rlwinm r31,r3,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r3,r30,r9
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// std r6,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r6.u64);
	// lfd f2,-192(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// std r31,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r31.u64);
	// lfd f1,-208(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// addi r30,r3,3
	r30.s64 = ctx.r3.s64 + 3;
	// mullw r3,r29,r9
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r6,r30,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// fcfid f7,f2
	ctx.f7.f64 = double(ctx.f2.s64);
	// fcfid f6,f1
	ctx.f6.f64 = double(ctx.f1.s64);
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// std r3,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r3.u64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// lfd f7,-168(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f1,-152(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fcfid f6,f1
	ctx.f6.f64 = double(ctx.f1.s64);
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f1,f3,f10,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f2.f64)));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f5,f3,f7
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fmadds f4,f7,f11,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f6.f64)));
	// fsubs f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmsubs f6,f5,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f6.f64)));
	// fnmsubs f5,f1,f12,f4
	ctx.f5.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f12.f64, -ctx.f4.f64)));
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fadds f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f7,f1,f13,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmadds f6,f7,f13,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f5,f6,f13,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfs f5,16(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823b8314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8314;
loc_823B86E0:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b87dc
	if (!ctx.cr6.lt) goto loc_823B87DC;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B86F0:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r6,2
	r29.s64 = ctx.r6.s64 + 2;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r6,r30,r9
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lhzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + ctx.r5.u32);
	// lhzx r31,r31,r5
	r31.u64 = REX_LOAD_U16(r31.u32 + ctx.r5.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r30,r6,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// extsh r3,r31
	ctx.r3.s64 = r31.s16;
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// lfd f7,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// std r3,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r3.u64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lhzx r3,r30,r5
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + ctx.r5.u32);
	// lfd f6,-200(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// std r3,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r3.u64);
	// lfd f1,-224(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// std r6,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r6.u64);
	// lfd f5,-144(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// fsubs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmsubs f2,f1,f9,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmadds f1,f4,f11,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f5.f64)));
	// fsubs f7,f4,f5
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f5,f6,f10,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f3.f64)));
	// fadds f4,f2,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fmuls f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fnmsubs f2,f5,f12,f1
	ctx.f2.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f7,f1,f13,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f5,f7,f13,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f4,f5,f13,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfsu f4,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b86f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B86F0;
loc_823B87DC:
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b82e0
	if (!ctx.cr0.eq) goto loc_823B82E0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B87FC;
	// b 0x826a1cf8
	return;
loc_823B8800:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b89c8
	if (!ctx.cr6.eq) goto loc_823B89C8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lfs f0,22436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,5020(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,32280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32280);
	ctx.f12.f64 = double(temp.f32);
loc_823B8848:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r3,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r3.u64);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r4,-1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r31,-2(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | r31.u64;
	// lbz r29,1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r31,4(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r30,r30,8
	r30.u64 = __builtin_rotateleft32(r30.u32, 8);
	// or r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 | r29.u64;
	// lbz r29,0(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | r31.u64;
	// lbz r31,-3(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -3);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// or r30,r30,r28
	r30.u64 = r30.u64 | r28.u64;
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// lfd f8,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// or r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 | r31.u64;
	// rlwinm r31,r30,8,0,23
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// or r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 | r29.u64;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r31,r10
	ctx.r4.u64 = r31.u64 | ctx.r10.u64;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r4,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// srawi r3,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 8;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// std r3,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r3.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r11.u64);
	// lfd f1,-272(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// std r10,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r10.u64);
	// lfd f3,-296(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// lfd f6,-288(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfd f5,-280(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f7,f6
	ctx.f7.f64 = double(ctx.f6.s64);
	// fcfid f8,f5
	ctx.f8.f64 = double(ctx.f5.s64);
	// fcfid f6,f1
	ctx.f6.f64 = double(ctx.f1.s64);
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f3,f6,f11,f8
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f2,f5,f10,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f7.f64)));
	// fsubs f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fsubs f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fnmsubs f3,f2,f13,f3
	ctx.f3.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f13.f64, -ctx.f3.f64)));
	// fmsubs f2,f1,f9,f8
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f8.f64)));
	// fadds f8,f2,f7
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f6,f7,f4,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, ctx.f3.f64)));
	// fmadds f3,f6,f4,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f4.f64, ctx.f1.f64)));
	// fmadds f2,f3,f4,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f4.f64, ctx.f5.f64)));
	// stfsu f2,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// bdnz 0x823b8848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8848;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B89C4;
	// b 0x826a1cf8
	return;
loc_823B89C8:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// addi r27,r3,-4
	r27.s64 = ctx.r3.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f0,22436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,5020(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32280);
	ctx.f8.f64 = double(temp.f32);
loc_823B8A04:
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r6,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r6.u64);
	// lfd f13,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f6,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// ble cr6,0x823b8bb8
	if (!ctx.cr6.gt) goto loc_823B8BB8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823B8A2C:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r10,r9
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r30,r6,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r3,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r31,1,0,30
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r31,r31,r5
	r31.u64 = r31.u64 + ctx.r5.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r30,2(r6)
	r30.u64 = REX_LOAD_U8(ctx.r6.u32 + 2);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lbz r29,2(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r28,2(r31)
	r28.u64 = REX_LOAD_U8(r31.u32 + 2);
	// lbz r26,1(r6)
	r26.u64 = REX_LOAD_U8(ctx.r6.u32 + 1);
	// lbz r25,1(r3)
	r25.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r24,1(r31)
	r24.u64 = REX_LOAD_U8(r31.u32 + 1);
	// lbz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r31,0(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r30,r30,8
	r30.u64 = __builtin_rotateleft32(r30.u32, 8);
	// rotlwi r29,r29,8
	r29.u64 = __builtin_rotateleft32(r29.u32, 8);
	// rotlwi r28,r28,8
	r28.u64 = __builtin_rotateleft32(r28.u32, 8);
	// or r30,r30,r26
	r30.u64 = r30.u64 | r26.u64;
	// or r29,r29,r25
	r29.u64 = r29.u64 | r25.u64;
	// or r28,r28,r24
	r28.u64 = r28.u64 | r24.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r29,8,0,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r28,r28,8,0,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r30,r6
	r30.u64 = r30.u64 | ctx.r6.u64;
	// or r3,r29,r3
	ctx.r3.u64 = r29.u64 | ctx.r3.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r31,r28,r31
	r31.u64 = r28.u64 | r31.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r3,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r31,r31,8,0,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r6,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r6.s64 = r30.s32 >> 8;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r3,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r3.u64);
	// lfd f4,-296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// std r31,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, r31.u64);
	// lfd f5,-280(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// lfd f7,-288(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lbz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// lbz r31,1(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// rotlwi r3,r3,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// or r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 | r31.u64;
	// rlwinm r6,r3,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 | ctx.r10.u64;
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// frsp f6,f2
	ctx.f6.f64 = double(float(ctx.f2.f64));
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r3.u64);
	// lfd f2,-272(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsubs f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fmadds f6,f4,f11,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f5.f64)));
	// fsubs f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fmsubs f1,f7,f9,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmuls f7,f4,f12
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f4,f3,f10,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fadds f2,f1,f5
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fnmsubs f1,f4,f12,f6
	ctx.f1.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f12.f64, -ctx.f6.f64)));
	// fmuls f6,f2,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f5,f6,f13,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f4,f5,f13,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f3,f4,f13,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f3.f64)));
	// stfsu f3,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// bdnz 0x823b8a2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8A2C;
loc_823B8BB8:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b8a04
	if (!ctx.cr0.eq) goto loc_823B8A04;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B8BD8;
	// b 0x826a1cf8
	return;
loc_823B8BDC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b90a4
	if (!ctx.cr6.eq) goto loc_823B90A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f0,32304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f13,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,5020(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,32280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32280);
	ctx.f12.f64 = double(temp.f32);
	// beq 0x823b8fa0
	if (ctx.cr0.eq) goto loc_823B8FA0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B8C20:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r9.u64);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwzx r31,r31,r5
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// extsw r30,r30
	r30.s64 = r30.s32;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// std r6,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r6.u64);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r30,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, r30.u64);
	// lfd f5,-280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// std r11,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r11.u64);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f8,-304(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfd f6,-288(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f2,-296(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f8,-272(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// std r6,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r6.u64);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// std r31,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, r31.u64);
	// std r6,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r6.u64);
	// lfd f6,-264(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfd f3,-240(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfd f5,-248(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fsubs f31,f8,f7
	f31.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f30,f7,f11,f4
	f30.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f4.f64)));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fmadds f29,f8,f10,f2
	f29.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f2.f64)));
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmsubs f4,f31,f9,f4
	ctx.f4.f64 = double(float(std::fma(f31.f64, ctx.f9.f64, -ctx.f4.f64)));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fnmsubs f31,f29,f13,f30
	f31.f64 = double(float(-std::fma(f29.f64, ctx.f13.f64, -f30.f64)));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f4,f4,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f4,f6,f1,f31
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, f31.f64)));
	// fmadds f7,f4,f1,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f7.f64)));
	// fmadds f6,f7,f1,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f1.f64, ctx.f8.f64)));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r6,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r6.u64);
	// lfd f4,-176(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// lwzx r6,r9,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r6,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.r6.u64);
	// std r11,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r11.u64);
	// lfd f31,-256(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// std r9,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// lfd f8,-216(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// lwzx r9,r31,r5
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// std r6,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r6.u64);
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfd f30,-160(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f30,f30
	f30.f64 = double(f30.s64);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// std r11,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r11.u64);
	// fsubs f4,f2,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// lfd f29,-232(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f29,f29
	f29.f64 = double(f29.s64);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// frsp f31,f31
	f31.f64 = double(float(f31.f64));
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r6,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r6.u64);
	// lfd f27,-208(r1)
	f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// frsp f30,f30
	f30.f64 = double(float(f30.f64));
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f1,f8,f11,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f5.f64)));
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmsubs f5,f4,f9,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fcfid f4,f27
	ctx.f4.f64 = double(f27.s64);
	// fmadds f27,f2,f10,f7
	f27.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f7.f64)));
	// lfd f28,-192(r1)
	f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f28,f28
	f28.f64 = double(f28.s64);
	// frsp f29,f29
	f29.f64 = double(float(f29.f64));
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// frsp f5,f4
	ctx.f5.f64 = double(float(ctx.f4.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fnmsubs f4,f27,f13,f1
	ctx.f4.f64 = double(float(-std::fma(f27.f64, ctx.f13.f64, -ctx.f1.f64)));
	// fmuls f1,f31,f12
	ctx.f1.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f31,f30,f0
	f31.f64 = double(float(f30.f64 * ctx.f0.f64));
	// frsp f28,f28
	f28.f64 = double(float(f28.f64));
	// fmuls f30,f29,f0
	f30.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f29,f28,f0
	f29.f64 = double(float(f28.f64 * ctx.f0.f64));
	// fsubs f28,f31,f30
	f28.f64 = double(float(f31.f64 - f30.f64));
	// fmadds f4,f7,f3,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f3.f64, ctx.f4.f64)));
	// fmadds f26,f31,f10,f5
	f26.f64 = double(float(std::fma(f31.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f27,f30,f11,f29
	f27.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, f29.f64)));
	// fmsubs f7,f28,f9,f29
	ctx.f7.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, -f29.f64)));
	// fmadds f4,f4,f3,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f8.f64)));
	// fsubs f30,f30,f29
	f30.f64 = double(float(f30.f64 - f29.f64));
	// fnmsubs f29,f26,f13,f27
	f29.f64 = double(float(-std::fma(f26.f64, ctx.f13.f64, -f27.f64)));
	// fadds f8,f7,f5
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fmadds f7,f4,f3,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f3.f64, ctx.f2.f64)));
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmadds f4,f5,f1,f29
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, f29.f64)));
	// fmadds f3,f4,f1,f30
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, f30.f64)));
	// fmadds f2,f3,f1,f31
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, f31.f64)));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// extsw r30,r6
	r30.s64 = ctx.r6.s32;
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// std r30,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, r30.u64);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwzx r31,r31,r5
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// std r10,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// std r11,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r11.u64);
	// std r10,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r10.u64);
	// lfd f6,-184(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// lfd f3,-200(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// std r9,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r9.u64);
	// frsp f6,f4
	ctx.f6.f64 = double(float(ctx.f4.f64));
	// lfd f7,-168(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lfd f1,-152(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f8,f1
	ctx.f8.f64 = double(ctx.f1.s64);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfd f8,-224(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// fsubs f6,f2,f3
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmadds f5,f3,f11,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f1.f64)));
	// frsp f8,f7
	ctx.f8.f64 = double(float(ctx.f7.f64));
	// fsubs f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmadds f7,f2,f10,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmsubs f1,f6,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f1.f64)));
	// fmuls f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fnmsubs f7,f7,f13,f5
	ctx.f7.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f5.f64)));
	// fadds f5,f1,f4
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f3,f4,f8,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f7.f64)));
	// fmadds f1,f3,f8,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f6.f64)));
	// fmadds f8,f1,f8,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f8,12(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b8c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8C20;
loc_823B8FA0:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823B8FB4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r6,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r6.u64);
	// lfd f8,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// lwzx r4,r9,r5
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// lwzx r6,r3,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// std r11,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r11.u64);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r9,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r9.u64);
	// lfd f2,-296(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// std r4,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r4.u64);
	// lfd f6,-288(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f4,-280(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fmuls f5,f4,f12
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfd f8,-272(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f8,f4,f3
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f6,f3,f2
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmadds f7,f3,f11,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f2.f64)));
	// fmadds f3,f4,f10,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f1.f64)));
	// fmsubs f2,f8,f9,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, -ctx.f2.f64)));
	// fmuls f8,f6,f13
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fnmsubs f7,f3,f13,f7
	ctx.f7.f64 = double(float(-std::fma(ctx.f3.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fadds f6,f2,f1
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f2,f3,f5,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, ctx.f7.f64)));
	// fmadds f1,f2,f5,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f8.f64)));
	// fmadds f8,f1,f5,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f5.f64, ctx.f4.f64)));
	// stfsu f8,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r3,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// bdnz 0x823b8fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B8FB4;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B90A0;
	// b 0x826a1cf8
	return;
loc_823B90A4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f0,32304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8620(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8620);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,3720(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,5020(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,3804(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 3804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,32280(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 32280);
	ctx.f8.f64 = double(temp.f32);
loc_823B90E0:
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r3,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r3.u64);
	// lfd f13,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f6,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// blt cr6,0x823b94e0
	if (ctx.cr6.lt) goto loc_823B94E0;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B9114:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// addi r29,r6,2
	r29.s64 = ctx.r6.s64 + 2;
	// mullw r6,r30,r9
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// lwzx r31,r31,r5
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r3,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r3.u64);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r31,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, r31.u64);
	// rlwinm r30,r6,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r30,r5
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r5.u32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// std r3,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r3.u64);
	// lfd f1,-296(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// lfd f7,-288(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lwzx r3,r6,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lfd f6,-280(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// std r6,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.r6.u64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// lfd f5,-272(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fsubs f1,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmsubs f2,f1,f9,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmadds f1,f4,f11,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f11.f64, ctx.f5.f64)));
	// fsubs f7,f4,f5
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f5,f6,f10,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f3.f64)));
	// fadds f4,f2,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fmuls f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fnmsubs f2,f5,f12,f1
	ctx.f2.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmuls f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f7,f1,f13,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f5,f7,f13,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f4,f5,f13,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r31,r6,-1
	r31.s64 = ctx.r6.s64 + -1;
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwzx r31,r31,r5
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// std r31,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, r31.u64);
	// lfd f3,-264(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r3.u64);
	// lfd f7,-240(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// addi r31,r6,2
	r31.s64 = ctx.r6.s64 + 2;
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// std r3,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.r3.u64);
	// lfd f2,-248(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// std r3,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfd f7,-176(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fmadds f4,f1,f11,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f3.f64)));
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fsubs f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f2,f1,f3
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fmsubs f5,f5,f9,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f3.f64)));
	// fmadds f1,f6,f10,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmuls f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fnmsubs f2,f1,f12,f4
	ctx.f2.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f12.f64, -ctx.f4.f64)));
	// fadds f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmadds f5,f7,f13,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f4,f5,f13,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r30,r30,r9
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lwzx r31,r31,r5
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// lwzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// std r3,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r3.u64);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// lfd f2,-216(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// addi r3,r30,2
	ctx.r3.s64 = r30.s64 + 2;
	// std r31,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, r31.u64);
	// lfd f1,-256(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -256);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r3,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r3,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r3.u64);
	// lfd f6,-160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// fcfid f7,f2
	ctx.f7.f64 = double(ctx.f2.s64);
	// std r3,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r3.u64);
	// fcfid f5,f1
	ctx.f5.f64 = double(ctx.f1.s64);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f6,f2,f0
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfd f4,-232(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fsubs f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// fmadds f1,f6,f11,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f5.f64)));
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmsubs f5,f3,f9,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, -ctx.f5.f64)));
	// frsp f4,f2
	ctx.f4.f64 = double(float(ctx.f2.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f6,f7,f10,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f2.f64)));
	// fadds f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fnmsubs f4,f6,f12,f1
	ctx.f4.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f1,f2,f13,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f4.f64)));
	// fmadds f6,f1,f13,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f5,f6,f13,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f5,12(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r29,r6,2
	r29.s64 = ctx.r6.s64 + 2;
	// mullw r6,r31,r9
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r30,r9
	r31.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r30,r3,3
	r30.s64 = ctx.r3.s64 + 3;
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// mullw r3,r29,r9
	ctx.r3.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// lwzx r31,r31,r5
	r31.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// std r6,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r6.u64);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lfd f2,-208(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// extsw r6,r31
	ctx.r6.s64 = r31.s32;
	// fcfid f7,f2
	ctx.f7.f64 = double(ctx.f2.s64);
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// std r6,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r6.u64);
	// lfd f6,-152(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r5
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// std r3,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r3.u64);
	// lfd f4,-192(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lfd f4,-168(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// frsp f6,f3
	ctx.f6.f64 = double(float(ctx.f3.f64));
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fsubs f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fmadds f7,f5,f11,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f4.f64)));
	// fmadds f6,f2,f10,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f10.f64, ctx.f3.f64)));
	// fsubs f5,f5,f4
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmsubs f4,f1,f9,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f4.f64)));
	// fnmsubs f1,f6,f12,f7
	ctx.f1.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f7.f64)));
	// fmuls f7,f5,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f6,f4,f3
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f4,f5,f13,f1
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f3,f4,f13,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f2,f3,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823b9114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B9114;
loc_823B94E0:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b95dc
	if (!ctx.cr6.lt) goto loc_823B95DC;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B94F0:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,-1
	r31.s64 = ctx.r6.s64 + -1;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// addi r30,r6,2
	r30.s64 = ctx.r6.s64 + 2;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r31,r29,r5
	r31.u64 = REX_LOAD_U32(r29.u32 + ctx.r5.u32);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// lfd f6,-200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r3,r30,r9
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lwzx r6,r29,r5
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + ctx.r5.u32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// std r6,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r6.u64);
	// extsw r31,r31
	r31.s64 = r31.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r31,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, r31.u64);
	// lfd f7,-184(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// lwzx r6,r3,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// lfd f1,-224(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// fcfid f7,f1
	ctx.f7.f64 = double(ctx.f1.s64);
	// std r3,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r3.u64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// lfd f5,-144(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// fsubs f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// fmsubs f2,f1,f9,f5
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f5.f64)));
	// fmadds f1,f6,f11,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f5.f64)));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmadds f6,f4,f10,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, ctx.f3.f64)));
	// fadds f5,f2,f3
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fmuls f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fnmsubs f2,f6,f12,f1
	ctx.f2.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f1.f64)));
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f7,f1,f13,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f6,f7,f13,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64)));
	// fmadds f5,f6,f13,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f4.f64)));
	// stfsu f5,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b94f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B94F0;
loc_823B95DC:
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b90e0
	if (!ctx.cr0.eq) goto loc_823B90E0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B95FC;
	// b 0x826a1cf8
	return;
loc_823B9600:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823b98e4
	if (!ctx.cr6.eq) goto loc_823B98E4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f10,8620(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8620);
	ctx.f10.f64 = double(temp.f32);
	// srawi. r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,5020(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 5020);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3804(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3804);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32280);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x823b9840
	if (ctx.cr0.eq) goto loc_823B9840;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823B963C:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// lwz r30,4(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r30,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, r30.u64);
	// lfs f9,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f5,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// addi r30,r11,2
	r30.s64 = ctx.r11.s64 + 2;
	// lfsx f3,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// add r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lfd f2,-304(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f1,f6,f10,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, -ctx.f7.f64)));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r6,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r6.u64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// lfd f6,-288(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmadds f30,f9,f11,f5
	f30.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f5.f64)));
	// lfs f29,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	f29.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f7.f64)));
	// lfsx f27,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	f27.f64 = double(temp.f32);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// fsubs f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// fsubs f28,f3,f31
	f28.f64 = double(float(ctx.f3.f64 - f31.f64));
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fadds f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fnmsubs f1,f30,f0,f4
	ctx.f1.f64 = double(float(-std::fma(f30.f64, ctx.f0.f64, -ctx.f4.f64)));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f4,f28,f10,f29
	ctx.f4.f64 = double(float(std::fma(f28.f64, ctx.f10.f64, -f29.f64)));
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// std r6,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r6.u64);
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r6,r31,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f26,f31,f12,f29
	f26.f64 = double(float(std::fma(f31.f64, ctx.f12.f64, f29.f64)));
	// fmadds f25,f3,f11,f27
	f25.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, f27.f64)));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fsubs f7,f31,f29
	ctx.f7.f64 = double(float(f31.f64 - f29.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f30,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	f30.f64 = double(temp.f32);
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// lfs f29,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfsx f28,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	f28.f64 = double(temp.f32);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// fadds f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 + f27.f64));
	// fnmsubs f31,f25,f0,f26
	f31.f64 = double(float(-std::fma(f25.f64, ctx.f0.f64, -f26.f64)));
	// lfd f26,-280(r1)
	f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f26,f26
	f26.f64 = double(f26.s64);
	// fmadds f1,f5,f2,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f2.f64, ctx.f1.f64)));
	// lfsx f5,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f26,f26
	f26.f64 = double(float(f26.f64));
	// fmadds f27,f5,f11,f28
	f27.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, f28.f64)));
	// fmadds f1,f1,f2,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f2.f64, ctx.f8.f64)));
	// fmadds f8,f29,f12,f30
	ctx.f8.f64 = double(float(std::fma(f29.f64, ctx.f12.f64, f30.f64)));
	// fmadds f2,f1,f2,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f1.f64, ctx.f2.f64, ctx.f9.f64)));
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f9,f26,f13
	ctx.f9.f64 = double(float(f26.f64 * ctx.f13.f64));
	// fmadds f6,f4,f1,f31
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, f31.f64)));
	// fmadds f4,f6,f1,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, ctx.f7.f64)));
	// fmadds f3,f4,f1,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f3.f64)));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f1,f5,f29
	ctx.f1.f64 = double(float(ctx.f5.f64 - f29.f64));
	// fsubs f7,f29,f30
	ctx.f7.f64 = double(float(f29.f64 - f30.f64));
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// fnmsubs f6,f27,f0,f8
	ctx.f6.f64 = double(float(-std::fma(f27.f64, ctx.f0.f64, -ctx.f8.f64)));
	// fmsubs f4,f1,f10,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, -f30.f64)));
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + f28.f64));
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r6,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.r6.u64);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfsx f8,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f30,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	f30.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f31,f8,f7
	f31.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfsx f29,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	f29.f64 = double(temp.f32);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmsubs f3,f31,f10,f30
	ctx.f3.f64 = double(float(std::fma(f31.f64, ctx.f10.f64, -f30.f64)));
	// lfd f31,-296(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// fmadds f6,f4,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f6.f64)));
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f28,f7,f12,f30
	f28.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, f30.f64)));
	// fmadds f27,f8,f11,f29
	f27.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, f29.f64)));
	// fsubs f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 - f30.f64));
	// fadds f4,f3,f29
	ctx.f4.f64 = double(float(ctx.f3.f64 + f29.f64));
	// fmadds f1,f6,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f1.f64)));
	// frsp f3,f31
	ctx.f3.f64 = double(float(f31.f64));
	// fnmsubs f2,f27,f0,f28
	ctx.f2.f64 = double(float(-std::fma(f27.f64, ctx.f0.f64, -f28.f64)));
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f6,f4,f0
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f4,f3,f13
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f3,f1,f9,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f2,f6,f4,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f4.f64, ctx.f2.f64)));
	// fmadds f1,f2,f4,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f4.f64, ctx.f7.f64)));
	// fmadds f9,f1,f4,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f4.f64, ctx.f8.f64)));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x823b963c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B963C;
loc_823B9840:
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_823B9854:
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// std r3,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r3.u64);
	// lfd f8,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// lfsx f9,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// lfs f3,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f6,f12,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f3.f64)));
	// fsubs f7,f6,f3
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// lfsx f2,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f8,f9,f11,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f2.f64)));
	// fmuls f6,f5,f13
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmsubs f5,f4,f10,f3
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f10.f64, -ctx.f3.f64)));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fnmsubs f4,f8,f0,f1
	ctx.f4.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f0.f64, -ctx.f1.f64)));
	// fadds f2,f5,f2
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f8,f1,f6,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f4.f64)));
	// fmadds f7,f8,f6,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f6.f64, ctx.f3.f64)));
	// fmadds f6,f7,f6,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f9.f64)));
	// stfsu f6,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// bdnz 0x823b9854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B9854;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B98E0;
	// b 0x826a1cf8
	return;
loc_823B98E4:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823b9c4c
	if (ctx.cr6.eq) goto loc_823B9C4C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lfs f10,8620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8620);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,3720(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,5020(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5020);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,3804(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3804);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,32280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32280);
	ctx.f9.f64 = double(temp.f32);
loc_823B9918:
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// std r3,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r3.u64);
	// lfd f0,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f0,f7,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// blt cr6,0x823b9b98
	if (ctx.cr6.lt) goto loc_823B9B98;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B994C:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// addi r29,r6,2
	r29.s64 = ctx.r6.s64 + 2;
	// mullw r6,r30,r9
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lfsx f8,r3,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f4,f6,f10,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmadds f3,f7,f12,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f5.f64)));
	// lfsx f2,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fmadds f7,f8,f11,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f2.f64)));
	// fadds f6,f4,f2
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fnmsubs f4,f7,f13,f3
	ctx.f4.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f3.f64)));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f1,f2,f0,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmadds f8,f1,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r3,r30,r9
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lfsx f6,r29,r5
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f7,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lfsx f4,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsubs f3,f5,f10,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, -ctx.f4.f64)));
	// fsubs f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmadds f2,f7,f12,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f4.f64)));
	// lfsx f8,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f6,f11,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f8.f64)));
	// fadds f5,f3,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fnmsubs f4,f7,f13,f2
	ctx.f4.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f2.f64)));
	// fmuls f3,f1,f13
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmadds f1,f2,f0,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f8,f1,f0,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f7,f8,f0,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mullw r31,r6,r9
	r31.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// lfsx f5,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r6,2
	r31.s64 = ctx.r6.s64 + 2;
	// mullw r6,r3,r9
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mullw r3,r31,r9
	ctx.r3.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// addi r31,r6,2
	r31.s64 = ctx.r6.s64 + 2;
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmadds f2,f4,f12,f6
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f6.f64)));
	// lfsx f1,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f4,f6
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fmadds f7,f5,f11,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmsubs f6,f3,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -ctx.f6.f64)));
	// fmuls f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fnmsubs f3,f7,f13,f2
	ctx.f3.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f2.f64)));
	// fadds f2,f6,f1
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f8,f1,f0,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f7,f8,f0,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f6,f7,f0,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfs f6,12(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r3,r30,r9
	ctx.r3.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lfsx f4,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f5,r29,r5
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// lfsx f2,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f1,f3,f10,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -ctx.f2.f64)));
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f8,f4,f12,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f2.f64)));
	// fsubs f7,f4,f2
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// lfsx f6,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f5,f11,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f6.f64)));
	// fadds f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// fmuls f2,f7,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fnmsubs f1,f4,f13,f8
	ctx.f1.f64 = double(float(-std::fma(ctx.f4.f64, ctx.f13.f64, -ctx.f8.f64)));
	// fmuls f8,f3,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f7,f8,f0,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f1.f64)));
	// fmadds f6,f7,f0,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f2.f64)));
	// fmadds f5,f6,f0,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfs f5,16(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x823b994c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B994C;
loc_823B9B98:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b9c34
	if (!ctx.cr6.lt) goto loc_823B9C34;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823B9BA8:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r6,1
	r31.s64 = ctx.r6.s64 + 1;
	// mullw r3,r6,r9
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,-1
	r30.s64 = ctx.r6.s64 + -1;
	// addi r29,r6,2
	r29.s64 = ctx.r6.s64 + 2;
	// mullw r6,r30,r9
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// lfsx f8,r3,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f5,r3,r5
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f4,f6,f10,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, -ctx.f5.f64)));
	// fmadds f3,f7,f12,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f5.f64)));
	// lfsx f2,r6,r5
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fmadds f7,f8,f11,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f2.f64)));
	// fadds f6,f4,f2
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fmuls f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fnmsubs f4,f7,f13,f3
	ctx.f4.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f3.f64)));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f1,f2,f0,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f5.f64)));
	// fmadds f8,f1,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfsu f8,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823b9ba8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B9BA8;
loc_823B9C34:
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// bne 0x823b9918
	if (!ctx.cr0.eq) goto loc_823B9918;
loc_823B9C4C:
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ce8
	ctx.lr = 0x823B9C54;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824EA368) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824EA370;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824ea2d8
	ctx.lr = 0x824EA38C;
	sub_824EA2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824ea39c
	if (ctx.cr0.eq) goto loc_824EA39C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824ea488
	goto loc_824EA488;
loc_824EA39C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824ea3d4
	if (!ctx.cr6.lt) goto loc_824EA3D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,71
	ctx.r10.s64 = 71;
	// lis r9,87
	ctx.r9.s64 = 5701632;
	// li r8,341
	ctx.r8.s64 = 341;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// b 0x824ea47c
	goto loc_824EA47C;
loc_824EA3D4:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824ea444
	if (!ctx.cr6.lt) goto loc_824EA444;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824EA3F8:
	// lwz r9,160(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 160);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824ea438
	if (ctx.cr0.eq) goto loc_824EA438;
	// li r7,23
	ctx.r7.s64 = 23;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// rlwimi r9,r7,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r7,r10,35
	ctx.r7.s64 = ctx.r10.s64 + 35;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r7,r9,18,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824EA438:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x824ea3f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824EA3F8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824EA444:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824ea484
	if (ctx.cr6.eq) goto loc_824EA484;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,71
	ctx.r10.s64 = 71;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// li r8,341
	ctx.r8.s64 = 341;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ori r10,r7,34
	ctx.r10.u64 = ctx.r7.u64 | 34;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_824EA47C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824EA484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824EA488:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824EFCE0) {
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
	ctx.lr = 0x824EFCE8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-26736
	r26.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824efd30
	if (!ctx.cr6.eq) goto loc_824EFD30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2860
	ctx.r7.s64 = 2860;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFD30;
	sub_824EA978(ctx, base);
loc_824EFD30:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824efd54
	if (!ctx.cr6.eq) goto loc_824EFD54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2861
	ctx.r7.s64 = 2861;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFD54;
	sub_824EA978(ctx, base);
loc_824EFD54:
	// li r4,28
	ctx.r4.s64 = 28;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x824EFD64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824efd88
	if (!ctx.cr0.eq) goto loc_824EFD88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26464
	ctx.r5.s64 = ctx.r11.s64 + -26464;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2867
	ctx.r7.s64 = 2867;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFD88;
	sub_824EA978(ctx, base);
loc_824EFD88:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a2698
	ctx.lr = 0x824EFDAC;
	sub_825A2698(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824efdd0
	if (!ctx.cr0.eq) goto loc_824EFDD0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26300
	ctx.r5.s64 = ctx.r11.s64 + -26300;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,2878
	ctx.r7.s64 = 2878;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFDD0;
	sub_824EA978(ctx, base);
loc_824EFDD0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ef2c0
	ctx.lr = 0x824EFDDC;
	sub_824EF2C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F7378) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824F7380;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// b 0x824f73b0
	goto loc_824F73B0;
loc_824F7394:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r31
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824f7434
	if (!ctx.cr6.eq) goto loc_824F7434;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_824F73B0:
	// cmplwi cr6,r11,132
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 132, ctx.xer);
	// ble cr6,0x824f7394
	if (!ctx.cr6.gt) goto loc_824F7394;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addic. r10,r10,4096
	ctx.xer.ca = ctx.r10.u32 > 4294963199;
	ctx.r10.s64 = ctx.r10.s64 + 4096;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f73e4
	if (ctx.cr0.eq) goto loc_824F73E4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwx r11,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r11.u32);
loc_824F73E4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// bne cr6,0x824f741c
	if (!ctx.cr6.eq) goto loc_824F741C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e45a0
	ctx.lr = 0x824F7400;
	sub_824E45A0(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f7414
	if (ctx.cr6.eq) goto loc_824F7414;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_824F7414:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
loc_824F741C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + r29.u64;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
loc_824F742C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824F7434:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// stwx r9,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// ble cr6,0x824f7464
	if (!ctx.cr6.gt) goto loc_824F7464;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stwx r9,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r9.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_824F7464:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824F7474;
	sub_826A2E60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x824f742c
	goto loc_824F742C;
}

DEFINE_REX_FUNC(sub_825023AC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82502438) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82502440;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82501ee0
	ctx.lr = 0x82502450;
	sub_82501EE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82502464
	if (!ctx.cr0.eq) goto loc_82502464;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 44);
	// bl 0x824e4368
	ctx.lr = 0x82502464;
	sub_824E4368(ctx, base);
loc_82502464:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82502168
	ctx.lr = 0x82502470;
	sub_82502168(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250251c
	if (ctx.cr6.eq) goto loc_8250251C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x825024d0
	if (ctx.cr6.eq) goto loc_825024D0;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82502490:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825024d0
	if (ctx.cr6.eq) goto loc_825024D0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825024c8
	if (ctx.cr6.eq) goto loc_825024C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f75b8
	ctx.lr = 0x825024AC;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825024c8
	if (ctx.cr0.eq) goto loc_825024C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82501b20
	ctx.lr = 0x825024BC;
	sub_82501B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// bl 0x825023b0
	ctx.lr = 0x825024C8;
	sub_825023B0(ctx, base);
loc_825024C8:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82502490
	goto loc_82502490;
loc_825024D0:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_825024D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8250251c
	if (ctx.cr6.eq) goto loc_8250251C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f75b8
	ctx.lr = 0x825024E4;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82502514
	if (ctx.cr0.eq) goto loc_82502514;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x82502514
	if (ctx.cr6.eq) goto loc_82502514;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82501b20
	ctx.lr = 0x82502508;
	sub_82501B20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// bl 0x82502350
	ctx.lr = 0x82502514;
	sub_82502350(ctx, base);
loc_82502514:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x825024d4
	goto loc_825024D4;
loc_8250251C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8250AB00) {
	REX_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8250ab58
	if (ctx.cr6.eq) goto loc_8250AB58;
	// lwz r11,56(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250ab54
	if (!ctx.cr6.eq) goto loc_8250AB54;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8250AB20:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8250ab50
	if (ctx.cr6.eq) goto loc_8250AB50;
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8250ab3c
	if (!ctx.cr6.eq) goto loc_8250AB3C;
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// b 0x8250ab20
	goto loc_8250AB20;
loc_8250AB3C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250ab20
	if (ctx.cr6.eq) goto loc_8250AB20;
	// b 0x8250ab54
	goto loc_8250AB54;
loc_8250AB50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8250AB54:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8250AB58:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250CE40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8250CE48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,66
	ctx.r6.s64 = 66;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x8250CE6C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250ce90
	if (ctx.cr6.eq) goto loc_8250CE90;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8250CE8C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8250CE90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250CE98;
	sub_8250AD28(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82516C38) {
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
	ctx.lr = 0x82516C40;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r28,r11,16,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// rlwinm r22,r10,31,28,31
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// bl 0x82516938
	ctx.lr = 0x82516C64;
	sub_82516938(ctx, base);
	// add r25,r28,r31
	r25.u64 = r28.u64 + r31.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r23,1
	r23.s64 = 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bge cr6,0x82516d00
	if (!ctx.cr6.lt) goto loc_82516D00;
	// li r27,0
	r27.s64 = 0;
loc_82516C84:
	// and. r11,r23,r22
	ctx.r11.u64 = r23.u64 & r22.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82516cf0
	if (ctx.cr0.eq) goto loc_82516CF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825164c0
	ctx.lr = 0x82516C98;
	sub_825164C0(ctx, base);
	// lwz r11,692(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 692);
	// rlwinm r7,r3,1,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r8,192(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 192);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r3,30,3,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// rlwinm r8,r8,18,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// li r10,3
	ctx.r10.s64 = 3;
	// ldx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r10,r10,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r27.u8 & 0x3F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// andc r10,r26,r10
	ctx.r10.u64 = r26.u64 & ~ctx.r10.u64;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// slw r9,r11,r27
	ctx.r9.u64 = r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r27.u8 & 0x3F));
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
	// or r26,r10,r9
	r26.u64 = ctx.r10.u64 | ctx.r9.u64;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
loc_82516CF0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// blt cr6,0x82516c84
	if (ctx.cr6.lt) goto loc_82516C84;
loc_82516D00:
	// lwz r11,192(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 192);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r28,r11,14,22,27
	r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3F0) | (r28.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r4,r28,22
	ctx.r4.u64 = r28.u32 & 0x3FF;
	// bl 0x825b93f8
	ctx.lr = 0x82516D18;
	sub_825B93F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82520480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82520488;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r4,8
	r28.s64 = ctx.r4.s64 + 8;
loc_82520498:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251e368
	ctx.lr = 0x825204A4;
	sub_8251E368(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82520500
	if (ctx.cr6.eq) goto loc_82520500;
	// rlwinm r30,r3,30,2,31
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x82520500
	if (ctx.cr6.eq) goto loc_82520500;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251e728
	ctx.lr = 0x825204CC;
	sub_8251E728(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// li r31,256
	r31.s64 = 256;
	// beq cr6,0x825204dc
	if (ctx.cr6.eq) goto loc_825204DC;
	// rlwinm r31,r3,28,4,31
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
loc_825204DC:
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r4,r30,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r4.u64;
	// bl 0x825180e0
	ctx.lr = 0x825204F4;
	sub_825180E0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(r31.u32, 256, ctx.xer);
	// blt cr6,0x82520498
	if (ctx.cr6.lt) goto loc_82520498;
loc_82520500:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825268B8) {
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
	ctx.lr = 0x825268C0;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x82526ed0
	if (ctx.cr6.gt) goto loc_82526ED0;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-21640
	ctx.r12.s64 = ctx.r12.s64 + -21640;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32174
	ctx.r12.s64 = -2108555264;
	// addi r12,r12,26896
	ctx.r12.s64 = ctx.r12.s64 + 26896;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82526910;
	case 1:
		goto loc_82526910;
	case 2:
		goto loc_82526D2C;
	case 3:
		goto loc_82526D2C;
	case 4:
		goto loc_82526D74;
	case 5:
		goto loc_82526D7C;
	case 6:
		goto loc_82526D84;
	case 7:
		goto loc_82526D8C;
	case 8:
		goto loc_82526E24;
	case 9:
		goto loc_82526E2C;
	case 10:
		goto loc_82526E34;
	case 11:
		goto loc_82526ED0;
	case 12:
		goto loc_82526ED0;
	case 13:
		goto loc_82526ED0;
	case 14:
		goto loc_82526ED0;
	case 15:
		goto loc_82526ED0;
	case 16:
		goto loc_82526ED0;
	case 17:
		goto loc_82526ED0;
	case 18:
		goto loc_82526ED0;
	case 19:
		goto loc_82526ED0;
	case 20:
		goto loc_82526ED0;
	case 21:
		goto loc_82526ED0;
	case 22:
		goto loc_82526ED0;
	case 23:
		goto loc_82526ED0;
	case 24:
		goto loc_82526D94;
	case 25:
		goto loc_82526E0C;
	case 26:
		goto loc_82526E14;
	case 27:
		goto loc_82526E1C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82526910:
	// lwz r20,48(r24)
	r20.u64 = REX_LOAD_U32(r24.u32 + 48);
	// li r18,1
	r18.s64 = 1;
	// lwz r26,44(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lwz r22,28(r24)
	r22.u64 = REX_LOAD_U32(r24.u32 + 28);
	// stb r18,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r18.u8);
	// lwz r16,12(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + 12);
	// lwz r19,12(r26)
	r19.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82526948
	if (ctx.cr6.eq) goto loc_82526948;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252694c
	if (!ctx.cr6.eq) goto loc_8252694C;
loc_82526948:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_8252694C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82526c74
	if (ctx.cr0.eq) goto loc_82526C74;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82526970
	if (ctx.cr6.eq) goto loc_82526970;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82526974
	if (!ctx.cr6.eq) goto loc_82526974;
loc_82526970:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
loc_82526974:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82526c74
	if (!ctx.cr0.eq) goto loc_82526C74;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r8,r8,0,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825269a8
	if (ctx.cr0.eq) goto loc_825269A8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82526c74
	if (!ctx.cr6.eq) goto loc_82526C74;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// andi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u64 & 26;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82526c74
	if (!ctx.cr0.eq) goto loc_82526C74;
loc_825269A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82522e78
	ctx.lr = 0x825269B4;
	sub_82522E78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82526c74
	if (ctx.cr0.eq) goto loc_82526C74;
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825269dc
	if (ctx.cr0.eq) goto loc_825269DC;
	// rlwinm r11,r10,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// b 0x825269e0
	goto loc_825269E0;
loc_825269DC:
	// rlwinm r30,r10,31,28,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
loc_825269E0:
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82526a00
	if (ctx.cr6.eq) goto loc_82526A00;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// beq 0x82526a04
	if (ctx.cr0.eq) goto loc_82526A04;
loc_82526A00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82526A04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82526a50
	if (!ctx.cr0.eq) goto loc_82526A50;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82526a50
	if (!ctx.cr0.eq) goto loc_82526A50;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
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
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82526A4C;
	sub_825BB9C8(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_82526A50:
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82526c34
	if (ctx.cr6.eq) goto loc_82526C34;
	// lbz r27,80(r1)
	r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_82526A60:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// subfic r28,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	r28.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r31,r28,1,0,30
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// srw r11,r9,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// bl 0x8250acc8
	ctx.lr = 0x82526A98;
	sub_8250ACC8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// srw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// clrlwi r31,r9,30
	r31.u64 = ctx.r9.u32 & 0x3;
	// beq 0x82526b4c
	if (ctx.cr0.eq) goto loc_82526B4C;
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82526b4c
	if (!ctx.cr6.eq) goto loc_82526B4C;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// clrlwi r27,r11,31
	r27.u64 = ctx.r11.u32 & 0x1;
	// bl 0x8250ab60
	ctx.lr = 0x82526AD8;
	sub_8250AB60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwimi r11,r18,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8250a620
	ctx.lr = 0x82526AF0;
	sub_8250A620(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// clrlwi r10,r31,27
	ctx.r10.u64 = r31.u32 & 0x1F;
	// rlwimi r11,r31,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// bl 0x82524780
	ctx.lr = 0x82526B28;
	sub_82524780(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r6,r11,0,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250acc8
	ctx.lr = 0x82526B40;
	sub_8250ACC8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// b 0x82526b70
	goto loc_82526B70;
loc_82526B4C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82526B5C;
	sub_8250AC70(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwimi r11,r10,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82526B70:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x82526bf4
	if (!ctx.cr6.eq) goto loc_82526BF4;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r10,r10,0,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82526bd8
	if (ctx.cr0.eq) goto loc_82526BD8;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82526bac
	if (ctx.cr0.eq) goto loc_82526BAC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250a620
	ctx.lr = 0x82526BA8;
	sub_8250A620(ctx, base);
	// b 0x82526bbc
	goto loc_82526BBC;
loc_82526BAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82526BBC:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82524b28
	ctx.lr = 0x82526BD4;
	sub_82524B28(ctx, base);
	// b 0x82526c0c
	goto loc_82526C0C;
loc_82526BD8:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82524a50
	ctx.lr = 0x82526BF0;
	sub_82524A50(ctx, base);
	// b 0x82526c0c
	goto loc_82526C0C;
loc_82526BF4:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82524978
	ctx.lr = 0x82526C0C;
	sub_82524978(ctx, base);
loc_82526C0C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82523e00
	ctx.lr = 0x82526C28;
	sub_82523E00(ctx, base);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82526a60
	if (!ctx.cr6.eq) goto loc_82526A60;
loc_82526C34:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82526e48
	if (ctx.cr6.eq) goto loc_82526E48;
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 0);
	// addi r10,r17,-36
	ctx.r10.s64 = r17.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r17)
	REX_STORE_U32(r17.u32 + 0, ctx.r10.u32);
	// b 0x82526e48
	goto loc_82526E48;
loc_82526C74:
	// cmplw cr6,r19,r16
	ctx.cr6.compare<uint32_t>(r19.u32, r16.u32, ctx.xer);
	// bne cr6,0x82526cfc
	if (!ctx.cr6.eq) goto loc_82526CFC;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82526cac
	if (!ctx.cr0.eq) goto loc_82526CAC;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82526ce8
	if (ctx.cr6.eq) goto loc_82526CE8;
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x82526ce8
	goto loc_82526CE8;
loc_82526CAC:
	// lwz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bne cr6,0x82526cfc
	if (!ctx.cr6.eq) goto loc_82526CFC;
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// andi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u64 & 27;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82526cfc
	if (!ctx.cr0.eq) goto loc_82526CFC;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82526ce4
	if (ctx.cr0.eq) goto loc_82526CE4;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lwz r10,48(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 48);
	// stw r11,48(r24)
	REX_STORE_U32(r24.u32 + 48, ctx.r11.u32);
	// stw r10,44(r24)
	REX_STORE_U32(r24.u32 + 44, ctx.r10.u32);
loc_82526CE4:
	// li r5,57
	ctx.r5.s64 = 57;
loc_82526CE8:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82525d70
	ctx.lr = 0x82526CF8;
	sub_82525D70(ctx, base);
	// b 0x82526e48
	goto loc_82526E48;
loc_82526CFC:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// li r5,33
	ctx.r5.s64 = 33;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x82526d14
	if (ctx.cr6.eq) goto loc_82526D14;
	// li r5,35
	ctx.r5.s64 = 35;
loc_82526D14:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82526D18:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82525f50
	ctx.lr = 0x82526D28;
	sub_82525F50(ctx, base);
	// b 0x82526e48
	goto loc_82526E48;
loc_82526D2C:
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lwz r10,48(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 48);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// addi r5,r9,37
	ctx.r5.s64 = ctx.r9.s64 + 37;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82526d6c
	if (!ctx.cr6.eq) goto loc_82526D6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82526ce8
	if (ctx.cr0.eq) goto loc_82526CE8;
loc_82526D6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82526d18
	goto loc_82526D18;
loc_82526D74:
	// li r5,39
	ctx.r5.s64 = 39;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526D7C:
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526D84:
	// li r5,41
	ctx.r5.s64 = 41;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526D8C:
	// li r5,42
	ctx.r5.s64 = 42;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526D94:
	// lwz r29,48(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 48);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r28,r11,7,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82526df4
	if (ctx.cr0.eq) goto loc_82526DF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfd f31,3728(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
loc_82526DB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r9,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r30.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b82e0
	ctx.lr = 0x82526DDC;
	sub_825B82E0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x82526df4
	if (!ctx.cr6.eq) goto loc_82526DF4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x82526db4
	if (ctx.cr6.lt) goto loc_82526DB4;
loc_82526DF4:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x82526e04
	if (!ctx.cr6.eq) goto loc_82526E04;
	// li r5,71
	ctx.r5.s64 = 71;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526E04:
	// li r5,67
	ctx.r5.s64 = 67;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526E0C:
	// li r5,68
	ctx.r5.s64 = 68;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526E14:
	// li r5,69
	ctx.r5.s64 = 69;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526E1C:
	// li r5,70
	ctx.r5.s64 = 70;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526E24:
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526E2C:
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x82526e38
	goto loc_82526E38;
loc_82526E34:
	// li r5,45
	ctx.r5.s64 = 45;
loc_82526E38:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82525b60
	ctx.lr = 0x82526E48;
	sub_82525B60(ctx, base);
loc_82526E48:
	// lwz r31,4(r17)
	r31.u64 = REX_LOAD_U32(r17.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82526ec4
	if (!ctx.cr0.eq) goto loc_82526EC4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82526ec4
	if (ctx.cr0.eq) goto loc_82526EC4;
loc_82526E5C:
	// rlwinm r30,r31,0,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82526ec4
	if (!ctx.cr0.eq) goto loc_82526EC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82526ec4
	if (ctx.cr6.eq) goto loc_82526EC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825226b0
	ctx.lr = 0x82526E7C;
	sub_825226B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82526e9c
	if (!ctx.cr6.eq) goto loc_82526E9C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82548eb8
	ctx.lr = 0x82526E98;
	sub_82548EB8(ctx, base);
	// b 0x82526ea4
	goto loc_82526EA4;
loc_82526E9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82526EA4;
	sub_8250AED8(ctx, base);
loc_82526EA4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r31,40(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82526ec4
	if (!ctx.cr0.eq) goto loc_82526EC4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82526e5c
	if (!ctx.cr6.eq) goto loc_82526E5C;
loc_82526EC4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
loc_82526ED0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-21584
	ctx.r5.s64 = ctx.r11.s64 + -21584;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824e4368
	ctx.lr = 0x82526EE4;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8257CD58) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// b 0x8257cd94
	goto loc_8257CD94;
loc_8257CD80:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8257cdcc
	if (!ctx.cr0.eq) goto loc_8257CDCC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8257CD94:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8257cd80
	if (ctx.cr6.lt) goto loc_8257CD80;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8257CDC4:
	// addi r3,r11,31
	ctx.r3.s64 = ctx.r11.s64 + 31;
	// blr 
	return;
loc_8257CDCC:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x8257cdc4
	goto loc_8257CDC4;
}

DEFINE_REX_FUNC(sub_8257E8F0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257e90c
	if (ctx.cr6.eq) goto loc_8257E90C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8257e90c
	if (!ctx.cr6.eq) goto loc_8257E90C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_8257E90C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8257EA20) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257ea3c
	if (ctx.cr6.eq) goto loc_8257EA3C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8257ea3c
	if (ctx.cr6.eq) goto loc_8257EA3C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_8257EA3C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257F0F0) {
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
	ctx.lr = 0x8257F0F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f228
	if (ctx.cr6.eq) goto loc_8257F228;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8257f228
	if (!ctx.cr6.eq) goto loc_8257F228;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// li r28,0
	r28.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
loc_8257F124:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257f21c
	if (ctx.cr6.eq) goto loc_8257F21C;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x8257f21c
	if (!ctx.cr6.eq) goto loc_8257F21C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8257f1f8
	if (!ctx.cr6.eq) goto loc_8257F1F8;
	// lwz r11,568(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f174
	if (ctx.cr6.eq) goto loc_8257F174;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8257F158:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8257f1f0
	if (ctx.cr6.eq) goto loc_8257F1F0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257f158
	if (!ctx.cr6.eq) goto loc_8257F158;
loc_8257F174:
	// li r31,0
	r31.s64 = 0;
loc_8257F178:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8257f1b8
	if (ctx.cr6.eq) goto loc_8257F1B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8257ea48
	ctx.lr = 0x8257F194;
	sub_8257EA48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257f1b8
	if (ctx.cr0.eq) goto loc_8257F1B8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x8257f1b0
	if (ctx.cr6.eq) goto loc_8257F1B0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x8257f1b8
	if (!ctx.cr6.gt) goto loc_8257F1B8;
loc_8257F1B0:
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8257F1B8:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257f1d0
	if (ctx.cr6.eq) goto loc_8257F1D0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8257f204
	if (!ctx.cr6.eq) goto loc_8257F204;
loc_8257F1D0:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257f124
	if (!ctx.cr6.eq) goto loc_8257F124;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8257f210
	if (!ctx.cr6.eq) goto loc_8257F210;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F1F0;
	sub_824E4368(ctx, base);
loc_8257F1F0:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x8257f178
	goto loc_8257F178;
loc_8257F1F8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F204;
	sub_824E4368(ctx, base);
loc_8257F204:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F210;
	sub_824E4368(ctx, base);
loc_8257F210:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_8257F21C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F228;
	sub_824E4368(ctx, base);
loc_8257F228:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257F234;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_82582458) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82582460;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582488;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582498;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825824A4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x825824c8
	if (ctx.cr6.eq) goto loc_825824C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825824C4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825824C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825824D0;
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

DEFINE_REX_FUNC(sub_82585538) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82585540;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580ab0
	ctx.lr = 0x82585564;
	sub_82580AB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825870B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825870B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// std r6,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825870E4;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x825870F4;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82587100;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82587110;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258711C;
	sub_8250AD28(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258712C;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82587138;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// stw r3,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r3.u32);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// stw r9,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
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

DEFINE_REX_FUNC(sub_8259B1A0) {
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
	ctx.lr = 0x8259B1A8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8259bdd0
	if (ctx.cr6.eq) goto loc_8259BDD0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8259bdd0
	if (!ctx.cr6.eq) goto loc_8259BDD0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259b2d8
	if (!ctx.cr6.eq) goto loc_8259B2D8;
	// lwz r31,28(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8259b284
	if (!ctx.cr6.eq) goto loc_8259B284;
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b20c
	if (ctx.cr6.eq) goto loc_8259B20C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8259b20c
	if (ctx.cr6.eq) goto loc_8259B20C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8259B20C;
	sub_824E4368(ctx, base);
loc_8259B20C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b2d8
	if (ctx.cr6.eq) goto loc_8259B2D8;
loc_8259B218:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8259b260
	if (!ctx.cr6.eq) goto loc_8259B260;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8259b298
	if (ctx.cr0.eq) goto loc_8259B298;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8259b298
	if (!ctx.cr6.eq) goto loc_8259B298;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8259b260
	if (!ctx.cr6.eq) goto loc_8259B260;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// ble cr6,0x8259b260
	if (!ctx.cr6.gt) goto loc_8259B260;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8259B260:
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b278
	if (ctx.cr6.eq) goto loc_8259B278;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8259b2a4
	if (!ctx.cr6.eq) goto loc_8259B2A4;
loc_8259B278:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259b218
	if (!ctx.cr6.eq) goto loc_8259B218;
loc_8259B284:
	// cmplwi cr6,r31,32767
	ctx.cr6.compare<uint32_t>(r31.u32, 32767, ctx.xer);
	// ble cr6,0x8259b2b0
	if (!ctx.cr6.gt) goto loc_8259B2B0;
	// li r4,3519
	ctx.r4.s64 = 3519;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B298;
	sub_824E4368(ctx, base);
loc_8259B298:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B2A4;
	sub_824E4368(ctx, base);
loc_8259B2A4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B2B0;
	sub_824E4368(ctx, base);
loc_8259B2B0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8259b2d8
	if (ctx.cr6.eq) goto loc_8259B2D8;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r11.u32);
	// mulli r4,r11,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251f360
	ctx.lr = 0x8259B2D0;
	sub_8251F360(ctx, base);
	// stw r3,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r3.u32);
	// stw r31,16(r27)
	REX_STORE_U32(r27.u32 + 16, r31.u32);
loc_8259B2D8:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b45c
	if (ctx.cr6.eq) goto loc_8259B45C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8259b45c
	if (ctx.cr6.eq) goto loc_8259B45C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B2FC;
	sub_824E4368(ctx, base);
loc_8259B2FC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8259b444
	if (!ctx.cr6.eq) goto loc_8259B444;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8259b534
	if (ctx.cr0.eq) goto loc_8259B534;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x8259b534
	if (!ctx.cr6.eq) goto loc_8259B534;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8259b444
	if (!ctx.cr6.eq) goto loc_8259B444;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8259b444
	if (!ctx.cr6.eq) goto loc_8259B444;
	// lwz r31,68(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x8259b390
	goto loc_8259B390;
loc_8259B340:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8259b358
	if (!ctx.cr6.eq) goto loc_8259B358;
	// mr r30,r31
	r30.u64 = r31.u64;
	// li r31,0
	r31.s64 = 0;
	// b 0x8259b37c
	goto loc_8259B37C;
loc_8259B358:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8259b528
	if (!ctx.cr6.eq) goto loc_8259B528;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8259b51c
	if (ctx.cr6.eq) goto loc_8259B51C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8259b51c
	if (!ctx.cr6.eq) goto loc_8259B51C;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8259B37C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257f848
	ctx.lr = 0x8259B388;
	sub_8257F848(ctx, base);
	// cmpwi cr6,r3,15
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 15, ctx.xer);
	// beq cr6,0x8259b39c
	if (ctx.cr6.eq) goto loc_8259B39C;
loc_8259B390:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8259b340
	if (!ctx.cr6.eq) goto loc_8259B340;
	// b 0x8259b444
	goto loc_8259B444;
loc_8259B39C:
	// addi r5,r27,800
	ctx.r5.s64 = r27.s64 + 800;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257efe8
	ctx.lr = 0x8259B3B0;
	sub_8257EFE8(ctx, base);
	// lwz r6,800(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 800);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8259b50c
	if (ctx.cr6.lt) goto loc_8259B50C;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bge cr6,0x8259b50c
	if (!ctx.cr6.lt) goto loc_8259B50C;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// lwz r11,56(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,804(r27)
	REX_STORE_U32(r27.u32 + 804, ctx.r10.u32);
	// beq cr6,0x8259b444
	if (ctx.cr6.eq) goto loc_8259B444;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8259b3f8
	if (!ctx.cr6.eq) goto loc_8259B3F8;
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8259b444
	if (ctx.cr6.eq) goto loc_8259B444;
loc_8259B3F8:
	// lwz r8,48(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// rlwinm r8,r8,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8259b420
	if (!ctx.cr6.eq) goto loc_8259B420;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8259b438
	if (!ctx.cr6.eq) goto loc_8259B438;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// b 0x8259b434
	goto loc_8259B434;
loc_8259B420:
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8259b438
	if (!ctx.cr6.eq) goto loc_8259B438;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_8259B434:
	// beq cr6,0x8259b444
	if (ctx.cr6.eq) goto loc_8259B444;
loc_8259B438:
	// li r4,3582
	ctx.r4.s64 = 3582;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4270
	ctx.lr = 0x8259B444;
	sub_824E4270(ctx, base);
loc_8259B444:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b45c
	if (ctx.cr6.eq) goto loc_8259B45C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8259b540
	if (!ctx.cr6.eq) goto loc_8259B540;
loc_8259B45C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bne cr6,0x8259b2fc
	if (!ctx.cr6.eq) goto loc_8259B2FC;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x8259B478;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,576(r27)
	REX_STORE_U32(r27.u32 + 576, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x8259B4A0;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r3,580(r27)
	REX_STORE_U32(r27.u32 + 580, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r24,0
	r24.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// bl 0x824f7678
	ctx.lr = 0x8259B4D0;
	sub_824F7678(ctx, base);
	// addi r23,r3,4
	r23.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r23,1
	ctx.r10.u64 = r23.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b54c
	if (ctx.cr6.eq) goto loc_8259B54C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8259b54c
	if (ctx.cr6.eq) goto loc_8259B54C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B50C;
	sub_824E4368(ctx, base);
loc_8259B50C:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,3590
	ctx.r4.s64 = 3590;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B51C;
	sub_824E4368(ctx, base);
loc_8259B51C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B528;
	sub_824E4368(ctx, base);
loc_8259B528:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B534;
	sub_824E4368(ctx, base);
loc_8259B534:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B540;
	sub_824E4368(ctx, base);
loc_8259B540:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259B54C;
	sub_824E4368(ctx, base);
loc_8259B54C:
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259ba84
	if (ctx.cr6.eq) goto loc_8259BA84;
loc_8259B558:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8259b834
	goto loc_8259B834;
loc_8259B564:
	// lwz r28,8(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8259bcf8
	if (ctx.cr6.eq) goto loc_8259BCF8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8259bcf8
	if (!ctx.cr6.eq) goto loc_8259BCF8;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8259b970
	if (ctx.cr6.eq) goto loc_8259B970;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8259b964
	if (ctx.cr6.eq) goto loc_8259B964;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8259b854
	if (ctx.cr6.eq) goto loc_8259B854;
	// ble cr6,0x8259bcb0
	if (!ctx.cr6.gt) goto loc_8259BCB0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8259b970
	if (!ctx.cr6.gt) goto loc_8259B970;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x8259bcb0
	if (!ctx.cr6.gt) goto loc_8259BCB0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x8259bcb0
	if (ctx.cr6.gt) goto loc_8259BCB0;
	// lwz r29,32(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8259bca4
	if (ctx.cr6.eq) goto loc_8259BCA4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bne cr6,0x8259bca4
	if (!ctx.cr6.eq) goto loc_8259BCA4;
	// lwz r31,20(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8259bc1c
	if (ctx.cr6.eq) goto loc_8259BC1C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8259bc98
	if (!ctx.cr6.eq) goto loc_8259BC98;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8259b638
	if (ctx.cr6.eq) goto loc_8259B638;
loc_8259B5F4:
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
loc_8259B600:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// beq 0x8259b624
	if (ctx.cr0.eq) goto loc_8259B624;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8259b600
	if (ctx.cr6.eq) goto loc_8259B600;
loc_8259B624:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8259bc28
	if (ctx.cr0.eq) goto loc_8259BC28;
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8259b5f4
	if (!ctx.cr6.eq) goto loc_8259B5F4;
loc_8259B638:
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x8259B648;
	sub_824F7678(ctx, base);
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r4,36(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bne cr6,0x8259b744
	if (!ctx.cr6.eq) goto loc_8259B744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825898c0
	ctx.lr = 0x8259B674;
	sub_825898C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82589980
	ctx.lr = 0x8259B67C;
	sub_82589980(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8259b734
	if (ctx.cr0.eq) goto loc_8259B734;
loc_8259B684:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8259bc60
	if (ctx.cr6.eq) goto loc_8259BC60;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8259bc60
	if (!ctx.cr6.eq) goto loc_8259BC60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257f848
	ctx.lr = 0x8259B6A4;
	sub_8257F848(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8259b6e4
	if (ctx.cr6.eq) goto loc_8259B6E4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259bc44
	if (ctx.cr6.eq) goto loc_8259BC44;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8259bc44
	if (!ctx.cr6.eq) goto loc_8259BC44;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8259bc3c
	if (!ctx.cr6.eq) goto loc_8259BC3C;
	// li r4,3606
	ctx.r4.s64 = 3606;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x824e4270
	ctx.lr = 0x8259B6E0;
	sub_824E4270(ctx, base);
	// b 0x8259b71c
	goto loc_8259B71C;
loc_8259B6E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8259b6f8
	if (ctx.cr6.eq) goto loc_8259B6F8;
	// li r4,3577
	ctx.r4.s64 = 3577;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4270
	ctx.lr = 0x8259B6F8;
	sub_824E4270(ctx, base);
loc_8259B6F8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8257ef60
	ctx.lr = 0x8259B704;
	sub_8257EF60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8259bc50
	if (ctx.cr6.lt) goto loc_8259BC50;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8259bc50
	if (!ctx.cr6.lt) goto loc_8259BC50;
loc_8259B71C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82589980
	ctx.lr = 0x8259B724;
	sub_82589980(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8259b684
	if (!ctx.cr0.eq) goto loc_8259B684;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8259b738
	if (!ctx.cr6.eq) goto loc_8259B738;
loc_8259B734:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8259B738:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8259b7b4
	goto loc_8259B7B4;
loc_8259B744:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825898c0
	ctx.lr = 0x8259B74C;
	sub_825898C0(ctx, base);
	// b 0x8259b798
	goto loc_8259B798;
loc_8259B750:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8259bc80
	if (ctx.cr6.eq) goto loc_8259BC80;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8259bc80
	if (!ctx.cr6.eq) goto loc_8259BC80;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259bc74
	if (ctx.cr6.eq) goto loc_8259BC74;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8259bc74
	if (!ctx.cr6.eq) goto loc_8259BC74;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8259bc6c
	if (!ctx.cr6.eq) goto loc_8259BC6C;
	// li r4,3606
	ctx.r4.s64 = 3606;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x824e4270
	ctx.lr = 0x8259B798;
	sub_824E4270(ctx, base);
loc_8259B798:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82589980
	ctx.lr = 0x8259B7A0;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8259b750
	if (!ctx.cr0.eq) goto loc_8259B750;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r28
	r30.u64 = r28.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8259B7B4:
	// addi r10,r11,972
	ctx.r10.s64 = ctx.r11.s64 + 972;
	// lwz r10,976(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 976);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r9,976(r11)
	REX_STORE_U32(ctx.r11.u32 + 976, ctx.r9.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b970
	if (ctx.cr6.eq) goto loc_8259B970;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825897d0
	ctx.lr = 0x8259B7D8;
	sub_825897D0(ctx, base);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,596(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 596);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r30,596(r27)
	REX_STORE_U32(r27.u32 + 596, r30.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8259b810
	if (!ctx.cr6.eq) goto loc_8259B810;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// li r22,1
	r22.s64 = 1;
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r11.u32);
loc_8259B810:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259bc8c
	if (ctx.cr6.eq) goto loc_8259BC8C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8259bc8c
	if (!ctx.cr6.eq) goto loc_8259BC8C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8259B834:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8259b564
	if (ctx.cr6.eq) goto loc_8259B564;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8259bc10
	if (!ctx.cr6.eq) goto loc_8259BC10;
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,40(r27)
	REX_STORE_U32(r27.u32 + 40, ctx.r11.u32);
	// b 0x8259b970
	goto loc_8259B970;
loc_8259B854:
	// lwz r31,24(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8259bcd4
	if (ctx.cr6.eq) goto loc_8259BCD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8259bcd4
	if (!ctx.cr6.eq) goto loc_8259BCD4;
	// lwz r11,568(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b898
	if (ctx.cr6.eq) goto loc_8259B898;
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
loc_8259B87C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8259b8f8
	if (ctx.cr6.eq) goto loc_8259B8F8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259b87c
	if (!ctx.cr6.eq) goto loc_8259B87C;
loc_8259B898:
	// li r30,0
	r30.s64 = 0;
loc_8259B89C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8259b8c4
	if (!ctx.cr6.eq) goto loc_8259B8C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251f360
	ctx.lr = 0x8259B8B4;
	sub_8251F360(ctx, base);
	// lwz r11,568(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 568);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,568(r27)
	REX_STORE_U32(r27.u32 + 568, ctx.r3.u32);
loc_8259B8C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b8dc
	if (ctx.cr6.eq) goto loc_8259B8DC;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259b8e4
	if (!ctx.cr6.eq) goto loc_8259B8E4;
loc_8259B8DC:
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
loc_8259B8E4:
	// cmplw cr6,r21,r31
	ctx.cr6.compare<uint32_t>(r21.u32, r31.u32, ctx.xer);
	// bne cr6,0x8259b8f0
	if (!ctx.cr6.eq) goto loc_8259B8F0;
	// mr r19,r30
	r19.u64 = r30.u64;
loc_8259B8F0:
	// lwz r31,68(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 68);
	// b 0x8259b958
	goto loc_8259B958;
loc_8259B8F8:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x8259b89c
	goto loc_8259B89C;
loc_8259B900:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8259b918
	if (!ctx.cr6.eq) goto loc_8259B918;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r31,0
	r31.s64 = 0;
	// b 0x8259b93c
	goto loc_8259B93C;
loc_8259B918:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8259bcc8
	if (!ctx.cr6.eq) goto loc_8259BCC8;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8259bcbc
	if (ctx.cr6.eq) goto loc_8259BCBC;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8259bcbc
	if (!ctx.cr6.eq) goto loc_8259BCBC;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8259B93C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257f848
	ctx.lr = 0x8259B944;
	sub_8257F848(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x8259b958
	if (!ctx.cr6.eq) goto loc_8259B958;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
loc_8259B958:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8259b900
	if (!ctx.cr6.eq) goto loc_8259B900;
	// b 0x8259b970
	goto loc_8259B970;
loc_8259B964:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8258d5e0
	ctx.lr = 0x8259B970;
	sub_8258D5E0(ctx, base);
loc_8259B970:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8259b988
	if (ctx.cr6.eq) goto loc_8259B988;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8259bce0
	if (!ctx.cr6.eq) goto loc_8259BCE0;
loc_8259B988:
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8259b558
	if (!ctx.cr6.eq) goto loc_8259B558;
loc_8259B994:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8259ba70
	if (!ctx.cr0.eq) goto loc_8259BA70;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8259ba70
	if (ctx.cr0.eq) goto loc_8259BA70;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,596(r27)
	REX_STORE_U32(r27.u32 + 596, ctx.r10.u32);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8259b9e0
	if (ctx.cr6.eq) goto loc_8259B9E0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8259bcec
	if (!ctx.cr6.eq) goto loc_8259BCEC;
loc_8259B9E0:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r25,r31
	r25.u64 = r31.u64;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8259b9fc
	if (!ctx.cr0.eq) goto loc_8259B9FC;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r11,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r11.u32);
loc_8259B9FC:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259ba10
	if (ctx.cr0.eq) goto loc_8259BA10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8259ba1c
	goto loc_8259BA1C;
loc_8259BA10:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_8259BA1C:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8259ba64
	if (!ctx.cr0.eq) goto loc_8259BA64;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
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
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x824e4308
	ctx.lr = 0x8259BA64;
	sub_824E4308(ctx, base);
loc_8259BA64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8259b994
	if (ctx.cr6.eq) goto loc_8259B994;
	// b 0x8259b558
	goto loc_8259B558;
loc_8259BA70:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 44);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,21,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r11,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r11.u32);
	// bne cr6,0x8259b558
	if (!ctx.cr6.eq) goto loc_8259B558;
loc_8259BA84:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82597598
	ctx.lr = 0x8259BA90;
	sub_82597598(ctx, base);
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259bdc4
	if (ctx.cr0.eq) goto loc_8259BDC4;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8259bdc4
	if (!ctx.cr6.gt) goto loc_8259BDC4;
	// li r20,0
	r20.s64 = 0;
loc_8259BAAC:
	// lwz r8,12(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 12);
	// add r22,r20,r8
	r22.u64 = r20.u64 + ctx.r8.u64;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259bdb0
	if (ctx.cr0.eq) goto loc_8259BDB0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8259bafc
	if (ctx.cr6.eq) goto loc_8259BAFC;
	// lwz r9,36(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8259BAD4:
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r7,36(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8259baf4
	if (ctx.cr6.eq) goto loc_8259BAF4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// blt cr6,0x8259bad4
	if (ctx.cr6.lt) goto loc_8259BAD4;
loc_8259BAF4:
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// blt cr6,0x8259bdb0
	if (ctx.cr6.lt) goto loc_8259BDB0;
loc_8259BAFC:
	// lwz r10,28(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 28);
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r28,1
	r28.s64 = 1;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r26,r11,28,18,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// bge cr6,0x8259bdb0
	if (!ctx.cr6.lt) goto loc_8259BDB0;
	// addi r24,r20,40
	r24.s64 = r20.s64 + 40;
loc_8259BB24:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r10,36(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 36);
	// add r30,r11,r24
	r30.u64 = ctx.r11.u64 + r24.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8259bd9c
	if (!ctx.cr6.eq) goto loc_8259BD9C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r31,r11,29,18,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// rlwinm r25,r31,2,0,29
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x8259BB58;
	sub_824F7DC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8259bb84
	if (ctx.cr6.eq) goto loc_8259BB84;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_8259BB70:
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8259bb70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259BB70;
loc_8259BB84:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-1736
	ctx.r6.s64 = ctx.r11.s64 + -1736;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a0028
	ctx.lr = 0x8259BB9C;
	sub_826A0028(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259bd7c
	if (ctx.cr0.eq) goto loc_8259BD7C;
loc_8259BBAC:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bge cr6,0x8259bbf4
	if (!ctx.cr6.lt) goto loc_8259BBF4;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// rlwinm r7,r7,28,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x3FFF;
loc_8259BBD0:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r5,r5,28,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8259bbf4
	if (!ctx.cr6.eq) goto loc_8259BBF4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x8259bbd0
	if (ctx.cr6.lt) goto loc_8259BBD0;
loc_8259BBF4:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8259bd04
	if (ctx.cr0.eq) goto loc_8259BD04;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// beq cr6,0x8259bd18
	if (ctx.cr6.eq) goto loc_8259BD18;
	// b 0x8259bd10
	goto loc_8259BD10;
loc_8259BC10:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC1C;
	sub_824E4368(ctx, base);
loc_8259BC1C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC28;
	sub_824E4368(ctx, base);
loc_8259BC28:
	// li r4,3610
	ctx.r4.s64 = 3610;
	// lwz r7,36(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r6,32(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x824e4368
	ctx.lr = 0x8259BC3C;
	sub_824E4368(ctx, base);
loc_8259BC3C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8259BC44;
	sub_824E4368(ctx, base);
loc_8259BC44:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC50;
	sub_824E4368(ctx, base);
loc_8259BC50:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,3611
	ctx.r4.s64 = 3611;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC60;
	sub_824E4368(ctx, base);
loc_8259BC60:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC6C;
	sub_824E4368(ctx, base);
loc_8259BC6C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8259BC74;
	sub_824E4368(ctx, base);
loc_8259BC74:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC80;
	sub_824E4368(ctx, base);
loc_8259BC80:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC8C;
	sub_824E4368(ctx, base);
loc_8259BC8C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BC98;
	sub_824E4368(ctx, base);
loc_8259BC98:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCA4;
	sub_824E4368(ctx, base);
loc_8259BCA4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCB0;
	sub_824E4368(ctx, base);
loc_8259BCB0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCBC;
	sub_824E4368(ctx, base);
loc_8259BCBC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCC8;
	sub_824E4368(ctx, base);
loc_8259BCC8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCD4;
	sub_824E4368(ctx, base);
loc_8259BCD4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCE0;
	sub_824E4368(ctx, base);
loc_8259BCE0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCEC;
	sub_824E4368(ctx, base);
loc_8259BCEC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BCF8;
	sub_824E4368(ctx, base);
loc_8259BCF8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BD04;
	sub_824E4368(ctx, base);
loc_8259BD04:
	// slw r11,r28,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r7.u8 & 0x3F));
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x8259bd18
	if (!ctx.cr6.gt) goto loc_8259BD18;
loc_8259BD10:
	// li r28,1
	r28.s64 = 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_8259BD18:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8259bd58
	if (!ctx.cr6.lt) goto loc_8259BD58;
	// rlwinm r8,r26,4,14,27
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0x3FFF0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
loc_8259BD2C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,0,28,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFC000F;
	// or r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r28,0,28,31
	ctx.r6.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF0);
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// bdnz 0x8259bd2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8259BD2C;
loc_8259BD58:
	// cmplwi cr6,r28,15
	ctx.cr6.compare<uint32_t>(r28.u32, 15, ctx.xer);
	// ble cr6,0x8259bd68
	if (!ctx.cr6.gt) goto loc_8259BD68;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// li r28,1
	r28.s64 = 1;
loc_8259BD68:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259bbac
	if (ctx.cr6.lt) goto loc_8259BBAC;
loc_8259BD7C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x8259BD90;
	sub_824FFBD8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8259BD9C:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,40
	r24.s64 = r24.s64 + 40;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259bb24
	if (ctx.cr6.lt) goto loc_8259BB24;
loc_8259BDB0:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r20,r20,40
	r20.s64 = r20.s64 + 40;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8259baac
	if (ctx.cr6.lt) goto loc_8259BAAC;
loc_8259BDC4:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
loc_8259BDD0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x8259BDDC;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825DED30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825DED38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825b33a0
	ctx.lr = 0x825DED58;
	sub_825B33A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stb r29,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, r29.u8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E0CB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x825f74b8
	ctx.lr = 0x825E0CE0;
	sub_825F74B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x825e0ddc
	if (ctx.cr6.gt) goto loc_825E0DDC;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x825f74b8
	ctx.lr = 0x825E0CF4;
	sub_825F74B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x825e0ddc
	if (ctx.cr6.gt) goto loc_825E0DDC;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x825fd090
	ctx.lr = 0x825E0D04;
	sub_825FD090(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825e0ddc
	if (!ctx.cr6.eq) goto loc_825E0DDC;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825e0d28
	if (!ctx.cr6.gt) goto loc_825E0D28;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825e0d2c
	goto loc_825E0D2C;
loc_825E0D28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E0D2C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825e0ddc
	if (!ctx.cr6.eq) goto loc_825E0DDC;
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x825fd090
	ctx.lr = 0x825E0D44;
	sub_825FD090(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825e0ddc
	if (!ctx.cr6.eq) goto loc_825E0DDC;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825e0d68
	if (!ctx.cr6.gt) goto loc_825E0D68;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825e0d6c
	goto loc_825E0D6C;
loc_825E0D68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E0D6C:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E0D80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e0d90
	if (ctx.cr0.eq) goto loc_825E0D90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825e0de0
	goto loc_825E0DE0;
loc_825E0D90:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825e0dac
	if (!ctx.cr6.gt) goto loc_825E0DAC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825e0db0
	goto loc_825E0DB0;
loc_825E0DAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825E0DB0:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E0DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825e0ddc
	if (ctx.cr0.eq) goto loc_825E0DDC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// b 0x825e0de0
	goto loc_825E0DE0;
loc_825E0DDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825E0DE0:
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

DEFINE_REX_FUNC(sub_825ED770) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825ED778;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// li r31,2
	r31.s64 = 2;
loc_825ED788:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825ED7A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825ed788
	if (!ctx.cr0.eq) goto loc_825ED788;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825F1540) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825f7480
	ctx.lr = 0x825F155C;
	sub_825F7480(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x825f7480
	ctx.lr = 0x825F1564;
	sub_825F7480(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x825f7480
	ctx.lr = 0x825F156C;
	sub_825F7480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f1258
	ctx.lr = 0x825F1578;
	sub_825F1258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d86d8
	ctx.lr = 0x825F1580;
	sub_825D86D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825f15ac
	if (!ctx.cr0.eq) goto loc_825F15AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,15448
	ctx.r6.s64 = ctx.r11.s64 + 15448;
	// addi r5,r10,17132
	ctx.r5.s64 = ctx.r10.s64 + 17132;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,491
	ctx.r7.s64 = 491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F15AC;
	sub_824EA978(ctx, base);
loc_825F15AC:
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

DEFINE_REX_FUNC(sub_825F3F68) {
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
	ctx.lr = 0x825F3F70;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bne cr6,0x825f3fb0
	if (!ctx.cr6.eq) goto loc_825F3FB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,18176
	ctx.r6.s64 = ctx.r11.s64 + 18176;
	// addi r5,r10,18584
	ctx.r5.s64 = ctx.r10.s64 + 18584;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,537
	ctx.r7.s64 = 537;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F3FB0;
	sub_824EA978(ctx, base);
loc_825F3FB0:
	// lbz r11,1872(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1872);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f4018
	if (ctx.cr0.eq) goto loc_825F4018;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825F3FC4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f3b80
	ctx.lr = 0x825F3FD0;
	sub_825F3B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f3ff0
	if (ctx.cr0.eq) goto loc_825F3FF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bne cr6,0x825f3ff0
	if (!ctx.cr6.eq) goto loc_825F3FF0;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// beq cr6,0x825f400c
	if (ctx.cr6.eq) goto loc_825F400C;
loc_825F3FF0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// blt cr6,0x825f3fc4
	if (ctx.cr6.lt) goto loc_825F3FC4;
loc_825F4000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825F4004:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_825F400C:
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
loc_825F4010:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825f4004
	goto loc_825F4004;
loc_825F4018:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,1040
	ctx.r11.s64 = r29.s64 + 1040;
loc_825F4020:
	// lwz r9,-64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -64);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bne cr6,0x825f4038
	if (!ctx.cr6.eq) goto loc_825F4038;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// beq cr6,0x825f404c
	if (ctx.cr6.eq) goto loc_825F404C;
loc_825F4038:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x825f4020
	if (ctx.cr6.lt) goto loc_825F4020;
	// b 0x825f4000
	goto loc_825F4000;
loc_825F404C:
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x825f4010
	goto loc_825F4010;
}

DEFINE_REX_FUNC(sub_825F74E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// beq cr6,0x825f74f8
	if (ctx.cr6.eq) goto loc_825F74F8;
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_825F74F8:
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825F7CA8) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x825f7cfc
	if (ctx.cr6.lt) goto loc_825F7CFC;
loc_825F7CC8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f7cf0
	if (!ctx.cr6.lt) goto loc_825F7CF0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x825f7cf4
	goto loc_825F7CF4;
loc_825F7CF0:
	// bl 0x825f7718
	ctx.lr = 0x825F7CF4;
	sub_825F7718(ctx, base);
loc_825F7CF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x825f7d48
	goto loc_825F7D48;
loc_825F7CFC:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_825F7D00:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825f7d44
	if (!ctx.cr6.lt) goto loc_825F7D44;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x825f7d00
	if (ctx.cr6.eq) goto loc_825F7D00;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f7d00
	if (ctx.cr6.eq) goto loc_825F7D00;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// b 0x825f7cc8
	goto loc_825F7CC8;
loc_825F7D44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825F7D48:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825F9FB0) {
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
	ctx.lr = 0x825F9FB8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// std r7,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// std r8,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r9,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r8,r9,28928
	ctx.r8.s64 = ctx.r9.s64 + 28928;
	// lwz r31,30216(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 30216);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_825FA02C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x825fa0b0
	if (ctx.cr6.lt) goto loc_825FA0B0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_825FA03C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x825fa090
	if (ctx.cr6.eq) goto loc_825FA090;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,0(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// bne cr6,0x825fa070
	if (!ctx.cr6.eq) goto loc_825FA070;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x825fa074
	if (ctx.cr6.eq) goto loc_825FA074;
loc_825FA070:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825FA074:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825fa0a8
	if (!ctx.cr0.eq) goto loc_825FA0A8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x825fa03c
	if (!ctx.cr6.gt) goto loc_825FA03C;
	// b 0x825fa0b0
	goto loc_825FA0B0;
loc_825FA090:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r8,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x825fa0b0
	goto loc_825FA0B0;
loc_825FA0A8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r8,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
loc_825FA0B0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x825fa02c
	if (ctx.cr6.lt) goto loc_825FA02C;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x825fa158
	if (!ctx.cr6.gt) goto loc_825FA158;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_825FA0D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x825fa150
	if (!ctx.cr6.gt) goto loc_825FA150;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_825FA0E4:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825fa104
	if (ctx.cr6.eq) goto loc_825FA104;
	// subfc r8,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// b 0x825fa110
	goto loc_825FA110;
loc_825FA104:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfc r8,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_825FA110:
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825fa140
	if (ctx.cr0.eq) goto loc_825FA140;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r9,r5,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stbx r7,r5,r8
	REX_STORE_U8(ctx.r5.u32 + ctx.r8.u32, ctx.r7.u8);
loc_825FA140:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x825fa0e4
	if (ctx.cr6.lt) goto loc_825FA0E4;
loc_825FA150:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz 0x825fa0d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825FA0D4;
loc_825FA158:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x825fa184
	if (!ctx.cr6.gt) goto loc_825FA184;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_825FA168:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// bdnz 0x825fa168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825FA168;
loc_825FA184:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825FA190:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x825fa190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825FA190;
	// lwz r11,952(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 952);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lbz r11,1393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825fa2a0
	if (ctx.cr0.eq) goto loc_825FA2A0;
	// beq cr6,0x825fa278
	if (ctx.cr6.eq) goto loc_825FA278;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x825fa25c
	if (ctx.cr6.eq) goto loc_825FA25C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x825fa238
	if (ctx.cr6.eq) goto loc_825FA238;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x825fa20c
	if (ctx.cr6.eq) goto loc_825FA20C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,30240
	ctx.r6.s64 = ctx.r11.s64 + 30240;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FA208;
	sub_824EA978(ctx, base);
	// b 0x825fa28c
	goto loc_825FA28C;
loc_825FA20C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x825e78a0
	ctx.lr = 0x825FA234;
	sub_825E78A0(ctx, base);
	// b 0x825fa288
	goto loc_825FA288;
loc_825FA238:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x825e7880
	ctx.lr = 0x825FA258;
	sub_825E7880(ctx, base);
	// b 0x825fa288
	goto loc_825FA288;
loc_825FA25C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x825e7860
	ctx.lr = 0x825FA274;
	sub_825E7860(ctx, base);
	// b 0x825fa288
	goto loc_825FA288;
loc_825FA278:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x825e7840
	ctx.lr = 0x825FA288;
	sub_825E7840(ctx, base);
loc_825FA288:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825FA28C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d7c78
	ctx.lr = 0x825FA29C;
	sub_825D7C78(ctx, base);
	// b 0x825fa374
	goto loc_825FA374;
loc_825FA2A0:
	// beq cr6,0x825fa350
	if (ctx.cr6.eq) goto loc_825FA350;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x825fa334
	if (ctx.cr6.eq) goto loc_825FA334;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x825fa310
	if (ctx.cr6.eq) goto loc_825FA310;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x825fa2e4
	if (ctx.cr6.eq) goto loc_825FA2E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,30240
	ctx.r6.s64 = ctx.r11.s64 + 30240;
	// addi r5,r10,19324
	ctx.r5.s64 = ctx.r10.s64 + 19324;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,410
	ctx.r7.s64 = 410;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FA2E0;
	sub_824EA978(ctx, base);
	// b 0x825fa364
	goto loc_825FA364;
loc_825FA2E4:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x825e91d0
	ctx.lr = 0x825FA30C;
	sub_825E91D0(ctx, base);
	// b 0x825fa360
	goto loc_825FA360;
loc_825FA310:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x825e91b0
	ctx.lr = 0x825FA330;
	sub_825E91B0(ctx, base);
	// b 0x825fa360
	goto loc_825FA360;
loc_825FA334:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x825e9190
	ctx.lr = 0x825FA34C;
	sub_825E9190(ctx, base);
	// b 0x825fa360
	goto loc_825FA360;
loc_825FA350:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x825e9170
	ctx.lr = 0x825FA360;
	sub_825E9170(ctx, base);
loc_825FA360:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_825FA364:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825FA374;
	sub_825F9F38(ctx, base);
loc_825FA374:
	// addi r11,r29,32
	ctx.r11.s64 = r29.s64 + 32;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82615020) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,65534
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65534, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,2720
	ctx.r10.s64 = ctx.r10.s64 + 2720;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82615048:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82615068
	if (!ctx.cr0.eq) goto loc_82615068;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82615048
	if (!ctx.cr6.eq) goto loc_82615048;
loc_82615068:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8261507c
	if (!ctx.cr0.eq) goto loc_8261507C;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
loc_8261507C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82616998) {
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
	ctx.lr = 0x826169A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826169D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
loc_826169DC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826169f4
	if (ctx.cr6.eq) goto loc_826169F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x826169f8
	goto loc_826169F8;
loc_826169F4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826169F8:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// bne cr6,0x826169dc
	if (!ctx.cr6.eq) goto loc_826169DC;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r6,r29,4
	ctx.r6.s64 = r29.s64 + 4;
	// bne cr6,0x82616a14
	if (!ctx.cr6.eq) goto loc_82616A14;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82616A14:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x826290f8
	ctx.lr = 0x82616A40;
	sub_826290F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82616a58
	if (ctx.cr0.lt) goto loc_82616A58;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r11.u32);
loc_82616A58:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8261C2F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261C2F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8261b208
	ctx.lr = 0x8261C330;
	sub_8261B208(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C34C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82623A18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,5
	ctx.r10.u64 = ctx.r11.u64 | 5;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826259D8) {
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
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r11,r4,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r4.s32 / ctx.r11.s32 : 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mulli r11,r11,13
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
loc_82625A10:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625a2c
	if (ctx.cr6.eq) goto loc_82625A2C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82625a30
	goto loc_82625A30;
loc_82625A2C:
	// li r30,0
	r30.s64 = 0;
loc_82625A30:
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82625a10
	if (!ctx.cr6.eq) goto loc_82625A10;
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// bl 0x82625870
	ctx.lr = 0x82625A44;
	sub_82625870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82641a48
	ctx.lr = 0x82625A4C;
	sub_82641A48(ctx, base);
	// lwz r11,528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 528);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82627768) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x826284f8
	sub_826284F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826277B0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82627820
	sub_82627820(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82627E10) {
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
	ctx.lr = 0x82627E18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82627e64
	if (!ctx.cr6.eq) goto loc_82627E64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82627e64
	if (!ctx.cr6.eq) goto loc_82627E64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x82643a00
	ctx.lr = 0x82627E5C;
	sub_82643A00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82627ed4
	goto loc_82627ED4;
loc_82627E64:
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
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8260b5b8
	ctx.lr = 0x82627E80;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82627e94
	if (!ctx.cr0.eq) goto loc_82627E94;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82627ed4
	goto loc_82627ED4;
loc_82627E94:
	// addic r11,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r11.s64 = r29.s64 + -1;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// subfe r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r28,16(r31)
	REX_STORE_U32(r31.u32 + 16, r28.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82628898
	ctx.lr = 0x82627EC4;
	sub_82628898(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82627ed4
	if (!ctx.cr0.lt) goto loc_82627ED4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627ED4;
	sub_8264C3D0(ctx, base);
loc_82627ED4:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627EE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82632A20) {
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
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x82632A28;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// dcbt r0,r3
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// lfd f0,-1624(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -1624);
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// fmul f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 * ctx.f0.f64;
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r25,128
	r25.s64 = 128;
	// li r26,-32
	r26.s64 = -32;
	// li r27,-16
	r27.s64 = -16;
	// li r28,16
	r28.s64 = 16;
	// fctidz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fctidz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lvlx128 v58,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ld r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// rldicr r29,r10,2,61
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// vspltw128 v0,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// lvlx128 v57,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// vsldoi128 v56,v63,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vadduwm v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vsldoi128 v0,v56,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vadduwm v10,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vadduwm v11,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vadduwm v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vadduwm v0,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vadduwm v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vadduwm v11,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vadduwm v10,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
loc_82632AE0:
	// add r8,r29,r3
	ctx.r8.u64 = r29.u64 + ctx.r3.u64;
	// rldicl r6,r3,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicl r30,r8,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r22,r4,32,32
	r22.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r6,r8,r31
	ctx.r6.u64 = ctx.r8.u64 + r31.u64;
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + r31.u64;
	// rldicl r30,r4,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rlwinm r3,r22,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lvlx128 v55,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r30,r8
	ctx.r4.u64 = r30.u64 + ctx.r8.u64;
	// vsldoi128 v53,v61,v55,4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 12));
	// rldicl r22,r7,32,32
	r22.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v52,v60,v54,4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 12));
	// rldicl r21,r6,32,32
	r21.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v51,r30,r8
	temp.u32 = r30.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v50,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lvlx128 v49,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r3,r22,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lvlx128 v48,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r30,r6,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + r31.u64;
	// vsldoi128 v47,v63,v50,4
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), 12));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vsldoi128 v46,v62,v49,4
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), 12));
	// rlwinm r3,r21,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rldicl r22,r7,32,32
	r22.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// vsldoi128 v45,v47,v51,4
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), 12));
	// lvlx128 v44,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v43,v46,v48,4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), 12));
	// lvlx128 v42,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v41,v53,v44,4
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 12));
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 + ctx.r8.u64;
	// vsldoi128 v40,v52,v42,4
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 12));
	// lvlx128 v39,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rldicl r30,r6,32,32
	r30.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// lvlx128 v38,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// clrldi r3,r6,32
	ctx.r3.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// vsldoi128 v37,v45,v39,4
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), 12));
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v36,v43,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// lvlx128 v35,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v34,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r22,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v63,v37,v35,4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), 12));
	// rldicl r4,r4,32,32
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// vsldoi128 v62,v36,v34,4
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), 12));
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// vupkhsb128 v33,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v33.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v63.s16), simde_mm_load_si128((simde__m128i*)ctx.v63.s16))));
	// vupklsb128 v32,v63,v96
	simde_mm_store_si128((simde__m128i*)ctx.v32.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.s16)));
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v58,v41,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vcsxwfp128 v7,v33,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// vsldoi128 v57,v40,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// add r31,r30,r8
	r31.u64 = r30.u64 + ctx.r8.u64;
	// vcsxwfp128 v6,v32,15
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvlx128 v56,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsldoi128 v61,v58,v56,4
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 12));
	// vsldoi128 v60,v57,v55,4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 12));
	// vupkhsb128 v54,v61,v96
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v61.s16), simde_mm_load_si128((simde__m128i*)ctx.v61.s16))));
	// vupklsb128 v53,v61,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s16)));
	// vcsxwfp128 v9,v54,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcsxwfp128 v8,v53,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// dcbt r31,r25
	// vupkhsb128 v52,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v52.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v60.s16), simde_mm_load_si128((simde__m128i*)ctx.v60.s16))));
	// vsrw128 v51,v13,v59
	ctx.v51.u32[0] = ctx.v13.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v51.u32[1] = ctx.v13.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v51.u32[2] = ctx.v13.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v51.u32[3] = ctx.v13.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupklsb128 v50,v60,v96
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s16)));
	// vsrw128 v49,v12,v59
	ctx.v49.u32[0] = ctx.v12.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v12.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v12.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v12.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupkhsb128 v48,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v62.s16), simde_mm_load_si128((simde__m128i*)ctx.v62.s16))));
	// vsrw128 v47,v11,v59
	ctx.v47.u32[0] = ctx.v11.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v47.u32[1] = ctx.v11.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v47.u32[2] = ctx.v11.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v47.u32[3] = ctx.v11.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vupklsb128 v46,v62,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.s16)));
	// vsrw128 v45,v10,v59
	ctx.v45.u32[0] = ctx.v10.u32[0] >> (ctx.v59.u8[0] & 0x1F);
	ctx.v45.u32[1] = ctx.v10.u32[1] >> (ctx.v59.u8[4] & 0x1F);
	ctx.v45.u32[2] = ctx.v10.u32[2] >> (ctx.v59.u8[8] & 0x1F);
	ctx.v45.u32[3] = ctx.v10.u32[3] >> (ctx.v59.u8[12] & 0x1F);
	// vcsxwfp128 v44,v52,15
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vadduwm v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcsxwfp128 v43,v50,15
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vadduwm v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcsxwfp128 v42,v48,15
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vadduwm v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcsxwfp128 v41,v46,15
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vadduwm v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vcuxwfp128 v4,v51,31
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// addic. r5,r5,-16
	ctx.xer.ca = ctx.r5.u32 > 15;
	ctx.r5.s64 = ctx.r5.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// vcuxwfp128 v2,v49,31
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcuxwfp128 v31,v47,31
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vcuxwfp128 v29,v45,31
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// vsubfp128 v5,v44,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsubfp128 v3,v43,v8
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vsubfp128 v1,v42,v7
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vsubfp128 v30,v41,v6
	simde_mm_store_ps(v30.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v5,v4,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v8,v3,v2,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v7,v1,v31,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v6,v30,v29,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v9,r9,r26
	ea = (ctx.r9.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r9,r27
	ea = (ctx.r9.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r9,r28
	ea = (ctx.r9.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// bne 0x82632ae0
	if (!ctx.cr0.eq) goto loc_82632AE0;
	// bl 0x826a2d40
	ctx.lr = 0x82632CB4;
	sub_826A2D40(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// subf r10,r23,r31
	ctx.r10.u64 = r31.u64 - r23.u64;
	// srawi r3,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 1;
	// lfd f0,2776(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 2776);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,0(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82652BB8) {
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
	ctx.lr = 0x82652BC0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r20,0(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r5,50(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 50);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// beq 0x82652c08
	if (ctx.cr0.eq) goto loc_82652C08;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// oris r11,r11,65016
	ctx.r11.u64 = ctx.r11.u64 | 4260888576;
	// b 0x82652c38
	goto loc_82652C38;
loc_82652C08:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82652c24
	if (ctx.cr0.eq) goto loc_82652C24;
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// ori r10,r10,65530
	ctx.r10.u64 = ctx.r10.u64 | 65530;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,740(r19)
	REX_STORE_U32(r19.u32 + 740, ctx.r11.u32);
	// b 0x82652c28
	goto loc_82652C28;
loc_82652C24:
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
loc_82652C28:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// oris r11,r11,65532
	ctx.r11.u64 = ctx.r11.u64 | 4294705152;
loc_82652C38:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// lwz r10,36(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 36);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r23,r10,30
	r23.u64 = ctx.r10.u32 & 0x3;
	// bne 0x82652c54
	if (!ctx.cr0.eq) goto loc_82652C54;
	// ori r23,r23,64
	r23.u64 = r23.u64 | 64;
loc_82652C54:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r27,1
	r27.s64 = 1;
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 12);
	// li r22,0
	r22.s64 = 0;
	// clrlwi r25,r5,24
	r25.u64 = ctx.r5.u32 & 0xFF;
	// add. r21,r11,r4
	r21.u64 = ctx.r11.u64 + ctx.r4.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82652df0
	if (ctx.cr0.eq) goto loc_82652DF0;
	// clrlwi. r26,r5,28
	r26.u64 = ctx.r5.u32 & 0xF;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x82652c94
	if (ctx.cr0.eq) goto loc_82652C94;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// beq cr6,0x82652c94
	if (ctx.cr6.eq) goto loc_82652C94;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// beq cr6,0x82652c94
	if (ctx.cr6.eq) goto loc_82652C94;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(r26.u32, 6, ctx.xer);
	// mr r24,r22
	r24.u64 = r22.u64;
	// bne cr6,0x82652c98
	if (!ctx.cr6.eq) goto loc_82652C98;
loc_82652C94:
	// mr r24,r27
	r24.u64 = r27.u64;
loc_82652C98:
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82652d64
	if (ctx.cr6.eq) goto loc_82652D64;
	// lwz r6,8(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 8);
loc_82652CAC:
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,396(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 396);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82652d54
	if (!ctx.cr0.eq) goto loc_82652D54;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82652cf4
	if (ctx.cr6.eq) goto loc_82652CF4;
	// lwz r9,100(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 100);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
loc_82652CD0:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82652cec
	if (ctx.cr6.eq) goto loc_82652CEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82652cd0
	if (ctx.cr6.lt) goto loc_82652CD0;
loc_82652CEC:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82652d10
	if (ctx.cr6.lt) goto loc_82652D10;
loc_82652CF4:
	// lwz r10,100(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 100);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r10,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// stbx r5,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r5.u8);
loc_82652D10:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82652d30
	if (ctx.cr6.eq) goto loc_82652D30;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// beq cr6,0x82652d30
	if (ctx.cr6.eq) goto loc_82652D30;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// beq cr6,0x82652d30
	if (ctx.cr6.eq) goto loc_82652D30;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(r26.u32, 6, ctx.xer);
	// bne cr6,0x82652d54
	if (!ctx.cr6.eq) goto loc_82652D54;
loc_82652D30:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82652d54
	if (ctx.cr6.lt) goto loc_82652D54;
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_82652D54:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r21
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r21.u32, ctx.xer);
	// blt cr6,0x82652cac
	if (ctx.cr6.lt) goto loc_82652CAC;
loc_82652D64:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// ble cr6,0x82652de8
	if (!ctx.cr6.gt) goto loc_82652DE8;
	// addi r9,r1,228
	ctx.r9.s64 = ctx.r1.s64 + 228;
loc_82652D74:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// beq cr6,0x82652dc4
	if (ctx.cr6.eq) goto loc_82652DC4;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// addi r4,r8,-1
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
loc_82652D9C:
	// lbzx r7,r4,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82652dc4
	if (!ctx.cr6.gt) goto loc_82652DC4;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// lwz r29,-8(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + -8);
	// stbx r7,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r7.u8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r29,-4(r8)
	ea = -4 + ctx.r8.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r8.u32 = ea;
	// bne 0x82652d9c
	if (!ctx.cr0.eq) goto loc_82652D9C;
loc_82652DC4:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// stbx r6,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u8);
	// stwx r3,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r3.u32);
	// blt cr6,0x82652d74
	if (ctx.cr6.lt) goto loc_82652D74;
loc_82652DE8:
	// addi r29,r1,128
	r29.s64 = ctx.r1.s64 + 128;
	// b 0x82652e50
	goto loc_82652E50;
loc_82652DF0:
	// stb r5,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r5.u8);
	// clrlwi. r26,r5,28
	r26.u64 = ctx.r5.u32 & 0xF;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r22,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r22.u32);
	// beq 0x82652e20
	if (ctx.cr0.eq) goto loc_82652E20;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// beq cr6,0x82652e20
	if (ctx.cr6.eq) goto loc_82652E20;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(r26.u32, 4, ctx.xer);
	// beq cr6,0x82652e20
	if (ctx.cr6.eq) goto loc_82652E20;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(r26.u32, 6, ctx.xer);
	// beq cr6,0x82652e20
	if (ctx.cr6.eq) goto loc_82652E20;
	// mr r24,r22
	r24.u64 = r22.u64;
	// b 0x82652e2c
	goto loc_82652E2C;
loc_82652E20:
	// ori r11,r25,240
	ctx.r11.u64 = r25.u64 | 240;
	// mr r24,r27
	r24.u64 = r27.u64;
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_82652E2C:
	// lwz r11,400(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652e48
	if (ctx.cr6.eq) goto loc_82652E48;
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82652e4c
	if (ctx.cr6.eq) goto loc_82652E4C;
loc_82652E48:
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82652E4C:
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82652E50:
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82653020
	if (ctx.cr6.eq) goto loc_82653020;
loc_82652E5C:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// stw r27,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r27.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// beq cr6,0x82652e8c
	if (ctx.cr6.eq) goto loc_82652E8C;
	// lwz r9,20(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 20);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r9,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
loc_82652E8C:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82652eb4
	if (ctx.cr6.eq) goto loc_82652EB4;
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 28);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r9,r7,r6
	REX_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r9.u32);
	// stwx r11,r7,r5
	REX_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r11.u32);
loc_82652EB4:
	// cmplwi cr6,r26,15
	ctx.cr6.compare<uint32_t>(r26.u32, 15, ctx.xer);
	// beq cr6,0x82652f14
	if (ctx.cr6.eq) goto loc_82652F14;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82652ed0
	if (ctx.cr0.eq) goto loc_82652ED0;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82652ee4
	goto loc_82652EE4;
loc_82652ED0:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
loc_82652EE4:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(r26.u32, 2, ctx.xer);
	// beq cr6,0x82652ef8
	if (ctx.cr6.eq) goto loc_82652EF8;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(r26.u32, 6, ctx.xer);
	// bne cr6,0x82652efc
	if (!ctx.cr6.eq) goto loc_82652EFC;
loc_82652EF8:
	// oris r23,r23,256
	r23.u64 = r23.u64 | 16777216;
loc_82652EFC:
	// lhz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 48);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r11,r10,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x82652f38
	goto loc_82652F38;
loc_82652F14:
	// rlwinm r11,r25,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xF0;
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// oris r23,r23,256
	r23.u64 = r23.u64 | 16777216;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82652F38:
	// lwz r7,40(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 40);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bge cr6,0x82652fa4
	if (!ctx.cr6.lt) goto loc_82652FA4;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r11,r31,r10
	ctx.r11.u64 = r31.u64 + ctx.r10.u64;
loc_82652F7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + r31.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82652fa4
	if (!ctx.cr6.eq) goto loc_82652FA4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x82652f7c
	if (ctx.cr6.lt) goto loc_82652F7C;
loc_82652FA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,400(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 400);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8265d6d8
	ctx.lr = 0x82652FC8;
	sub_8265D6D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82653048
	if (ctx.cr0.lt) goto loc_82653048;
	// lwz r11,740(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 740);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82653018
	if (!ctx.cr0.eq) goto loc_82653018;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82652ff8
	if (ctx.cr0.eq) goto loc_82652FF8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// b 0x82653014
	goto loc_82653014;
loc_82652FF8:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// beq 0x82653010
	if (ctx.cr0.eq) goto loc_82653010;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// b 0x82653014
	goto loc_82653014;
loc_82653010:
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
loc_82653014:
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
loc_82653018:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// blt cr6,0x82652e5c
	if (ctx.cr6.lt) goto loc_82652E5C;
loc_82653020:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x82653188
	if (ctx.cr6.eq) goto loc_82653188;
	// lwz r11,396(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82653094
	if (!ctx.cr0.eq) goto loc_82653094;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(r26.u32, 6, ctx.xer);
	// bne cr6,0x82653188
	if (!ctx.cr6.eq) goto loc_82653188;
	// lwz r11,84(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 84);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// b 0x8265306c
	goto loc_8265306C;
loc_82653048:
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// ori r11,r11,4101
	ctx.r11.u64 = ctx.r11.u64 | 4101;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8265318c
	if (!ctx.cr6.eq) goto loc_8265318C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,4328
	ctx.r3.u64 = ctx.r3.u64 | 4328;
	// b 0x8265318c
	goto loc_8265318C;
loc_82653064:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_8265306C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82653064
	if (!ctx.cr0.eq) goto loc_82653064;
	// b 0x82653084
	goto loc_82653084;
loc_82653078:
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82653188
	if (ctx.cr6.eq) goto loc_82653188;
loc_82653084:
	// lwz r11,396(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653078
	if (ctx.cr0.eq) goto loc_82653078;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
loc_82653094:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// addi r8,r20,280
	ctx.r8.s64 = r20.s64 + 280;
	// addi r9,r20,136
	ctx.r9.s64 = r20.s64 + 136;
	// addi r3,r19,380
	ctx.r3.s64 = r19.s64 + 380;
	// li r31,4
	r31.s64 = 4;
loc_826530B0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x826530f8
	if (ctx.cr6.eq) goto loc_826530F8;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bge cr6,0x82653138
	if (!ctx.cr6.lt) goto loc_82653138;
	// subf r30,r11,r21
	r30.u64 = r21.u64 - ctx.r11.u64;
	// lwz r6,8(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_826530DC:
	// lwzx r30,r11,r6
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826530ec
	if (!ctx.cr6.eq) goto loc_826530EC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_826530EC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x826530dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826530DC;
	// b 0x826530fc
	goto loc_826530FC;
loc_826530F8:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_826530FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82653138
	if (ctx.cr6.eq) goto loc_82653138;
	// lwz r11,396(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82653138
	if (ctx.cr0.eq) goto loc_82653138;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82653138:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x826530b0
	if (!ctx.cr0.eq) goto loc_826530B0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82653188
	if (ctx.cr6.eq) goto loc_82653188;
	// lwz r3,12(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 12);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r8,32(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r7,28(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ctx.r5.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82653188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82653188:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8265318C:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826787C8) {
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
	// lwz r3,280(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826787fc
	if (!ctx.cr6.eq) goto loc_826787FC;
	// lwz r3,444(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 444);
	// bl 0x82676d18
	ctx.lr = 0x826787F0;
	sub_82676D18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r11.u32);
	// b 0x82678834
	goto loc_82678834;
loc_826787FC:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,416
	ctx.r4.s64 = r31.s64 + 416;
	// bl 0x8264cf10
	ctx.lr = 0x82678810;
	sub_8264CF10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267882c
	if (ctx.cr0.eq) goto loc_8267882C;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// bl 0x82677940
	ctx.lr = 0x8267882C;
	sub_82677940(ctx, base);
loc_8267882C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82678658
	ctx.lr = 0x82678834;
	sub_82678658(ctx, base);
loc_82678834:
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

DEFINE_REX_FUNC(sub_8267A5A0) {
	REX_FUNC_PROLOGUE();
	// lhz r10,1076(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 1076);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,564(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 564);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267a5cc
	if (!ctx.cr6.eq) goto loc_8267A5CC;
	// lwz r10,560(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// cmplwi cr6,r10,1184
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1184, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_8267A5CC:
	// ld r10,1056(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 1056);
	// lhz r9,1080(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 1080);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lhz r8,1084(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 1084);
	// lhz r7,1090(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 1090);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bne cr6,0x8267a614
	if (!ctx.cr6.eq) goto loc_8267A614;
	// lhz r11,1006(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 1006);
	// rlwinm. r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8267A614:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267D0B8) {
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
	ctx.lr = 0x8267D0C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8267d0f4
	if (ctx.cr6.eq) goto loc_8267D0F4;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8267D0E8:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// bdnz 0x8267d0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8267D0E8;
loc_8267D0F4:
	// addi r22,r25,40
	r22.s64 = r25.s64 + 40;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267D100;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r31
	r28.u64 = r31.u64;
	// ori r26,r11,65534
	r26.u64 = ctx.r11.u64 | 65534;
loc_8267D110:
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267d154
	if (ctx.cr0.eq) goto loc_8267D154;
	// subfic r11,r30,127
	ctx.xer.ca = r30.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - r30.u64;
	// rlwinm r27,r11,24,0,7
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
loc_8267D128:
	// subf r11,r29,r26
	ctx.r11.u64 = r26.u64 - r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | r27.u64;
	// bl 0x8267bde0
	ctx.lr = 0x8267D13C;
	sub_8267BDE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8267d1f0
	if (ctx.cr0.lt) goto loc_8267D1F0;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267d128
	if (ctx.cr6.lt) goto loc_8267D128;
loc_8267D154:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x8267d110
	if (ctx.cr6.lt) goto loc_8267D110;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8267d1ec
	if (ctx.cr6.eq) goto loc_8267D1EC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r25,592
	ctx.r3.s64 = r25.s64 + 592;
	// bl 0x82682780
	ctx.lr = 0x8267D178;
	sub_82682780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8267d18c
	if (!ctx.cr0.eq) goto loc_8267D18C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8267d1f0
	goto loc_8267D1F0;
loc_8267D18C:
	// li r30,0
	r30.s64 = 0;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_8267D194:
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267d1dc
	if (ctx.cr0.eq) goto loc_8267D1DC;
	// subfic r11,r30,-1
	ctx.xer.ca = r30.u32 <= 4294967295;
	ctx.r11.u64 = static_cast<uint64_t>(-1) - r30.u64;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// oris r28,r11,32768
	r28.u64 = ctx.r11.u64 | 2147483648;
loc_8267D1B0:
	// subf r11,r29,r26
	ctx.r11.u64 = r26.u64 - r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// or r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 | r28.u64;
	// bl 0x8267b208
	ctx.lr = 0x8267D1C4;
	sub_8267B208(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8267d1f0
	if (ctx.cr0.lt) goto loc_8267D1F0;
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8267d1b0
	if (ctx.cr6.lt) goto loc_8267D1B0;
loc_8267D1DC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x8267d194
	if (ctx.cr6.lt) goto loc_8267D194;
loc_8267D1EC:
	// li r31,0
	r31.s64 = 0;
loc_8267D1F0:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267D1F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82683F28) {
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
	// ld r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82683f64
	if (!ctx.cr6.gt) goto loc_82683F64;
	// bl 0x823ef900
	ctx.lr = 0x82683F54;
	sub_823EF900(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82682d50
	ctx.lr = 0x82683F64;
	sub_82682D50(ctx, base);
loc_82683F64:
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

DEFINE_REX_FUNC(sub_82685F48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_82685F4C:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
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
	// bne 0x82685f4c
	if (!ctx.cr0.eq) goto loc_82685F4C;
	// lwz r9,172(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// addi r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 + 172;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stw r10,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r9,172(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82685fc4
	if (ctx.cr6.eq) goto loc_82685FC4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82685fc4
	if (ctx.cr0.eq) goto loc_82685FC4;
	// lhz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
	// sth r9,72(r11)
	REX_STORE_U16(ctx.r11.u32 + 72, ctx.r9.u16);
	// stw r10,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_82685FC4:
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82685610
	sub_82685610(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8268A1E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268A1E8;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x827938a4
	ctx.lr = 0x8268A204;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268a288
	if (!ctx.cr6.gt) goto loc_8268A288;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r9,r29,-8
	ctx.r9.s64 = r29.s64 + -8;
loc_8268A220:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8268a274
	if (ctx.cr6.eq) goto loc_8268A274;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r7,-5413
	ctx.r7.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r6,-1057
	ctx.r6.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r7,r7,61168
	ctx.r7.u64 = ctx.r7.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r6,r6,221
	ctx.r6.u64 = ctx.r6.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8268a274
	if (ctx.cr6.eq) goto loc_8268A274;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8268A274:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268a220
	if (ctx.cr6.lt) goto loc_8268A220;
loc_8268A288:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x8268A290;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268F390) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,360
	ctx.r10.s64 = ctx.r3.s64 + 360;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268f3f0
	if (ctx.cr6.eq) goto loc_8268F3F0;
	// ld r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
loc_8268F3B0:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x8268f3d0
	if (ctx.cr6.lt) goto loc_8268F3D0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268f3b0
	if (!ctx.cr6.eq) goto loc_8268F3B0;
loc_8268F3D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8268f414
	if (!ctx.cr6.eq) goto loc_8268F414;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268f3f0
	if (ctx.cr6.eq) goto loc_8268F3F0;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8268f450
	if (ctx.cr6.eq) goto loc_8268F450;
loc_8268F3F0:
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268f408
	if (ctx.cr6.eq) goto loc_8268F408;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x8268f40c
	goto loc_8268F40C;
loc_8268F408:
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_8268F40C:
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_8268F414:
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8268f450
	if (ctx.cr6.eq) goto loc_8268F450;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8268f440
	if (!ctx.cr6.eq) goto loc_8268F440;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8268f40c
	goto loc_8268F40C;
loc_8268F440:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_8268F450:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82696100) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x82696108;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca8
	ctx.lr = 0x82696110;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lfs f0,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f2,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f2.f64, ctx.f0.f64)));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82696144
	if (!ctx.cr6.gt) goto loc_82696144;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82696144:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(r31.s32, 8, ctx.xer);
	// bge cr6,0x8269618c
	if (!ctx.cr6.lt) goto loc_8269618C;
	// li r31,8
	r31.s64 = 8;
loc_8269618C:
	// cmpwi cr6,r25,160
	ctx.cr6.compare<int32_t>(r25.s32, 160, ctx.xer);
	// ble cr6,0x82696198
	if (!ctx.cr6.gt) goto loc_82696198;
	// li r25,160
	r25.s64 = 160;
loc_82696198:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	r26.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// lfs f31,-13628(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -13628);
	f31.f64 = double(temp.f32);
	// fmr f28,f0
	f28.f64 = ctx.f0.f64;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// subf r29,r31,r24
	r29.u64 = r24.u64 - r31.u64;
	// fmr f29,f0
	f29.f64 = ctx.f0.f64;
loc_826961C8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826955c0
	ctx.lr = 0x826961D8;
	sub_826955C0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x826961f0
	if (!ctx.cr6.gt) goto loc_826961F0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// fmr f29,f30
	f29.f64 = f30.f64;
	// b 0x82696200
	goto loc_82696200;
loc_826961F0:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82696200
	if (!ctx.cr6.eq) goto loc_82696200;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
loc_82696200:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// ble cr6,0x826961c8
	if (!ctx.cr6.gt) goto loc_826961C8;
	// add r30,r26,r31
	r30.u64 = r26.u64 + r31.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// ble cr6,0x82696260
	if (!ctx.cr6.gt) goto loc_82696260;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(r30.s32, r25.s32, ctx.xer);
	// bge cr6,0x82696260
	if (!ctx.cr6.lt) goto loc_82696260;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82696980
	ctx.lr = 0x82696244;
	sub_82696980(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x82696278
	goto loc_82696278;
loc_82696260:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// stfs f31,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
loc_82696278:
	// subf r31,r30,r24
	r31.u64 = r24.u64 - r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826955c0
	ctx.lr = 0x8269628C;
	sub_826955C0(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + r27.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x826955c0
	ctx.lr = 0x826962A4;
	sub_826955C0(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f0,3784(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3784);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f30.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf4
	ctx.lr = 0x826962D4;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826A0490) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,25720
	r30.s64 = ctx.r11.s64 + 25720;
	// lfd f0,32(r30)
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 32);
	// fmul f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 * ctx.f1.f64;
	// bl 0x826ab450
	ctx.lr = 0x826A04C8;
	sub_826AB450(ctx, base);
	// lfd f0,40(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsub f0,f0,f1,f31
	ctx.f0.f64 = -std::fma(ctx.f0.f64, ctx.f1.f64, -f31.f64);
	// lfd f13,48(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 48);
	// lfd f11,64(r30)
	ctx.f11.u64 = REX_LOAD_U64(r30.u32 + 64);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lfd f12,72(r30)
	ctx.f12.u64 = REX_LOAD_U64(r30.u32 + 72);
	// lfd f10,96(r30)
	ctx.f10.u64 = REX_LOAD_U64(r30.u32 + 96);
	// lfd f9,88(r30)
	ctx.f9.u64 = REX_LOAD_U64(r30.u32 + 88);
	// lfd f8,56(r30)
	ctx.f8.u64 = REX_LOAD_U64(r30.u32 + 56);
	// lfd f7,80(r30)
	ctx.f7.u64 = REX_LOAD_U64(r30.u32 + 80);
	// lfd f6,32424(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// fnmsub f0,f13,f1,f0
	ctx.f0.f64 = -std::fma(ctx.f13.f64, ctx.f1.f64, -ctx.f0.f64);
	// fmul f13,f0,f0
	ctx.f13.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fmadd f12,f12,f13,f11
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f11.f64);
	// fmadd f11,f10,f13,f9
	ctx.f11.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64);
	// fmadd f12,f12,f13,f8
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f8.f64);
	// fmadd f13,f11,f13,f7
	ctx.f13.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f7.f64);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fadd f31,f0,f6
	f31.f64 = ctx.f0.f64 + ctx.f6.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826ab098
	ctx.lr = 0x826A0528;
	sub_826AB098(ctx, base);
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f30.f64) ? int64_t(0x80000000U) : (f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
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

DEFINE_REX_FUNC(__savevmx_66) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
	PPCVRegister v69{};
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
	// li r11,-992
	ctx.r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B4158) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823efab8
	ctx.lr = 0x826B4174;
	sub_823EFAB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793c64
	ctx.lr = 0x826B417C;
	__imp__ExTerminateThread(ctx, base);
}

DEFINE_REX_FUNC(sub_826B58B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826B6200) {
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
	// bl 0x826bc368
	ctx.lr = 0x826B6218;
	sub_826BC368(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lfs f0,32352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32352);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
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

DEFINE_REX_FUNC(sub_826B85FC) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B8778) {
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
	ctx.lr = 0x826B8780;
	// addi r31,r1,-304
	r31.s64 = ctx.r1.s64 + -304;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r30,r27,208
	r30.s64 = r27.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B87AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// bl 0x826c09f0
	ctx.lr = 0x826B87C0;
	sub_826C09F0(ctx, base);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// ori r18,r9,16389
	r18.u64 = ctx.r9.u64 | 16389;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r18
	ctx.r11.u64 = ctx.r6.u64 & r18.u64;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// blt cr6,0x826b8804
	if (ctx.cr6.lt) goto loc_826B8804;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b8804
	if (!ctx.cr6.eq) goto loc_826B8804;
	// lis r19,-32768
	r19.s64 = -2147483648;
	// ori r19,r19,16387
	r19.u64 = r19.u64 | 16387;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x826b8850
	goto loc_826B8850;
loc_826B8804:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x826b8850
	if (ctx.cr6.lt) goto loc_826B8850;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r9,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826B882C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r5,r6,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,52(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B8850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8850:
	// stw r29,88(r31)
	REX_STORE_U32(r31.u32 + 88, r29.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x826b88a0
	if (ctx.cr6.lt) goto loc_826B88A0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// bl 0x826c0a18
	ctx.lr = 0x826B8868;
	sub_826C0A18(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r9,r18
	r19.u64 = ctx.r9.u64 & r18.u64;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x826b88a0
	if (ctx.cr6.lt) goto loc_826B88A0;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826b88a4
	if (!ctx.cr6.eq) goto loc_826B88A4;
	// lis r19,-32768
	r19.s64 = -2147483648;
	// ori r19,r19,16387
	r19.u64 = r19.u64 | 16387;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// b 0x826b8b1c
	goto loc_826B8B1C;
loc_826B88A0:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_826B88A4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x826b8b1c
	if (ctx.cr6.lt) goto loc_826B8B1C;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r23,r10,27916
	r23.s64 = ctx.r10.s64 + 27916;
	// addi r25,r9,27884
	r25.s64 = ctx.r9.s64 + 27884;
	// addi r22,r8,27860
	r22.s64 = ctx.r8.s64 + 27860;
	// addi r21,r7,27840
	r21.s64 = ctx.r7.s64 + 27840;
	// addi r20,r6,27812
	r20.s64 = ctx.r6.s64 + 27812;
	// addi r24,r11,27780
	r24.s64 = ctx.r11.s64 + 27780;
loc_826B88E0:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r26,r5,16
	r26.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826b8ad4
	if (!ctx.cr6.lt) goto loc_826B8AD4;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b8a2c
	if (!ctx.cr6.eq) goto loc_826B8A2C;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82791ab0
	ctx.lr = 0x826B8928;
	sub_82791AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8954
	if (!ctx.cr6.eq) goto loc_826B8954;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B8950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b8ac0
	goto loc_826B8AC0;
loc_826B8954:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82791ab0
	ctx.lr = 0x826B8964;
	sub_82791AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8990
	if (!ctx.cr6.eq) goto loc_826B8990;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B898C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b8ac0
	goto loc_826B8AC0;
loc_826B8990:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82791ab0
	ctx.lr = 0x826B89A0;
	sub_82791AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b89cc
	if (!ctx.cr6.eq) goto loc_826B89CC;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B89C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b8ac0
	goto loc_826B8AC0;
loc_826B89CC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82791ab0
	ctx.lr = 0x826B89DC;
	sub_82791AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8ac0
	if (!ctx.cr6.eq) goto loc_826B8AC0;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r29,r27,208
	r29.s64 = r27.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B89FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x826a5ac8
	ctx.lr = 0x826B8A00;
	sub_826A5AC8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8ac0
	if (!ctx.cr6.eq) goto loc_826B8AC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r10,10(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 10);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B8A28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b8ac0
	goto loc_826B8AC0;
loc_826B8A2C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826b8ac0
	if (!ctx.cr6.eq) goto loc_826B8AC0;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82791ab0
	ctx.lr = 0x826B8A48;
	sub_82791AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8a68
	if (!ctx.cr6.eq) goto loc_826B8A68;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x826b8ab8
	goto loc_826B8AB8;
loc_826B8A68:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82791ab0
	ctx.lr = 0x826B8A78;
	sub_82791AB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826b8ac0
	if (!ctx.cr6.eq) goto loc_826B8AC0;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r29,r27,208
	r29.s64 = r27.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b8ac0
	if (!ctx.cr6.eq) goto loc_826B8AC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_826B8AB8:
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826B8AC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8AC0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x826b88e0
	goto loc_826B88E0;
loc_826B8AD4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x826b8b1c
	if (ctx.cr6.lt) goto loc_826B8B1C;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// bl 0x826c0930
	ctx.lr = 0x826B8AE8;
	sub_826C0930(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r9,r18
	r19.u64 = ctx.r9.u64 & r18.u64;
	// stw r19,80(r31)
	REX_STORE_U32(r31.u32 + 80, r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// blt cr6,0x826b8b1c
	if (ctx.cr6.lt) goto loc_826B8B1C;
	// lwz r11,208(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 208);
	// addi r3,r27,208
	ctx.r3.s64 = r27.s64 + 208;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B8B1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B8B1C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b8b38
	goto loc_826B8B38;
loc_826B8B38:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r31,304
	ctx.r1.s64 = r31.s64 + 304;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_826D9F28) {
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
	ctx.lr = 0x826D9F30;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// lwz r30,28(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r23,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// li r27,2
	r27.s64 = 2;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// li r26,3
	r26.s64 = 3;
	// addi r29,r11,31000
	r29.s64 = ctx.r11.s64 + 31000;
loc_826D9F64:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826da104
	if (ctx.cr6.gt) goto loc_826DA104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826d9f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D9F84;
	// bdzf 4*cr6+eq,0x826d9fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826D9FB0;
	// bne cr6,0x826da000
	if (!ctx.cr6.eq) goto loc_826DA000;
loc_826D9F84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d9cd0
	ctx.lr = 0x826D9F8C;
	sub_826D9CD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r27,80(r30)
	REX_STORE_U32(r30.u32 + 80, r27.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r9.u64);
	// b 0x826da114
	goto loc_826DA114;
loc_826D9FB0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d9e48
	ctx.lr = 0x826D9FC0;
	sub_826D9E48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r30,84
	ctx.r9.s64 = r30.s64 + 84;
	// stw r26,80(r30)
	REX_STORE_U32(r30.u32 + 80, r26.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// std r10,104(r30)
	REX_STORE_U64(r30.u32 + 104, ctx.r10.u64);
	// stw r8,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r8.u32);
	// stw r7,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r7.u32);
	// stw r6,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r6.u32);
	// stw r5,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r5.u32);
	// b 0x826da114
	goto loc_826DA114;
loc_826DA000:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,88(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r8,r30,84
	ctx.r8.s64 = r30.s64 + 84;
	// lwz r6,92(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 92);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r5,96(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 96);
	// ld r4,104(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 104);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r23,112(r30)
	REX_STORE_U32(r30.u32 + 112, r23.u32);
	// stw r5,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_826DA038:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 + r29.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_826DA050:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826da070
	if (!ctx.cr0.eq) goto loc_826DA070;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826da050
	if (!ctx.cr6.eq) goto loc_826DA050;
loc_826DA070:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826da08c
	if (ctx.cr6.eq) goto loc_826DA08C;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// blt cr6,0x826da038
	if (ctx.cr6.lt) goto loc_826DA038;
	// b 0x826da098
	goto loc_826DA098;
loc_826DA08C:
	// addi r11,r29,16
	ctx.r11.s64 = r29.s64 + 16;
	// lwzx r10,r6,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
loc_826DA098:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826da0c4
	if (ctx.cr6.eq) goto loc_826DA0C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826DA0B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// stw r27,80(r30)
	REX_STORE_U32(r30.u32 + 80, r27.u32);
	// stw r23,112(r30)
	REX_STORE_U32(r30.u32 + 112, r23.u32);
	// b 0x826da114
	goto loc_826DA114;
loc_826DA0C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r31,r4,-24
	r31.s64 = ctx.r4.s64 + -24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DA0E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 8);
	// clrldi r10,r31,32
	ctx.r10.u64 = r31.u64 & 0xFFFFFFFF;
	// stw r27,80(r30)
	REX_STORE_U32(r30.u32 + 80, r27.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,112(r30)
	REX_STORE_U32(r30.u32 + 112, r23.u32);
	// std r11,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r11.u64);
	// b 0x826da114
	goto loc_826DA114;
loc_826DA104:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826da114
	if (ctx.cr6.eq) goto loc_826DA114;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826da128
	if (!ctx.cr6.eq) goto loc_826DA128;
loc_826DA114:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// ld r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpld cr6,r10,r9
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x826d9f64
	if (ctx.cr6.lt) goto loc_826D9F64;
loc_826DA128:
	// ld r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 16);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// std r10,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r10.u64);
	// std r10,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r10.u64);
	// std r10,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r10.u64);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826da160
	if (ctx.cr6.eq) goto loc_826DA160;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// mulld r9,r7,r8
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r6,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r6.u64);
loc_826DA160:
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826da184
	if (ctx.cr6.eq) goto loc_826DA184;
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r9,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r9.u64);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subfic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r7.u64 = static_cast<uint64_t>(-1) - ctx.r8.u64;
	// std r7,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r7.u64);
loc_826DA184:
	// ld r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r8,r10,-50
	ctx.r8.s64 = ctx.r10.s64 + -50;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x826da4d4
	if (!ctx.cr6.eq) goto loc_826DA4D4;
	// lhz r10,42(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826da4d4
	if (!ctx.cr6.eq) goto loc_826DA4D4;
	// lhz r10,66(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 66);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x826da4d4
	if (!ctx.cr6.eq) goto loc_826DA4D4;
	// lhz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 44);
	// lhz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826da4d4
	if (!ctx.cr6.eq) goto loc_826DA4D4;
	// li r31,1
	r31.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r31,72(r30)
	REX_STORE_U32(r30.u32 + 72, r31.u32);
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// stw r10,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// lhz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// ori r25,r9,22
	r25.u64 = ctx.r9.u64 | 22;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x826da344
	if (!ctx.cr6.gt) goto loc_826DA344;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826c6d18
	ctx.lr = 0x826DA1F8;
	sub_826C6D18(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x826da328
	if (ctx.cr6.eq) goto loc_826DA328;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
loc_826DA208:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826da30c
	if (ctx.cr6.eq) goto loc_826DA30C;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826da30c
	if (!ctx.cr6.eq) goto loc_826DA30C;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6d18
	ctx.lr = 0x826DA244;
	sub_826C6D18(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// beq cr6,0x826da2ec
	if (ctx.cr6.eq) goto loc_826DA2EC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
loc_826DA254:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// addi r5,r11,21
	ctx.r5.s64 = ctx.r11.s64 + 21;
	// rlwinm r4,r6,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r4.u64;
	// slw r8,r31,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r3,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826da2bc
	if (ctx.cr6.eq) goto loc_826DA2BC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6d80
	ctx.lr = 0x826DA2B0;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x826da254
	if (!ctx.cr6.eq) goto loc_826DA254;
	// b 0x826da2ec
	goto loc_826DA2EC;
loc_826DA2BC:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r8,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r8.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ld r6,16(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// std r6,56(r5)
	REX_STORE_U64(ctx.r5.u32 + 56, ctx.r6.u64);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,68(r4)
	REX_STORE_U32(ctx.r4.u32 + 68, r31.u32);
loc_826DA2EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6de8
	ctx.lr = 0x826DA2FC;
	sub_826C6DE8(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,68(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826da4c8
	if (ctx.cr6.eq) goto loc_826DA4C8;
loc_826DA30C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826c6d80
	ctx.lr = 0x826DA320;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x826da208
	if (!ctx.cr6.eq) goto loc_826DA208;
loc_826DA328:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x826c6de8
	ctx.lr = 0x826DA334;
	sub_826C6DE8(ctx, base);
	// subf r11,r25,r3
	ctx.r11.u64 = ctx.r3.u64 - r25.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_826DA344:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826da4c0
	if (ctx.cr6.eq) goto loc_826DA4C0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x826c6d18
	ctx.lr = 0x826DA368;
	sub_826C6D18(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r26,4(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r24,0(r10)
	r24.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// beq cr6,0x826da4a0
	if (ctx.cr6.eq) goto loc_826DA4A0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
loc_826DA388:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// clrlwi r27,r24,16
	r27.u64 = r24.u32 & 0xFFFF;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x826da480
	if (!ctx.cr6.gt) goto loc_826DA480;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_826DA3A0:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x826da3c8
	if (ctx.cr6.eq) goto loc_826DA3C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826da470
	if (!ctx.cr6.eq) goto loc_826DA470;
loc_826DA3C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826da448
	if (!ctx.cr6.eq) goto loc_826DA448;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826DA3EC;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r31,r27,2,0,29
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// stw r23,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r23.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,224(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x826c6880
	ctx.lr = 0x826DA424;
	sub_826C6880(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826da4c0
	if (ctx.cr6.lt) goto loc_826DA4C0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x826a2e60
	ctx.lr = 0x826DA444;
	sub_826A2E60(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_826DA448:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r29,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r29.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,28(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
loc_826DA470:
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x826da3a0
	if (ctx.cr6.lt) goto loc_826DA3A0;
loc_826DA480:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6d80
	ctx.lr = 0x826DA498;
	sub_826C6D80(ctx, base);
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// bne cr6,0x826da388
	if (!ctx.cr6.eq) goto loc_826DA388;
loc_826DA4A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6de8
	ctx.lr = 0x826DA4B0;
	sub_826C6DE8(ctx, base);
	// subf r10,r25,r3
	ctx.r10.u64 = ctx.r3.u64 - r25.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_826DA4C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
loc_826DA4C8:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x826c6de8
	ctx.lr = 0x826DA4D4;
	sub_826C6DE8(ctx, base);
loc_826DA4D4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82711370) {
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
	// lwz r11,3660(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3660);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827113e8
	if (!ctx.cr6.eq) goto loc_827113E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x82725c28
	ctx.lr = 0x8271139C;
	sub_82725C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// slw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x827113e8
	if (!ctx.cr6.eq) goto loc_827113E8;
	// lwz r11,3580(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3580);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x82725c58
	ctx.lr = 0x827113C8;
	sub_82725C58(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
loc_827113E8:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82715718) {
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
	ctx.lr = 0x82715720;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,452(r3)
	REX_STORE_U32(ctx.r3.u32 + 452, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r11,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8275ef98
	ctx.lr = 0x82715754;
	sub_8275EF98(ctx, base);
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827158a4
	if (ctx.cr6.eq) goto loc_827158A4;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,-26304
	r29.s64 = ctx.r11.s64 + -26304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r26,r10,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r29
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r29.u32);
	// bl 0x82725f80
	ctx.lr = 0x82715784;
	sub_82725F80(ctx, base);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// li r27,3
	r27.s64 = 3;
	// lbzx r11,r26,r9
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8271579c
	if (!ctx.cr6.eq) goto loc_8271579C;
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
loc_8271579C:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827157b8
	if (ctx.cr6.eq) goto loc_827157B8;
loc_827157AC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_827157B8:
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,244(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 244);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x827157e4
	if (!ctx.cr6.gt) goto loc_827157E4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
	// b 0x82715800
	goto loc_82715800;
loc_827157E4:
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x827157fc
	if (!ctx.cr6.lt) goto loc_827157FC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
	// b 0x82715800
	goto loc_82715800;
loc_827157FC:
	// stb r11,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r11.u8);
loc_82715800:
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// rldicl r10,r11,13,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 13) & 0x1FFF;
	// rlwinm r26,r10,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r29
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r29.u32);
	// bl 0x82725f80
	ctx.lr = 0x8271581C;
	sub_82725F80(ctx, base);
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// lbzx r11,r26,r9
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82715830
	if (!ctx.cr6.eq) goto loc_82715830;
	// stw r27,20(r30)
	REX_STORE_U32(r30.u32 + 20, r27.u32);
loc_82715830:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827157ac
	if (!ctx.cr6.eq) goto loc_827157AC;
	// lbz r9,81(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,244(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 244);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82715874
	if (!ctx.cr6.gt) goto loc_82715874;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82715874:
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82715894
	if (!ctx.cr6.lt) goto loc_82715894;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82715894:
	// stb r11,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_827158A4:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82712578
	ctx.lr = 0x827158B0;
	sub_82712578(ctx, base);
	// lbz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// lbz r7,85(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r6,81(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,3584(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3584);
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stb r5,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82711400
	ctx.lr = 0x827158DC;
	sub_82711400(ctx, base);
	// lbz r8,82(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r8,0(r28)
	REX_STORE_U8(r28.u32 + 0, ctx.r8.u8);
	// lbz r7,83(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// stb r7,1(r28)
	REX_STORE_U8(r28.u32 + 1, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82722A30) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// bl 0x827708a8
	ctx.lr = 0x82722A98;
	sub_827708A8(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x827707d8
	ctx.lr = 0x82722AA0;
	sub_827707D8(ctx, base);
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

DEFINE_REX_FUNC(sub_82723D60) {
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
	ctx.lr = 0x82723D68;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827241cc
	if (ctx.cr6.eq) goto loc_827241CC;
	// lwz r31,304(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827241cc
	if (ctx.cr6.eq) goto loc_827241CC;
	// bl 0x827234b8
	ctx.lr = 0x82723D88;
	sub_827234B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8272403c
	if (!ctx.cr6.eq) goto loc_8272403C;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r30,r7,22857
	r30.u64 = ctx.r7.u64 | 22857;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// lwz r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// li r24,0
	r24.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x82723ed0
	if (ctx.cr6.eq) goto loc_82723ED0;
	// lis r30,12338
	r30.s64 = 808583168;
	// ori r30,r30,13385
	r30.u64 = r30.u64 | 13385;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x82723ed0
	if (ctx.cr6.eq) goto loc_82723ED0;
	// lis r30,12849
	r30.s64 = 842072064;
	// ori r30,r30,22105
	r30.u64 = r30.u64 | 22105;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x82723ed0
	if (ctx.cr6.eq) goto loc_82723ED0;
	// lis r30,12593
	r30.s64 = 825294848;
	// ori r30,r30,13392
	r30.u64 = r30.u64 | 13392;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// bne cr6,0x82723f9c
	if (!ctx.cr6.eq) goto loc_82723F9C;
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r9,40(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// addze r24,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	r24.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r21,r24
	r21.u64 = r24.u64;
	// addze r29,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r29.s64 = temp.s64;
	// mr r22,r29
	r22.u64 = r29.u64;
	// mr r20,r29
	r20.u64 = r29.u64;
	// bne cr6,0x82723e88
	if (!ctx.cr6.eq) goto loc_82723E88;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r5,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 2;
	// mullw r3,r6,r11
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// add r30,r8,r9
	r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r7,r30,r6
	ctx.r7.u64 = r30.u64 + ctx.r6.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// b 0x82723f9c
	goto loc_82723F9C;
loc_82723E88:
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// add r30,r9,r6
	r30.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r30,r7
	ctx.r7.u64 = r30.u64 + ctx.r7.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// b 0x82723f9c
	goto loc_82723F9C;
loc_82723ED0:
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r9,40(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addze r24,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	r24.s64 = temp.s64;
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r21,r24
	r21.u64 = r24.u64;
	// addze r29,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r29.s64 = temp.s64;
	// srawi r7,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r7.s64 = r29.s32 >> 1;
	// addze r22,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r22.s64 = temp.s64;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r20,r22
	r20.u64 = r22.u64;
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bne cr6,0x82723f5c
	if (!ctx.cr6.eq) goto loc_82723F5C;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r3.s64 = r30.s32 >> 2;
	// mullw r30,r5,r11
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r30,r6
	ctx.r9.u64 = r30.u64 + ctx.r6.u64;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// b 0x82723f98
	goto loc_82723F98;
loc_82723F5C:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r3.s64 = r30.s32 >> 2;
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r30,r8
	ctx.r9.u64 = r30.u64 + ctx.r8.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_82723F98:
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_82723F9C:
	// add r30,r9,r4
	r30.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r28,r7,r4
	r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r26,r6,r4
	r26.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r27,r11,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x82723fd8
	if (!ctx.cr6.gt) goto loc_82723FD8;
loc_82723FB8:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82723FC8;
	sub_826A1E70(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r30,r27,r30
	r30.u64 = r27.u64 + r30.u64;
	// add r31,r23,r31
	r31.u64 = r23.u64 + r31.u64;
	// bne 0x82723fb8
	if (!ctx.cr0.eq) goto loc_82723FB8;
loc_82723FD8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82724004
	if (!ctx.cr6.gt) goto loc_82724004;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82723FE4:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82723FF4;
	sub_826A1E70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r28,r25,r28
	r28.u64 = r25.u64 + r28.u64;
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// bne 0x82723fe4
	if (!ctx.cr0.eq) goto loc_82723FE4;
loc_82724004:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82724194
	if (!ctx.cr6.gt) goto loc_82724194;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82724010:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82724020;
	sub_826A1E70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r26,r25,r26
	r26.u64 = r25.u64 + r26.u64;
	// add r31,r21,r31
	r31.u64 = r21.u64 + r31.u64;
	// bne 0x82724010
	if (!ctx.cr0.eq) goto loc_82724010;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_8272403C:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x827241a0
	if (!ctx.cr6.eq) goto loc_827241A0;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r10,36(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lhz r11,14(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// lwz r31,16(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r30,r10,31
	r30.s64 = ctx.r10.s64 + 31;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r30,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// srawi r3,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 3;
	// rlwinm r30,r10,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r3.s64 = r30.s32 >> 3;
	// rlwinm r27,r10,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r28,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r28.s64 = temp.s64;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r30.s64 = temp.s64;
	// bgt cr6,0x827240b0
	if (ctx.cr6.gt) goto loc_827240B0;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827240b0
	if (!ctx.cr6.gt) goto loc_827240B0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_827240B0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82724114
	if (!ctx.cr6.eq) goto loc_82724114;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x827240dc
	if (!ctx.cr6.eq) goto loc_827240DC;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x82724164
	goto loc_82724164;
loc_827240DC:
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// xor r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// mullw r7,r3,r11
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82724168
	goto loc_82724168;
loc_82724114:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82724130
	if (!ctx.cr6.eq) goto loc_82724130;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// b 0x82724158
	goto loc_82724158;
loc_82724130:
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subfic r8,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82724158:
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
loc_82724164:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82724168:
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x82724194
	if (!ctx.cr6.gt) goto loc_82724194;
loc_82724174:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82724184;
	sub_826A1E70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// bne 0x82724174
	if (!ctx.cr0.eq) goto loc_82724174;
loc_82724194:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_827241A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827241c0
	if (!ctx.cr6.eq) goto loc_827241C0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27148
	ctx.r3.s64 = ctx.r11.s64 + 27148;
	// bl 0x82791b60
	ctx.lr = 0x827241B4;
	sub_82791B60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_827241C0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// bl 0x82791b60
	ctx.lr = 0x827241CC;
	sub_82791B60(ctx, base);
loc_827241CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_827461C8) {
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
	ctx.lr = 0x827461D0;
	// stwu r1,-1440(r1)
	ea = -1440 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// lwz r6,328(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// mr r17,r9
	r17.u64 = ctx.r9.u64;
	// lwz r11,20624(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20624);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r9,1524(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1524);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lwz r14,208(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r19,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	r19.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// lwz r8,20628(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20628);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,204(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lbz r7,4(r15)
	ctx.r7.u64 = REX_LOAD_U8(r15.u32 + 4);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// mullw r9,r4,r6
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lwz r6,0(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lwz r30,3756(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// lwz r29,3784(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,6576(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 6576);
	// lwz r21,336(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 336);
	// lwz r28,3760(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// add r24,r7,r24
	r24.u64 = ctx.r7.u64 + r24.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,3764(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 3764);
	// mullw r4,r4,r14
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r14.s32);
	// lwz r26,3788(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 3788);
	// lwz r25,3792(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// lwz r20,1768(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r14,r6,12,30,31
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r30,r9
	ctx.r8.u64 = r30.u64 + ctx.r9.u64;
	// add r9,r29,r9
	ctx.r9.u64 = r29.u64 + ctx.r9.u64;
	// add r30,r8,r10
	r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// add r26,r26,r11
	r26.u64 = r26.u64 + ctx.r11.u64;
	// add r25,r25,r11
	r25.u64 = r25.u64 + ctx.r11.u64;
	// beq cr6,0x827462b4
	if (ctx.cr6.eq) goto loc_827462B4;
	// rlwinm r21,r6,8,29,31
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0x7;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
loc_827462B4:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827462d8
	if (ctx.cr6.eq) goto loc_827462D8;
	// rlwinm r11,r6,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x3;
	// addi r11,r11,732
	ctx.r11.s64 = ctx.r11.s64 + 732;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// b 0x827462e0
	goto loc_827462E0;
loc_827462D8:
	// addi r11,r31,2904
	ctx.r11.s64 = r31.s64 + 2904;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_827462E0:
	// rlwinm r11,r6,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8274642c
	if (ctx.cr6.eq) goto loc_8274642C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82746434
	if (ctx.cr6.eq) goto loc_82746434;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82746304
	if (ctx.cr6.eq) goto loc_82746304;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x827466d0
	if (!ctx.cr6.eq) goto loc_827466D0;
loc_82746304:
	// lwz r24,1532(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwz r21,1540(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// bne cr6,0x8274633c
	if (!ctx.cr6.eq) goto loc_8274633C;
	// bl 0x82760fd0
	ctx.lr = 0x82746338;
	sub_82760FD0(ctx, base);
	// b 0x82746340
	goto loc_82746340;
loc_8274633C:
	// bl 0x82760f08
	ctx.lr = 0x82746340;
	sub_82760F08(ctx, base);
loc_82746340:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x82746360
	if (!ctx.cr6.eq) goto loc_82746360;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x8274636c
	goto loc_8274636C;
loc_82746360:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_8274636C:
	// lwz r11,3928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82761358
	ctx.lr = 0x82746398;
	sub_82761358(ctx, base);
	// lwz r10,22408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827463ac
	if (ctx.cr6.eq) goto loc_827463AC;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
loc_827463AC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761850
	ctx.lr = 0x827463BC;
	sub_82761850(ctx, base);
	// lwz r11,22408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827463e0
	if (ctx.cr6.eq) goto loc_827463E0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827610b0
	ctx.lr = 0x827463E0;
	sub_827610B0(ctx, base);
loc_827463E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x82746404;
	sub_82761270(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x82746428;
	sub_82761270(ctx, base);
	// b 0x827466c8
	goto loc_827466C8;
loc_8274642C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82746458
	if (!ctx.cr6.eq) goto loc_82746458;
loc_82746434:
	// lwz r11,1548(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1548);
	// lwz r24,1532(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// lwz r21,1540(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r10,1556(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1556);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// b 0x827464a0
	goto loc_827464A0;
loc_82746458:
	// lwz r11,3984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3984);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lwz r5,1540(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1540);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r4,1532(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1532);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827616d8
	ctx.lr = 0x82746498;
	sub_827616D8(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_827464A0:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x827464e0
	if (!ctx.cr6.eq) goto loc_827464E0;
	// bl 0x82760fd0
	ctx.lr = 0x827464C4;
	sub_82760FD0(ctx, base);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82760fd0
	ctx.lr = 0x827464DC;
	sub_82760FD0(ctx, base);
	// b 0x827464fc
	goto loc_827464FC;
loc_827464E0:
	// bl 0x82760f08
	ctx.lr = 0x827464E4;
	sub_82760F08(ctx, base);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82760f08
	ctx.lr = 0x827464FC;
	sub_82760F08(ctx, base);
loc_827464FC:
	// lwz r11,3928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82761358
	ctx.lr = 0x8274652C;
	sub_82761358(ctx, base);
	// lwz r11,3928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,1024
	ctx.r6.s64 = ctx.r1.s64 + 1024;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82761358
	ctx.lr = 0x8274655C;
	sub_82761358(ctx, base);
	// lwz r11,3232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3232);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// li r6,16
	ctx.r6.s64 = 16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,1024
	ctx.r5.s64 = ctx.r1.s64 + 1024;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bctrl 
	ctx.lr = 0x82746588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,22408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8274659c
	if (ctx.cr6.eq) goto loc_8274659C;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
loc_8274659C:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761850
	ctx.lr = 0x827465AC;
	sub_82761850(ctx, base);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761850
	ctx.lr = 0x827465BC;
	sub_82761850(ctx, base);
	// lwz r11,22408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827465e0
	if (ctx.cr6.eq) goto loc_827465E0;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827610b0
	ctx.lr = 0x827465E0;
	sub_827610B0(ctx, base);
loc_827465E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x82746604;
	sub_82761270(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x82746628;
	sub_82761270(ctx, base);
	// lwz r11,3232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3232);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bctrl 
	ctx.lr = 0x82746654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x82746678;
	sub_82761270(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82761270
	ctx.lr = 0x8274669C;
	sub_82761270(ctx, base);
	// lwz r11,3232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3232);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// li r6,8
	ctx.r6.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bctrl 
	ctx.lr = 0x827466C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827466C8:
	// lwz r21,120(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r24,112(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_827466D0:
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// li r25,0
	r25.s64 = 0;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r22,r11,-30600
	r22.s64 = ctx.r11.s64 + -30600;
	// addi r23,r1,768
	r23.s64 = ctx.r1.s64 + 768;
	// mr r27,r25
	r27.u64 = r25.u64;
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// ori r26,r10,32768
	r26.u64 = ctx.r10.u64 | 32768;
loc_827466F8:
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// lbzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827470e4
	if (ctx.cr6.eq) goto loc_827470E4;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8274686c
	if (ctx.cr6.eq) goto loc_8274686C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274686c
	if (!ctx.cr6.eq) goto loc_8274686C;
	// lwz r10,2580(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2580);
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r29,r5
	r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82746814
	if (ctx.cr6.lt) goto loc_82746814;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x8274680c
	if (!ctx.cr6.lt) goto loc_8274680C;
loc_82746774:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827467a0
	if (ctx.cr6.lt) goto loc_827467A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725d78
	ctx.lr = 0x82746790;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82746774
	if (ctx.cr6.eq) goto loc_82746774;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8274684c
	goto loc_8274684C;
loc_827467A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
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
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r5.u64);
loc_8274680C:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x8274684c
	goto loc_8274684C;
loc_82746814:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725f80
	ctx.lr = 0x8274681C;
	sub_82725F80(ctx, base);
loc_8274681C:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82725f80
	ctx.lr = 0x82746834;
	sub_82725F80(ctx, base);
	// add r10,r29,r26
	ctx.r10.u64 = r29.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8274681c
	if (ctx.cr6.lt) goto loc_8274681C;
loc_8274684C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82747400
	if (!ctx.cr6.eq) goto loc_82747400;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r22,-32
	ctx.r10.s64 = r22.s64 + -32;
	// lwzx r14,r11,r22
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// lwzx r21,r11,r10
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8274686C:
	// add r11,r27,r15
	ctx.r11.u64 = r27.u64 + r15.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stb r21,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, r21.u8);
	// bne cr6,0x827468bc
	if (!ctx.cr6.eq) goto loc_827468BC;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r20,1768(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,1832(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827468A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r6,1940(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1940);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x82746f30
	goto loc_82746F30;
loc_827468BC:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(r21.s32, 1, ctx.xer);
	// bne cr6,0x82746aa8
	if (!ctx.cr6.eq) goto loc_82746AA8;
	// lwz r20,1764(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r29,1
	r29.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// bl 0x826a2e60
	ctx.lr = 0x827468E0;
	sub_826A2E60(ctx, base);
	// lwz r11,3396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82746980
	if (ctx.cr6.eq) goto loc_82746980;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274696c
	if (!ctx.cr6.eq) goto loc_8274696C;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8274696c
	if (!ctx.cr6.eq) goto loc_8274696C;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8274692c
	if (!ctx.cr0.lt) goto loc_8274692C;
	// bl 0x82725e38
	ctx.lr = 0x8274692C;
	sub_82725E38(ctx, base);
loc_8274692C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746a10
	if (!ctx.cr6.eq) goto loc_82746A10;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x8274695c
	if (!ctx.cr0.lt) goto loc_8274695C;
	// bl 0x82725e38
	ctx.lr = 0x8274695C;
	sub_82725E38(ctx, base);
loc_8274695C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746a0c
	if (!ctx.cr6.eq) goto loc_82746A0C;
	// mr r28,r25
	r28.u64 = r25.u64;
	// b 0x82746a10
	goto loc_82746A10;
loc_8274696C:
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// rlwinm r29,r14,0,30,30
	r29.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x2;
	// clrlwi r28,r14,31
	r28.u64 = r14.u32 & 0x1;
	// stbx r14,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, r14.u8);
	// b 0x82746a20
	goto loc_82746A20;
loc_82746980:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x827469a4
	if (ctx.cr6.eq) goto loc_827469A4;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r29,r9,0,30,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// clrlwi r28,r9,31
	r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82746a20
	goto loc_82746A20;
loc_827469A4:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827469cc
	if (!ctx.cr0.lt) goto loc_827469CC;
	// bl 0x82725e38
	ctx.lr = 0x827469CC;
	sub_82725E38(ctx, base);
loc_827469CC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746a10
	if (!ctx.cr6.eq) goto loc_82746A10;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x827469fc
	if (!ctx.cr0.lt) goto loc_827469FC;
	// bl 0x82725e38
	ctx.lr = 0x827469FC;
	sub_82725E38(ctx, base);
loc_827469FC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746a0c
	if (!ctx.cr6.eq) goto loc_82746A0C;
	// mr r28,r25
	r28.u64 = r25.u64;
	// b 0x82746a10
	goto loc_82746A10;
loc_82746A0C:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82746A10:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | r28.u64;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82746A20:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82746a6c
	if (ctx.cr6.eq) goto loc_82746A6C;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746A48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82746A6C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82746f3c
	if (ctx.cr6.eq) goto loc_82746F3C;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,1852(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3192);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82746f28
	goto loc_82746F28;
loc_82746AA8:
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// bne cr6,0x82746c94
	if (!ctx.cr6.eq) goto loc_82746C94;
	// lwz r20,1764(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r29,1
	r29.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// bl 0x826a2e60
	ctx.lr = 0x82746ACC;
	sub_826A2E60(ctx, base);
	// lwz r11,3396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82746b6c
	if (ctx.cr6.eq) goto loc_82746B6C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82746b58
	if (!ctx.cr6.eq) goto loc_82746B58;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82746b58
	if (!ctx.cr6.eq) goto loc_82746B58;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82746b18
	if (!ctx.cr0.lt) goto loc_82746B18;
	// bl 0x82725e38
	ctx.lr = 0x82746B18;
	sub_82725E38(ctx, base);
loc_82746B18:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746bfc
	if (!ctx.cr6.eq) goto loc_82746BFC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82746b48
	if (!ctx.cr0.lt) goto loc_82746B48;
	// bl 0x82725e38
	ctx.lr = 0x82746B48;
	sub_82725E38(ctx, base);
loc_82746B48:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746bf8
	if (!ctx.cr6.eq) goto loc_82746BF8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// b 0x82746bfc
	goto loc_82746BFC;
loc_82746B58:
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// rlwinm r29,r14,0,30,30
	r29.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 0) & 0x2;
	// clrlwi r28,r14,31
	r28.u64 = r14.u32 & 0x1;
	// stbx r14,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, r14.u8);
	// b 0x82746c0c
	goto loc_82746C0C;
loc_82746B6C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82746b90
	if (ctx.cr6.eq) goto loc_82746B90;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// rlwinm r9,r10,12,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// rlwinm r29,r9,0,30,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
	// clrlwi r28,r9,31
	r28.u64 = ctx.r9.u32 & 0x1;
	// b 0x82746c0c
	goto loc_82746C0C;
loc_82746B90:
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82746bb8
	if (!ctx.cr0.lt) goto loc_82746BB8;
	// bl 0x82725e38
	ctx.lr = 0x82746BB8;
	sub_82725E38(ctx, base);
loc_82746BB8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746bfc
	if (!ctx.cr6.eq) goto loc_82746BFC;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
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
	// bge 0x82746be8
	if (!ctx.cr0.lt) goto loc_82746BE8;
	// bl 0x82725e38
	ctx.lr = 0x82746BE8;
	sub_82725E38(ctx, base);
loc_82746BE8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x82746bf8
	if (!ctx.cr6.eq) goto loc_82746BF8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// b 0x82746bfc
	goto loc_82746BFC;
loc_82746BF8:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82746BFC:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | r28.u64;
	// stbx r9,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82746C0C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82746c58
	if (ctx.cr6.eq) goto loc_82746C58;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746C34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746C58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82746C58:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82746f3c
	if (ctx.cr6.eq) goto loc_82746F3C;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r5,1856(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1856);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3196);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82746f28
	goto loc_82746F28;
loc_82746C94:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// bne cr6,0x82746f3c
	if (!ctx.cr6.eq) goto loc_82746F3C;
	// lwz r20,1764(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 1764);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82746CB0;
	sub_826A2E60(ctx, base);
	// lwz r10,2500(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2500);
	// lbz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r28,0(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + r28.u32);
	// extsh r29,r5
	r29.s64 = ctx.r5.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82746da4
	if (ctx.cr6.lt) goto loc_82746DA4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r29,28
	ctx.r9.u64 = r29.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// bge cr6,0x82746d9c
	if (!ctx.cr6.lt) goto loc_82746D9C;
loc_82746D04:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82746d30
	if (ctx.cr6.lt) goto loc_82746D30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725d78
	ctx.lr = 0x82746D20;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82746d04
	if (ctx.cr6.eq) goto loc_82746D04;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x82746ddc
	goto loc_82746DDC;
loc_82746D30:
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
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
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
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
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
	// std r5,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r5.u64);
loc_82746D9C:
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// b 0x82746ddc
	goto loc_82746DDC;
loc_82746DA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725f80
	ctx.lr = 0x82746DAC;
	sub_82725F80(ctx, base);
loc_82746DAC:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82725f80
	ctx.lr = 0x82746DC4;
	sub_82725F80(ctx, base);
	// add r10,r29,r26
	ctx.r10.u64 = r29.u64 + r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82746dac
	if (ctx.cr6.lt) goto loc_82746DAC;
loc_82746DDC:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82747400
	if (!ctx.cr6.eq) goto loc_82747400;
	// addi r11,r15,14
	ctx.r11.s64 = r15.s64 + 14;
	// lwz r29,108(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r30,r27,r11
	REX_STORE_U8(r27.u32 + ctx.r11.u32, r30.u8);
	// beq cr6,0x82746e4c
	if (ctx.cr6.eq) goto loc_82746E4C;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746E4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82746E4C:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82746e9c
	if (ctx.cr6.eq) goto loc_82746E9C;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746E9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82746E9C:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82746eec
	if (ctx.cr6.eq) goto loc_82746EEC;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746EC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82746EEC:
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82746f3c
	if (ctx.cr6.eq) goto loc_82746F3C;
	// lwz r11,3180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3180);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,1860(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1860);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746F18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827473f8
	if (!ctx.cr6.eq) goto loc_827473F8;
	// lwz r11,3200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// li r6,3
	ctx.r6.s64 = 3;
loc_82746F28:
	// lwz r5,1768(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// li r4,8
	ctx.r4.s64 = 8;
loc_82746F30:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82746F3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82746F3C:
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// lwz r10,3188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// addi r9,r11,29896
	ctx.r9.s64 = ctx.r11.s64 + 29896;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82746f6c
	if (!ctx.cr6.eq) goto loc_82746F6C;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r10,r20,-2
	ctx.r10.s64 = r20.s64 + -2;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82746F60:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82746f60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82746F60;
loc_82746F6C:
	// mr r19,r25
	r19.u64 = r25.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// bge cr6,0x82746f88
	if (!ctx.cr6.lt) goto loc_82746F88;
	// lwz r30,104(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// li r28,16
	r28.s64 = 16;
	// b 0x82746fa4
	goto loc_82746FA4;
loc_82746F88:
	// bne cr6,0x82746f98
	if (!ctx.cr6.eq) goto loc_82746F98;
	// addi r30,r1,256
	r30.s64 = ctx.r1.s64 + 256;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// b 0x82746fa0
	goto loc_82746FA0;
loc_82746F98:
	// addi r30,r1,320
	r30.s64 = ctx.r1.s64 + 320;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82746FA0:
	// li r28,8
	r28.s64 = 8;
loc_82746FA4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82746FB0:
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r29,r6,3
	r29.s64 = ctx.r6.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82746FC4:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r9,r4,r30
	ctx.r9.u64 = ctx.r4.u64 + r30.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + r20.u64;
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lhz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82746ff0
	if (!ctx.cr0.lt) goto loc_82746FF0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x82746ffc
	goto loc_82746FFC;
loc_82746FF0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82746ffc
	if (!ctx.cr6.gt) goto loc_82746FFC;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82746FFC:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// stbx r10,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbz r10,1(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82747020
	if (!ctx.cr0.lt) goto loc_82747020;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x8274702c
	goto loc_8274702C;
loc_82747020:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8274702c
	if (!ctx.cr6.gt) goto loc_8274702C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8274702C:
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r22,r8,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lbz r8,2(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// lhzx r7,r22,r20
	ctx.r7.u64 = REX_LOAD_U16(r22.u32 + r20.u32);
	// lwz r22,112(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r10,1(r22)
	REX_STORE_U8(r22.u32 + 1, ctx.r10.u8);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82747068
	if (!ctx.cr0.lt) goto loc_82747068;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x82747074
	goto loc_82747074;
loc_82747068:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82747074
	if (!ctx.cr6.gt) goto loc_82747074;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82747074:
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r9,3(r7)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// lhzx r7,r8,r20
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + r20.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r22,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, r22.u8);
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x827470b0
	if (!ctx.cr0.lt) goto loc_827470B0;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x827470bc
	goto loc_827470BC;
loc_827470B0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x827470bc
	if (!ctx.cr6.gt) goto loc_827470BC;
	// li r10,255
	ctx.r10.s64 = 255;
loc_827470BC:
	// stbx r10,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82746fc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82746FC4;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// add r4,r28,r4
	ctx.r4.u64 = r28.u64 + ctx.r4.u64;
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// cmpwi cr6,r5,64
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 64, ctx.xer);
	// blt cr6,0x82746fb0
	if (ctx.cr6.lt) goto loc_82746FB0;
	// lwz r22,120(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82747178
	goto loc_82747178;
loc_827470E4:
	// add r11,r27,r15
	ctx.r11.u64 = r27.u64 + r15.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// stb r25,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, r25.u8);
	// bge cr6,0x82747104
	if (!ctx.cr6.lt) goto loc_82747104;
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82747120
	goto loc_82747120;
loc_82747104:
	// bne cr6,0x82747114
	if (!ctx.cr6.eq) goto loc_82747114;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x8274711c
	goto loc_8274711C;
loc_82747114:
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_8274711C:
	// li r3,8
	ctx.r3.s64 = 8;
loc_82747120:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// li r4,8
	ctx.r4.s64 = 8;
loc_82747128:
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// add r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r10,r6,r25
	ctx.r10.u64 = ctx.r6.u64 + r25.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8274713C:
	// lbzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82747150
	if (!ctx.cr6.lt) goto loc_82747150;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// b 0x8274715c
	goto loc_8274715C;
loc_82747150:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8274715c
	if (!ctx.cr6.gt) goto loc_8274715C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8274715C:
	// stbx r10,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bdnz 0x8274713c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274713C;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// bne 0x82747128
	if (!ctx.cr0.eq) goto loc_82747128;
loc_82747178:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(r27.s32, 4, ctx.xer);
	// bge cr6,0x827471a4
	if (!ctx.cr6.lt) goto loc_827471A4;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x82747198
	if (!ctx.cr6.eq) goto loc_82747198;
	// addi r23,r23,120
	r23.s64 = r23.s64 + 120;
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// b 0x827471a0
	goto loc_827471A0;
loc_82747198:
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
loc_827471A0:
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_827471A4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(r27.s32, 6, ctx.xer);
	// blt cr6,0x827466f8
	if (ctx.cr6.lt) goto loc_827466F8;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_827471B8:
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,771
	ctx.r6.s64 = ctx.r1.s64 + 771;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// add r8,r25,r10
	ctx.r8.u64 = r25.u64 + ctx.r10.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// add r7,r25,r10
	ctx.r7.u64 = r25.u64 + ctx.r10.u64;
loc_827471D8:
	// lwz r4,204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r3,r1,769
	ctx.r3.s64 = ctx.r1.s64 + 769;
	// lbzx r30,r8,r5
	r30.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbzx r4,r6,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzx r3,r7,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r7,r1,770
	ctx.r7.s64 = ctx.r1.s64 + 770;
	// stbx r30,r8,r16
	REX_STORE_U8(ctx.r8.u32 + r16.u32, r30.u8);
	// lwz r8,204(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r7,r29,r7
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + ctx.r7.u32);
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + r16.u64;
	// stb r3,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r3.u8);
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + r16.u64;
	// stb r7,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r7.u8);
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r3,r8,r16
	ctx.r3.u64 = ctx.r8.u64 + r16.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r4,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r4.u8);
	// bdnz 0x827471d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827471D8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// blt cr6,0x827471b8
	if (ctx.cr6.lt) goto loc_827471B8;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82747278:
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r6,r1,129
	ctx.r6.s64 = ctx.r1.s64 + 129;
	// lbzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r4,r1,193
	ctx.r4.s64 = ctx.r1.s64 + 193;
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lbzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// lbzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// lbzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// stbx r5,r3,r18
	REX_STORE_U8(ctx.r3.u32 + r18.u32, ctx.r5.u8);
	// lwz r21,208(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r21,r21,r10
	r21.s64 = int64_t(r21.s32) * int64_t(ctx.r10.s32);
	// stbx r9,r21,r17
	REX_STORE_U8(r21.u32 + r17.u32, ctx.r9.u8);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// lbzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// addi r5,r1,194
	ctx.r5.s64 = ctx.r1.s64 + 194;
	// addi r30,r1,131
	r30.s64 = ctx.r1.s64 + 131;
	// addi r29,r1,195
	r29.s64 = ctx.r1.s64 + 195;
	// addi r28,r1,132
	r28.s64 = ctx.r1.s64 + 132;
	// stb r6,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// addi r27,r1,196
	r27.s64 = ctx.r1.s64 + 196;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// lbzx r5,r11,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r30,r11,r30
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// addi r26,r1,133
	r26.s64 = ctx.r1.s64 + 133;
	// lbzx r29,r11,r29
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// addi r25,r1,197
	r25.s64 = ctx.r1.s64 + 197;
	// lbzx r28,r11,r28
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r28.u32);
	// addi r24,r1,134
	r24.s64 = ctx.r1.s64 + 134;
	// lbzx r27,r11,r27
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// addi r23,r1,198
	r23.s64 = ctx.r1.s64 + 198;
	// stb r4,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// addi r22,r1,135
	r22.s64 = ctx.r1.s64 + 135;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r4,r9,r18
	ctx.r4.u64 = ctx.r9.u64 + r18.u64;
	// lbzx r26,r11,r26
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + r26.u32);
	// lbzx r25,r11,r25
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + r25.u32);
	// lbzx r24,r11,r24
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + r24.u32);
	// lbzx r23,r11,r23
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + r23.u32);
	// stb r3,2(r4)
	REX_STORE_U8(ctx.r4.u32 + 2, ctx.r3.u8);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// stb r5,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r5.u8);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + r18.u64;
	// stb r30,3(r5)
	REX_STORE_U8(ctx.r5.u32 + 3, r30.u8);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + r17.u64;
	// stb r29,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, r29.u8);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r18
	ctx.r6.u64 = ctx.r9.u64 + r18.u64;
	// stb r28,4(r6)
	REX_STORE_U8(ctx.r6.u32 + 4, r28.u8);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r4,r9,r17
	ctx.r4.u64 = ctx.r9.u64 + r17.u64;
	// stb r27,4(r4)
	REX_STORE_U8(ctx.r4.u32 + 4, r27.u8);
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r3,r10
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// stb r26,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, r26.u8);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r9,r17
	ctx.r5.u64 = ctx.r9.u64 + r17.u64;
	// stb r25,5(r5)
	REX_STORE_U8(ctx.r5.u32 + 5, r25.u8);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r18
	ctx.r3.u64 = ctx.r9.u64 + r18.u64;
	// stb r24,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, r24.u8);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r6,r9,r17
	ctx.r6.u64 = ctx.r9.u64 + r17.u64;
	// stb r23,6(r6)
	REX_STORE_U8(ctx.r6.u32 + 6, r23.u8);
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r4,r1,199
	ctx.r4.s64 = ctx.r1.s64 + 199;
	// lbzx r3,r11,r22
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// mullw r9,r5,r10
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lbzx r6,r11,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// add r5,r9,r18
	ctx.r5.u64 = ctx.r9.u64 + r18.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stb r3,7(r5)
	REX_STORE_U8(ctx.r5.u32 + 7, ctx.r3.u8);
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r3,r9,r17
	ctx.r3.u64 = ctx.r9.u64 + r17.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r6,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r6.u8);
	// bdnz 0x82747278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82747278;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827473F8:
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x826a1cd0
	return;
loc_82747400:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,1440
	ctx.r1.s64 = ctx.r1.s64 + 1440;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B5758) {
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
	// li r10,1120
	ctx.r10.s64 = 1120;
	// vspltish v0,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x7)));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// slw r7,r4,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// lvx128 v13,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,0
	ctx.r9.s64 = 0;
	// vaddshs v2,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// bl 0x827b5200
	ctx.lr = 0x827B579C;
	sub_827B5200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B7660) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cb8
	ctx.lr = 0x827B7668;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1120
	ctx.r11.s64 = 1120;
	// vspltish v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x8)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r31,1164(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lvx128 v12,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vsubshs v11,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af298
	ctx.lr = 0x827B76BC;
	sub_827AF298(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// vspltish v9,-1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// li r6,1
	ctx.r6.s64 = 1;
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// vspltish v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// lvx128 v8,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r9,r6,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// vslh v8,v9,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x827b7780
	if (!ctx.cr6.eq) goto loc_827B7780;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b782c
	if (!ctx.cr6.gt) goto loc_827B782C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_827B770C:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v9,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v2,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vadduhm v1,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v6
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v31,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v29,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827b770c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B770C;
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
loc_827B7780:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b782c
	if (!ctx.cr6.gt) goto loc_827B782C;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827B7798:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v9,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v9,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v9,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v26,v9,v29
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvx128 v9,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v23,v25,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v13,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v23,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v21,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v12,v21
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// vpkshus128 v59,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v12,v60,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x827b7798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B7798;
loc_827B782C:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827C8D80) {
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
	ctx.lr = 0x827C8D88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// dcbzl r0,r7
	ea = (ctx.r7.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// subfic r27,r5,2
	ctx.xer.ca = ctx.r5.u32 <= 2;
	r27.u64 = static_cast<uint64_t>(2) - ctx.r5.u64;
	// lwz r4,620(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 620);
	// addi r5,r3,232
	ctx.r5.s64 = ctx.r3.s64 + 232;
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r30,4(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,40(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r29,0(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r26,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, r26.u32);
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// blt cr6,0x827c8dec
	if (ctx.cr6.lt) goto loc_827C8DEC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// bl 0x82731930
	ctx.lr = 0x827C8DE4;
	sub_82731930(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x827c8e44
	goto loc_827C8E44;
loc_827C8DEC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x827c8e40
	if (!ctx.cr6.gt) goto loc_827C8E40;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_827C8DF8:
	// lhz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r29,r3,24,8,31
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r29,r7
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(ctx.r7.s32);
	// lbzx r29,r10,r4
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r26,r29,r5
	r26.u64 = REX_LOAD_U8(r29.u32 + ctx.r5.u32);
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// neg r3,r3
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r3.u64);
	// rotlwi r29,r29,1
	r29.u64 = __builtin_rotateleft32(r29.u32, 1);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// or r9,r26,r9
	ctx.r9.u64 = r26.u64 | ctx.r9.u64;
	// subf r3,r3,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r3,r29,r31
	REX_STORE_U16(r29.u32 + r31.u32, ctx.r3.u16);
	// bdnz 0x827c8df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827C8DF8;
loc_827C8E40:
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
loc_827C8E44:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r27,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// bne cr6,0x827c8eb0
	if (!ctx.cr6.eq) goto loc_827C8EB0;
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v13,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_827C8EB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x827aeec8
	ctx.lr = 0x827C8EBC;
	sub_827AEEC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_827CE9A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,2964(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2964);
	// lwz r10,2968(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2968);
	// addi r11,r11,735
	ctx.r11.s64 = ctx.r11.s64 + 735;
	// lwz r9,2972(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2972);
	// addi r8,r10,735
	ctx.r8.s64 = ctx.r10.s64 + 735;
	// lwz r10,2952(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2952);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2112);
	// addi r6,r9,735
	ctx.r6.s64 = ctx.r9.s64 + 735;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,732
	ctx.r9.s64 = ctx.r10.s64 + 732;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,266
	ctx.r11.s64 = ctx.r11.s64 + 266;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,2916(r3)
	REX_STORE_U32(ctx.r3.u32 + 2916, ctx.r7.u32);
	// lwzx r7,r5,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stw r7,2920(r3)
	REX_STORE_U32(ctx.r3.u32 + 2920, ctx.r7.u32);
	// lwzx r5,r8,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r5,2924(r3)
	REX_STORE_U32(ctx.r3.u32 + 2924, ctx.r5.u32);
	// lwzx r11,r6,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r11,2912(r3)
	REX_STORE_U32(ctx.r3.u32 + 2912, ctx.r11.u32);
	// stw r11,2908(r3)
	REX_STORE_U32(ctx.r3.u32 + 2908, ctx.r11.u32);
	// stw r11,2904(r3)
	REX_STORE_U32(ctx.r3.u32 + 2904, ctx.r11.u32);
	// lwz r10,2124(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2124);
	// stw r10,2116(r3)
	REX_STORE_U32(ctx.r3.u32 + 2116, ctx.r10.u32);
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r9,2120(r3)
	REX_STORE_U32(ctx.r3.u32 + 2120, ctx.r9.u32);
	// b 0x82735080
	sub_82735080(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827D1BF8) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// vspltish v0,15
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0xF)));
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// vslb v0,v0,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi8(0x7));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi8(a, shift));
	}
	// beq cr6,0x827d1c90
	if (ctx.cr6.eq) goto loc_827D1C90;
	// cmpwi cr6,r4,64
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 64, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// vaddshs v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
	// addi r7,r3,80
	ctx.r7.s64 = ctx.r3.s64 + 80;
	// addi r6,r3,96
	ctx.r6.s64 = ctx.r3.s64 + 96;
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r3,112
	ctx.r5.s64 = ctx.r3.s64 + 112;
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v7,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v5,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v3,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v2,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v1,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v5,v0
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v30,v3,v0
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v1,v0
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v6,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v4,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_827D1C90:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// vaddshs v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vaddshs v6,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v7,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

