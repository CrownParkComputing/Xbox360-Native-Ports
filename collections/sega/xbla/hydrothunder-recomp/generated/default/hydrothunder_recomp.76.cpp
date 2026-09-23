#include "hydrothunder_funcs.76.h"

DEFINE_REX_FUNC(sub_82124FA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82124FA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x82124ff4
	if (ctx.cr6.eq) goto loc_82124FF4;
loc_82124FDC:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82124FE4;
	sub_8269CE98(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82124fdc
	if (!ctx.cr6.eq) goto loc_82124FDC;
loc_82124FF4:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x8269ce98
	ctx.lr = 0x82124FFC;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-25188
	ctx.r11.s64 = ctx.r11.s64 + -25188;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82125018
	if (ctx.cr0.eq) goto loc_82125018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82125018;
	sub_8269CE98(ctx, base);
loc_82125018:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212AAA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8212AAA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,45(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 45);
	// b 0x8212aaf4
	goto loc_8212AAF4;
loc_8212AAC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821f6700
	ctx.lr = 0x8212AAD0;
	sub_821F6700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x8212AAE4;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212AAEC;
	sub_8269CE98(ctx, base);
	// lbz r11,45(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 45);
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8212AAF4:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212aac4
	if (ctx.cr0.eq) goto loc_8212AAC4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212EE20) {
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
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8212eea8
	if (ctx.cr6.eq) goto loc_8212EEA8;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212eea8
	if (!ctx.cr6.eq) goto loc_8212EEA8;
	// bl 0x8212e8b0
	ctx.lr = 0x8212EE64;
	sub_8212E8B0(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8212fe40
	ctx.lr = 0x8212EE70;
	sub_8212FE40(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212EE84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821357c8
	ctx.lr = 0x8212EE8C;
	sub_821357C8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x821357c8
	ctx.lr = 0x8212EE94;
	sub_821357C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212EE9C;
	sub_8269CE98(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
loc_8212EEA8:
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

DEFINE_REX_FUNC(sub_82133C60) {
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
	// lwz r3,184(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133c90
	if (ctx.cr6.eq) goto loc_82133C90;
	// bl 0x822c5ef0
	ctx.lr = 0x82133C8C;
	sub_822C5EF0(ctx, base);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
loc_82133C90:
	// lwz r3,188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ca4
	if (ctx.cr6.eq) goto loc_82133CA4;
	// bl 0x822c5ef0
	ctx.lr = 0x82133CA0;
	sub_822C5EF0(ctx, base);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
loc_82133CA4:
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133cb8
	if (ctx.cr6.eq) goto loc_82133CB8;
	// bl 0x822c5ef0
	ctx.lr = 0x82133CB4;
	sub_822C5EF0(ctx, base);
	// stw r30,192(r31)
	REX_STORE_U32(r31.u32 + 192, r30.u32);
loc_82133CB8:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82133ccc
	if (ctx.cr6.eq) goto loc_82133CCC;
	// bl 0x822c5580
	ctx.lr = 0x82133CC8;
	sub_822C5580(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_82133CCC:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133cdc
	if (ctx.cr6.eq) goto loc_82133CDC;
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
loc_82133CDC:
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

DEFINE_REX_FUNC(sub_82139388) {
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
	ctx.lr = 0x82139390;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// bl 0x8212dd28
	ctx.lr = 0x821393BC;
	sub_8212DD28(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821393CC;
	sub_826A1E70(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821393DC;
	sub_826A1E70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r3,6060(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6060);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r9,-27528
	ctx.r7.s64 = ctx.r9.s64 + -27528;
	// lfs f13,-16132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16132);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// stb r11,128(r31)
	REX_STORE_U8(r31.u32 + 128, ctx.r11.u8);
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1);
	// stb r11,129(r31)
	REX_STORE_U8(r31.u32 + 129, ctx.r11.u8);
	// lbz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2);
	// stb r11,130(r31)
	REX_STORE_U8(r31.u32 + 130, ctx.r11.u8);
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stb r11,131(r31)
	REX_STORE_U8(r31.u32 + 131, ctx.r11.u8);
	// stw r27,140(r31)
	REX_STORE_U32(r31.u32 + 140, r27.u32);
	// ld r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 0);
	// std r11,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r11.u64);
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 8);
	// std r11,152(r31)
	REX_STORE_U64(r31.u32 + 152, ctx.r11.u64);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,124(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bne cr6,0x82139468
	if (!ctx.cr6.eq) goto loc_82139468;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82139b18
	ctx.lr = 0x82139464;
	sub_82139B18(ctx, base);
	// b 0x82139470
	goto loc_82139470;
loc_82139468:
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82139a08
	ctx.lr = 0x82139470;
	sub_82139A08(ctx, base);
loc_82139470:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82140010) {
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
	ctx.lr = 0x82140018;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-17344
	ctx.r4.s64 = ctx.r10.s64 + -17344;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x8215f670
	ctx.lr = 0x82140044;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17360
	ctx.r4.s64 = ctx.r11.s64 + -17360;
	// bl 0x8215fbf8
	ctx.lr = 0x82140050;
	sub_8215FBF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r11,-17336
	r31.s64 = ctx.r11.s64 + -17336;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82140064;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82140068;
	sub_8215F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x82140078;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82140080;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r10,-17324
	r29.s64 = ctx.r10.s64 + -17324;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x821400A0;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x821400A4;
	sub_8215F0F0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,6136(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6136);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8215f670
	ctx.lr = 0x821400BC;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17180
	ctx.r4.s64 = ctx.r11.s64 + -17180;
	// bl 0x8215f670
	ctx.lr = 0x821400C8;
	sub_8215F670(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821400DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821400F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x82140104;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x82140108;
	sub_8215F0F0(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,6180(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
	// bl 0x8215f670
	ctx.lr = 0x8214011C;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17168
	ctx.r4.s64 = ctx.r11.s64 + -17168;
	// bl 0x8215f670
	ctx.lr = 0x82140128;
	sub_8215F670(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// b 0x821401a4
	goto loc_821401A4;
loc_8214013C:
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x82140148;
	sub_8215F5F8(ctx, base);
	// lwz r29,40(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x8214018c
	goto loc_8214018C;
loc_82140160:
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f5f8
	ctx.lr = 0x8214016C;
	sub_8215F5F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x8214fa18
	ctx.lr = 0x8214017C;
	sub_8214FA18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821502b0
	ctx.lr = 0x82140184;
	sub_821502B0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8214018C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82140160
	if (!ctx.cr6.eq) goto loc_82140160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821502b0
	ctx.lr = 0x8214019C;
	sub_821502B0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821401A4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8214013c
	if (!ctx.cr6.eq) goto loc_8214013C;
	// lwz r3,4(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821401C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x821401D0;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8214CD88) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8214cdc4
	if (ctx.cr6.eq) goto loc_8214CDC4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82192830
	ctx.lr = 0x8214CDC4;
	sub_82192830(ctx, base);
loc_8214CDC4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8214cdec
	if (ctx.cr6.eq) goto loc_8214CDEC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f3,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x82192830
	ctx.lr = 0x8214CDEC;
	sub_82192830(ctx, base);
loc_8214CDEC:
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

DEFINE_REX_FUNC(sub_82151518) {
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
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,6048(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82151540;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215156c
	if (ctx.cr0.eq) goto loc_8215156C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,7056
	ctx.r10.s64 = ctx.r10.s64 + 7056;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82151570
	goto loc_82151570;
loc_8215156C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82151570:
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
	ctx.lr = 0x8215158C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r31,r11,-42
	r31.s64 = ctx.r11.s64 + -42;
	// addi r4,r10,-11500
	ctx.r4.s64 = ctx.r10.s64 + -11500;
	// lwz r3,6124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6124);
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821515B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6124(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6124);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-11468
	ctx.r4.s64 = ctx.r11.s64 + -11468;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821515D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82156A14) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82156BF0) {
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
	ctx.lr = 0x82156BF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82156cd8
	if (!ctx.cr6.eq) goto loc_82156CD8;
	// lwz r11,4664(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4664);
	// addi r27,r3,4664
	r27.s64 = ctx.r3.s64 + 4664;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82156cd0
	if (ctx.cr6.eq) goto loc_82156CD0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823ede70
	ctx.lr = 0x82156C24;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82156c50
	if (!ctx.cr0.lt) goto loc_82156C50;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,21001
	ctx.r11.u64 = ctx.r11.u64 | 21001;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x82156cb8
	goto loc_82156CB8;
loc_82156C50:
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,4808
	r29.s64 = r31.s64 + 4808;
	// stw r30,4804(r31)
	REX_STORE_U32(r31.u32 + 4804, r30.u32);
	// addi r3,r31,4804
	ctx.r3.s64 = r31.s64 + 4804;
	// stw r30,4840(r31)
	REX_STORE_U32(r31.u32 + 4840, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,4844(r31)
	REX_STORE_U32(r31.u32 + 4844, r30.u32);
	// addi r28,r31,4840
	r28.s64 = r31.s64 + 4840;
	// stw r30,4848(r31)
	REX_STORE_U32(r31.u32 + 4848, r30.u32);
	// stw r30,4852(r31)
	REX_STORE_U32(r31.u32 + 4852, r30.u32);
	// bl 0x82157b40
	ctx.lr = 0x82156C7C;
	sub_82157B40(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,4804(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4804);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x8264dde8
	ctx.lr = 0x82156C94;
	sub_8264DDE8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82156cc0
	if (ctx.cr6.eq) goto loc_82156CC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x8264dc88
	ctx.lr = 0x82156CA8;
	sub_8264DC88(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,4728(r31)
	REX_STORE_U32(r31.u32 + 4728, ctx.r11.u32);
loc_82156CB4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82156CB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82156CC0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82156cb8
	goto loc_82156CB8;
loc_82156CD0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82156cb8
	goto loc_82156CB8;
loc_82156CD8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82156d50
	if (!ctx.cr6.eq) goto loc_82156D50;
	// lwz r11,4664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4664);
	// addi r30,r31,4664
	r30.s64 = r31.s64 + 4664;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82156cd0
	if (ctx.cr6.eq) goto loc_82156CD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x82156CF8;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82156d0c
	if (!ctx.cr0.lt) goto loc_82156D0C;
loc_82156D00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82156cb4
	goto loc_82156CB4;
loc_82156D0C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8264e0c8
	ctx.lr = 0x82156D1C;
	sub_8264E0C8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82156d44
	if (ctx.cr6.eq) goto loc_82156D44;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4728);
	// bl 0x8264dc88
	ctx.lr = 0x82156D30;
	sub_8264DC88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,4728(r31)
	REX_STORE_U32(r31.u32 + 4728, ctx.r10.u32);
	// b 0x82156cb4
	goto loc_82156CB4;
loc_82156D44:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// b 0x82156cb8
	goto loc_82156CB8;
loc_82156D50:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82156cb4
	if (!ctx.cr6.eq) goto loc_82156CB4;
	// lwz r11,4664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4664);
	// addi r3,r31,4664
	ctx.r3.s64 = r31.s64 + 4664;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82156cd0
	if (ctx.cr6.eq) goto loc_82156CD0;
	// bl 0x823ede70
	ctx.lr = 0x82156D6C;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82156d00
	if (ctx.cr0.lt) goto loc_82156D00;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,4724(r31)
	REX_STORE_U8(r31.u32 + 4724, ctx.r11.u8);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// b 0x82156cb8
	goto loc_82156CB8;
}

DEFINE_REX_FUNC(sub_82160BB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82160c00
	goto loc_82160C00;
loc_82160BD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82160c40
	goto loc_82160C40;
loc_82160BE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160728
	ctx.lr = 0x82160BEC;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x82160bd0
	if (ctx.cr6.eq) goto loc_82160BD0;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x82160c58
	if (!ctx.cr6.eq) goto loc_82160C58;
loc_82160C00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82160728
	ctx.lr = 0x82160C14;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x82160bd0
	if (ctx.cr6.eq) goto loc_82160BD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f270
	ctx.lr = 0x82160C28;
	sub_8215F270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160858
	ctx.lr = 0x82160C34;
	sub_82160858(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82160be4
	if (!ctx.cr0.eq) goto loc_82160BE4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82160C40:
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
loc_82160C58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19080
	ctx.r4.s64 = ctx.r11.s64 + 19080;
	// bl 0x82160698
	ctx.lr = 0x82160C6C;
	sub_82160698(ctx, base);
	// b 0x82160c40
	goto loc_82160C40;
}

DEFINE_REX_FUNC(sub_82169590) {
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
	ctx.lr = 0x82169598;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,6044(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6044);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,-24(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + -24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821695CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821695F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r11,6044(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 6044);
	// lwz r4,-24(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + -24);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82169610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8216CEA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
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
	// rlwinm r31,r7,27,29,29
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r30,r6,27,29,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r7,r31,r7
	ctx.r7.u64 = r31.u64 | ctx.r7.u64;
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// lfsx f10,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f8,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f12,f8,f9,f11
	ctx.f12.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r10,-32(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// std r10,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
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
	// rlwinm r7,r10,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r6,r9,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// lfsx f0,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f10,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f13,f10,f9,f11
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r11,-32(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217F228) {
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
	// bne cr6,0x8217f260
	if (!ctx.cr6.eq) goto loc_8217F260;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,29580
	ctx.r4.s64 = ctx.r11.s64 + 29580;
	// addi r3,r10,29636
	ctx.r3.s64 = ctx.r10.s64 + 29636;
	// li r5,26
	ctx.r5.s64 = 26;
	// bl 0x821231d0
	ctx.lr = 0x8217F260;
	sub_821231D0(ctx, base);
loc_8217F260:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8217f2a4
	if (ctx.cr6.eq) goto loc_8217F2A4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8217f29c
	if (ctx.cr6.eq) goto loc_8217F29C;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// b 0x8217f2a8
	goto loc_8217F2A8;
loc_8217F29C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217f2a8
	goto loc_8217F2A8;
loc_8217F2A4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8217F2A8:
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

DEFINE_REX_FUNC(sub_82185BC0) {
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
	// b 0x82185bf0
	goto loc_82185BF0;
loc_82185BE0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x82185bc0
	ctx.lr = 0x82185BEC;
	sub_82185BC0(ctx, base);
	// lwz r31,24(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_82185BF0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82185C08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82185be0
	if (!ctx.cr6.eq) goto loc_82185BE0;
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

DEFINE_REX_FUNC(sub_82189860) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82189868;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,80
	r29.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x826a1e70
	ctx.lr = 0x82189880;
	sub_826A1E70(ctx, base);
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82126320
	ctx.lr = 0x8218988C;
	sub_82126320(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82173c20
	ctx.lr = 0x821898C4;
	sub_82173C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82188418
	ctx.lr = 0x821898D0;
	sub_82188418(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8216cfa0
	ctx.lr = 0x821898DC;
	sub_8216CFA0(ctx, base);
	// addi r31,r31,208
	r31.s64 = r31.s64 + 208;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821898F0;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8216ab58
	ctx.lr = 0x821898F8;
	sub_8216AB58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8218D918) {
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
	ctx.lr = 0x8218D920;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,80
	r28.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8218D93C;
	sub_826A1E70(ctx, base);
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82126320
	ctx.lr = 0x8218D948;
	sub_82126320(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r11,16592
	r27.s64 = ctx.r11.s64 + 16592;
	// lfs f12,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82173c20
	ctx.lr = 0x8218D984;
	sub_82173C20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82188418
	ctx.lr = 0x8218D990;
	sub_82188418(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8216cfa0
	ctx.lr = 0x8218D99C;
	sub_8216CFA0(ctx, base);
	// addi r28,r31,192
	r28.s64 = r31.s64 + 192;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8218D9B0;
	sub_826A1E70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8216ab58
	ctx.lr = 0x8218D9B8;
	sub_8216AB58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8218d9e4
	if (!ctx.cr6.gt) goto loc_8218D9E4;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f13,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_8218D9E4:
	// lfs f11,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,256(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 256, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f10,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// addi r11,r31,272
	ctx.r11.s64 = r31.s64 + 272;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 260, temp.u32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,264(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 264, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,268(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f9,f11,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f9.f64)));
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f10,f10,f10,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f9.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f7,f10
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,272(r31)
	REX_STORE_U64(r31.u32 + 272, ctx.r10.u64);
	// std r8,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.r8.u64);
	// lfs f11,276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,272(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f10,f10
	ctx.f10.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmsubs f0,f0,f10,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f11.f64)));
	// fmsubs f11,f11,f13,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fnmsubs f13,f10,f13,f8
	ctx.f13.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f8.f64)));
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r10.u64);
	// std r9,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.r9.u64);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f11,f0,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// lfs f10,40(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f11.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fneg f12,f10
	ctx.f12.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,304(r31)
	REX_STORE_U64(r31.u32 + 304, ctx.r10.u64);
	// std r11,312(r31)
	REX_STORE_U64(r31.u32 + 312, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8219DF60) {
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
	// ld r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,64(r4)
	REX_STORE_U64(ctx.r4.u32 + 64, ctx.r11.u64);
	// std r10,72(r4)
	REX_STORE_U64(ctx.r4.u32 + 72, ctx.r10.u64);
	// lwz r11,44(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DFA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DFCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219dfe8
	if (ctx.cr6.eq) goto loc_8219DFE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DFE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219DFE8:
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

DEFINE_REX_FUNC(sub_821A2868) {
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
	ctx.lr = 0x821A2870;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a28d0
	if (ctx.cr6.eq) goto loc_821A28D0;
	// lwz r29,0(r6)
	r29.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821a28d0
	if (!ctx.cr6.gt) goto loc_821A28D0;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A28B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x8264d088
	ctx.lr = 0x821A28C4;
	sub_8264D088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a28dc
	if (ctx.cr0.eq) goto loc_821A28DC;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
loc_821A28D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A28D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_821A28DC:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f6338
	ctx.lr = 0x821A28E4;
	sub_822F6338(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a28d0
	if (ctx.cr0.eq) goto loc_821A28D0;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823ede50
	ctx.lr = 0x821A2908;
	sub_823EDE50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a2924
	if (ctx.cr0.eq) goto loc_821A2924;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823ede68
	ctx.lr = 0x821A2918;
	sub_823EDE68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x821A2920;
	sub_8269D6A0(ctx, base);
	// b 0x821a28d0
	goto loc_821A28D0;
loc_821A2924:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a2978
	if (ctx.cr6.eq) goto loc_821A2978;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821A293C:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r10,r10,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821a2964
	if (!ctx.cr0.eq) goto loc_821A2964;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r8,r10,r27
	REX_STORE_U64(ctx.r10.u32 + r27.u32, ctx.r8.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_821A2964:
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821a293c
	if (ctx.cr6.lt) goto loc_821A293C;
loc_821A2978:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823ede68
	ctx.lr = 0x821A2980;
	sub_823EDE68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x821A2988;
	sub_8269D6A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821a28d4
	goto loc_821A28D4;
}

DEFINE_REX_FUNC(sub_821A8E70) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822f6280
	ctx.lr = 0x821A8E88;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821a8ec0
	if (ctx.cr0.eq) goto loc_821A8EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125dc8
	ctx.lr = 0x821A8E98;
	sub_82125DC8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-25024
	ctx.r10.s64 = ctx.r10.s64 + -25024;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// b 0x821a8ec4
	goto loc_821A8EC4;
loc_821A8EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A8EC4:
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

DEFINE_REX_FUNC(sub_821ABA30) {
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
	ctx.lr = 0x821ABA38;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x821a6a80
	ctx.lr = 0x821ABA4C;
	sub_821A6A80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d7e38
	ctx.lr = 0x821ABA58;
	sub_821D7E38(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821abb54
	if (ctx.cr0.eq) goto loc_821ABB54;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822f6280
	ctx.lr = 0x821ABA6C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x821abb04
	if (ctx.cr0.eq) goto loc_821ABB04;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lfs f0,172(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,596(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r9,11708
	ctx.r9.s64 = ctx.r9.s64 + 11708;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r10,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r10.u64);
	// std r7,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// std r8,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// b 0x821abb08
	goto loc_821ABB08;
loc_821ABB04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821ABB08:
	// stw r3,96(r28)
	REX_STORE_U32(r28.u32 + 96, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821db478
	ctx.lr = 0x821ABB14;
	sub_821DB478(ctx, base);
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822f6280
	ctx.lr = 0x821ABB1C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821abb40
	if (ctx.cr0.eq) goto loc_821ABB40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821ea508
	ctx.lr = 0x821ABB2C;
	sub_821EA508(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,11712
	ctx.r11.s64 = ctx.r11.s64 + 11712;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x821abb44
	goto loc_821ABB44;
loc_821ABB40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821ABB44:
	// stw r3,100(r28)
	REX_STORE_U32(r28.u32 + 100, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821eac60
	ctx.lr = 0x821ABB54;
	sub_821EAC60(ctx, base);
loc_821ABB54:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x821abb8c
	if (ctx.cr6.eq) goto loc_821ABB8C;
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_821ABB68:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821ABB80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x821abb68
	if (!ctx.cr6.eq) goto loc_821ABB68;
loc_821ABB8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a6af8
	ctx.lr = 0x821ABB94;
	sub_821A6AF8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269ce98
	ctx.lr = 0x821ABB9C;
	sub_8269CE98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821B65D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15104
	ctx.r3.s64 = ctx.r11.s64 + -15104;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B6A28) {
	REX_FUNC_PROLOGUE();
	// b 0x821b6b70
	sub_821B6B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B6B08) {
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
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x821357c8
	ctx.lr = 0x821B6B24;
	sub_821357C8(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b6b4c
	if (ctx.cr6.eq) goto loc_821B6B4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-21224
	ctx.r4.s64 = ctx.r11.s64 + -21224;
	// addi r3,r10,-21176
	ctx.r3.s64 = ctx.r10.s64 + -21176;
	// li r5,109
	ctx.r5.s64 = 109;
	// bl 0x821231d0
	ctx.lr = 0x821B6B4C;
	sub_821231D0(ctx, base);
loc_821B6B4C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B6B5C;
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

DEFINE_REX_FUNC(sub_821BA850) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BA858;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,284(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ba878
	if (ctx.cr6.eq) goto loc_821BA878;
	// bl 0x821357c8
	ctx.lr = 0x821BA870;
	sub_821357C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
loc_821BA878:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r11,6168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba8f8
	if (ctx.cr6.eq) goto loc_821BA8F8;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821b9340
	ctx.lr = 0x821BA890;
	sub_821B9340(ctx, base);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x821babd8
	ctx.lr = 0x821BA89C;
	sub_821BABD8(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,3
	ctx.r11.s64 = 3;
	// lbz r8,404(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 404);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r3,6168(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6168);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,6056(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 6056);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r11,r10,r9
	temp.u8 = (~ctx.r10.u32 + ctx.r9.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stb r11,404(r1)
	REX_STORE_U8(ctx.r1.u32 + 404, ctx.r11.u8);
	// bl 0x82149400
	ctx.lr = 0x821BA8D4;
	sub_82149400(ctx, base);
	// stw r3,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82120ac0
	ctx.lr = 0x821BA8E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82120ac0
	ctx.lr = 0x821BA8F8;
	sub_82120AC0(ctx, base);
loc_821BA8F8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-19876
	ctx.r4.s64 = ctx.r11.s64 + -19876;
	// bl 0x82120600
	ctx.lr = 0x821BA908;
	sub_82120600(ctx, base);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r29,160(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BA91C;
	sub_8219B8B0(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821BA930;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-19860
	ctx.r4.s64 = ctx.r11.s64 + -19860;
	// bl 0x82120600
	ctx.lr = 0x821BA940;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lbz r29,160(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BA950;
	sub_8219B8B0(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x821BA964;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-19844
	ctx.r4.s64 = ctx.r11.s64 + -19844;
	// bl 0x82120600
	ctx.lr = 0x821BA974;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lbz r29,160(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BA984;
	sub_8219B8B0(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821BA998;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-19824
	ctx.r4.s64 = ctx.r11.s64 + -19824;
	// bl 0x82120600
	ctx.lr = 0x821BA9A8;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lbz r29,160(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BA9B8;
	sub_8219B8B0(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x821BA9CC;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19804
	ctx.r4.s64 = ctx.r11.s64 + -19804;
	// bl 0x82120600
	ctx.lr = 0x821BA9DC;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r29,160(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BA9EC;
	sub_8219B8B0(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821BAA00;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-19788
	ctx.r4.s64 = ctx.r11.s64 + -19788;
	// bl 0x82120600
	ctx.lr = 0x821BAA10;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r29,160(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BAA20;
	sub_8219B8B0(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x821BAA34;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120600
	ctx.lr = 0x821BAA44;
	sub_82120600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lbz r29,160(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BAA54;
	sub_8219B8B0(ctx, base);
	// stb r29,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x821BAA68;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-19752
	ctx.r4.s64 = ctx.r11.s64 + -19752;
	// bl 0x82120600
	ctx.lr = 0x821BAA78;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r31,160(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 160);
	// bl 0x8219b8b0
	ctx.lr = 0x821BAA88;
	sub_8219B8B0(ctx, base);
	// stb r31,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x821BAA9C;
	sub_82120AC0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C9938) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x821C9940;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2c98
	ctx.lr = 0x821C9948;
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lis r6,-32106
	ctx.r6.s64 = -2104098816;
	// li r7,128
	ctx.r7.s64 = 128;
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// stb r7,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r26,6096(r6)
	r26.u64 = REX_LOAD_U32(ctx.r6.u32 + 6096);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// stb r7,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
loc_821C998C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c998c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C998C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lfs f25,908(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 908);
	f25.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// bl 0x821c9318
	ctx.lr = 0x821C99B0;
	sub_821C9318(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// bl 0x823fbf60
	ctx.lr = 0x821C99C4;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C99D4:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c99d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C99D4;
	// lfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	f30.f64 = double(temp.f32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lfs f28,228(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 228);
	f28.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82137ed8
	ctx.lr = 0x821C9A04;
	sub_82137ED8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,1272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1276(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1276);
	ctx.f13.f64 = double(temp.f32);
	// li r27,4
	r27.s64 = 4;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// lfs f12,1280(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1280);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f11,1284(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1284);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,668(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 668);
	f29.f64 = double(temp.f32);
	// lfs f26,236(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	f26.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f27,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f27.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_821C9A40:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,116(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 116);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// lfsu f0,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r29.u32 = ea;
	// fmuls f31,f0,f26
	f31.f64 = double(float(ctx.f0.f64 * f26.f64));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C9A5C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821c9a5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C9A5C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82135630
	ctx.lr = 0x821C9A70;
	sub_82135630(ctx, base);
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82139c28
	ctx.lr = 0x821C9A7C;
	sub_82139C28(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// stfs f27,120(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f13,f24,f29
	ctx.f13.f64 = double(float(f24.f64 * f29.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216d040
	ctx.lr = 0x821C9A9C;
	sub_8216D040(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f25.f64;
	// bl 0x821c9318
	ctx.lr = 0x821C9AA8;
	sub_821C9318(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fsubs f1,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f25.f64 - f31.f64));
	// bl 0x821a4ca0
	ctx.lr = 0x821C9AB4;
	sub_821A4CA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823fbf60
	ctx.lr = 0x821C9AC8;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C9AD8:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c9ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C9AD8;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x82137ed8
	ctx.lr = 0x821C9B00;
	sub_82137ED8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x821c9a40
	if (!ctx.cr0.eq) goto loc_821C9A40;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ce4
	ctx.lr = 0x821C9B14;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821DA7D8) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x821DA7E0;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2ca4
	ctx.lr = 0x821DA7E8;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// bl 0x822f6280
	ctx.lr = 0x821DA800;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r19,r11,16592
	r19.s64 = ctx.r11.s64 + 16592;
	// li r21,0
	r21.s64 = 0;
	// lfs f31,596(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r19.u32 + 596);
	f31.f64 = double(temp.f32);
	// lfs f30,172(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 172);
	f30.f64 = double(temp.f32);
	// beq 0x821da89c
	if (ctx.cr0.eq) goto loc_821DA89C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r8,11708
	ctx.r8.s64 = ctx.r8.s64 + 11708;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r21,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r21.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r21,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r21.u32);
	// stw r21,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r21.u32);
	// stw r21,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r21.u32);
	// stw r21,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r21.u32);
	// stw r21,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r21.u32);
	// stw r21,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r21.u32);
	// std r7,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r7.u64);
	// std r6,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r6.u64);
	// std r9,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r9.u64);
	// std r10,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r10.u64);
	// b 0x821da8a0
	goto loc_821DA8A0;
loc_821DA89C:
	// mr r22,r21
	r22.u64 = r21.u64;
loc_821DA8A0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-24364
	ctx.r4.s64 = ctx.r11.s64 + -24364;
	// bl 0x8215f338
	ctx.lr = 0x821DA8B0;
	sub_8215F338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821db110
	ctx.lr = 0x821DA8BC;
	sub_821DB110(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821da8d4
	if (!ctx.cr0.eq) goto loc_821DA8D4;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821357c8
	ctx.lr = 0x821DA8CC;
	sub_821357C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dad58
	goto loc_821DAD58;
loc_821DA8D4:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 12);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r10,11528
	ctx.r4.s64 = ctx.r10.s64 + 11528;
	// addi r24,r31,16
	r24.s64 = r31.s64 + 16;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// bl 0x8215f338
	ctx.lr = 0x821DA8F0;
	sub_8215F338(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215fb00
	ctx.lr = 0x821DA8F8;
	sub_8215FB00(ctx, base);
	// lis r11,1365
	ctx.r11.s64 = 89456640;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r11,48
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// ble cr6,0x821da91c
	if (!ctx.cr6.gt) goto loc_821DA91C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821DA91C:
	// bl 0x822f6338
	ctx.lr = 0x821DA920;
	sub_822F6338(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125bc8
	ctx.lr = 0x821DA930;
	sub_82125BC8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r30,r11,48
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821da974
	if (!ctx.cr6.gt) goto loc_821DA974;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d1d0
	ctx.lr = 0x821DA950;
	sub_8269D1D0(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DA964;
	sub_826A1E70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x821DA96C;
	sub_8269D1B8(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_821DA974:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821daa10
	if (!ctx.cr6.gt) goto loc_821DAA10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r26,r11,11592
	r26.s64 = ctx.r11.s64 + 11592;
	// addi r25,r10,11548
	r25.s64 = ctx.r10.s64 + 11548;
	// addi r27,r9,11540
	r27.s64 = ctx.r9.s64 + 11540;
loc_821DA99C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215f338
	ctx.lr = 0x821DA9BC;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821DA9C4;
	sub_8215F1B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82167240
	ctx.lr = 0x821DA9CC;
	sub_82167240(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821da9f0
	if (ctx.cr6.eq) goto loc_821DA9F0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,66
	ctx.r5.s64 = 66;
	// bl 0x821231d0
	ctx.lr = 0x821DA9F0;
	sub_821231D0(ctx, base);
loc_821DA9F0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821DAA00;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821da99c
	if (ctx.cr6.lt) goto loc_821DA99C;
loc_821DAA10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821daeb8
	ctx.lr = 0x821DAA18;
	sub_821DAEB8(ctx, base);
	// stfs f30,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r28,r21
	r28.u64 = r21.u64;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r9.u64);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// std r9,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r9.u64);
	// std r11,56(r31)
	REX_STORE_U64(r31.u32 + 56, ctx.r11.u64);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821daabc
	if (!ctx.cr6.gt) goto loc_821DAABC;
loc_821DAA70:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r10,r4,r28
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821ec3a0
	ctx.lr = 0x821DAA8C;
	sub_821EC3A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82176218
	ctx.lr = 0x821DAA9C;
	sub_82176218(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82176218
	ctx.lr = 0x821DAAAC;
	sub_82176218(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821daa70
	if (ctx.cr6.lt) goto loc_821DAA70;
loc_821DAABC:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dab1c
	if (!ctx.cr6.gt) goto loc_821DAB1C;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r28,r11,-2544
	r28.s64 = ctx.r11.s64 + -2544;
loc_821DAAD4:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r10,r3,r30
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// lwz r4,20(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 20);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821ec240
	ctx.lr = 0x821DAAF8;
	sub_821EC240(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// bl 0x826a1e70
	ctx.lr = 0x821DAB0C;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821daad4
	if (ctx.cr6.lt) goto loc_821DAAD4;
loc_821DAB1C:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r20,64(r31)
	REX_STORE_U8(r31.u32 + 64, r20.u8);
	// beq 0x821dad00
	if (ctx.cr0.eq) goto loc_821DAD00;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dad00
	if (!ctx.cr6.gt) goto loc_821DAD00;
	// lfs f6,12(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r19.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
loc_821DAB3C:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mullw r10,r9,r5
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821dacf0
	if (!ctx.cr6.gt) goto loc_821DACF0;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_821DAB60:
	// lwz r9,28(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 28);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DAB78:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821dab78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DAB78;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DAB94:
	// ldu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821dab94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DAB94;
	// lfs f2,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f4,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// fsubs f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfs f31,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f31.f64 = double(temp.f32);
	// lfs f2,180(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r10,-16
	ctx.r3.s64 = ctx.r10.s64 + -16;
	// fsubs f2,f2,f31
	ctx.f2.f64 = double(float(ctx.f2.f64 - f31.f64));
	// lfs f30,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	f30.f64 = double(temp.f32);
	// lfs f31,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	f31.f64 = double(temp.f32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// fsubs f31,f31,f30
	f31.f64 = double(float(f31.f64 - f30.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// std r3,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r3.u64);
	// lfs f9,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f29,f12,f12,f11
	f29.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// lfs f30,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	f30.f64 = double(temp.f32);
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f11,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f11,f30,f11
	ctx.f11.f64 = double(float(f30.f64 / ctx.f11.f64));
	// lfs f28,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f28.f64 = double(temp.f32);
	// fmuls f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f30,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	f30.f64 = double(temp.f32);
	// fmadds f27,f8,f12,f7
	f27.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f7.f64)));
	// fdivs f30,f30,f28
	f30.f64 = double(float(f30.f64 / f28.f64));
	// lfs f7,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f7.f64 = double(temp.f32);
	// lfs f28,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	f28.f64 = double(temp.f32);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// fdivs f7,f28,f7
	ctx.f7.f64 = double(float(f28.f64 / ctx.f7.f64));
	// stfs f11,224(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f7,232(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lfs f11,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// lfs f7,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f2,f11,f11,f29
	ctx.f2.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, f29.f64)));
	// stfs f30,228(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// ld r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// fmsubs f5,f7,f11,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, -ctx.f5.f64)));
	// fmadds f4,f8,f11,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f3.f64)));
	// std r9,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// fmsubs f3,f10,f11,f1
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f1.f64)));
	// std r8,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r8.u64);
	// fmadds f11,f9,f11,f27
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, f27.f64)));
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// fnmsubs f10,f10,f12,f5
	ctx.f10.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f5.f64)));
	// fnmsubs f5,f9,f12,f4
	ctx.f5.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f12.f64, -ctx.f4.f64)));
	// fmadds f4,f13,f13,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f2.f64)));
	// fmadds f12,f7,f12,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f3.f64)));
	// fmadds f13,f7,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f11,f8,f0,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// fnmsubs f10,f7,f0,f5
	ctx.f10.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f5.f64)));
	// fnmsubs f0,f9,f0,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fdivs f12,f6,f4
	ctx.f12.f64 = double(float(ctx.f6.f64 / ctx.f4.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// ld r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r9,-16(r10)
	REX_STORE_U64(ctx.r10.u32 + -16, ctx.r9.u64);
	// std r8,-8(r10)
	REX_STORE_U64(ctx.r10.u32 + -8, ctx.r8.u64);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821dab60
	if (ctx.cr6.lt) goto loc_821DAB60;
loc_821DACF0:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dab3c
	if (ctx.cr6.lt) goto loc_821DAB3C;
loc_821DAD00:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821357c8
	ctx.lr = 0x821DAD08;
	sub_821357C8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,176(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r19.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x821DAD54;
	sub_8269D1B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821DAD58:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a2cf0
	ctx.lr = 0x821DAD64;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82206088) {
	REX_FUNC_PROLOGUE();
	// lbz r3,108(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 108);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822065A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822065A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822065d0
	if (ctx.cr6.eq) goto loc_822065D0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822065D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822065D0:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822065f0
	if (ctx.cr6.eq) goto loc_822065F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822065F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822065F0:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82206620
	goto loc_82206620;
loc_82206600:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206618;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82206620:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82206600
	if (!ctx.cr6.eq) goto loc_82206600;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8220664c
	goto loc_8220664C;
loc_82206634:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82206644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8220664C:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82206634
	if (!ctx.cr6.eq) goto loc_82206634;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220666C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x82206688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6052(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822066A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8220D958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8220D960;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r4,296(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,292(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 292);
	// stw r31,296(r30)
	REX_STORE_U32(r30.u32 + 296, r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D9A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,292(r30)
	REX_STORE_U32(r30.u32 + 292, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822105B0) {
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
	// addi r3,r3,340
	ctx.r3.s64 = ctx.r3.s64 + 340;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822105DC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822105EC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822105FC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x822e6f28
	ctx.lr = 0x82210604;
	sub_822E6F28(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82210614;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8221061C;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221062c
	if (ctx.cr0.eq) goto loc_8221062C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8221062C;
	sub_8269CE98(ctx, base);
loc_8221062C:
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

DEFINE_REX_FUNC(sub_82215158) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82215448) {
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
	// lwz r11,240(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 240);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82215484
	if (!ctx.cr6.eq) goto loc_82215484;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,240(r4)
	REX_STORE_U32(ctx.r4.u32 + 240, ctx.r11.u32);
	// stw r11,244(r4)
	REX_STORE_U32(ctx.r4.u32 + 244, ctx.r11.u32);
	// b 0x822154c0
	goto loc_822154C0;
loc_82215484:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822154a0
	if (!ctx.cr6.eq) goto loc_822154A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, r31.u32);
	// stw r31,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, r31.u32);
	// stw r11,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// b 0x822154c0
	goto loc_822154C0;
loc_822154A0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822154b4
	if (!ctx.cr6.eq) goto loc_822154B4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r11.u32);
	// b 0x822154c0
	goto loc_822154C0;
loc_822154B4:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822154c4
	if (!ctx.cr6.eq) goto loc_822154C4;
	// stw r31,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, r31.u32);
loc_822154C0:
	// bl 0x822166e8
	ctx.lr = 0x822154C4;
	sub_822166E8(ctx, base);
loc_822154C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_8221C5B0) {
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
	ctx.lr = 0x8221C5B8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r31,r25
	r31.u64 = r25.u64;
	// bl 0x82178268
	ctx.lr = 0x8221C5D4;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25956
	ctx.r11.s64 = ctx.r11.s64 + -25956;
	// stw r10,116(r29)
	REX_STORE_U32(r29.u32 + 116, ctx.r10.u32);
	// addi r27,r29,120
	r27.s64 = r29.s64 + 120;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r29,116
	r28.s64 = r29.s64 + 116;
	// bl 0x82120ac0
	ctx.lr = 0x8221C600;
	sub_82120AC0(ctx, base);
	// addi r26,r29,148
	r26.s64 = r29.s64 + 148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8221C614;
	sub_82120AC0(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8221C61C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221c648
	if (ctx.cr0.eq) goto loc_8221C648;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-13296
	ctx.r10.s64 = ctx.r10.s64 + -13296;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8221c64c
	goto loc_8221C64C;
loc_8221C648:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8221C64C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// addi r5,r11,-27088
	ctx.r5.s64 = ctx.r11.s64 + -27088;
	// bl 0x8216be80
	ctx.lr = 0x8221C65C;
	sub_8216BE80(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x8221C664;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8221c6b0
	if (ctx.cr0.eq) goto loc_8221C6B0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x82120600
	ctx.lr = 0x8221C67C;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x8221C690;
	sub_82197628(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// addi r10,r10,-19096
	ctx.r10.s64 = ctx.r10.s64 + -19096;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x8221c6b4
	goto loc_8221C6B4;
loc_8221C6B0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8221C6B4:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r29,80
	r28.s64 = r29.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8221C6C8;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c6e4
	if (ctx.cr0.eq) goto loc_8221C6E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8221C6E4;
	sub_82120AC0(ctx, base);
loc_8221C6E4:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8221C6EC;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8221c71c
	if (ctx.cr0.eq) goto loc_8221C71C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-26032
	ctx.r4.s64 = ctx.r11.s64 + -26032;
	// bl 0x82120600
	ctx.lr = 0x8221C704;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x821bf110
	ctx.lr = 0x8221C718;
	sub_821BF110(ctx, base);
	// b 0x8221c720
	goto loc_8221C720;
loc_8221C71C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8221C720:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8221C730;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c74c
	if (ctx.cr0.eq) goto loc_8221C74C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8221C74C;
	sub_82120AC0(ctx, base);
loc_8221C74C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8221C754;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8221c784
	if (ctx.cr0.eq) goto loc_8221C784;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// bl 0x82120600
	ctx.lr = 0x8221C76C;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x821bf110
	ctx.lr = 0x8221C780;
	sub_821BF110(ctx, base);
	// b 0x8221c788
	goto loc_8221C788;
loc_8221C784:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8221C788:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8221C798;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221c7b0
	if (ctx.cr0.eq) goto loc_8221C7B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8221C7B0;
	sub_82120AC0(ctx, base);
loc_8221C7B0:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8221C7B8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221c7d8
	if (ctx.cr0.eq) goto loc_8221C7D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821dc550
	ctx.lr = 0x8221C7D0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8221c7dc
	goto loc_8221C7DC;
loc_8221C7D8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_8221C7DC:
	// stw r4,112(r29)
	REX_STORE_U32(r29.u32 + 112, ctx.r4.u32);
	// addi r3,r29,96
	ctx.r3.s64 = r29.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x8221C7E8;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8221C7F0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8221c864
	if (ctx.cr0.eq) goto loc_8221C864;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-17920
	ctx.r4.s64 = ctx.r11.s64 + -17920;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221C814;
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
	ctx.lr = 0x8221C828;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8221c854
	if (ctx.cr0.eq) goto loc_8221C854;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-13568
	ctx.r10.s64 = ctx.r10.s64 + -13568;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8221c858
	goto loc_8221C858;
loc_8221C854:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8221C858:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x8221c868
	goto loc_8221C868;
loc_8221C864:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8221C868:
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
	ctx.lr = 0x8221C880;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8221C888;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r11,-23824
	r30.s64 = ctx.r11.s64 + -23824;
	// beq 0x8221c8c0
	if (ctx.cr0.eq) goto loc_8221C8C0;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-26012
	ctx.r4.s64 = ctx.r11.s64 + -26012;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221C8B4;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8221c8c4
	goto loc_8221C8C4;
loc_8221C8C0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8221C8C4:
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
	ctx.lr = 0x8221C8DC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8221C8E4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8221c914
	if (ctx.cr0.eq) goto loc_8221C914;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-26004
	ctx.r4.s64 = ctx.r11.s64 + -26004;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221C908;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8221c918
	goto loc_8221C918;
loc_8221C914:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8221C918:
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
	ctx.lr = 0x8221C930;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8221C938;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8221c968
	if (ctx.cr0.eq) goto loc_8221C968;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-25992
	ctx.r4.s64 = ctx.r11.s64 + -25992;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221C95C;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8221c96c
	goto loc_8221C96C;
loc_8221C968:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8221C96C:
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
	ctx.lr = 0x8221C984;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8221C98C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8221c9bc
	if (ctx.cr0.eq) goto loc_8221C9BC;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-25984
	ctx.r4.s64 = ctx.r11.s64 + -25984;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221C9B0;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8221c9c0
	goto loc_8221C9C0;
loc_8221C9BC:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8221C9C0:
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
	ctx.lr = 0x8221C9D8;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8221C9E0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8221ca10
	if (ctx.cr0.eq) goto loc_8221CA10;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-25976
	ctx.r4.s64 = ctx.r11.s64 + -25976;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221CA04;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8221ca14
	goto loc_8221CA14;
loc_8221CA10:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_8221CA14:
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
	ctx.lr = 0x8221CA2C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8221CA34;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8221ca64
	if (ctx.cr0.eq) goto loc_8221CA64;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-25964
	ctx.r4.s64 = ctx.r11.s64 + -25964;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x8221CA58;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8221ca68
	goto loc_8221CA68;
loc_8221CA64:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_8221CA68:
	// lwz r10,112(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// bl 0x82264568
	ctx.lr = 0x8221CA80;
	sub_82264568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8223DDE0) {
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
	ctx.lr = 0x8223DDE8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82277bc8
	ctx.lr = 0x8223DDF4;
	sub_82277BC8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-16712
	ctx.r11.s64 = ctx.r11.s64 + -16712;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,3776
	ctx.r3.s64 = r31.s64 + 3776;
	// bl 0x82120ac0
	ctx.lr = 0x8223DE10;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3804
	ctx.r3.s64 = r31.s64 + 3804;
	// bl 0x82120ac0
	ctx.lr = 0x8223DE20;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r30,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, r30.u32);
	// addi r28,r31,3860
	r28.s64 = r31.s64 + 3860;
	// stw r30,3844(r31)
	REX_STORE_U32(r31.u32 + 3844, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,3848(r31)
	REX_STORE_U32(r31.u32 + 3848, r30.u32);
	// stb r29,3852(r31)
	REX_STORE_U8(r31.u32 + 3852, r29.u8);
	// stfs f0,3856(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 3856, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8223DE58;
	sub_82120AC0(ctx, base);
	// stb r30,3892(r31)
	REX_STORE_U8(r31.u32 + 3892, r30.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82120600
	ctx.lr = 0x8223DE6C;
	sub_82120600(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82120b20
	ctx.lr = 0x8223DE80;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8223DE90;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8223DE98;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223deb8
	if (ctx.cr0.eq) goto loc_8223DEB8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,250
	ctx.r5.s64 = 250;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8223DEB0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8223debc
	goto loc_8223DEBC;
loc_8223DEB8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8223DEBC:
	// stw r4,3832(r31)
	REX_STORE_U32(r31.u32 + 3832, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x8223DEC8;
	sub_821D3988(ctx, base);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x8223DED0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223df20
	if (ctx.cr0.eq) goto loc_8223DF20;
	// lwz r11,3832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// addi r10,r10,12244
	ctx.r10.s64 = ctx.r10.s64 + 12244;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r9,r9,-18072
	ctx.r9.s64 = ctx.r9.s64 + -18072;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// addi r8,r8,-13532
	ctx.r8.s64 = ctx.r8.s64 + -13532;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stb r30,28(r3)
	REX_STORE_U8(ctx.r3.u32 + 28, r30.u8);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// b 0x8223df24
	goto loc_8223DF24;
loc_8223DF20:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8223DF24:
	// lwz r11,3832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x8223DF34;
	sub_82145710(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, ctx.r11.u32);
	// bl 0x82120600
	ctx.lr = 0x8223DF4C;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8223DF5C;
	sub_82180E18(ctx, base);
	// stw r3,3888(r31)
	REX_STORE_U32(r31.u32 + 3888, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8223DF70;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8223DF84;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x8215f338
	ctx.lr = 0x8223DF90;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8223dfa0
	if (!ctx.cr6.eq) goto loc_8223DFA0;
	// lbz r30,8(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
loc_8223DFA0:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x8223dfbc
	if (ctx.cr0.eq) goto loc_8223DFBC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,25
	ctx.r5.s64 = 25;
	// addi r4,r11,-17104
	ctx.r4.s64 = ctx.r11.s64 + -17104;
	// b 0x8223dfc8
	goto loc_8223DFC8;
loc_8223DFBC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r11,-17076
	ctx.r4.s64 = ctx.r11.s64 + -17076;
loc_8223DFC8:
	// bl 0x82120c08
	ctx.lr = 0x8223DFCC;
	sub_82120C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8224C2C8) {
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
	ctx.lr = 0x8224C2D0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,1
	r28.s64 = 1;
	// beq 0x8224c360
	if (ctx.cr0.eq) goto loc_8224C360;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,692(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 692);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,696(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 696);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// lfs f0,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
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
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,692(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 692, temp.u32);
	// bne 0x8224c360
	if (!ctx.cr0.eq) goto loc_8224C360;
	// lwz r9,468(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// li r10,-101
	ctx.r10.s64 = -101;
	// stb r28,696(r3)
	REX_STORE_U8(ctx.r3.u32 + 696, r28.u8);
	// lwz r11,200(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r10,716(r9)
	REX_STORE_U16(ctx.r9.u32 + 716, ctx.r10.u16);
	// beq cr6,0x8224c360
	if (ctx.cr6.eq) goto loc_8224C360;
	// sth r10,6(r11)
	REX_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
loc_8224C360:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82126320
	ctx.lr = 0x8224C368;
	sub_82126320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821262a8
	ctx.lr = 0x8224C374;
	sub_821262A8(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821a1f88
	ctx.lr = 0x8224C39C;
	sub_821A1F88(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224C3B4:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8224c3b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224C3B4;
	// addi r4,r31,576
	ctx.r4.s64 = r31.s64 + 576;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8216d040
	ctx.lr = 0x8224C3CC;
	sub_8216D040(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r8,r11,320
	ctx.r8.s64 = ctx.r11.s64 + 320;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r10,320(r11)
	REX_STORE_U64(ctx.r11.u32 + 320, ctx.r10.u64);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r8,328(r11)
	REX_STORE_U64(ctx.r11.u32 + 328, ctx.r8.u64);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r8,r11,336
	ctx.r8.s64 = ctx.r11.s64 + 336;
	// std r10,336(r11)
	REX_STORE_U64(ctx.r11.u32 + 336, ctx.r10.u64);
	// std r9,344(r11)
	REX_STORE_U64(ctx.r11.u32 + 344, ctx.r9.u64);
	// bl 0x821c3ec8
	ctx.lr = 0x8224C430;
	sub_821C3EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,468(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 468);
	// bl 0x822c0f18
	ctx.lr = 0x8224C43C;
	sub_822C0F18(ctx, base);
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 464);
	// stb r28,816(r11)
	REX_STORE_U8(ctx.r11.u32 + 816, r28.u8);
	// beq 0x8224c454
	if (ctx.cr0.eq) goto loc_8224C454;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x822ef0b8
	ctx.lr = 0x8224C454;
	sub_822EF0B8(ctx, base);
loc_8224C454:
	// lbz r11,705(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 705);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224c484
	if (ctx.cr0.eq) goto loc_8224C484;
	// stb r30,705(r31)
	REX_STORE_U8(r31.u32 + 705, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224c160
	ctx.lr = 0x8224C470;
	sub_8224C160(ctx, base);
	// lbz r11,699(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 699);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224c484
	if (!ctx.cr0.eq) goto loc_8224C484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224c660
	ctx.lr = 0x8224C484;
	sub_8224C660(ctx, base);
loc_8224C484:
	// stb r30,702(r31)
	REX_STORE_U8(r31.u32 + 702, r30.u8);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C4A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224c4c0
	if (!ctx.cr0.eq) goto loc_8224C4C0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224C4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224C4C0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8225C938) {
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
	ctx.lr = 0x8225C940;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r16,-32106
	r16.s64 = -2104098816;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,6192(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r22,-32106
	r22.s64 = -2104098816;
	// beq 0x8225c994
	if (ctx.cr0.eq) goto loc_8225C994;
	// lwz r3,6152(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225C994;
	sub_8225B1C8(ctx, base);
loc_8225C994:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,40(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r14,r11,16592
	r14.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8225c9c4
	if (!ctx.cr6.gt) goto loc_8225C9C4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C9C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225C9C4:
	// lwz r9,172(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 172);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r28,r11,1624
	r28.s64 = ctx.r11.s64 + 1624;
	// li r21,1
	r21.s64 = 1;
	// li r17,0
	r17.s64 = 0;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lbz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 36);
	// addi r15,r10,-27404
	r15.s64 = ctx.r10.s64 + -27404;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225cbe0
	if (!ctx.cr0.eq) goto loc_8225CBE0;
	// lwz r3,6152(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6152);
	// mr r24,r17
	r24.u64 = r17.u64;
	// bl 0x8217efa8
	ctx.lr = 0x8225C9FC;
	sub_8217EFA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8225cbe0
	if (!ctx.cr0.gt) goto loc_8225CBE0;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// lfs f31,-16132(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -16132);
	f31.f64 = double(temp.f32);
	// addi r20,r11,-32660
	r20.s64 = ctx.r11.s64 + -32660;
	// addi r19,r10,16408
	r19.s64 = ctx.r10.s64 + 16408;
	// addi r18,r9,-8380
	r18.s64 = ctx.r9.s64 + -8380;
loc_8225CA28:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,6152(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6152);
	// bl 0x8217f038
	ctx.lr = 0x8225CA34;
	sub_8217F038(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CA48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6192(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 6192);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CA64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r29,r3
	ctx.r10.u64 = ctx.r3.u64 - r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r26,r10,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CA84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6080(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6080);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CAC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225cae0
	if (ctx.cr0.eq) goto loc_8225CAE0;
	// addi r11,r30,394
	ctx.r11.s64 = r30.s64 + 394;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// stwx r10,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, ctx.r10.u32);
	// andc r28,r10,r9
	r28.u64 = ctx.r10.u64 & ~ctx.r9.u64;
loc_8225CAE0:
	// rlwinm. r11,r28,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cb20
	if (ctx.cr0.eq) goto loc_8225CB20;
	// lfs f0,1532(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8225cafc
	if (ctx.cr6.gt) goto loc_8225CAFC;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8225CAFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cbc8
	if (ctx.cr0.eq) goto loc_8225CBC8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8225CB08:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CB1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225cbc8
	goto loc_8225CBC8;
loc_8225CB20:
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cb64
	if (ctx.cr0.eq) goto loc_8225CB64;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cb38
	if (ctx.cr0.eq) goto loc_8225CB38;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8225cb08
	goto loc_8225CB08;
loc_8225CB38:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cbc8
	if (ctx.cr0.eq) goto loc_8225CBC8;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lwz r3,172(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 172);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// slw r7,r21,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (r21.u32 << (r29.u8 & 0x3F));
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82288100
	ctx.lr = 0x8225CB5C;
	sub_82288100(ctx, base);
	// stw r21,1596(r25)
	REX_STORE_U32(r25.u32 + 1596, r21.u32);
	// b 0x8225cbc8
	goto loc_8225CBC8;
loc_8225CB64:
	// rlwinm. r11,r28,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cbc8
	if (ctx.cr0.eq) goto loc_8225CBC8;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cbc8
	if (!ctx.cr0.eq) goto loc_8225CBC8;
	// lfs f0,1532(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1532);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8225cb88
	if (ctx.cr6.gt) goto loc_8225CB88;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8225CB88:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cbc8
	if (ctx.cr0.eq) goto loc_8225CBC8;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f670
	ctx.lr = 0x8225CB9C;
	sub_8215F670(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225CBA4;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8225CBAC;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r21,0(r31)
	REX_STORE_U32(r31.u32 + 0, r21.u32);
	// slw r11,r21,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (r21.u32 << (r29.u8 & 0x3F));
	// li r4,4
	ctx.r4.s64 = 4;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225CBC8;
	sub_8225B1C8(ctx, base);
loc_8225CBC8:
	// lwz r3,6152(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6152);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// bl 0x8217efa8
	ctx.lr = 0x8225CBD4;
	sub_8217EFA8(ctx, base);
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8225ca28
	if (ctx.cr6.lt) goto loc_8225CA28;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8225CBE0:
	// lwz r3,6152(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CBF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x8225cc70
	if (!ctx.cr6.eq) goto loc_8225CC70;
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// mr r31,r17
	r31.u64 = r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225cf48
	if (!ctx.cr6.gt) goto loc_8225CF48;
	// addi r29,r25,192
	r29.s64 = r25.s64 + 192;
loc_8225CC10:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225CC1C;
	sub_8228C340(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CC34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cc48
	if (ctx.cr0.eq) goto loc_8225CC48;
	// lbz r11,98(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 98);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225cc5c
	if (!ctx.cr0.eq) goto loc_8225CC5C;
loc_8225CC48:
	// lwz r11,272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 272);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225cc10
	if (ctx.cr6.lt) goto loc_8225CC10;
	// b 0x8225cf48
	goto loc_8225CF48;
loc_8225CC5C:
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225CC6C;
	sub_8225B1C8(ctx, base);
	// b 0x8225cf48
	goto loc_8225CF48;
loc_8225CC70:
	// lwz r3,6152(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CC84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bne cr6,0x8225cf48
	if (!ctx.cr6.eq) goto loc_8225CF48;
	// lfs f13,44(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,228(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8225cf48
	if (ctx.cr6.lt) goto loc_8225CF48;
	// lwz r31,172(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225ccb8
	if (ctx.cr0.eq) goto loc_8225CCB8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225cf44
	if (!ctx.cr6.eq) goto loc_8225CF44;
loc_8225CCB8:
	// stw r17,32(r31)
	REX_STORE_U32(r31.u32 + 32, r17.u32);
	// stw r17,28(r31)
	REX_STORE_U32(r31.u32 + 28, r17.u32);
	// stb r21,36(r31)
	REX_STORE_U8(r31.u32 + 36, r21.u8);
	// lwz r3,6192(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CCD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r21,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225ccfc
	if (!ctx.cr0.eq) goto loc_8225CCFC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2624
	ctx.r4.s64 = ctx.r11.s64 + 2624;
	// addi r3,r10,2676
	ctx.r3.s64 = ctx.r10.s64 + 2676;
	// li r5,83
	ctx.r5.s64 = 83;
	// bl 0x821231d0
	ctx.lr = 0x8225CCFC;
	sub_821231D0(ctx, base);
loc_8225CCFC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r17,44(r31)
	REX_STORE_U32(r31.u32 + 44, r17.u32);
	// stb r17,52(r31)
	REX_STORE_U8(r31.u32 + 52, r17.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// beq cr6,0x8225cf38
	if (ctx.cr6.eq) goto loc_8225CF38;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225CD34;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225CD40;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x8225CD54;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225CD64;
	sub_82120600(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225CD70;
	sub_82178B60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x8225CD84;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225CD94;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225CDA0;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8225CDB4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225CDC4;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225CDD0;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8225CDE4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225CDF4;
	sub_82120600(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225CE00;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8225CE14;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225CE24;
	sub_82120600(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225CE30;
	sub_82178B60(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8225CE44;
	sub_82120AC0(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r11,-19376
	r30.s64 = ctx.r11.s64 + -19376;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225CE60;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225CE74;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288798
	ctx.lr = 0x8225CE8C;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288798
	ctx.lr = 0x8225CEA4;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288848
	ctx.lr = 0x8225CEBC;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82288848
	ctx.lr = 0x8225CED4;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-8364
	ctx.r4.s64 = ctx.r11.s64 + -8364;
	// bl 0x82288848
	ctx.lr = 0x8225CEE4;
	sub_82288848(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82288848
	ctx.lr = 0x8225CEF0;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225CF00;
	sub_82120600(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225CF0C;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x8225CF20;
	sub_82120AC0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82288798
	ctx.lr = 0x8225CF38;
	sub_82288798(ctx, base);
loc_8225CF38:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x8225CF44;
	sub_8226AFB8(ctx, base);
loc_8225CF44:
	// stw r17,1596(r25)
	REX_STORE_U32(r25.u32 + 1596, r17.u32);
loc_8225CF48:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r31,r11,-31088
	r31.s64 = ctx.r11.s64 + -31088;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225CF5C;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8225CF60;
	sub_8215F0F0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82263cf8
	ctx.lr = 0x8225CF68;
	sub_82263CF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cf94
	if (!ctx.cr0.eq) goto loc_8225CF94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225CF7C;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31064
	ctx.r4.s64 = ctx.r11.s64 + -31064;
	// bl 0x8215f670
	ctx.lr = 0x8225CF88;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31048
	ctx.r4.s64 = ctx.r11.s64 + -31048;
	// bl 0x8215fbf8
	ctx.lr = 0x8225CF94;
	sub_8215FBF8(ctx, base);
loc_8225CF94:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82263e10
	ctx.lr = 0x8225CF9C;
	sub_82263E10(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8228A290) {
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
	ctx.lr = 0x8228A298;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-11460
	ctx.r4.s64 = ctx.r11.s64 + -11460;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228A2BC;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,-11444
	ctx.r4.s64 = ctx.r11.s64 + -11444;
	// bl 0x8215f670
	ctx.lr = 0x8228A2CC;
	sub_8215F670(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228A2D4;
	sub_8215F0F0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r29,8(r26)
	REX_STORE_U32(r26.u32 + 8, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,-11432
	ctx.r4.s64 = ctx.r11.s64 + -11432;
	// bl 0x8215f670
	ctx.lr = 0x8228A2F0;
	sub_8215F670(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228A2F8;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r26)
	REX_STORE_U32(r26.u32 + 8, r28.u32);
	// stw r31,0(r26)
	REX_STORE_U32(r26.u32 + 0, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821ef950
	ctx.lr = 0x8228A308;
	sub_821EF950(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-16776
	ctx.r4.s64 = ctx.r11.s64 + -16776;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8228A31C;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228A324;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x8228baf8
	ctx.lr = 0x8228A33C;
	sub_8228BAF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8228C8E0) {
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
	ctx.lr = 0x8228C8E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8228c914
	if (!ctx.cr6.eq) goto loc_8228C914;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,3600
	ctx.r4.s64 = ctx.r11.s64 + 3600;
	// addi r3,r10,3844
	ctx.r3.s64 = ctx.r10.s64 + 3844;
	// li r5,286
	ctx.r5.s64 = 286;
	// bl 0x821231d0
	ctx.lr = 0x8228C914;
	sub_821231D0(ctx, base);
loc_8228C914:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-26828
	ctx.r4.s64 = ctx.r11.s64 + -26828;
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
	// bl 0x8215f670
	ctx.lr = 0x8228C928;
	sub_8215F670(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8228c93c
	if (ctx.cr6.lt) goto loc_8228C93C;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8228c940
	goto loc_8228C940;
loc_8228C93C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8228C940:
	// bl 0x8215fbf8
	ctx.lr = 0x8228C944;
	sub_8215FBF8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-15948
	ctx.r4.s64 = ctx.r11.s64 + -15948;
	// bl 0x8215f670
	ctx.lr = 0x8228C954;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8228c968
	if (ctx.cr6.lt) goto loc_8228C968;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8228c96c
	goto loc_8228C96C;
loc_8228C968:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8228C96C:
	// bl 0x8215fbf8
	ctx.lr = 0x8228C970;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-8148
	ctx.r4.s64 = ctx.r11.s64 + -8148;
	// lwz r28,56(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x8215f670
	ctx.lr = 0x8228C984;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228C98C;
	sub_8215F0F0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-8160
	ctx.r4.s64 = ctx.r11.s64 + -8160;
	// lwz r28,60(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 60);
	// bl 0x8215f670
	ctx.lr = 0x8228C9AC;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228C9B4;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-8176
	ctx.r4.s64 = ctx.r11.s64 + -8176;
	// lwz r28,64(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x8215f670
	ctx.lr = 0x8228C9D0;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228C9D8;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,24544
	ctx.r4.s64 = ctx.r11.s64 + 24544;
	// lwz r28,76(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x8215f670
	ctx.lr = 0x8228C9F4;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228C9FC;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-31432
	ctx.r4.s64 = ctx.r11.s64 + -31432;
	// lwz r28,68(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x8215f670
	ctx.lr = 0x8228CA18;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228CA20;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-8188
	ctx.r4.s64 = ctx.r11.s64 + -8188;
	// lwz r28,72(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x8215f670
	ctx.lr = 0x8228CA3C;
	sub_8215F670(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228CA44;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r27)
	REX_STORE_U32(r27.u32 + 8, r28.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-8136
	ctx.r4.s64 = ctx.r11.s64 + -8136;
	// lwz r31,80(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8215f670
	ctx.lr = 0x8228CA60;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8228CA68;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82298F70) {
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
	ctx.lr = 0x82298F78;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82298fd8
	if (!ctx.cr6.gt) goto loc_82298FD8;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82298F9C:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,240(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82298fc4
	if (!ctx.cr6.eq) goto loc_82298FC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298FC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82298FC4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82298f9c
	if (ctx.cr6.lt) goto loc_82298F9C;
loc_82298FD8:
	// li r25,1
	r25.s64 = 1;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// mr r26,r31
	r26.u64 = r31.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stb r25,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r25.u8);
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r28,r31
	r28.u64 = r31.u64;
	// stb r25,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, r25.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stb r25,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, r25.u8);
	// stw r31,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// stw r31,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// stb r25,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, r25.u8);
	// stw r31,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// ble cr6,0x822990b0
	if (!ctx.cr6.gt) goto loc_822990B0;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82299034:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r30,204(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x82299780
	ctx.lr = 0x82299054;
	sub_82299780(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82299068
	if (ctx.cr6.eq) goto loc_82299068;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82299098
	if (!ctx.cr0.eq) goto loc_82299098;
loc_82299068:
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822991b8
	ctx.lr = 0x8229907C;
	sub_822991B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82299094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_82299098:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82299034
	if (ctx.cr6.lt) goto loc_82299034;
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_822990B0:
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822990e8
	if (ctx.cr6.eq) goto loc_822990E8;
	// lbz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822990e8
	if (ctx.cr0.eq) goto loc_822990E8;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r9,-19400(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822990E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822990E8:
	// stb r25,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, r25.u8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r31,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// stw r31,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// stw r31,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// beq cr6,0x82299128
	if (ctx.cr6.eq) goto loc_82299128;
	// lbz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82299128
	if (ctx.cr0.eq) goto loc_82299128;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// lwz r10,-19400(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + -4);
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82299128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82299128:
	// stb r25,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, r25.u8);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r31,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// bl 0x821eced8
	ctx.lr = 0x82299140;
	sub_821ECED8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821eced8
	ctx.lr = 0x82299148;
	sub_821ECED8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822A6B68) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
	// addi r10,r10,6640
	ctx.r10.s64 = ctx.r10.s64 + 6640;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,6632
	ctx.r9.s64 = ctx.r9.s64 + 6632;
	// stb r7,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r9,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// stw r8,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r8.u32);
	// stw r3,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r3.u32);
	// bne 0x822a6bd4
	if (!ctx.cr0.eq) goto loc_822A6BD4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_822A6BD4:
	// stw r4,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822a6be4
	if (!ctx.cr6.eq) goto loc_822A6BE4;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_822A6BE4:
	// stw r5,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A6BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A6C18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_822AEB88) {
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
	// bl 0x826a1c80
	ctx.lr = 0x822AEB90;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c70
	ctx.lr = 0x822AEB98;
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r8,844(r1)
	REX_STORE_U32(ctx.r1.u32 + 844, ctx.r8.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r10,r7,48
	ctx.r10.s64 = ctx.r7.s64 + 48;
	// lfs f0,308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stb r9,324(r11)
	REX_STORE_U8(ctx.r11.u32 + 324, ctx.r9.u8);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stb r6,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, ctx.r6.u8);
	// addi r6,r11,304
	ctx.r6.s64 = ctx.r11.s64 + 304;
	// std r8,304(r11)
	REX_STORE_U64(ctx.r11.u32 + 304, ctx.r8.u64);
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// std r7,312(r11)
	REX_STORE_U64(ctx.r11.u32 + 312, ctx.r7.u64);
	// stfs f31,356(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 356, temp.u32);
	// stb r9,372(r11)
	REX_STORE_U8(ctx.r11.u32 + 372, ctx.r9.u8);
	// stfs f31,360(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 360, temp.u32);
	// stfs f31,364(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 364, temp.u32);
	// addi r29,r4,48
	r29.s64 = ctx.r4.s64 + 48;
	// stfs f31,368(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 368, temp.u32);
	// lhz r9,352(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 352);
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// sth r9,352(r11)
	REX_STORE_U16(ctx.r11.u32 + 352, ctx.r9.u16);
	// lfs f3,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// ld r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// lfs f11,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// ld r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// lfs f12,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,336
	ctx.r11.s64 = ctx.r11.s64 + 336;
	// lfs f9,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lfs f10,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// ld r6,16(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// ld r4,24(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// lfs f7,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// ld r25,32(r31)
	r25.u64 = REX_LOAD_U64(r31.u32 + 32);
	// lfs f5,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f5.f64 = double(temp.f32);
	// ld r24,40(r31)
	r24.u64 = REX_LOAD_U64(r31.u32 + 40);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ld r23,48(r31)
	r23.u64 = REX_LOAD_U64(r31.u32 + 48);
	// lfs f13,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f3,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f30,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f30.f64 = double(temp.f32);
	// fmr f27,f31
	f27.f64 = f31.f64;
	// lfs f29,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	f29.f64 = double(temp.f32);
	// addi r26,r5,48
	r26.s64 = ctx.r5.s64 + 48;
	// addi r28,r30,48
	r28.s64 = r30.s64 + 48;
	// std r7,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r7.u64);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// std r9,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r9.u64);
	// addi r22,r1,416
	r22.s64 = ctx.r1.s64 + 416;
	// fsubs f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f9,f6,f5
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f24,f4,f0
	f24.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f24,112(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f26,f12,f10
	f26.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fsubs f25,f11,f9
	f25.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// fneg f12,f24
	ctx.f12.u64 = f24.u64 ^ 0x8000000000000000;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// ld r5,48(r30)
	ctx.r5.u64 = REX_LOAD_U64(r30.u32 + 48);
	// ld r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U64(r30.u32 + 56);
	// addi r16,r1,256
	r16.s64 = ctx.r1.s64 + 256;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// ld r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 40);
	// addi r14,r1,272
	r14.s64 = ctx.r1.s64 + 272;
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// std r5,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// fneg f9,f26
	ctx.f9.u64 = f26.u64 ^ 0x8000000000000000;
	// std r4,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// fneg f8,f25
	ctx.f8.u64 = f25.u64 ^ 0x8000000000000000;
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// addi r20,r1,224
	r20.s64 = ctx.r1.s64 + 224;
	// ld r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 56);
	// addi r18,r1,240
	r18.s64 = ctx.r1.s64 + 240;
	// ld r21,0(r30)
	r21.u64 = REX_LOAD_U64(r30.u32 + 0);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// ld r19,8(r30)
	r19.u64 = REX_LOAD_U64(r30.u32 + 8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ld r17,16(r30)
	r17.u64 = REX_LOAD_U64(r30.u32 + 16);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// ld r15,24(r30)
	r15.u64 = REX_LOAD_U64(r30.u32 + 24);
	// stfs f26,116(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f25,120(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// std r25,0(r22)
	REX_STORE_U64(r22.u32 + 0, r25.u64);
	// std r24,8(r22)
	REX_STORE_U64(r22.u32 + 8, r24.u64);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// std r23,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r23.u64);
	// fmuls f7,f3,f9
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// fmuls f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// std r21,0(r20)
	REX_STORE_U64(r20.u32 + 0, r21.u64);
	// std r19,8(r20)
	REX_STORE_U64(r20.u32 + 8, r19.u64);
	// std r17,0(r18)
	REX_STORE_U64(r18.u32 + 0, r17.u64);
	// std r15,8(r18)
	REX_STORE_U64(r18.u32 + 8, r15.u64);
	// ld r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fmadds f13,f8,f1,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f1.f64, ctx.f13.f64)));
	// fmadds f7,f30,f8,f7
	ctx.f7.f64 = double(float(std::fma(f30.f64, ctx.f8.f64, ctx.f7.f64)));
	// std r10,0(r16)
	REX_STORE_U64(r16.u32 + 0, ctx.r10.u64);
	// fmadds f9,f29,f8,f9
	ctx.f9.f64 = double(float(std::fma(f29.f64, ctx.f8.f64, ctx.f9.f64)));
	// ld r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,8(r16)
	REX_STORE_U64(r16.u32 + 8, ctx.r10.u64);
	// ld r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmadds f0,f11,f12,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fmadds f0,f10,f12,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// std r10,0(r14)
	REX_STORE_U64(r14.u32 + 0, ctx.r10.u64);
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,8(r14)
	REX_STORE_U64(r14.u32 + 8, ctx.r10.u64);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AEDF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f25
	ctx.f12.f64 = double(float(ctx.f12.f64 * f25.f64));
	// lfs f10,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f26
	ctx.f11.f64 = double(float(ctx.f11.f64 * f26.f64));
	// lfs f9,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * f26.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f4,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f13,f24,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f24.f64, ctx.f12.f64)));
	// lfs f2,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lfs f3,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f12,f2,f25,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, f25.f64, ctx.f11.f64)));
	// fmadds f10,f3,f25,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, f25.f64, ctx.f10.f64)));
	// lfs f2,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lfs f5,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lfs f1,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f3,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f7,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f7,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f5,f11,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f4.f64)));
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// fmadds f13,f26,f2,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f2.f64, ctx.f13.f64)));
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fmadds f11,f3,f11,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f8.f64)));
	// lfs f30,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f30.f64 = double(temp.f32);
	// fmadds f13,f24,f1,f12
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f1.f64, ctx.f12.f64)));
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fmadds f13,f7,f24,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, f24.f64, ctx.f10.f64)));
	// stfs f13,344(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lfs f4,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lfs f6,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f9,f30,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f5.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f30,f0,f6
	f30.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// fmadds f11,f4,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f11.f64)));
	// fadds f29,f12,f8
	f29.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f28,f11,f13
	f28.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x822AEED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f9,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f7,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f10,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f12,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f6,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f23,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	f23.f64 = double(temp.f32);
	// fmadds f13,f10,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f13.f64)));
	// lfs f2,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f6,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f22,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	f22.f64 = double(temp.f32);
	// lfs f8,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f5,f7,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f12.f64)));
	// lfs f10,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f6,f3,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, ctx.f13.f64)));
	// fmadds f0,f9,f4,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f4.f64, ctx.f0.f64)));
	// fmadds f12,f2,f6,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, ctx.f12.f64)));
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + f23.f64));
	// fadds f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f12,f12,f22
	ctx.f12.f64 = double(float(ctx.f12.f64 + f22.f64));
	// fsubs f0,f29,f13
	ctx.f0.f64 = double(float(f29.f64 - ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f30,f11
	ctx.f13.f64 = double(float(f30.f64 - ctx.f11.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 - ctx.f12.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fmr f9,f31
	ctx.f9.f64 = f31.f64;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// li r30,32
	r30.s64 = 32;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x822af3e8
	if (!ctx.cr6.gt) goto loc_822AF3E8;
	// lfs f0,1236(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1236);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,128(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f23,424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 424);
	f23.f64 = double(temp.f32);
	// lfs f22,420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 420);
	f22.f64 = double(temp.f32);
	// lfs f21,416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 416);
	f21.f64 = double(temp.f32);
	// lfs f20,408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 408);
	f20.f64 = double(temp.f32);
	// lfs f19,404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 404);
	f19.f64 = double(temp.f32);
	// lfs f18,400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 400);
	f18.f64 = double(temp.f32);
	// lfs f17,392(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 392);
	f17.f64 = double(temp.f32);
	// lfs f16,388(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 388);
	f16.f64 = double(temp.f32);
	// lfs f15,384(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 384);
	f15.f64 = double(temp.f32);
	// lfs f14,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	f14.f64 = double(temp.f32);
	// lfs f30,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	f30.f64 = double(temp.f32);
	// lfs f29,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f29.f64 = double(temp.f32);
	// lfs f28,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	f28.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_822AEFF8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// beq cr6,0x822af3dc
	if (ctx.cr6.eq) goto loc_822AF3DC;
	// fneg f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f29.u64 ^ 0x8000000000000000;
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// fneg f13,f30
	ctx.f13.u64 = f30.u64 ^ 0x8000000000000000;
	// lwz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 8);
	// fneg f12,f28
	ctx.f12.u64 = f28.u64 ^ 0x8000000000000000;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fmuls f11,f18,f0
	ctx.f11.f64 = double(float(f18.f64 * ctx.f0.f64));
	// fmuls f10,f19,f0
	ctx.f10.f64 = double(float(f19.f64 * ctx.f0.f64));
	// fmuls f0,f20,f0
	ctx.f0.f64 = double(float(f20.f64 * ctx.f0.f64));
	// fmadds f11,f21,f13,f11
	ctx.f11.f64 = double(float(std::fma(f21.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmadds f10,f22,f13,f10
	ctx.f10.f64 = double(float(std::fma(f22.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f0,f23,f13,f0
	ctx.f0.f64 = double(float(std::fma(f23.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f15,f12,f11
	ctx.f13.f64 = double(float(std::fma(f15.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmadds f13,f16,f12,f10
	ctx.f13.f64 = double(float(std::fma(f16.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fmadds f0,f17,f12,f0
	ctx.f0.f64 = double(float(std::fma(f17.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AF060;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f13,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f11,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lfs f8,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lfs f9,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f9,f17
	ctx.f7.f64 = double(float(ctx.f9.f64 * f17.f64));
	// fmuls f6,f9,f20
	ctx.f6.f64 = double(float(ctx.f9.f64 * f20.f64));
	// lfs f2,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f23
	ctx.f9.f64 = double(float(ctx.f9.f64 * f23.f64));
	// lfs f3,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// fmadds f0,f11,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f0.f64)));
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fmadds f13,f10,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f28.f64, ctx.f13.f64)));
	// lfs f11,432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f8,f28,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, f28.f64, ctx.f12.f64)));
	// lfs f10,436(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,440(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 440);
	ctx.f8.f64 = double(temp.f32);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// fmadds f7,f3,f16,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f3.f64, f16.f64, ctx.f7.f64)));
	// fmadds f6,f3,f19,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, f19.f64, ctx.f6.f64)));
	// fmadds f9,f3,f22,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, f22.f64, ctx.f9.f64)));
	// fmadds f0,f5,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f0.f64)));
	// stfs f0,352(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmadds f0,f4,f30,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, f30.f64, ctx.f13.f64)));
	// stfs f0,356(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fmadds f0,f14,f30,f12
	ctx.f0.f64 = double(float(std::fma(f14.f64, f30.f64, ctx.f12.f64)));
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmadds f0,f2,f15,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, f15.f64, ctx.f7.f64)));
	// fmadds f13,f2,f18,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f2.f64, f18.f64, ctx.f6.f64)));
	// fmadds f12,f2,f21,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, f21.f64, ctx.f9.f64)));
	// fadds f26,f0,f11
	f26.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f26,368(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fadds f25,f13,f10
	f25.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f25,372(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fadds f24,f12,f8
	f24.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f24,376(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AF12C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f14
	ctx.f12.f64 = double(float(ctx.f0.f64 * f14.f64));
	// lfs f11,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f11,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lfs f9,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f11,f10,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f13.f64)));
	// lfs f8,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fmadds f12,f11,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f12.f64)));
	// lfs f7,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,272(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,280(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f11,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f0.f64)));
	// lfs f11,276(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f7,f6,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f13.f64)));
	// fcmpu cr6,f27,f10
	ctx.cr6.compare(f27.f64, ctx.f10.f64);
	// fmadds f12,f7,f4,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, ctx.f12.f64)));
	// fmadds f9,f7,f5,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f0.f64)));
	// fadds f0,f13,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f0,f26,f0
	ctx.f0.f64 = double(float(f26.f64 - ctx.f0.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f12,f24,f12
	ctx.f12.f64 = double(float(f24.f64 - ctx.f12.f64));
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(f25.f64 - ctx.f13.f64));
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmadds f11,f0,f28,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f11.f64)));
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// fmadds f11,f12,f30,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f11.f64)));
	// bgt cr6,0x822af43c
	if (ctx.cr6.gt) goto loc_822AF43C;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// ble cr6,0x822af2e0
	if (!ctx.cr6.gt) goto loc_822AF2E0;
	// lfs f9,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f29,f9
	ctx.f9.f64 = double(float(f29.f64 * ctx.f9.f64));
	// lfs f8,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f9,f30,f8,f9
	ctx.f9.f64 = double(float(std::fma(f30.f64, ctx.f8.f64, ctx.f9.f64)));
	// fmadds f9,f7,f28,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, f28.f64, ctx.f9.f64)));
	// fcmpu cr6,f9,f6
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// bge cr6,0x822af43c
	if (!ctx.cr6.lt) goto loc_822AF43C;
	// fdivs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f8,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lfs f7,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lfs f6,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f9,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f3,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f27,f27,f11
	f27.f64 = double(float(f27.f64 - ctx.f11.f64));
	// lfs f2,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lfs f5,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// lfs f4,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lfs f11,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 - f27.f64));
	// fmuls f10,f27,f8
	ctx.f10.f64 = double(float(f27.f64 * ctx.f8.f64));
	// fmuls f8,f7,f27
	ctx.f8.f64 = double(float(ctx.f7.f64 * f27.f64));
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fmuls f7,f6,f27
	ctx.f7.f64 = double(float(ctx.f6.f64 * f27.f64));
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f10,f3,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f10,272(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f10,f2,f0,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f10,276(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmadds f0,f1,f0,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fmadds f0,f5,f27,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f27.f64, ctx.f13.f64)));
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// fmadds f0,f4,f27,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, f27.f64, ctx.f12.f64)));
	// stfs f0,436(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// fmadds f0,f11,f27,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, f27.f64, ctx.f9.f64)));
	// stfs f0,440(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
loc_822AF2E0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,304
	ctx.r4.s64 = ctx.r11.s64 + 304;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stb r7,384(r11)
	REX_STORE_U8(ctx.r11.u32 + 384, ctx.r7.u8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,304(r11)
	REX_STORE_U64(ctx.r11.u32 + 304, ctx.r4.u64);
	// std r9,312(r11)
	REX_STORE_U64(ctx.r11.u32 + 312, ctx.r9.u64);
	// ld r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// stdx r3,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u64);
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// ld r7,8(r5)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// std r6,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stdx r8,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u64);
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r24,4(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b6f48
	ctx.lr = 0x822AF388;
	sub_822B6F48(ctx, base);
	// ld r11,288(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 288);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// ld r10,296(r24)
	ctx.r10.u64 = REX_LOAD_U64(r24.u32 + 296);
	// clrlwi. r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f30,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	f30.f64 = double(temp.f32);
	// lfs f29,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f29.f64 = double(temp.f32);
	// lfs f28,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	f28.f64 = double(temp.f32);
	// beq 0x822af3c0
	if (ctx.cr0.eq) goto loc_822AF3C0;
	// fmuls f0,f30,f30
	ctx.f0.f64 = double(float(f30.f64 * f30.f64));
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f0.f64)));
	// fmadds f0,f28,f28,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, f28.f64, ctx.f0.f64)));
	// b 0x822af3c4
	goto loc_822AF3C4;
loc_822AF3C0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
loc_822AF3C4:
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f25,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f25.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f26,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f26.f64 = double(temp.f32);
	// lfs f24,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f24.f64 = double(temp.f32);
	// bgt cr6,0x822aeff8
	if (ctx.cr6.gt) goto loc_822AEFF8;
loc_822AF3DC:
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
loc_822AF3E8:
	// fmuls f0,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f13,1096(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1096);
	ctx.f13.f64 = double(temp.f32);
	// lwz r31,844(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 844);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// stfs f27,176(r31)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822af444
	if (ctx.cr6.lt) goto loc_822AF444;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// b 0x822af450
	goto loc_822AF450;
loc_822AF43C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822af4c4
	goto loc_822AF4C4;
loc_822AF444:
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
loc_822AF450:
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f11,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// std r9,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r9.u64);
	// std r10,152(r31)
	REX_STORE_U64(r31.u32 + 152, ctx.r10.u64);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * f26.f64));
	// fmadds f0,f13,f25,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, ctx.f0.f64)));
	// fmadds f0,f24,f12,f0
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x822af43c
	if (!ctx.cr6.lt) goto loc_822AF43C;
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b6f48
	ctx.lr = 0x822AF494;
	sub_822B6F48(ctx, base);
	// addi r9,r31,160
	ctx.r9.s64 = r31.s64 + 160;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// ld r8,280(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 280);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,272(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 272);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,160(r31)
	REX_STORE_U64(r31.u32 + 160, ctx.r11.u64);
	// std r10,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r10.u64);
loc_822AF4C4:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cbc
	ctx.lr = 0x822AF4D0;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822FBDD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FBDD8;
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
	// bl 0x822fbbf8
	ctx.lr = 0x822FBDF0;
	sub_822FBBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbe18
	if (!ctx.cr0.eq) goto loc_822FBE18;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBE18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FBE18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822FCEF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fcf24
	if (ctx.cr6.eq) goto loc_822FCF24;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822fcf28
	goto loc_822FCF28;
loc_822FCF24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FCF28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fcf48
	if (ctx.cr6.eq) goto loc_822FCF48;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fcf40
	if (ctx.cr6.eq) goto loc_822FCF40;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822fcf4c
	goto loc_822FCF4C;
loc_822FCF40:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822fcf4c
	goto loc_822FCF4C;
loc_822FCF48:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822FCF4C:
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fcfec
	if (ctx.cr6.eq) goto loc_822FCFEC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fcf68
	if (ctx.cr6.eq) goto loc_822FCF68;
	// lwz r4,24(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x822fcf6c
	goto loc_822FCF6C;
loc_822FCF68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822FCF6C:
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82330350
	ctx.lr = 0x822FCF74;
	sub_82330350(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fd084
	if (!ctx.cr0.eq) goto loc_822FD084;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x822fcfd8
	if (ctx.cr6.eq) goto loc_822FCFD8;
	// fmr f29,f12
	f29.f64 = ctx.f12.f64;
	// bl 0x826a1b88
	ctx.lr = 0x822FCFAC;
	sub_826A1B88(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,3800(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
	// fmuls f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 * f30.f64));
loc_822FCFD8:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd010
	if (ctx.cr6.eq) goto loc_822FD010;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fd014
	goto loc_822FD014;
loc_822FCFEC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fcffc
	if (ctx.cr6.eq) goto loc_822FCFFC;
	// lwz r4,24(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x822fd000
	goto loc_822FD000;
loc_822FCFFC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822FD000:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x822fcf6c
	goto loc_822FCF6C;
loc_822FD010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FD014:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82330078
	ctx.lr = 0x822FD01C;
	sub_82330078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fd084
	if (!ctx.cr0.eq) goto loc_822FD084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f30,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// bl 0x822fa420
	ctx.lr = 0x822FD030;
	sub_822FA420(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lfs f0,3048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3048);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
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
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x822fd078
	if (ctx.cr6.eq) goto loc_822FD078;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fd07c
	goto loc_822FD07C;
loc_822FD078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FD07C:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82330108
	ctx.lr = 0x822FD084;
	sub_82330108(ctx, base);
loc_822FD084:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_8230D558) {
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
	ctx.lr = 0x8230D560;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8230d584
	if (ctx.cr6.eq) goto loc_8230D584;
	// lwz r31,40(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
loc_8230D584:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8230d598
	if (!ctx.cr6.eq) goto loc_8230D598;
	// li r3,33
	ctx.r3.s64 = 33;
loc_8230D590:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1ce0
	return;
loc_8230D598:
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// lwz r9,72(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 72);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230d5b8
	if (ctx.cr6.lt) goto loc_8230D5B8;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,72(r27)
	REX_STORE_U32(r27.u32 + 72, ctx.r11.u32);
	// b 0x8230d590
	goto loc_8230D590;
loc_8230D5B8:
	// li r23,0
	r23.s64 = 0;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// addi r20,r27,48
	r20.s64 = r27.s64 + 48;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x8230d5d4
	goto loc_8230D5D4;
loc_8230D5CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8230D5D4:
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x8230d5cc
	if (!ctx.cr6.eq) goto loc_8230D5CC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230d5f4
	if (ctx.cr6.lt) goto loc_8230D5F4;
	// stw r11,72(r27)
	REX_STORE_U32(r27.u32 + 72, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8230d590
	goto loc_8230D590;
loc_8230D5F4:
	// clrlwi. r11,r19,31
	ctx.r11.u64 = r19.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230d660
	if (ctx.cr0.eq) goto loc_8230D660;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823089c0
	ctx.lr = 0x8230D608;
	sub_823089C0(ctx, base);
	// bl 0x8230ca10
	ctx.lr = 0x8230D60C;
	sub_8230CA10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d590
	if (!ctx.cr0.eq) goto loc_8230D590;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8230ce30
	ctx.lr = 0x8230D638;
	sub_8230CE30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230d650
	if (ctx.cr0.eq) goto loc_8230D650;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8230d590
	if (!ctx.cr6.eq) goto loc_8230D590;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// b 0x8230d590
	goto loc_8230D590;
loc_8230D650:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10796(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10796);
	// bl 0x82341948
	ctx.lr = 0x8230D65C;
	sub_82341948(ctx, base);
	// b 0x8230d590
	goto loc_8230D590;
loc_8230D660:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r18,-10812(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + -10812);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8233e7e0
	ctx.lr = 0x8230D670;
	sub_8233E7E0(ctx, base);
	// lis r21,-32129
	r21.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r22,r11,5068
	r22.s64 = ctx.r11.s64 + 5068;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r6,1506
	ctx.r6.s64 = 1506;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r11,1012(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8230D69C;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8230d6d4
	if (ctx.cr0.eq) goto loc_8230D6D4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r23,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r23.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,5104
	ctx.r10.s64 = ctx.r10.s64 + 5104;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r23,17(r3)
	REX_STORE_U8(ctx.r3.u32 + 17, r23.u8);
	// stw r23,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r23.u32);
	// stw r23,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r23.u32);
	// b 0x8230d6d8
	goto loc_8230D6D8;
loc_8230D6D4:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_8230D6D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8230d6f4
	if (!ctx.cr6.eq) goto loc_8230D6F4;
loc_8230D6E0:
	// li r31,44
	r31.s64 = 44;
loc_8230D6E4:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8233e820
	ctx.lr = 0x8230D6EC;
	sub_8233E820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8230d590
	goto loc_8230D590;
loc_8230D6F4:
	// rlwinm. r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,20(r30)
	REX_STORE_U32(r30.u32 + 20, r29.u32);
	// beq 0x8230d704
	if (ctx.cr0.eq) goto loc_8230D704;
	// ori r19,r19,1
	r19.u64 = r19.u64 | 1;
loc_8230D704:
	// rlwinm r11,r29,0,16,14
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8230D71C;
	sub_823EF5F0(ctx, base);
	// li r11,112
	ctx.r11.s64 = 112;
	// addi r28,r27,32
	r28.s64 = r27.s64 + 32;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r31,23
	r31.s64 = 23;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// mr r25,r23
	r25.u64 = r23.u64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// lis r24,-32126
	r24.s64 = -2105409536;
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
loc_8230D748:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8230d85c
	if (ctx.cr6.eq) goto loc_8230D85C;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230d7b8
	if (ctx.cr6.eq) goto loc_8230D7B8;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// lwz r3,-10820(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + -10820);
	// lwz r5,72(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 72);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x823039a8
	ctx.lr = 0x8230D770;
	sub_823039A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8230d7b8
	if (!ctx.cr0.eq) goto loc_8230D7B8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8233fae8
	ctx.lr = 0x8230D784;
	sub_8233FAE8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8230d6e4
	if (!ctx.cr0.eq) goto loc_8230D6E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230d7e0
	if (ctx.cr0.eq) goto loc_8230D7E0;
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x8233fa68
	ctx.lr = 0x8230D7AC;
	sub_8233FA68(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
loc_8230D7B8:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// blt cr6,0x8230d748
	if (ctx.cr6.lt) goto loc_8230D748;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8230d85c
	if (ctx.cr6.eq) goto loc_8230D85C;
	// rlwinm. r11,r19,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230d7e8
	if (ctx.cr0.eq) goto loc_8230D7E8;
	// li r31,24
	r31.s64 = 24;
	// b 0x8230d6e4
	goto loc_8230D6E4;
loc_8230D7E0:
	// li r31,89
	r31.s64 = 89;
	// b 0x8230d6e4
	goto loc_8230D6E4;
loc_8230D7E8:
	// li r31,23
	r31.s64 = 23;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8230D7F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8230d85c
	if (ctx.cr6.eq) goto loc_8230D85C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d844
	if (ctx.cr6.eq) goto loc_8230D844;
	// stw r23,24(r30)
	REX_STORE_U32(r30.u32 + 24, r23.u32);
	// addi r7,r30,24
	ctx.r7.s64 = r30.s64 + 24;
	// lwz r11,-10820(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + -10820);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,24(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 24);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ori r5,r10,2
	ctx.r5.u64 = ctx.r10.u64 | 2;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8232f858
	ctx.lr = 0x8230D834;
	sub_8232F858(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8230d844
	if (ctx.cr0.eq) goto loc_8230D844;
	// cmpwi cr6,r31,23
	ctx.cr6.compare<int32_t>(r31.s32, 23, ctx.xer);
	// bne cr6,0x8230d890
	if (!ctx.cr6.eq) goto loc_8230D890;
loc_8230D844:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x8230d7f4
	if (ctx.cr6.lt) goto loc_8230D7F4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x8230d6e4
	if (!ctx.cr6.eq) goto loc_8230D6E4;
loc_8230D85C:
	// lwz r29,24(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230d890
	if (ctx.cr6.eq) goto loc_8230D890;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230d8a0
	if (ctx.cr0.eq) goto loc_8230D8A0;
loc_8230D888:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8230d6e4
	goto loc_8230D6E4;
loc_8230D890:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230c038
	ctx.lr = 0x8230D89C;
	sub_8230C038(ctx, base);
	// b 0x8230d6e4
	goto loc_8230D6E4;
loc_8230D8A0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x60;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// bl 0x82343440
	ctx.lr = 0x8230D8C8;
	sub_82343440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d888
	if (!ctx.cr0.eq) goto loc_8230D888;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230D8E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d888
	if (!ctx.cr0.eq) goto loc_8230D888;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230d930
	if (!ctx.cr6.gt) goto loc_8230D930;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8230D904:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x82343440
	ctx.lr = 0x8230D914;
	sub_82343440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230d888
	if (!ctx.cr0.eq) goto loc_8230D888;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230d904
	if (ctx.cr6.lt) goto loc_8230D904;
loc_8230D930:
	// clrlwi. r11,r19,31
	ctx.r11.u64 = r19.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230d9c4
	if (ctx.cr0.eq) goto loc_8230D9C4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230d9c4
	if (!ctx.cr0.eq) goto loc_8230D9C4;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// li r6,1633
	ctx.r6.s64 = 1633;
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// li r4,668
	ctx.r4.s64 = 668;
	// lwz r11,1012(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8230D96C;
	sub_82330E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,216(r29)
	REX_STORE_U32(r29.u32 + 216, ctx.r3.u32);
	// beq 0x8230d6e0
	if (ctx.cr0.eq) goto loc_8230D6E0;
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 144);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8230d9c4
	if (!ctx.cr6.gt) goto loc_8230D9C4;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8230D98C:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 136);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230d9b0
	if (ctx.cr6.eq) goto loc_8230D9B0;
	// lwz r8,216(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 216);
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// oris r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 65536;
	// stw r8,216(r11)
	REX_STORE_U32(ctx.r11.u32 + 216, ctx.r8.u32);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
loc_8230D9B0:
	// lwz r11,144(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8230d98c
	if (ctx.cr6.lt) goto loc_8230D98C;
loc_8230D9C4:
	// addi r9,r27,44
	ctx.r9.s64 = r27.s64 + 44;
	// lwz r10,72(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 72);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,72(r27)
	REX_STORE_U32(r27.u32 + 72, ctx.r10.u32);
	// mr r31,r23
	r31.u64 = r23.u64;
	// and r10,r9,r20
	ctx.r10.u64 = ctx.r9.u64 & r20.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8230d6e4
	goto loc_8230D6E4;
}

DEFINE_REX_FUNC(sub_8232E188) {
	REX_FUNC_PROLOGUE();
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232e1a8
	if (ctx.cr6.eq) goto loc_8232E1A8;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x8232e1ac
	goto loc_8232E1AC;
loc_8232E1A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E1AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8232e1c4
	if (!ctx.cr6.eq) goto loc_8232E1C4;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8232e1c8
	if (ctx.cr6.eq) goto loc_8232E1C8;
loc_8232E1C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232E1C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232FB68) {
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
	// bl 0x82332760
	ctx.lr = 0x8232FB84;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fb98
	if (!ctx.cr6.eq) goto loc_8232FB98;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823350e8
	ctx.lr = 0x8232FB98;
	sub_823350E8(ctx, base);
loc_8232FB98:
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

DEFINE_REX_FUNC(sub_823314C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823314e4
	if (ctx.cr6.eq) goto loc_823314E4;
loc_823314D8:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823314d8
	if (!ctx.cr6.eq) goto loc_823314D8;
loc_823314E4:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
loc_823314EC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bne cr6,0x823314ec
	if (!ctx.cr6.eq) goto loc_823314EC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823347F0) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233486c
	if (ctx.cr6.eq) goto loc_8233486C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233486c
	if (ctx.cr6.eq) goto loc_8233486C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,24564
	ctx.r3.s64 = ctx.r3.s64 + 24564;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82353f20
	ctx.lr = 0x8233483C;
	sub_82353F20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82334870
	if (!ctx.cr6.eq) goto loc_82334870;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82334854
	if (ctx.cr6.eq) goto loc_82334854;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_82334854:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82334864
	if (ctx.cr6.eq) goto loc_82334864;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
loc_82334864:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82334870
	goto loc_82334870;
loc_8233486C:
	// li r3,37
	ctx.r3.s64 = 37;
loc_82334870:
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

DEFINE_REX_FUNC(sub_8233EF30) {
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
	ctx.lr = 0x8233EF4C;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ef60
	if (!ctx.cr6.eq) goto loc_8233EF60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234ea18
	ctx.lr = 0x8233EF60;
	sub_8234EA18(ctx, base);
loc_8233EF60:
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

DEFINE_REX_FUNC(sub_8233F9E8) {
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
	ctx.lr = 0x8233F9F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x8235ace0
	ctx.lr = 0x8233FA10;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233fa60
	if (!ctx.cr6.eq) goto loc_8233FA60;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fa3c
	if (ctx.cr6.eq) goto loc_8233FA3C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8233fa3c
	if (ctx.cr6.eq) goto loc_8233FA3C;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_8233FA3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233FA60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233FA60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823430F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82343108
	if (ctx.cr6.eq) goto loc_82343108;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82343108:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82344040) {
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
	ctx.lr = 0x82344048;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234407c
	if (ctx.cr6.eq) goto loc_8234407C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82344088
	if (!ctx.cr6.eq) goto loc_82344088;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823440a8
	if (!ctx.cr6.eq) goto loc_823440A8;
loc_8234407C:
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82344088:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234409c
	if (!ctx.cr6.eq) goto loc_8234409C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
loc_8234409C:
	// bl 0x823314a0
	ctx.lr = 0x823440A0;
	sub_823314A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82344298
	if (ctx.cr6.eq) goto loc_82344298;
loc_823440A8:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// bne cr6,0x823440c4
	if (!ctx.cr6.eq) goto loc_823440C4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_823440B4:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823440C4:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(r28.u32, 4, ctx.xer);
	// bne cr6,0x82344260
	if (!ctx.cr6.eq) goto loc_82344260;
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r9,72(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 72);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x82344298
	if (ctx.cr6.gt) goto loc_82344298;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16632
	ctx.r12.s64 = ctx.r12.s64 + 16632;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82344170;
	case 1:
		goto loc_82344128;
	case 2:
		goto loc_82344130;
	case 3:
		goto loc_82344138;
	case 4:
		goto loc_82344140;
	case 5:
		goto loc_82344140;
	case 6:
		goto loc_82344170;
	case 7:
		goto loc_82344170;
	case 8:
		goto loc_82344170;
	case 9:
		goto loc_82344170;
	case 10:
		goto loc_82344170;
	case 11:
		goto loc_82344170;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82344128:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82344144
	goto loc_82344144;
loc_82344130:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x82344144
	goto loc_82344144;
loc_82344138:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x82344144
	goto loc_82344144;
loc_82344140:
	// li r10,32
	ctx.r10.s64 = 32;
loc_82344144:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulld r7,r10,r8
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * ctx.r8.u64);
	// rldicl r6,r7,61,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82344170:
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16776
	ctx.r12.s64 = ctx.r12.s64 + 16776;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82344240;
	case 1:
		goto loc_82344298;
	case 2:
		goto loc_82344298;
	case 3:
		goto loc_82344298;
	case 4:
		goto loc_82344298;
	case 5:
		goto loc_82344298;
	case 6:
		goto loc_823441B8;
	case 7:
		goto loc_823441E4;
	case 8:
		goto loc_82344214;
	case 9:
		goto loc_823440B4;
	case 10:
		goto loc_823440B4;
	case 11:
		goto loc_823440B4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823441B8:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823441E4:
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82344214:
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82344240:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82344260:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bne cr6,0x82344298
	if (!ctx.cr6.eq) goto loc_82344298;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f13,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,3992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,0,r30
	REX_STORE_U32(r30.u32, ctx.f7.u32);
loc_82344298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82354D18) {
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
	// beq cr6,0x82354d54
	if (ctx.cr6.eq) goto loc_82354D54;
	// lbz r11,1224(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354d70
	if (!ctx.cr6.eq) goto loc_82354D70;
	// bl 0x823a9560
	ctx.lr = 0x82354D44;
	sub_823A9560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d74
	if (!ctx.cr6.eq) goto loc_82354D74;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82354d6c
	goto loc_82354D6C;
loc_82354D54:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a9560
	ctx.lr = 0x82354D60;
	sub_823A9560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354d74
	if (!ctx.cr6.eq) goto loc_82354D74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354D6C:
	// stb r11,1224(r31)
	REX_STORE_U8(r31.u32 + 1224, ctx.r11.u8);
loc_82354D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354D74:
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

DEFINE_REX_FUNC(sub_82356BF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82356C00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x82356988
	ctx.lr = 0x82356C10;
	sub_82356988(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356c90
	if (!ctx.cr6.eq) goto loc_82356C90;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356c34
	if (ctx.cr6.eq) goto loc_82356C34;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8233e998
	ctx.lr = 0x82356C34;
	sub_8233E998(ctx, base);
loc_82356C34:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r31,52
	ctx.r11.s64 = r31.s64 + 52;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r3,-32129
	ctx.r3.s64 = -2105606144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r6,10216
	ctx.r5.s64 = ctx.r6.s64 + 10216;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// li r6,607
	ctx.r6.s64 = 607;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// stw r8,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r8.u32);
	// lwz r11,1012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82356C84;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82356C90:
	// cmpwi cr6,r28,68
	ctx.cr6.compare<int32_t>(r28.s32, 68, ctx.xer);
	// bne cr6,0x82356dd4
	if (!ctx.cr6.eq) goto loc_82356DD4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82356898
	ctx.lr = 0x82356CA4;
	sub_82356898(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356d14
	if (!ctx.cr6.eq) goto loc_82356D14;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356cc8
	if (ctx.cr6.eq) goto loc_82356CC8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8233e998
	ctx.lr = 0x82356CC8;
	sub_8233E998(ctx, base);
loc_82356CC8:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r5,r6,10216
	ctx.r5.s64 = ctx.r6.s64 + 10216;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r6,622
	ctx.r6.s64 = 622;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// b 0x82356dc4
	goto loc_82356DC4;
loc_82356D14:
	// cmpwi cr6,r28,68
	ctx.cr6.compare<int32_t>(r28.s32, 68, ctx.xer);
	// bne cr6,0x82356dd4
	if (!ctx.cr6.eq) goto loc_82356DD4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82356910
	ctx.lr = 0x82356D28;
	sub_82356910(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82356dd4
	if (!ctx.cr6.eq) goto loc_82356DD4;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r30,r11,10216
	r30.s64 = ctx.r11.s64 + 10216;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356d78
	if (ctx.cr6.eq) goto loc_82356D78;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356d78
	if (ctx.cr6.eq) goto loc_82356D78;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r6,634
	ctx.r6.s64 = 634;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82356D78;
	sub_82330D00(ctx, base);
loc_82356D78:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356d8c
	if (ctx.cr6.eq) goto loc_82356D8C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8233e998
	ctx.lr = 0x82356D8C;
	sub_8233E998(ctx, base);
loc_82356D8C:
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r11,r31,92
	ctx.r11.s64 = r31.s64 + 92;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,646
	ctx.r6.s64 = 646;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r8,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r8.u32);
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
loc_82356DC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82330d00
	ctx.lr = 0x82356DD4;
	sub_82330D00(ctx, base);
loc_82356DD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82363E00) {
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
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x82363eec
	if (ctx.cr6.gt) goto loc_82363EEC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82363e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82363E64;
	// bdzf 4*cr6+eq,0x82363e98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82363E98;
	// bne cr6,0x82363ecc
	if (!ctx.cr6.eq) goto loc_82363ECC;
	// lfs f0,332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,332(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82363E50;
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
loc_82363E64:
	// lfs f0,316(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,316(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82363E84;
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
loc_82363E98:
	// lfs f0,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f1,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82363EB8;
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
loc_82363ECC:
	// lfs f0,340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x82363EEC;
	sub_826A0568(ctx, base);
loc_82363EEC:
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

DEFINE_REX_FUNC(sub_8236D1E8) {
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
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bgt cr6,0x8236d2ec
	if (ctx.cr6.gt) goto loc_8236D2EC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8236d258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236D258;
	// bdzf 4*cr6+eq,0x8236d298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8236D298;
	// bne cr6,0x8236d2cc
	if (!ctx.cr6.eq) goto loc_8236D2CC;
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
	ctx.lr = 0x8236D244;
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
loc_8236D258:
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
	ctx.lr = 0x8236D284;
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
loc_8236D298:
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
	ctx.lr = 0x8236D2B8;
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
loc_8236D2CC:
	// lfs f0,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r4,r10,11508
	ctx.r4.s64 = ctx.r10.s64 + 11508;
	// lfs f1,324(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236D2EC;
	sub_826A0568(ctx, base);
loc_8236D2EC:
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

DEFINE_REX_FUNC(sub_823769D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823769e8
	if (!ctx.cr6.eq) goto loc_823769E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823769E8:
	// b 0x82376730
	sub_82376730(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82377428) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82377430;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,284(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,18104
	r29.s64 = ctx.r11.s64 + 18104;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82377474
	if (ctx.cr6.eq) goto loc_82377474;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,921
	ctx.r6.s64 = 921;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237746C;
	sub_82330D00(ctx, base);
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,284(r31)
	REX_STORE_U32(r31.u32 + 284, r30.u32);
loc_82377474:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237749c
	if (ctx.cr6.eq) goto loc_8237749C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,926
	ctx.r6.s64 = 926;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82377498;
	sub_82330D00(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
loc_8237749C:
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823774fc
	if (ctx.cr6.eq) goto loc_823774FC;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r4,18624(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 18624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823774d8
	if (ctx.cr6.eq) goto loc_823774D8;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,933
	ctx.r6.s64 = 933;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823774D0;
	sub_82330D00(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r30,18624(r11)
	REX_STORE_U32(ctx.r11.u32 + 18624, r30.u32);
loc_823774D8:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 268);
	// li r6,937
	ctx.r6.s64 = 937;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823774F4;
	sub_82330D00(ctx, base);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
loc_823774FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82381740) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,448(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,46(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 46);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x823817c0
	if (ctx.cr6.gt) goto loc_823817C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823817ac
	if (ctx.cr6.eq) goto loc_823817AC;
	// bdz 0x8238176c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8238176C;
	// bdz 0x82381790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82381790;
	// b 0x823817ac
	goto loc_823817AC;
loc_8238176C:
	// lwz r11,576(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 576);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subfic r5,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r5.u64 = static_cast<uint64_t>(128) - ctx.r6.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// b 0x823817c0
	goto loc_823817C0;
loc_82381790:
	// lwz r11,576(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 576);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x823817a4
	if (!ctx.cr6.lt) goto loc_823817A4;
	// li r10,64
	ctx.r10.s64 = 64;
	// b 0x823817c0
	goto loc_823817C0;
loc_823817A4:
	// li r10,-64
	ctx.r10.s64 = -64;
	// b 0x823817c0
	goto loc_823817C0;
loc_823817AC:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r10,576(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 576);
	// addi r8,r11,30696
	ctx.r8.s64 = ctx.r11.s64 + 30696;
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
loc_823817C0:
	// lbz r7,45(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 45);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r11,580(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 580);
	// lwz r6,480(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 480);
	// mullw r5,r7,r11
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// srawi r10,r3,23
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 23;
	// subf r7,r10,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r10.u64;
	// stw r7,480(r4)
	REX_STORE_U32(ctx.r4.u32 + 480, ctx.r7.u32);
	// lbz r6,47(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 47);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,580(r4)
	REX_STORE_U32(ctx.r4.u32 + 580, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82381800
	if (!ctx.cr6.gt) goto loc_82381800;
	// stw r8,580(r4)
	REX_STORE_U32(ctx.r4.u32 + 580, ctx.r8.u32);
loc_82381800:
	// lbz r11,44(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 44);
	// lwz r10,576(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 576);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,576(r4)
	REX_STORE_U32(ctx.r4.u32 + 576, ctx.r11.u32);
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82381820
	if (!ctx.cr6.gt) goto loc_82381820;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// stw r11,576(r4)
	REX_STORE_U32(ctx.r4.u32 + 576, ctx.r11.u32);
loc_82381820:
	// lbz r11,460(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,460(r4)
	REX_STORE_U8(ctx.r4.u32 + 460, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823908D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823908D8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,-1
	r30.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8239098c
	if (!ctx.cr6.eq) goto loc_8239098C;
	// lbz r11,2165(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2165);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390914
	if (ctx.cr6.eq) goto loc_82390914;
	// lbz r11,2166(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2166);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390914
	if (!ctx.cr6.eq) goto loc_82390914;
	// bl 0x823c86b8
	ctx.lr = 0x82390910;
	sub_823C86B8(ctx, base);
	// b 0x823909a0
	goto loc_823909A0;
loc_82390914:
	// lwz r11,2200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82390928
	if (ctx.cr6.lt) goto loc_82390928;
	// stw r11,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, ctx.r11.u32);
	// stw r30,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, r30.u32);
loc_82390928:
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8239093c
	if (ctx.cr6.lt) goto loc_8239093C;
	// stw r11,2180(r31)
	REX_STORE_U32(r31.u32 + 2180, ctx.r11.u32);
	// stw r30,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, r30.u32);
loc_8239093C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238f8e8
	ctx.lr = 0x82390944;
	sub_8238F8E8(ctx, base);
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2196);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823909a0
	if (!ctx.cr6.eq) goto loc_823909A0;
	// lwz r11,2180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// blt cr6,0x823909a0
	if (ctx.cr6.lt) goto loc_823909A0;
	// lwz r11,2184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2184);
	// lwz r10,1408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82390984
	if (ctx.cr6.lt) goto loc_82390984;
	// lwz r11,2140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// stw r11,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, ctx.r11.u32);
loc_82390984:
	// stw r29,2196(r31)
	REX_STORE_U32(r31.u32 + 2196, r29.u32);
	// b 0x823909a0
	goto loc_823909A0;
loc_8239098C:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823909a0
	if (ctx.cr6.eq) goto loc_823909A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823901a8
	ctx.lr = 0x823909A0;
	sub_823901A8(ctx, base);
loc_823909A0:
	// lwz r9,2172(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2172);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823909d4
	if (ctx.cr6.eq) goto loc_823909D4;
	// lwz r11,2168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2168);
	// lwz r10,2188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,2168(r31)
	REX_STORE_U32(r31.u32 + 2168, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823909e0
	if (ctx.cr6.lt) goto loc_823909E0;
	// stw r29,2188(r31)
	REX_STORE_U32(r31.u32 + 2188, r29.u32);
	// stw r29,2168(r31)
	REX_STORE_U32(r31.u32 + 2168, r29.u32);
	// b 0x823909e0
	goto loc_823909E0;
loc_823909D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,2168(r31)
	REX_STORE_U32(r31.u32 + 2168, r30.u32);
	// stb r11,2165(r31)
	REX_STORE_U8(r31.u32 + 2165, ctx.r11.u8);
loc_823909E0:
	// lwz r10,1260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1256);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1260(r31)
	REX_STORE_U32(r31.u32 + 1260, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8239B7C0) {
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
	// lis r31,-32129
	r31.s64 = -2105606144;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r30,r31,16440
	r30.s64 = r31.s64 + 16440;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8239B7EC;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,20544
	ctx.r11.s64 = ctx.r11.s64 + 20544;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// stw r11,16440(r31)
	REX_STORE_U32(r31.u32 + 16440, ctx.r11.u32);
	// lis r4,-32198
	ctx.r4.s64 = -2110128128;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r11,r3,12504
	ctx.r11.s64 = ctx.r3.s64 + 12504;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r4,-19208
	ctx.r10.s64 = ctx.r4.s64 + -19208;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lis r7,-32198
	ctx.r7.s64 = -2110128128;
	// addi r9,r5,-18304
	ctx.r9.s64 = ctx.r5.s64 + -18304;
	// addi r11,r6,-18552
	ctx.r11.s64 = ctx.r6.s64 + -18552;
	// addi r10,r7,-19152
	ctx.r10.s64 = ctx.r7.s64 + -19152;
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r8,-19040
	ctx.r9.s64 = ctx.r8.s64 + -19040;
	// li r10,368
	ctx.r10.s64 = 368;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
	// stw r9,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8239FDE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8239FDE8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r3,128
	ctx.r11.s64 = ctx.r3.s64 + 128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239fe0c
	if (!ctx.cr6.eq) goto loc_8239FE0C;
	// li r3,36
	ctx.r3.s64 = 36;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8239FE0C:
	// lwz r10,124(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 124);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8239fe7c
	if (!ctx.cr6.gt) goto loc_8239FE7C;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
loc_8239FE20:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FE34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239fe80
	if (!ctx.cr6.eq) goto loc_8239FE80;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// rlwinm r6,r7,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r6,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r6.u32);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// ori r4,r5,64
	ctx.r4.u64 = ctx.r5.u64 | 64;
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r3,124(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 124);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8239fe20
	if (ctx.cr6.lt) goto loc_8239FE20;
loc_8239FE7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239FE80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823A2F50) {
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
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r10,1740(r8)
	REX_STORE_U8(ctx.r8.u32 + 1740, ctx.r10.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r9,1744(r7)
	REX_STORE_U8(ctx.r7.u32 + 1744, ctx.r9.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r6,r11,58
	ctx.r6.s64 = ctx.r11.s64 + 58;
	// mulli r11,r6,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823A2FA8;
	sub_823EF5F0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r5,-32124
	ctx.r5.s64 = -2105278464;
	// addi r4,r11,58
	ctx.r4.s64 = ctx.r11.s64 + 58;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,6024
	ctx.r10.s64 = ctx.r5.s64 + 6024;
	// mulli r11,r4,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x8269a9f8
	ctx.lr = 0x823A2FCC;
	sub_8269A9F8(ctx, base);
	// addi r9,r3,-997
	ctx.r9.s64 = ctx.r3.s64 + -997;
	// li r8,72
	ctx.r8.s64 = 72;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
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

DEFINE_REX_FUNC(sub_823A9528) {
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
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,6072
	ctx.r6.s64 = 6072;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x823A954C;
	sub_82331A00(ctx, base);
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

DEFINE_REX_FUNC(sub_823AA738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823AA740;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa784
	if (ctx.cr6.eq) goto loc_823AA784;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// bl 0x82348f28
	ctx.lr = 0x823AA770;
	sub_82348F28(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,76(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823AA784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823AA784:
	// lwz r3,780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 780);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa7d8
	if (ctx.cr6.eq) goto loc_823AA7D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f3c0
	ctx.lr = 0x823AA7A0;
	sub_8235F3C0(ctx, base);
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 780);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r3,780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 780);
	// bl 0x82348f28
	ctx.lr = 0x823AA7C0;
	sub_82348F28(ctx, base);
	// lwz r8,780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 780);
	// lwz r10,908(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 908);
	// lwz r11,468(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 468);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r28,16(r7)
	REX_STORE_U8(ctx.r7.u32 + 16, r28.u8);
	// stw r28,780(r31)
	REX_STORE_U32(r31.u32 + 780, r28.u32);
loc_823AA7D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa928
	if (ctx.cr6.eq) goto loc_823AA928;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823aa928
	if (!ctx.cr6.eq) goto loc_823AA928;
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aa928
	if (ctx.cr6.eq) goto loc_823AA928;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_823AA808:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// lwz r9,22464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 22464);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823aa854
	if (ctx.cr6.eq) goto loc_823AA854;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823AA83C;
	sub_8235ADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// lwz r3,22464(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 22464);
	// bl 0x82348e28
	ctx.lr = 0x823AA854;
	sub_82348E28(ctx, base);
loc_823AA854:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235af68
	ctx.lr = 0x823AA86C;
	sub_8235AF68(ctx, base);
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,528
	ctx.cr6.compare<int32_t>(r30.s32, 528, ctx.xer);
	// blt cr6,0x823aa808
	if (ctx.cr6.lt) goto loc_823AA808;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,25000(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 25000);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa8b0
	if (ctx.cr6.eq) goto loc_823AA8B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// bl 0x82348e28
	ctx.lr = 0x823AA898;
	sub_82348E28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235af68
	ctx.lr = 0x823AA8B0;
	sub_8235AF68(ctx, base);
loc_823AA8B0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823aa8c8
	if (!ctx.cr6.eq) goto loc_823AA8C8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_823AA8C8:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823aa924
	if (ctx.cr6.eq) goto loc_823AA924;
loc_823AA8D4:
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa900
	if (ctx.cr6.eq) goto loc_823AA900;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// bl 0x82348e28
	ctx.lr = 0x823AA8EC;
	sub_82348E28(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235af68
	ctx.lr = 0x823AA900;
	sub_8235AF68(ctx, base);
loc_823AA900:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823aa914
	if (!ctx.cr6.eq) goto loc_823AA914;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_823AA914:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823aa8d4
	if (!ctx.cr6.eq) goto loc_823AA8D4;
loc_823AA924:
	// stw r28,776(r31)
	REX_STORE_U32(r31.u32 + 776, r28.u32);
loc_823AA928:
	// lwz r3,768(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa96c
	if (ctx.cr6.eq) goto loc_823AA96C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f3c0
	ctx.lr = 0x823AA940;
	sub_8235F3C0(ctx, base);
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// lwz r3,768(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 768);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823AA968;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,768(r31)
	REX_STORE_U32(r31.u32 + 768, r28.u32);
loc_823AA96C:
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aa9b8
	if (ctx.cr6.eq) goto loc_823AA9B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823AA988;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823afbf0
	ctx.lr = 0x823AA998;
	sub_823AFBF0(ctx, base);
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 396);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,284(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 284);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,284(r9)
	REX_STORE_U32(ctx.r9.u32 + 284, ctx.r7.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// bl 0x82348f28
	ctx.lr = 0x823AA9B8;
	sub_82348F28(ctx, base);
loc_823AA9B8:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823aaa30
	if (ctx.cr6.eq) goto loc_823AAA30;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82349208
	ctx.lr = 0x823AA9D0;
	sub_82349208(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aaa3c
	if (!ctx.cr6.eq) goto loc_823AAA3C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823aaa30
	if (!ctx.cr6.gt) goto loc_823AAA30;
loc_823AA9E8:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82349aa8
	ctx.lr = 0x823AAA00;
	sub_82349AA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aaa20
	if (!ctx.cr6.eq) goto loc_823AAA20;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82348e28
	ctx.lr = 0x823AAA18;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aaa3c
	if (!ctx.cr6.eq) goto loc_823AAA3C;
loc_823AAA20:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823aa9e8
	if (ctx.cr6.lt) goto loc_823AA9E8;
loc_823AAA30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d18d0
	ctx.lr = 0x823AAA38;
	sub_823D18D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AAA3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823C8B20) {
	REX_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x823c86b8
	sub_823C86B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823C8B28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823C8B30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addic. r10,r11,792
	ctx.xer.ca = ctx.r11.u32 > 4294966503;
	ctx.r10.s64 = ctx.r11.s64 + 792;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823c8ba8
	if (ctx.cr0.eq) goto loc_823C8BA8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,1068
	ctx.r3.s64 = ctx.r11.s64 + 1068;
	// bl 0x82351328
	ctx.lr = 0x823C8B54;
	sub_82351328(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 80);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,788(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823c8ba8
	if (!ctx.cr6.gt) goto loc_823C8BA8;
	// li r31,792
	r31.s64 = 792;
loc_823C8B6C:
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c8b90
	if (ctx.cr6.eq) goto loc_823C8B90;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c8b90
	if (ctx.cr6.eq) goto loc_823C8B90;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8234e340
	ctx.lr = 0x823C8B90;
	sub_8234E340(ctx, base);
loc_823C8B90:
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,788(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 788);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823c8b6c
	if (ctx.cr6.lt) goto loc_823C8B6C;
loc_823C8BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823C9E28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823C9E30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r6,-4324(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4324);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C9E58;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c9e6c
	if (!ctx.cr6.eq) goto loc_823C9E6C;
loc_823C9E60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823C9E6C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,-4320(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -4320);
	// lwz r4,60(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C9E90;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823c9eb4
	if (!ctx.cr6.lt) goto loc_823C9EB4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x823c9ed0
	goto loc_823C9ED0;
loc_823C9EB4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c9ec4
	if (!ctx.cr6.eq) goto loc_823C9EC4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823C9EC4:
	// bl 0x8269d6a8
	ctx.lr = 0x823C9EC8;
	sub_8269D6A8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823C9ED0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bne cr6,0x823c9ef4
	if (!ctx.cr6.eq) goto loc_823C9EF4;
loc_823C9EDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823C9EF4:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823c9f18
	if (ctx.cr6.eq) goto loc_823C9F18;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dd120
	ctx.lr = 0x823C9F0C;
	sub_823DD120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823C9F18:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r28,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, r28.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r6,-4316(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -4316);
	// lwz r4,60(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C9F3C;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823c9f5c
	if (!ctx.cr6.lt) goto loc_823C9F5C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x823c9f78
	goto loc_823C9F78;
loc_823C9F5C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c9f6c
	if (!ctx.cr6.eq) goto loc_823C9F6C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823C9F6C:
	// bl 0x8269d6a8
	ctx.lr = 0x823C9F70;
	sub_8269D6A8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_823C9F78:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r5.u32);
	// beq cr6,0x823c9edc
	if (ctx.cr6.eq) goto loc_823C9EDC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823c9fa8
	if (ctx.cr6.eq) goto loc_823C9FA8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dd120
	ctx.lr = 0x823C9F9C;
	sub_823DD120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823C9FA8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r29,12
	ctx.r5.s64 = r29.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r28,r11,r6
	REX_STORE_U8(ctx.r11.u32 + ctx.r6.u32, r28.u8);
	// lwz r6,-4312(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -4312);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,60(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C9FCC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,-4308(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4308);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823C9FF0;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,-4304(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4304);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CA014;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r29,24
	ctx.r5.s64 = r29.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,-4300(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4300);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CA038;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r29,28
	r28.s64 = r29.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,-4296(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4296);
	// lwz r4,60(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// bl 0x823dcc18
	ctx.lr = 0x823CA060;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c9e60
	if (ctx.cr6.eq) goto loc_823C9E60;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823ca078
	if (!ctx.cr6.eq) goto loc_823CA078;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823CA078:
	// bl 0x8269d6a8
	ctx.lr = 0x823CA07C;
	sub_8269D6A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c9edc
	if (ctx.cr6.eq) goto loc_823C9EDC;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823ca0b4
	if (ctx.cr6.eq) goto loc_823CA0B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x823dd120
	ctx.lr = 0x823CA0A8;
	sub_823DD120(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823ca0b8
	if (ctx.cr6.eq) goto loc_823CA0B8;
loc_823CA0B4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823CA0B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823D6C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// beq cr6,0x823d6c20
	if (ctx.cr6.eq) goto loc_823D6C20;
	// li r3,-104
	ctx.r3.s64 = -104;
	// blr 
	return;
loc_823D6C20:
	// li r10,257
	ctx.r10.s64 = 257;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r9,1028(r4)
	REX_STORE_U32(ctx.r4.u32 + 1028, ctx.r9.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// stw r8,1032(r4)
	REX_STORE_U32(ctx.r4.u32 + 1032, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D6C3C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d6c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6C3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D7410) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,101
	ctx.r5.s64 = 101;
	// addi r4,r11,-31680
	ctx.r4.s64 = ctx.r11.s64 + -31680;
	// b 0x823311a8
	sub_823311A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D83C0) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x823D83C8;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2ca0
	ctx.lr = 0x823D83D0;
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// srawi r11,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r11.s64 = r22.s32 >> 1;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// neg r11,r28
	ctx.r11.s64 = static_cast<int64_t>(-r28.u64);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// srawi r30,r22,2
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x3) != 0);
	r30.s64 = r22.s32 >> 2;
	// bl 0x826a2d14
	ctx.lr = 0x823D8408;
	sub_826A2D14(ctx, base);
	// lwz r10,0(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// neg r9,r28
	ctx.r9.s64 = static_cast<int64_t>(-r28.u64);
	// stwux r10,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// bl 0x826a2d14
	ctx.lr = 0x823D8420;
	sub_826A2D14(ctx, base);
	// lwz r7,0(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// add r11,r28,r4
	ctx.r11.u64 = r28.u64 + ctx.r4.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// stwux r7,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r1.u32 = ea;
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// blt cr6,0x823d852c
	if (ctx.cr6.lt) goto loc_823D852C;
	// addi r6,r30,-4
	ctx.r6.s64 = r30.s64 + -4;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823D8468:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,-16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,-24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f6,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// lfs f1,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	f30.f64 = double(temp.f32);
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f2,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f30,f9
	ctx.f9.f64 = double(float(f30.f64 * ctx.f9.f64));
	// lfs f29,24(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 24);
	f29.f64 = double(temp.f32);
	// fmuls f31,f2,f0
	f31.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f27,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmuls f6,f29,f6
	ctx.f6.f64 = double(float(f29.f64 * ctx.f6.f64));
	// lfs f26,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	f26.f64 = double(temp.f32);
	// fneg f8,f8
	ctx.f8.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f28,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfsu f0,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// fneg f5,f5
	ctx.f5.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fneg f3,f3
	ctx.f3.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmsubs f12,f27,f10,f12
	ctx.f12.f64 = double(float(std::fma(f27.f64, ctx.f10.f64, -ctx.f12.f64)));
	// fmsubs f10,f26,f7,f9
	ctx.f10.f64 = double(float(std::fma(f26.f64, ctx.f7.f64, -ctx.f9.f64)));
	// fmsubs f13,f28,f13,f31
	ctx.f13.f64 = double(float(std::fma(f28.f64, ctx.f13.f64, -f31.f64)));
	// fnmsubs f9,f28,f2,f11
	ctx.f9.f64 = double(float(-std::fma(f28.f64, ctx.f2.f64, -ctx.f11.f64)));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f7,f0,f4,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, -ctx.f6.f64)));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fnmsubs f6,f27,f1,f8
	ctx.f6.f64 = double(float(-std::fma(f27.f64, ctx.f1.f64, -ctx.f8.f64)));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fnmsubs f5,f26,f30,f5
	ctx.f5.f64 = double(float(-std::fma(f26.f64, f30.f64, -ctx.f5.f64)));
	// stfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fnmsubs f4,f0,f29,f3
	ctx.f4.f64 = double(float(-std::fma(ctx.f0.f64, f29.f64, -ctx.f3.f64)));
	// stfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d8468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8468;
loc_823D852C:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d8580
	if (!ctx.cr6.lt) goto loc_823D8580;
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_823D8548:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f0,-8(r9)
	ea = -8 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfsu f13,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfsx f9,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmsubs f7,f9,f0,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f10.f64)));
	// fnmsubs f6,f9,f13,f8
	ctx.f6.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f8.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d8548
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8548;
loc_823D8580:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823e8308
	ctx.lr = 0x823D8590;
	sub_823E8308(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x823d868c
	if (ctx.cr6.lt) goto loc_823D868C;
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823D85C4:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f3,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmadds f2,f8,f10,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f11.f64)));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// fmsubs f1,f8,f13,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f9.f64)));
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f9,f6,f13,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// fmsubs f8,f6,f12,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, -ctx.f10.f64)));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f7,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f6,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f13,f4,f7,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, ctx.f2.f64)));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// fmsubs f12,f4,f6,f1
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -ctx.f1.f64)));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// lfs f10,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f7,f3,f11,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f9.f64)));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmsubs f6,f3,f10,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -ctx.f8.f64)));
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823d85c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D85C4;
loc_823D868C:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d86d8
	if (!ctx.cr6.lt) goto loc_823D86D8;
	// subf r10,r7,r30
	ctx.r10.u64 = r30.u64 - ctx.r7.u64;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D86A0:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmadds f8,f12,f9,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f11.f64)));
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmsubs f7,f13,f9,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f10.f64)));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823d86a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D86A0;
loc_823D86D8:
	// add r11,r28,r26
	ctx.r11.u64 = r28.u64 + r26.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x823d8768
	if (ctx.cr6.lt) goto loc_823D8768;
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823D8708:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f9,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f7,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stfsu f7,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f4,-16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f4.f64 = double(temp.f32);
	// stfsu f8,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f3,-24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// stfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d8708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8708;
loc_823D8768:
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d879c
	if (!ctx.cr6.lt) goto loc_823D879C;
	// subf r8,r8,r30
	ctx.r8.u64 = r30.u64 - ctx.r8.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823D8780:
	// lfsu f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfsu f0,-8(r9)
	ea = -8 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d8780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8780;
loc_823D879C:
	// srawi r10,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r10.s64 = r24.s32 >> 1;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r4,r30
	r24.u64 = r30.u64 - ctx.r4.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// add r29,r10,r25
	r29.u64 = ctx.r10.u64 + r25.u64;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
	// add r28,r28,r23
	r28.u64 = r28.u64 + r23.u64;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x823d8800
	if (!ctx.cr6.gt) goto loc_823D8800;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_823D87EC:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x823d87ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D87EC;
loc_823D8800:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d8924
	if (!ctx.cr6.lt) goto loc_823D8924;
	// subf r5,r6,r30
	ctx.r5.u64 = r30.u64 - ctx.r6.u64;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x823d88d8
	if (ctx.cr6.lt) goto loc_823D88D8;
	// subf r5,r6,r30
	ctx.r5.u64 = r30.u64 - ctx.r6.u64;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// rlwinm r5,r5,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_823D8830:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f2,f0,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f0.f64, -ctx.f13.f64)));
	// lfs f1,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f12.f64)));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f12,f2,f11,f10
	ctx.f12.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f11.f64, -ctx.f10.f64)));
	// lfs f0,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f9,f0,f11,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f9.f64)));
	// lfs f7,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f0,f10,f8,f7
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f8.f64, -ctx.f7.f64)));
	// lfs f2,-8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f2,f8,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f6.f64)));
	// lfs f5,-12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// lfs f3,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lfs f8,-12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f11,f5,f4
	ctx.f7.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f5.f64, -ctx.f4.f64)));
	// fmadds f6,f8,f5,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, ctx.f3.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f10,-8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f7,12(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f6,-12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x823d8830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8830;
loc_823D88D8:
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d8924
	if (!ctx.cr6.lt) goto loc_823D8924;
	// subf r6,r6,r30
	ctx.r6.u64 = r30.u64 - ctx.r6.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_823D88FC:
	// lfsu f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfsu f13,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// lfsu f12,-4(r7)
	ea = -4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fnmsubs f9,f13,f0,f11
	ctx.f9.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f11.f64)));
	// fmadds f8,f12,f0,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfsu f9,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfsu f8,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d88fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D88FC;
loc_823D8924:
	// subf r11,r30,r4
	ctx.r11.u64 = ctx.r4.u64 - r30.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r25,r11,-4
	r25.s64 = ctx.r11.s64 + -4;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x823d8964
	if (!ctx.cr6.gt) goto loc_823D8964;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a22f8
	ctx.lr = 0x823D8954;
	sub_826A22F8(ctx, base);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
loc_823D8964:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d8a60
	if (!ctx.cr6.lt) goto loc_823D8A60;
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823d8a1c
	if (ctx.cr6.lt) goto loc_823D8A1C;
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D8994:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f5,-4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f9,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f3,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f3,f12
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f1,-8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lfs f13,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// lfs f10,-12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f8,0(r25)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// stfs f6,0(r28)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// stfs f4,-4(r25)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r25.u32 + -4, temp.u32);
	// addi r26,r26,-16
	r26.s64 = r26.s64 + -16;
	// stfs f2,4(r28)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// stfs f0,-8(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + -8, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f9,-12(r25)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r25.u32 + -12, temp.u32);
	// addi r25,r25,-16
	r25.s64 = r25.s64 + -16;
	// stfs f7,12(r28)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bdnz 0x823d8994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8994;
loc_823D8A1C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x823d8a60
	if (!ctx.cr6.lt) goto loc_823D8A60;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r9,r26,4
	ctx.r9.s64 = r26.s64 + 4;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// addi r8,r25,4
	ctx.r8.s64 = r25.s64 + 4;
	// addi r7,r28,-4
	ctx.r7.s64 = r28.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
loc_823D8A40:
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfsu f12,-4(r9)
	ea = -4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f13,-4(r8)
	ea = -4 + ctx.r8.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// stfsu f12,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x823d8a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8A40;
loc_823D8A60:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2cec
	ctx.lr = 0x823D8A6C;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824091C0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824091f8
	if (ctx.cr6.eq) goto loc_824091F8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824091f8
	if (ctx.cr6.eq) goto loc_824091F8;
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
loc_824091F8:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82409210
	if (!ctx.cr6.eq) goto loc_82409210;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82409238
	if (ctx.cr6.eq) goto loc_82409238;
loc_82409210:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82409220;
	sub_823F02B8(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82409238
	if (!ctx.cr0.eq) goto loc_82409238;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82409260
	goto loc_82409260;
loc_82409238:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240925c
	if (ctx.cr6.eq) goto loc_8240925C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240925c
	if (ctx.cr6.eq) goto loc_8240925C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_8240925C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409260:
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

DEFINE_REX_FUNC(sub_8240D2E8) {
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
	// bl 0x826a1cac
	ctx.lr = 0x8240D2F0;
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d320
	if (ctx.cr6.eq) goto loc_8240D320;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x8240D31C;
	sub_82408848(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8240D320:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8240d33c
	if (ctx.cr6.eq) goto loc_8240D33C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824094e0
	ctx.lr = 0x8240D338;
	sub_824094E0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8240D33C:
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
	// clrlwi r8,r29,30
	ctx.r8.u64 = r29.u32 & 0x3;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r7,r30,3,27,28
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0x18;
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
	// add r29,r10,r6
	r29.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lfs f31,3716(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3716);
	f31.f64 = double(temp.f32);
	// add r27,r9,r5
	r27.u64 = ctx.r9.u64 + ctx.r5.u64;
	// bne 0x8240d39c
	if (!ctx.cr0.eq) goto loc_8240D39C;
	// li r30,0
	r30.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// b 0x8240d3a4
	goto loc_8240D3A4;
loc_8240D39C:
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r28,-1
	r28.s64 = -1;
loc_8240D3A4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d3fc
	if (ctx.cr6.eq) goto loc_8240D3FC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// lfs f12,16232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16228(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
loc_8240D3CC:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
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
	// blt cr6,0x8240d3cc
	if (ctx.cr6.lt) goto loc_8240D3CC;
loc_8240D3FC:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8240d414
	if (ctx.cr6.eq) goto loc_8240D414;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x8240D414;
	sub_82409A88(ctx, base);
loc_8240D414:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8240d558
	if (!ctx.cr6.gt) goto loc_8240D558;
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// subf r9,r28,r30
	ctx.r9.u64 = r30.u64 - r28.u64;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r3,r28,r29
	ctx.r3.u64 = r29.u64 - r28.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r25,-32255
	r25.s64 = -2113863680;
	// lfd f9,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f10,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r5,r28,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f11,20208(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,17280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 17280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20328(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,20204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 20204);
	ctx.f8.f64 = double(temp.f32);
loc_8240D470:
	// lfsx f0,r10,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r4,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfsx f7,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
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
	// beq cr6,0x8240d50c
	if (ctx.cr6.eq) goto loc_8240D50C;
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
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// fsubs f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f7,f0,f12,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f0,f11,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmul f6,f0,f9
	ctx.f6.f64 = ctx.f0.f64 * ctx.f9.f64;
	// stfs f7,16(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f0,f10,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f7.f64)));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// frsp f31,f6
	f31.f64 = double(float(ctx.f6.f64));
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_8240D50C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8240d51c
	if (ctx.cr6.lt) goto loc_8240D51C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8240D51C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8240d534
	if (!ctx.cr6.gt) goto loc_8240D534;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// blt cr6,0x8240d538
	if (ctx.cr6.lt) goto loc_8240D538;
	// li r9,255
	ctx.r9.s64 = 255;
	// b 0x8240d538
	goto loc_8240D538;
loc_8240D534:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8240D538:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stbux r9,r3,r28
	ea = ctx.r3.u32 + r28.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r3.u32 = ea;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240d470
	if (ctx.cr6.lt) goto loc_8240D470;
loc_8240D558:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82417688) {
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
	ctx.lr = 0x82417690;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r24,632(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r29.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r29.u64);
	// std r29,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r29.u64);
	// std r29,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r29.u64);
	// bl 0x823f02b8
	ctx.lr = 0x824176C4;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824176f0
	if (ctx.cr0.eq) goto loc_824176F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24064
	ctx.r11.s64 = ctx.r11.s64 + 24064;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824176f4
	goto loc_824176F4;
loc_824176F0:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824176F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416cf0
	ctx.lr = 0x82417708;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823f02b8
	ctx.lr = 0x8241771C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82417748
	if (ctx.cr0.eq) goto loc_82417748;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24056
	ctx.r11.s64 = ctx.r11.s64 + 24056;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8241774c
	goto loc_8241774C;
loc_82417748:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8241774C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416cf0
	ctx.lr = 0x82417760;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823f02b8
	ctx.lr = 0x82417774;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824177a0
	if (ctx.cr0.eq) goto loc_824177A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24040
	ctx.r11.s64 = ctx.r11.s64 + 24040;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824177a4
	goto loc_824177A4;
loc_824177A0:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824177A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416cf0
	ctx.lr = 0x824177B8;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// li r28,2
	r28.s64 = 2;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x823f02b8
	ctx.lr = 0x824177D8;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82417804
	if (ctx.cr0.eq) goto loc_82417804;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24024
	ctx.r11.s64 = ctx.r11.s64 + 24024;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82417808
	goto loc_82417808;
loc_82417804:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82417808:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x82417818;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241782c
	if (ctx.cr0.eq) goto loc_8241782C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82444d78
	ctx.lr = 0x82417828;
	sub_82444D78(ctx, base);
	// b 0x82417830
	goto loc_82417830;
loc_8241782C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82417830:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416cf0
	ctx.lr = 0x82417848;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// li r11,2560
	ctx.r11.s64 = 2560;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823f02b8
	ctx.lr = 0x82417868;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82417894
	if (ctx.cr0.eq) goto loc_82417894;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24004
	ctx.r11.s64 = ctx.r11.s64 + 24004;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82417898
	goto loc_82417898;
loc_82417894:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82417898:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x824178A8;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824178bc
	if (ctx.cr0.eq) goto loc_824178BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82444d78
	ctx.lr = 0x824178B8;
	sub_82444D78(ctx, base);
	// b 0x824178c0
	goto loc_824178C0;
loc_824178BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_824178C0:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416cf0
	ctx.lr = 0x824178D8;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// li r11,2589
	ctx.r11.s64 = 2589;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823f02b8
	ctx.lr = 0x824178F8;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82417924
	if (ctx.cr0.eq) goto loc_82417924;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,23988
	ctx.r11.s64 = ctx.r11.s64 + 23988;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82417928
	goto loc_82417928;
loc_82417924:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82417928:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x82417938;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8241794c
	if (ctx.cr0.eq) goto loc_8241794C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82444d78
	ctx.lr = 0x82417948;
	sub_82444D78(ctx, base);
	// b 0x82417950
	goto loc_82417950;
loc_8241794C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82417950:
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824179b4
	if (ctx.cr6.eq) goto loc_824179B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416cf0
	ctx.lr = 0x82417968;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823f02b8
	ctx.lr = 0x8241797C;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824179a8
	if (ctx.cr0.eq) goto loc_824179A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,23980
	ctx.r11.s64 = ctx.r11.s64 + 23980;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x824179ac
	goto loc_824179AC;
loc_824179A8:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_824179AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824179c0
	if (!ctx.cr6.eq) goto loc_824179C0;
loc_824179B4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82417ac0
	goto loc_82417AC0;
loc_824179C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416cf0
	ctx.lr = 0x824179CC;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,23972
	ctx.r4.s64 = ctx.r11.s64 + 23972;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82416de0
	ctx.lr = 0x824179E8;
	sub_82416DE0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r4,r11,23960
	ctx.r4.s64 = ctx.r11.s64 + 23960;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82416e68
	ctx.lr = 0x82417A04;
	sub_82416E68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ac0
	if (ctx.cr0.lt) goto loc_82417AC0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82417abc
	if (ctx.cr6.eq) goto loc_82417ABC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82419980
	ctx.lr = 0x82417A1C;
	sub_82419980(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r11,632(r26)
	REX_STORE_U32(r26.u32 + 632, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82417ab4
	if (ctx.cr6.eq) goto loc_82417AB4;
	// addi r27,r26,24
	r27.s64 = r26.s64 + 24;
	// addi r28,r25,4
	r28.s64 = r25.s64 + 4;
loc_82417A38:
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82417a68
	if (ctx.cr6.eq) goto loc_82417A68;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82417A48:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82417a48
	if (!ctx.cr6.eq) goto loc_82417A48;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82417a6c
	goto loc_82417A6C;
loc_82417A68:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82417A6C:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824199a8
	ctx.lr = 0x82417A84;
	sub_824199A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ae4
	if (ctx.cr0.lt) goto loc_82417AE4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82417110
	ctx.lr = 0x82417A9C;
	sub_82417110(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82417ae4
	if (ctx.cr0.lt) goto loc_82417AE4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lwz r11,-4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82417a38
	if (!ctx.cr6.eq) goto loc_82417A38;
loc_82417AB4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82130e88
	ctx.lr = 0x82417ABC;
	sub_82130E88(ctx, base);
loc_82417ABC:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82417AC0:
	// stw r24,632(r26)
	REX_STORE_U32(r26.u32 + 632, r24.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82417ad8
	if (ctx.cr6.eq) goto loc_82417AD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82415a50
	ctx.lr = 0x82417AD8;
	sub_82415A50(ctx, base);
loc_82417AD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
loc_82417AE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82130e88
	ctx.lr = 0x82417AEC;
	sub_82130E88(ctx, base);
	// b 0x82417ac0
	goto loc_82417AC0;
}

DEFINE_REX_FUNC(sub_824423C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x824423f4
	if (!ctx.cr6.eq) goto loc_824423F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r11,-8192
	ctx.r8.s64 = ctx.r11.s64 + -8192;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-8216
	r30.s64 = ctx.r11.s64 + -8216;
	// b 0x82442404
	goto loc_82442404;
loc_824423F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r8,r11,-8248
	ctx.r8.s64 = ctx.r11.s64 + -8248;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-8280
	r30.s64 = ctx.r11.s64 + -8280;
loc_82442404:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f5,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f5.f64 = double(temp.f32);
	// fmr f10,f31
	ctx.f10.f64 = f31.f64;
	// fmr f7,f5
	ctx.f7.f64 = ctx.f5.f64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x82442458
	if (!ctx.cr6.eq) goto loc_82442458;
loc_82442430:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82442440
	if (!ctx.cr6.lt) goto loc_82442440;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82442440:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x8244244c
	if (!ctx.cr6.gt) goto loc_8244244C;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_8244244C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82442430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82442430;
	// b 0x82442498
	goto loc_82442498;
loc_82442458:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82442470
	if (!ctx.cr6.lt) goto loc_82442470;
	// fcmpu cr6,f0,f5
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// ble cr6,0x82442470
	if (!ctx.cr6.gt) goto loc_82442470;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_82442470:
	// fcmpu cr6,f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// ble cr6,0x82442484
	if (!ctx.cr6.gt) goto loc_82442484;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82442484
	if (!ctx.cr6.lt) goto loc_82442484;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_82442484:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82442458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82442458;
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// bne cr6,0x82442498
	if (!ctx.cr6.eq) goto loc_82442498;
	// fmr f7,f31
	ctx.f7.f64 = f31.f64;
loc_82442498:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfd f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,19092(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19092);
	ctx.f2.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// lfs f4,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f4.f64 = double(temp.f32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lfs f3,18136(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 18136);
	ctx.f3.f64 = double(temp.f32);
loc_824424CC:
	// fsubs f0,f7,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x82442638
	if (ctx.cr6.lt) goto loc_82442638;
	// fdivs f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82442514
	if (ctx.cr6.eq) goto loc_82442514;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// subf r10,r8,r30
	ctx.r10.u64 = r30.u64 - ctx.r8.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
loc_824424F8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f0.f64)));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824424f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824424F8;
loc_82442514:
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82442524
	if (!ctx.cr6.eq) goto loc_82442524;
	// stfs f5,-40(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f31,-36(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
loc_82442524:
	// li r11,16
	ctx.r11.s64 = 16;
	// fmr f9,f5
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f5.f64;
	// fmr f8,f5
	ctx.f8.f64 = ctx.f5.f64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// fmr f11,f5
	ctx.f11.f64 = ctx.f5.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82442540:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bgt cr6,0x82442570
	if (ctx.cr6.gt) goto loc_82442570;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82442568
	if (!ctx.cr6.eq) goto loc_82442568;
	// fmuls f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x824425d8
	if (!ctx.cr6.gt) goto loc_824425D8;
loc_82442568:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824425a8
	goto loc_824425A8;
loc_82442570:
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// blt cr6,0x82442598
	if (ctx.cr6.lt) goto loc_82442598;
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x82442590
	if (!ctx.cr6.eq) goto loc_82442590;
	// fadds f13,f7,f31
	ctx.f13.f64 = double(float(ctx.f7.f64 + f31.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x824425d8
	if (!ctx.cr6.lt) goto loc_824425D8;
loc_82442590:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x824425a8
	goto loc_824425A8;
loc_82442598:
	// fadds f13,f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
loc_824425A8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x824425d8
	if (!ctx.cr6.lt) goto loc_824425D8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f30,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	f30.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// lfsx f30,r11,r30
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	f30.f64 = double(temp.f32);
	// fmadds f11,f30,f30,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, f30.f64, ctx.f11.f64)));
	// fmadds f9,f13,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f8,f30,f0,f8
	ctx.f8.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, ctx.f8.f64)));
loc_824425D8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82442540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82442540;
	// fcmpu cr6,f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f5.f64);
	// ble cr6,0x824425f0
	if (!ctx.cr6.gt) goto loc_824425F0;
	// fdivs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fsubs f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
loc_824425F0:
	// fcmpu cr6,f11,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f5.f64);
	// ble cr6,0x82442600
	if (!ctx.cr6.gt) goto loc_82442600;
	// fdivs f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
loc_82442600:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x82442614
	if (!ctx.cr6.gt) goto loc_82442614;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// fmr f10,f7
	ctx.f10.f64 = ctx.f7.f64;
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
loc_82442614:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8244262c
	if (!ctx.cr6.lt) goto loc_8244262C;
	// fmuls f0,f8,f8
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// blt cr6,0x82442638
	if (ctx.cr6.lt) goto loc_82442638;
loc_8244262C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// blt cr6,0x824424cc
	if (ctx.cr6.lt) goto loc_824424CC;
loc_82442638:
	// fcmpu cr6,f10,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f5.f64);
	// bge cr6,0x82442648
	if (!ctx.cr6.lt) goto loc_82442648;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x8244265c
	goto loc_8244265C;
loc_82442648:
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
	// ble cr6,0x82442658
	if (!ctx.cr6.gt) goto loc_82442658;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8244265c
	goto loc_8244265C;
loc_82442658:
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
loc_8244265C:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fcmpu cr6,f7,f5
	ctx.cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// bge cr6,0x82442670
	if (!ctx.cr6.lt) goto loc_82442670;
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x82442684
	goto loc_82442684;
loc_82442670:
	// fcmpu cr6,f7,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, f31.f64);
	// ble cr6,0x82442680
	if (!ctx.cr6.gt) goto loc_82442680;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x82442684
	goto loc_82442684;
loc_82442680:
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
loc_82442684:
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfd f30,-32(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824561A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824561A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82455688
	ctx.lr = 0x824561C0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82456218
	if (ctx.cr0.lt) goto loc_82456218;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,14216
	ctx.r4.s64 = ctx.r11.s64 + 14216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824561DC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82456218
	if (ctx.cr0.lt) goto loc_82456218;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824561EC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82456218
	if (ctx.cr0.lt) goto loc_82456218;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r4,r11,14240
	ctx.r4.s64 = ctx.r11.s64 + 14240;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82456210;
	sub_824555B8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82456218:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82458750) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82458758;
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
	// bl 0x82455688
	ctx.lr = 0x8245876C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,15176
	ctx.r4.s64 = ctx.r11.s64 + 15176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458788;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82458798;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,15136
	ctx.r4.s64 = ctx.r11.s64 + 15136;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824587B8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824587C8;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,15100
	ctx.r4.s64 = ctx.r11.s64 + 15100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x824587E4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x824587F4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,15064
	ctx.r4.s64 = ctx.r11.s64 + 15064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458810;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82458820;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,15028
	ctx.r4.s64 = ctx.r11.s64 + 15028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245883C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245884C;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82458870
	if (ctx.cr0.lt) goto loc_82458870;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,14992
	ctx.r4.s64 = ctx.r11.s64 + 14992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82458868;
	sub_824555B8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82458870:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824618B8) {
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
	ctx.lr = 0x824618C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82461918
	if (ctx.cr6.eq) goto loc_82461918;
	// lis r9,4176
	ctx.r9.s64 = 273678336;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82461918
	if (ctx.cr6.eq) goto loc_82461918;
	// lis r9,4192
	ctx.r9.s64 = 274726912;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82461918
	if (ctx.cr6.eq) goto loc_82461918;
	// lis r9,4144
	ctx.r9.s64 = 271581184;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82461918
	if (ctx.cr6.eq) goto loc_82461918;
	// lis r9,4208
	ctx.r9.s64 = 275775488;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82461918
	if (ctx.cr6.eq) goto loc_82461918;
loc_82461910:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82461c7c
	goto loc_82461C7C;
loc_82461918:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82461910
	if (!ctx.cr6.eq) goto loc_82461910;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r27,0
	r27.s64 = 0;
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r5,84(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 84);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82461910
	if (ctx.cr6.eq) goto loc_82461910;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8246199c
	if (ctx.cr6.eq) goto loc_8246199C;
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82461970:
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8246198c
	if (!ctx.cr6.gt) goto loc_8246198C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8246198C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82461970
	if (ctx.cr6.lt) goto loc_82461970;
loc_8246199C:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824619ec
	if (!ctx.cr6.eq) goto loc_824619EC;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,12(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824619ec
	if (!ctx.cr6.eq) goto loc_824619EC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824619ec
	if (!ctx.cr6.eq) goto loc_824619EC;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824619ec
	if (ctx.cr6.eq) goto loc_824619EC;
	// li r27,1
	r27.s64 = 1;
loc_824619EC:
	// lwz r11,256(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 256);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82461910
	if (ctx.cr6.gt) goto loc_82461910;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82461a0c
	if (!ctx.cr6.eq) goto loc_82461A0C;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82461910
	if (!ctx.cr6.eq) goto loc_82461910;
loc_82461A0C:
	// lwz r11,108(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 108);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82461a44
	if (ctx.cr0.eq) goto loc_82461A44;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82461910
	if (ctx.cr6.eq) goto loc_82461910;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r9,132(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 132);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82461910
	if (ctx.cr6.eq) goto loc_82461910;
loc_82461A44:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82461910
	if (!ctx.cr6.eq) goto loc_82461910;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82461910
	if (!ctx.cr0.eq) goto loc_82461910;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82461aa8
	if (!ctx.cr6.gt) goto loc_82461AA8;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82461A88:
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// bne cr6,0x82461910
	if (!ctx.cr6.eq) goto loc_82461910;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82461a88
	if (ctx.cr6.lt) goto loc_82461A88;
loc_82461AA8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82461910
	if (!ctx.cr6.eq) goto loc_82461910;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x82461ACC;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82461ae0
	if (ctx.cr0.eq) goto loc_82461AE0;
	// bl 0x824773d0
	ctx.lr = 0x82461AD8;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82461ae4
	goto loc_82461AE4;
loc_82461AE0:
	// li r31,0
	r31.s64 = 0;
loc_82461AE4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82461af8
	if (!ctx.cr6.eq) goto loc_82461AF8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82461c7c
	goto loc_82461C7C;
loc_82461AF8:
	// addic r10,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r10.s64 = r27.s64 + -1;
	// lwz r9,260(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 260);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// subfe r10,r10,r27
	temp.u8 = (~ctx.r10.u32 + r27.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82477b60
	ctx.lr = 0x82461B20;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82461b40
	if (!ctx.cr0.lt) goto loc_82461B40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82461B30;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x82461B38;
	sub_82477B20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82461c7c
	goto loc_82461C7C;
loc_82461B40:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x82461B54;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82461b78
	if (ctx.cr6.eq) goto loc_82461B78;
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
loc_82461B78:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82461c20
	if (ctx.cr6.eq) goto loc_82461C20;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82461B90:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82461c0c
	if (!ctx.cr6.lt) goto loc_82461C0C;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82461BA0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwzx r8,r3,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82461be8
	if (!ctx.cr6.gt) goto loc_82461BE8;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r9,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// lwzx r30,r11,r4
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stwx r3,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stwx r30,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, r30.u32);
loc_82461BE8:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82461c84
	if (ctx.cr6.eq) goto loc_82461C84;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82461ba0
	if (ctx.cr6.lt) goto loc_82461BA0;
loc_82461C0C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82461b90
	if (ctx.cr6.lt) goto loc_82461B90;
loc_82461C20:
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82461C38;
	sub_826A1E70(ctx, base);
	// lwz r11,256(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 256);
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82461c60
	if (ctx.cr6.eq) goto loc_82461C60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x82461C58;
	sub_82130E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477b20
	ctx.lr = 0x82461C60;
	sub_82477B20(ctx, base);
loc_82461C60:
	// lwz r11,256(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 256);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r31.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_82461C7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82461C84:
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 260);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4822
	ctx.r5.s64 = 4822;
	// addi r6,r10,26520
	ctx.r6.s64 = ctx.r10.s64 + 26520;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x82461CA0;
	sub_82489C30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x82461CA8;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b20
	ctx.lr = 0x82461CB0;
	sub_82477B20(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82461c7c
	goto loc_82461C7C;
}

DEFINE_REX_FUNC(sub_8247C740) {
	REX_FUNC_PROLOGUE();
loc_8247C740:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8247c760
	if (ctx.cr6.eq) goto loc_8247C760;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8247C760:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,84(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// ble cr6,0x8247c780
	if (!ctx.cr6.gt) goto loc_8247C780;
	// stw r5,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
loc_8247C780:
	// lwz r9,88(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8247c790
	if (!ctx.cr6.lt) goto loc_8247C790;
	// stw r5,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
loc_8247C790:
	// lwz r9,92(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// stw r9,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8247c7b8
	if (!ctx.cr6.gt) goto loc_8247C7B8;
	// stw r5,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r5.u32);
loc_8247C7B8:
	// lwz r9,44(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8247c7c8
	if (!ctx.cr6.lt) goto loc_8247C7C8;
	// stw r5,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
loc_8247C7C8:
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8247c740
	goto loc_8247C740;
}

DEFINE_REX_FUNC(sub_82482568) {
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
	ctx.lr = 0x82482570;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r21,r24
	r21.u64 = r24.u64;
	// bl 0x82481098
	ctx.lr = 0x82482584;
	sub_82481098(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824825e4
	if (!ctx.cr6.gt) goto loc_824825E4;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82482598:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r8,16(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r8,0,15,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE0;
	// rlwinm. r8,r8,0,26,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF003F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824825cc
	if (ctx.cr0.eq) goto loc_824825CC;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r8,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// b 0x824825d0
	goto loc_824825D0;
loc_824825CC:
	// stw r24,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, r24.u32);
loc_824825D0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82482598
	if (ctx.cr6.lt) goto loc_82482598;
loc_824825E4:
	// lwz r8,12(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lis r25,8336
	r25.s64 = 546308096;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82482670
	if (ctx.cr6.eq) goto loc_82482670;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_824825F8:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x82482668
	if (!ctx.cr6.eq) goto loc_82482668;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82482668
	if (!ctx.cr6.gt) goto loc_82482668;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8248262C:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,20(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r5,84(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x82482654
	if (ctx.cr6.eq) goto loc_82482654;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,84(r9)
	REX_STORE_U32(ctx.r9.u32 + 84, ctx.r5.u32);
loc_82482654:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8248262c
	if (ctx.cr6.lt) goto loc_8248262C;
loc_82482668:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824825f8
	if (!ctx.cr6.eq) goto loc_824825F8;
loc_82482670:
	// lis r23,4096
	r23.s64 = 268435456;
	// lis r22,16384
	r22.s64 = 1073741824;
loc_82482678:
	// lwz r29,12(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8248299c
	if (ctx.cr6.eq) goto loc_8248299C;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8248268C:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwzx r9,r28,r11
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82482830
	if (ctx.cr0.eq) goto loc_82482830;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// blt cr6,0x82482764
	if (ctx.cr6.lt) goto loc_82482764;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// bgt cr6,0x82482764
	if (ctx.cr6.gt) goto loc_82482764;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// divwu r31,r10,r11
	r31.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82482830
	if (!ctx.cr6.gt) goto loc_82482830;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_824826E0:
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,84(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82482704
	if (!ctx.cr6.eq) goto loc_82482704;
	// li r27,1
	r27.s64 = 1;
loc_82482704:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8247d0b8
	ctx.lr = 0x82482710;
	sub_8247D0B8(ctx, base);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8248274c
	if (ctx.cr6.eq) goto loc_8248274C;
loc_8248271C:
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8247d0b8
	ctx.lr = 0x82482740;
	sub_8247D0B8(ctx, base);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x8248271c
	if (ctx.cr6.lt) goto loc_8248271C;
loc_8248274C:
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824826e0
	if (ctx.cr6.lt) goto loc_824826E0;
	// b 0x82482830
	goto loc_82482830;
loc_82482764:
	// lwz r4,12(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824827bc
	if (ctx.cr6.eq) goto loc_824827BC;
	// lwz r8,16(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_82482784:
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824827a0
	if (!ctx.cr6.lt) goto loc_824827A0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_824827A0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82482784
	if (ctx.cr6.lt) goto loc_82482784;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x824827bc
	if (!ctx.cr6.eq) goto loc_824827BC;
	// li r27,1
	r27.s64 = 1;
loc_824827BC:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824827f4
	if (ctx.cr6.eq) goto loc_824827F4;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_824827CC:
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x8247d0b8
	ctx.lr = 0x824827E0;
	sub_8247D0B8(ctx, base);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824827cc
	if (ctx.cr6.lt) goto loc_824827CC;
loc_824827F4:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82482830
	if (!ctx.cr6.gt) goto loc_82482830;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_82482808:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// bl 0x8247d0b8
	ctx.lr = 0x8248281C;
	sub_8247D0B8(ctx, base);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82482808
	if (ctx.cr6.lt) goto loc_82482808;
loc_82482830:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8248268c
	if (!ctx.cr6.eq) goto loc_8248268C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8248299c
	if (ctx.cr6.eq) goto loc_8248299C;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248299c
	if (!ctx.cr6.gt) goto loc_8248299C;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82482858:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x82482980
	if (!ctx.cr6.eq) goto loc_82482980;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82482980
	if (ctx.cr6.eq) goto loc_82482980;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82482884:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r5,20(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r5
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8248296c
	if (!ctx.cr6.eq) goto loc_8248296C;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824828d4
	if (ctx.cr6.eq) goto loc_824828D4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bne cr6,0x824828d8
	if (!ctx.cr6.eq) goto loc_824828D8;
loc_824828D4:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_824828D8:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 24);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82482924
	if (ctx.cr6.eq) goto loc_82482924;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82482908:
	// lwzx r20,r10,r6
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r20,r7
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82482924
	if (ctx.cr6.eq) goto loc_82482924;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82482908
	if (ctx.cr6.lt) goto loc_82482908;
loc_82482924:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82482950
	if (ctx.cr6.eq) goto loc_82482950;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82482950
	if (ctx.cr6.eq) goto loc_82482950;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82482950:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8248296c
	if (ctx.cr6.eq) goto loc_8248296C;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// li r27,1
	r27.s64 = 1;
loc_8248296C:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82482884
	if (ctx.cr6.lt) goto loc_82482884;
loc_82482980:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82482858
	if (ctx.cr6.lt) goto loc_82482858;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82482678
	if (!ctx.cr6.eq) goto loc_82482678;
loc_8248299C:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82482b8c
	if (!ctx.cr6.gt) goto loc_82482B8C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_824829B0:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82482b78
	if (ctx.cr0.eq) goto loc_82482B78;
	// rlwinm r9,r10,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, ctx.xer);
	// blt cr6,0x82482b18
	if (ctx.cr6.lt) goto loc_82482B18;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// bgt cr6,0x82482b18
	if (ctx.cr6.gt) goto loc_82482B18;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// divwu r4,r9,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x82482a84
	if (!ctx.cr6.gt) goto loc_82482A84;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82482A04:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r30,r7,r9
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82482a70
	if (!ctx.cr6.eq) goto loc_82482A70;
	// lwzx r30,r7,r9
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r30,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, r30.u32);
	// beq cr6,0x82482a68
	if (ctx.cr6.eq) goto loc_82482A68;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82482A3C:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r29,r9,r6
	r29.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r29,r29,r30
	r29.u64 = REX_LOAD_U32(r29.u32 + r30.u32);
	// stwx r29,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, r29.u32);
	// bdnz 0x82482a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82482A3C;
loc_82482A68:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82482A70:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82482a04
	if (ctx.cr6.lt) goto loc_82482A04;
loc_82482A84:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82482b78
	if (ctx.cr6.eq) goto loc_82482B78;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82482aa4
	if (ctx.cr6.eq) goto loc_82482AA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r8,0,12,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF00000);
	// b 0x82482aa8
	goto loc_82482AA8;
loc_82482AA4:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82482AA8:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x82482b08
	if (!ctx.cr6.gt) goto loc_82482B08;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82482ABC:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82482af8
	if (ctx.cr6.eq) goto loc_82482AF8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82482ACC:
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r6,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// stwx r6,r5,r30
	REX_STORE_U32(ctx.r5.u32 + r30.u32, ctx.r6.u32);
	// bdnz 0x82482acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82482ACC;
loc_82482AF8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82482abc
	if (ctx.cr6.lt) goto loc_82482ABC;
loc_82482B08:
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82482b74
	goto loc_82482B74;
loc_82482B18:
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82482b60
	if (ctx.cr6.eq) goto loc_82482B60;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_82482B34:
	// lwzx r5,r10,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r5,84(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// beq cr6,0x82482b60
	if (ctx.cr6.eq) goto loc_82482B60;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82482b34
	if (ctx.cr6.lt) goto loc_82482B34;
loc_82482B60:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82482b78
	if (!ctx.cr6.eq) goto loc_82482B78;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// stw r24,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r24.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
loc_82482B74:
	// li r21,1
	r21.s64 = 1;
loc_82482B78:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824829b0
	if (ctx.cr6.lt) goto loc_824829B0;
loc_82482B8C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82482c54
	if (!ctx.cr6.gt) goto loc_82482C54;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82482BA0:
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// lwzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// beq cr6,0x82482bbc
	if (ctx.cr6.eq) goto loc_82482BBC;
	// lwz r11,56(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82482bc0
	if (!ctx.cr6.eq) goto loc_82482BC0;
loc_82482BBC:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82482BC0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82482c40
	if (ctx.cr6.eq) goto loc_82482C40;
	// lwz r10,116(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 116);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82482c40
	if (ctx.cr6.eq) goto loc_82482C40;
	// lwz r6,8(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82482c08
	if (!ctx.cr6.eq) goto loc_82482C08;
	// lwz r6,16(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,21,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82482c40
	if (!ctx.cr0.eq) goto loc_82482C40;
loc_82482C08:
	// lwz r6,16(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r6,r11,0,22,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82482c38
	if (ctx.cr0.eq) goto loc_82482C38;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82482c38
	if (ctx.cr0.eq) goto loc_82482C38;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x82482c40
	goto loc_82482C40;
loc_82482C38:
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// li r21,1
	r21.s64 = 1;
loc_82482C40:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82482ba0
	if (ctx.cr6.lt) goto loc_82482BA0;
loc_82482C54:
	// cntlzw r11,r21
	ctx.r11.u64 = r21.u32 == 0 ? 32 : __builtin_clz(r21.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_824C1C00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824C1C08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824c1c4c
	if (!ctx.cr6.gt) goto loc_824C1C4C;
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
loc_824C1C34:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x826a1e70
	ctx.lr = 0x824C1C44;
	sub_826A1E70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x824c1c34
	if (ctx.cr0.gt) goto loc_824C1C34;
loc_824C1C4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824C3D28) {
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
	// bl 0x82441f18
	ctx.lr = 0x824C3D48;
	sub_82441F18(ctx, base);
	// lbz r11,1555(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1555);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824c3dbc
	if (ctx.cr0.eq) goto loc_824C3DBC;
	// lwz r11,1376(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1376);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,1468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1468);
	// bne 0x824c3d6c
	if (!ctx.cr0.eq) goto loc_824C3D6C;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_824C3D6C:
	// stw r11,1472(r31)
	REX_STORE_U32(r31.u32 + 1472, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lbz r10,1556(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1556);
	// addi r11,r11,6124
	ctx.r11.s64 = ctx.r11.s64 + 6124;
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
	// b 0x824c3dd0
	goto loc_824C3DD0;
loc_824C3DBC:
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
loc_824C3DD0:
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
	// beq 0x824c3df8
	if (ctx.cr0.eq) goto loc_824C3DF8;
	// lbz r10,1559(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1559);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x824c3df8
	if (!ctx.cr6.lt) goto loc_824C3DF8;
	// li r11,8
	ctx.r11.s64 = 8;
loc_824C3DF8:
	// rlwinm. r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c3e6c
	if (ctx.cr0.eq) goto loc_824C3E6C;
	// lbz r10,1558(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824c3e24
	if (!ctx.cr6.eq) goto loc_824C3E24;
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
	// b 0x824c3e6c
	goto loc_824C3E6C;
loc_824C3E24:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824c3e4c
	if (!ctx.cr6.eq) goto loc_824C3E4C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x824c3e38
	if (!ctx.cr6.lt) goto loc_824C3E38;
	// li r11,8
	ctx.r11.s64 = 8;
loc_824C3E38:
	// lhz r10,1546(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x824c3e6c
	if (ctx.cr0.eq) goto loc_824C3E6C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x824c3e6c
	goto loc_824C3E6C;
loc_824C3E4C:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x824c3e6c
	if (!ctx.cr6.eq) goto loc_824C3E6C;
	// lhz r10,1546(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x824c3e6c
	if (ctx.cr0.eq) goto loc_824C3E6C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
loc_824C3E6C:
	// rlwinm. r10,r8,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824c3eb8
	if (ctx.cr0.eq) goto loc_824C3EB8;
	// lbz r10,1558(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 1558);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x824c3e98
	if (ctx.cr6.eq) goto loc_824C3E98;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824c3ea0
	if (!ctx.cr6.eq) goto loc_824C3EA0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bgt cr6,0x824c3e98
	if (ctx.cr6.gt) goto loc_824C3E98;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x824c3eb8
	goto loc_824C3EB8;
loc_824C3E98:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x824c3eb8
	goto loc_824C3EB8;
loc_824C3EA0:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x824c3eb8
	if (!ctx.cr6.eq) goto loc_824C3EB8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// ble cr6,0x824c3eb8
	if (!ctx.cr6.gt) goto loc_824C3EB8;
	// li r11,64
	ctx.r11.s64 = 64;
loc_824C3EB8:
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
	// bl 0x824bf4d0
	ctx.lr = 0x824C3EE4;
	sub_824BF4D0(ctx, base);
	// stw r3,1500(r31)
	REX_STORE_U32(r31.u32 + 1500, ctx.r3.u32);
	// lwz r11,1480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1480);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x824bf4d0
	ctx.lr = 0x824C3EF8;
	sub_824BF4D0(ctx, base);
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
	// bl 0x824bf578
	ctx.lr = 0x824C3F14;
	sub_824BF578(ctx, base);
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

DEFINE_REX_FUNC(sub_824D0C38) {
	REX_FUNC_PROLOGUE();
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D11D0) {
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
	ctx.lr = 0x824D11D8;
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
	ctx.lr = 0x824D1220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824d1230
	if (!ctx.cr0.eq) goto loc_824D1230;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x824d1388
	goto loc_824D1388;
loc_824D1230:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,11800
	r31.s64 = ctx.r11.s64 + 11800;
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
	// bl 0x824d0c50
	ctx.lr = 0x824D1268;
	sub_824D0C50(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x824d1344
	if (!ctx.cr0.eq) goto loc_824D1344;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d1360
	if (ctx.cr6.eq) goto loc_824D1360;
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
	// bl 0x824d0c50
	ctx.lr = 0x824D12B0;
	sub_824D0C50(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824d12e8
	if (!ctx.cr0.eq) goto loc_824D12E8;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824d12cc
	if (!ctx.cr6.eq) goto loc_824D12CC;
	// cmplwi cr6,r29,257
	ctx.cr6.compare<uint32_t>(r29.u32, 257, ctx.xer);
	// bgt cr6,0x824d1318
	if (ctx.cr6.gt) goto loc_824D1318;
loc_824D12CC:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D12E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824d1388
	goto loc_824D1388;
loc_824D12E8:
	// cmpwi cr6,r31,-3
	ctx.cr6.compare<int32_t>(r31.s32, -3, ctx.xer);
	// bne cr6,0x824d12fc
	if (!ctx.cr6.eq) goto loc_824D12FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,16856
	ctx.r11.s64 = ctx.r11.s64 + 16856;
	// b 0x824d1324
	goto loc_824D1324;
loc_824D12FC:
	// cmpwi cr6,r31,-5
	ctx.cr6.compare<int32_t>(r31.s32, -5, ctx.xer);
	// bne cr6,0x824d1310
	if (!ctx.cr6.eq) goto loc_824D1310;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,16828
	ctx.r11.s64 = ctx.r11.s64 + 16828;
	// b 0x824d1320
	goto loc_824D1320;
loc_824D1310:
	// cmpwi cr6,r31,-4
	ctx.cr6.compare<int32_t>(r31.s32, -4, ctx.xer);
	// beq cr6,0x824d1328
	if (ctx.cr6.eq) goto loc_824D1328;
loc_824D1318:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,16792
	ctx.r11.s64 = ctx.r11.s64 + 16792;
loc_824D1320:
	// li r31,-3
	r31.s64 = -3;
loc_824D1324:
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
loc_824D1328:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D133C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x824d1388
	goto loc_824D1388;
loc_824D1344:
	// cmpwi cr6,r26,-3
	ctx.cr6.compare<int32_t>(r26.s32, -3, ctx.xer);
	// bne cr6,0x824d1358
	if (!ctx.cr6.eq) goto loc_824D1358;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,16756
	ctx.r11.s64 = ctx.r11.s64 + 16756;
	// b 0x824d136c
	goto loc_824D136C;
loc_824D1358:
	// cmpwi cr6,r26,-4
	ctx.cr6.compare<int32_t>(r26.s32, -4, ctx.xer);
	// beq cr6,0x824d1370
	if (ctx.cr6.eq) goto loc_824D1370;
loc_824D1360:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r26,-3
	r26.s64 = -3;
	// addi r11,r11,16724
	ctx.r11.s64 = ctx.r11.s64 + 16724;
loc_824D136C:
	// stw r11,24(r24)
	REX_STORE_U32(r24.u32 + 24, ctx.r11.u32);
loc_824D1370:
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824D1384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_824D1388:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824D83E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D83F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d846c
	if (!ctx.cr6.gt) goto loc_824D846C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d8418
	if (!ctx.cr6.lt) goto loc_824D8418;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D8418:
	// mulli r4,r30,28
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D8424;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d843c
	if (!ctx.cr0.eq) goto loc_824D843C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d846c
	goto loc_824D846C;
loc_824D843C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d8468
	if (ctx.cr6.eq) goto loc_824D8468;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// bl 0x826a1e70
	ctx.lr = 0x824D845C;
	sub_826A1E70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5b08
	ctx.lr = 0x824D8468;
	sub_824E5B08(ctx, base);
loc_824D8468:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D846C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DB090) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// bne 0x824db0cc
	if (!ctx.cr0.eq) goto loc_824DB0CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824dadd8
	ctx.lr = 0x824DB0BC;
	sub_824DADD8(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824DB0C8;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824DB0CC:
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

DEFINE_REX_FUNC(sub_824DC088) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DC090;
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
	// blt cr6,0x824dc0dc
	if (ctx.cr6.lt) goto loc_824DC0DC;
	// lwz r30,120(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x824dc0dc
	if (ctx.cr6.gt) goto loc_824DC0DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824dc0d4
	if (!ctx.cr6.gt) goto loc_824DC0D4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d7ff8
	ctx.lr = 0x824DC0D4;
	sub_824D7FF8(ctx, base);
loc_824DC0D4:
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_824DC0DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DDCE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x824ddd20
	if (!ctx.cr6.eq) goto loc_824DDD20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824DDD20:
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E00D0) {
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
	ctx.lr = 0x824E00D8;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824E0108;
	sub_826A1E70(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,21624
	r27.s64 = ctx.r11.s64 + 21624;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824e0128
	if (ctx.cr6.eq) goto loc_824E0128;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,23704
	ctx.r4.s64 = ctx.r11.s64 + 23704;
	// b 0x824e0144
	goto loc_824E0144;
loc_824E0128:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e0140
	if (ctx.cr6.eq) goto loc_824E0140;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,23692
	ctx.r4.s64 = ctx.r11.s64 + 23692;
	// b 0x824e0144
	goto loc_824E0144;
loc_824E0140:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_824E0144:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826a0568
	ctx.lr = 0x824E015C;
	sub_826A0568(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824e0190
	if (!ctx.cr6.eq) goto loc_824E0190;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824e0294
	if (!ctx.cr6.eq) goto loc_824E0294;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824dfd28
	ctx.lr = 0x824E0184;
	sub_824DFD28(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824e0288
	if (ctx.cr6.eq) goto loc_824E0288;
loc_824E0190:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,23684
	ctx.r4.s64 = ctx.r11.s64 + 23684;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826a0568
	ctx.lr = 0x824E01AC;
	sub_826A0568(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,112(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x824de338
	ctx.lr = 0x824E01CC;
	sub_824DE338(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824e03bc
	if (ctx.cr6.eq) goto loc_824E03BC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r30,r11,-26856
	r30.s64 = ctx.r11.s64 + -26856;
	// addi r25,r10,23676
	r25.s64 = ctx.r10.s64 + 23676;
loc_824E01EC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x826a0568
	ctx.lr = 0x824E01FC;
	sub_826A0568(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824e0210
	if (!ctx.cr6.lt) goto loc_824E0210;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
loc_824E0210:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// bl 0x824e00d0
	ctx.lr = 0x824E0238;
	sub_824E00D0(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x824e0278
	if (ctx.cr6.eq) goto loc_824E0278;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_824E0278:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x824e01ec
	if (ctx.cr6.lt) goto loc_824E01EC;
	// b 0x824e03bc
	goto loc_824E03BC;
loc_824E0288:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824e03bc
	if (ctx.cr6.eq) goto loc_824E03BC;
loc_824E0294:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x826a0568
	ctx.lr = 0x824E02B0;
	sub_826A0568(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x824e03bc
	if (ctx.cr6.eq) goto loc_824E03BC;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r10,-14240
	r27.s64 = ctx.r10.s64 + -14240;
	// addi r26,r11,-26856
	r26.s64 = ctx.r11.s64 + -26856;
loc_824E02DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 6);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r28.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x824de338
	ctx.lr = 0x824E0330;
	sub_824DE338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x824e0348
	if (!ctx.cr6.lt) goto loc_824E0348;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
loc_824E0348:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// bl 0x824e00d0
	ctx.lr = 0x824E0370;
	sub_824E00D0(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x824e03b0
	if (ctx.cr6.eq) goto loc_824E03B0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_824E03B0:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x824e02dc
	if (!ctx.cr0.eq) goto loc_824E02DC;
loc_824E03BC:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824F1640) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r10,r4,36
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(36));
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,3
	ctx.r6.s64 = 3;
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r7,20,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xF00000;
	// not r6,r6
	ctx.r6.u64 = ~ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r6,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// slw r6,r4,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwimi r9,r8,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F7330) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824f7368
	if (!ctx.cr6.eq) goto loc_824F7368;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f7368
	if (ctx.cr0.eq) goto loc_824F7368;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// beq cr6,0x824f7368
	if (ctx.cr6.eq) goto loc_824F7368;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x824f736c
	if (!ctx.cr6.eq) goto loc_824F736C;
loc_824F7368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F736C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F8C28) {
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
	ctx.lr = 0x824F8C30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x824f7678
	ctx.lr = 0x824F8C48;
	sub_824F7678(ctx, base);
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = r28.u64 | 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_824F8C60:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824f8ce0
	if (!ctx.cr0.eq) goto loc_824F8CE0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824f8ce0
	if (ctx.cr0.eq) goto loc_824F8CE0;
loc_824F8C7C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824f8c98
	if (ctx.cr6.lt) goto loc_824F8C98;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824f8c9c
	if (!ctx.cr6.gt) goto loc_824F8C9C;
loc_824F8C98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F8C9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f8e94
	if (!ctx.cr0.eq) goto loc_824F8E94;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x824f8cb8
	if (ctx.cr6.lt) goto loc_824F8CB8;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824f8cbc
	if (!ctx.cr6.gt) goto loc_824F8CBC;
loc_824F8CB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F8CBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f8e94
	if (!ctx.cr0.eq) goto loc_824F8E94;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f8ce0
	if (!ctx.cr0.eq) goto loc_824F8CE0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f8c7c
	if (!ctx.cr6.eq) goto loc_824F8C7C;
loc_824F8CE0:
	// lwz r30,12(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824f8cfc
	if (ctx.cr6.eq) goto loc_824F8CFC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x824f8d00
	if (ctx.cr6.eq) goto loc_824F8D00;
loc_824F8CFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F8D00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f8d18
	if (ctx.cr0.eq) goto loc_824F8D18;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824f8e18
	if (ctx.cr6.eq) goto loc_824F8E18;
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x824f8e10
	goto loc_824F8E10;
loc_824F8D18:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824f8dfc
	if (!ctx.cr6.eq) goto loc_824F8DFC;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824f8dfc
	if (ctx.cr0.eq) goto loc_824F8DFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x824f8d4c
	if (ctx.cr6.eq) goto loc_824F8D4C;
	// cmplwi cr6,r10,87
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824f8d50
	if (!ctx.cr6.eq) goto loc_824F8D50;
loc_824F8D4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824F8D50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f8dfc
	if (ctx.cr0.eq) goto loc_824F8DFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x824F8D70;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-16
	ctx.r10.s64 = r31.s64 + -16;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r31,28(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
loc_824F8D84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f8da0
	if (ctx.cr6.eq) goto loc_824F8DA0;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// bne cr6,0x824f8da4
	if (!ctx.cr6.eq) goto loc_824F8DA4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824f8d84
	goto loc_824F8D84;
loc_824F8DA0:
	// li r30,0
	r30.s64 = 0;
loc_824F8DA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f8dd4
	if (!ctx.cr0.eq) goto loc_824F8DD4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f8dd4
	if (ctx.cr0.eq) goto loc_824F8DD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x824f8de0
	if (!ctx.cr6.gt) goto loc_824F8DE0;
loc_824F8DD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x824F8DE0;
	sub_8251FE00(ctx, base);
loc_824F8DE0:
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
	// b 0x824f8e10
	goto loc_824F8E10;
loc_824F8DFC:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f8e18
	if (!ctx.cr0.eq) goto loc_824F8E18;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_824F8E10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824f8c60
	if (!ctx.cr6.eq) goto loc_824F8C60;
loc_824F8E18:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f8e90
	if (!ctx.cr0.eq) goto loc_824F8E90;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824f8e90
	if (ctx.cr0.eq) goto loc_824F8E90;
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
	// bne 0x824f8c60
	if (!ctx.cr0.eq) goto loc_824F8C60;
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
	ctx.lr = 0x824F8E8C;
	sub_824E4308(ctx, base);
	// b 0x824f8c60
	goto loc_824F8C60;
loc_824F8E90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824F8E94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825168B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,692(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 692);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,1,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFC0;
	// rlwinm r8,r4,30,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r11.u32);
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825185B0) {
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
	ctx.lr = 0x825185B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,0
	r24.s64 = 0;
	// bne 0x825185fc
	if (!ctx.cr0.eq) goto loc_825185FC;
	// std r24,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r24.u64);
	// std r24,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r24.u64);
	// std r24,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r24.u64);
	// std r24,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, r24.u64);
	// b 0x825186e8
	goto loc_825186E8;
loc_825185FC:
	// ld r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 40);
	// addi r11,r27,8
	ctx.r11.s64 = r27.s64 + 8;
	// addi r9,r30,40
	ctx.r9.s64 = r30.s64 + 40;
	// li r7,1
	ctx.r7.s64 = 1;
	// std r10,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r10.u64);
	// ld r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 48);
	// std r10,16(r27)
	REX_STORE_U64(r27.u32 + 16, ctx.r10.u64);
	// ld r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 56);
	// std r10,24(r27)
	REX_STORE_U64(r27.u32 + 24, ctx.r10.u64);
	// ld r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 64);
	// std r10,32(r27)
	REX_STORE_U64(r27.u32 + 32, ctx.r10.u64);
	// lwz r10,192(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 192);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82518684
	if (!ctx.cr6.gt) goto loc_82518684;
	// li r6,10
	ctx.r6.s64 = 10;
loc_8251863C:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8251864C:
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + r30.u32);
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8251864c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251864C;
	// lwz r10,192(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 192);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,5
	ctx.r6.s64 = ctx.r6.s64 + 5;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8251863c
	if (ctx.cr6.lt) goto loc_8251863C;
loc_82518684:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825186e8
	if (ctx.cr6.eq) goto loc_825186E8;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 192);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// clrlwi. r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825186e8
	if (ctx.cr0.eq) goto loc_825186E8;
	// li r7,5
	ctx.r7.s64 = 5;
loc_825186A0:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825186B0:
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + r25.u32);
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x825186b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825186B0;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 192);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825186a0
	if (ctx.cr6.lt) goto loc_825186A0;
loc_825186E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// b 0x82518764
	goto loc_82518764;
loc_825186F8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82518200
	ctx.lr = 0x8251871C;
	sub_82518200(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82518784
	if (!ctx.cr0.eq) goto loc_82518784;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251875c
	if (ctx.cr0.eq) goto loc_8251875C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// slw r4,r11,r29
	ctx.r4.u64 = r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r29.u8 & 0x3F));
	// rlwimi r4,r28,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x82502350
	ctx.lr = 0x82518748;
	sub_82502350(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r11,r29,r26
	ctx.r11.u64 = r29.u64 + r26.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82518760
	if (!ctx.cr6.gt) goto loc_82518760;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8251875C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82518760:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82518764:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82509490
	ctx.lr = 0x82518774;
	sub_82509490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825186f8
	if (!ctx.cr6.eq) goto loc_825186F8;
	// b 0x82518794
	goto loc_82518794;
loc_82518784:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwimi r3,r11,22,28,31
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82518794:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8252E5C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8252e5f8
	goto loc_8252E5F8;
loc_8252E5DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,19,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8252e5f4
	if (!ctx.cr6.gt) goto loc_8252E5F4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_8252E5F4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8252E5F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e5dc
	if (!ctx.cr6.eq) goto loc_8252E5DC;
	// lwz r10,32(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x8252e624
	goto loc_8252E624;
loc_8252E608:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,19,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8252e620
	if (!ctx.cr6.gt) goto loc_8252E620;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8252E620:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8252E624:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252e608
	if (!ctx.cr6.eq) goto loc_8252E608;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252e63c
	if (!ctx.cr6.eq) goto loc_8252E63C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8252E63C:
	// subfc r11,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825318E8) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r30,r3,1
	r30.u64 = ctx.r3.u64 | 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bl 0x824f7d10
	ctx.lr = 0x82531928;
	sub_824F7D10(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82537A20) {
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
	ctx.lr = 0x82537A28;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x82537a64
	if (!ctx.cr6.eq) goto loc_82537A64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x82537760
	ctx.lr = 0x82537A60;
	sub_82537760(ctx, base);
	// b 0x82537fcc
	goto loc_82537FCC;
loc_82537A64:
	// lwz r8,4(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r22,1
	r22.s64 = 1;
	// addi r25,r27,4
	r25.s64 = r27.s64 + 4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82537A78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82537aac
	if (ctx.cr6.eq) goto loc_82537AAC;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82537aa0
	if (ctx.cr6.eq) goto loc_82537AA0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82537aa0
	if (ctx.cr0.eq) goto loc_82537AA0;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82537aa8
	if (!ctx.cr0.eq) goto loc_82537AA8;
loc_82537AA0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82537a78
	goto loc_82537A78;
loc_82537AA8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82537AAC:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// bne 0x82537cd0
	if (!ctx.cr0.eq) goto loc_82537CD0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82537AC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82537b00
	if (ctx.cr6.eq) goto loc_82537B00;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82537af0
	if (ctx.cr6.eq) goto loc_82537AF0;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82537af0
	if (!ctx.cr6.eq) goto loc_82537AF0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82537af8
	if (!ctx.cr0.eq) goto loc_82537AF8;
loc_82537AF0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82537ac0
	goto loc_82537AC0;
loc_82537AF8:
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// b 0x82537b04
	goto loc_82537B04;
loc_82537B00:
	// li r28,0
	r28.s64 = 0;
loc_82537B04:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82537c28
	if (!ctx.cr6.eq) goto loc_82537C28;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,28(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 28);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825bb9c8
	ctx.lr = 0x82537B1C;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r30,r11,31,28,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_82537B68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82537bac
	if (ctx.cr6.eq) goto loc_82537BAC;
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r5,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82537B8C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82537B98;
	sub_8250AD28(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// andc r11,r30,r11
	ctx.r11.u64 = r30.u64 & ~ctx.r11.u64;
	// subf r30,r11,r30
	r30.u64 = r30.u64 - ctx.r11.u64;
	// b 0x82537b68
	goto loc_82537B68;
loc_82537BAC:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82537c28
	if (ctx.cr0.eq) goto loc_82537C28;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x82537BCC;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82537c04
	if (!ctx.cr0.eq) goto loc_82537C04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82537c04
	if (ctx.cr0.eq) goto loc_82537C04;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82537c10
	if (!ctx.cr6.gt) goto loc_82537C10;
loc_82537C04:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82537C0C;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82537C10:
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
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
loc_82537C28:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r28,44
	ctx.r9.s64 = r28.s64 + 44;
	// rlwinm r8,r10,13,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
loc_82537C38:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82537c78
	if (!ctx.cr6.lt) goto loc_82537C78;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// bne cr6,0x82537c6c
	if (!ctx.cr6.eq) goto loc_82537C6C;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r10,r10,28,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// andc r7,r24,r7
	ctx.r7.u64 = r24.u64 & ~ctx.r7.u64;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r24,r7,r10
	r24.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82537C6C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82537c38
	goto loc_82537C38;
loc_82537C78:
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// srw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + r28.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825335b8
	ctx.lr = 0x82537C9C;
	sub_825335B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82537CAC;
	sub_8250AC70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwzx r4,r31,r28
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250b470
	ctx.lr = 0x82537CC0;
	sub_8250B470(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82537CCC;
	sub_8250AD28(ctx, base);
	// stwx r3,r31,r28
	REX_STORE_U32(r31.u32 + r28.u32, ctx.r3.u32);
loc_82537CD0:
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_82537CD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82537d0c
	if (ctx.cr6.eq) goto loc_82537D0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82537d04
	if (!ctx.cr0.eq) goto loc_82537D04;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82537cf8
	if (ctx.cr0.eq) goto loc_82537CF8;
	// rlwinm. r11,r11,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82537d04
	if (ctx.cr0.eq) goto loc_82537D04;
loc_82537CF8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82537D04;
	sub_8250AD28(ctx, base);
loc_82537D04:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82537cd4
	goto loc_82537CD4;
loc_82537D0C:
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82537D10:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82537eb0
	if (ctx.cr6.eq) goto loc_82537EB0;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82537e9c
	if (ctx.cr6.eq) goto loc_82537E9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r6,r11,7,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82537e9c
	if (ctx.cr0.eq) goto loc_82537E9C;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// beq cr6,0x82537e9c
	if (ctx.cr6.eq) goto loc_82537E9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82537d7c
	if (ctx.cr6.eq) goto loc_82537D7C;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r8,r11,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_82537D5C:
	// srw r5,r8,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r5,r22,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r5.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82537d5c
	if (ctx.cr6.lt) goto loc_82537D5C;
loc_82537D7C:
	// slw r11,r22,r21
	ctx.r11.u64 = r21.u8 & 0x20 ? 0 : (r22.u32 << (r21.u8 & 0x3F));
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82537e9c
	if (ctx.cr0.eq) goto loc_82537E9C;
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82537dd8
	if (!ctx.cr0.eq) goto loc_82537DD8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82537da8
	goto loc_82537DA8;
loc_82537DA0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82537DA8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82537da0
	if (!ctx.cr6.eq) goto loc_82537DA0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,57
	ctx.r9.s64 = 57;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r23)
	REX_STORE_U32(r23.u32 + 4, r31.u32);
	// stw r23,12(r31)
	REX_STORE_U32(r31.u32 + 12, r23.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r9,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// b 0x82537e8c
	goto loc_82537E8C;
loc_82537DD8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82537e08
	if (ctx.cr6.eq) goto loc_82537E08;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825bcf88
	ctx.lr = 0x82537DEC;
	sub_825BCF88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82537e08
	if (ctx.cr0.eq) goto loc_82537E08;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c4b00
	ctx.lr = 0x82537E08;
	sub_825C4B00(ctx, base);
loc_82537E08:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82537e20
	goto loc_82537E20;
loc_82537E18:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82537E20:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82537e18
	if (!ctx.cr6.eq) goto loc_82537E18;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r10,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// rlwinm r8,r10,29,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// srw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r24,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,31,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r10,r24,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82537E8C:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825335b8
	ctx.lr = 0x82537E9C;
	sub_825335B8(ctx, base);
loc_82537E9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82537d10
	if (!ctx.cr6.eq) goto loc_82537D10;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// b 0x82537d10
	goto loc_82537D10;
loc_82537EB0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825297d0
	ctx.lr = 0x82537EBC;
	sub_825297D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82537EC4;
	sub_8250AED8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82537ECC;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82537ef8
	if (ctx.cr6.eq) goto loc_82537EF8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82548eb8
	ctx.lr = 0x82537EEC;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_82537EF8:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82537fa0
	if (!ctx.cr0.eq) goto loc_82537FA0;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82537fa0
	if (ctx.cr0.eq) goto loc_82537FA0;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm. r10,r11,0,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82537f30
	if (ctx.cr0.eq) goto loc_82537F30;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// sth r11,18(r23)
	REX_STORE_U16(r23.u32 + 18, ctx.r11.u16);
	// b 0x82537f3c
	goto loc_82537F3C;
loc_82537F30:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82516448
	ctx.lr = 0x82537F38;
	sub_82516448(ctx, base);
	// sth r3,18(r23)
	REX_STORE_U16(r23.u32 + 18, ctx.r3.u16);
loc_82537F3C:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,16(r23)
	REX_STORE_U32(r23.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82537f7c
	if (!ctx.cr0.eq) goto loc_82537F7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82537f7c
	if (ctx.cr0.eq) goto loc_82537F7C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82537f88
	if (!ctx.cr6.gt) goto loc_82537F88;
loc_82537F7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82537F84;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82537F88:
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
	// stwx r23,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r23.u32);
loc_82537FA0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82537fb4
	if (ctx.cr6.eq) goto loc_82537FB4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825335b8
	ctx.lr = 0x82537FB4;
	sub_825335B8(ctx, base);
loc_82537FB4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825335b8
	ctx.lr = 0x82537FC0;
	sub_825335B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825335b8
	ctx.lr = 0x82537FCC;
	sub_825335B8(ctx, base);
loc_82537FCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8257FA30) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8257fac4
	if (ctx.cr6.lt) goto loc_8257FAC4;
	// beq cr6,0x8257fa9c
	if (ctx.cr6.eq) goto loc_8257FA9C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8257fa6c
	if (ctx.cr6.lt) goto loc_8257FA6C;
	// beq cr6,0x8257fac4
	if (ctx.cr6.eq) goto loc_8257FAC4;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8257FA6C;
	sub_824E4368(ctx, base);
loc_8257FA6C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257fac4
	if (!ctx.cr0.eq) goto loc_8257FAC4;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8257fac4
	if (!ctx.cr6.eq) goto loc_8257FAC4;
	// rlwinm r4,r10,30,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// bl 0x8254fc58
	ctx.lr = 0x8257FA98;
	sub_8254FC58(ctx, base);
	// b 0x8257fab8
	goto loc_8257FAB8;
loc_8257FA9C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x8257fac4
	if (!ctx.cr6.eq) goto loc_8257FAC4;
	// rlwinm r4,r10,30,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// bl 0x8254fa20
	ctx.lr = 0x8257FAB8;
	sub_8254FA20(ctx, base);
loc_8257FAB8:
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257fac8
	goto loc_8257FAC8;
loc_8257FAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257FAC8:
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

DEFINE_REX_FUNC(sub_825815E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825815E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258160C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82581630
	if (ctx.cr6.eq) goto loc_82581630;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x8258162C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82581630:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82581638;
	sub_8250AD28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82583420) {
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
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// std r5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82583458;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82583468;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82583474;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82583484;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82583490;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_825885A0) {
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
	// bl 0x826a1c98
	ctx.lr = 0x825885A8;
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,4,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// beq 0x82588768
	if (ctx.cr0.eq) goto loc_82588768;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r4,12
	r27.s64 = ctx.r4.s64 + 12;
	// lfs f31,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_825885EC:
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(r27.u32 + 0);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82588670
	if (!ctx.cr6.eq) goto loc_82588670;
	// rlwinm. r10,r10,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82588670
	if (ctx.cr0.eq) goto loc_82588670;
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82588624
	if (ctx.cr6.eq) goto loc_82588624;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82588654
	if (ctx.cr6.eq) goto loc_82588654;
loc_82588624:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82583420
	ctx.lr = 0x8258863C;
	sub_82583420(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82588654:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825885a0
	ctx.lr = 0x8258866C;
	sub_825885A0(ctx, base);
	// b 0x82588748
	goto loc_82588748;
loc_82588670:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82588684
	if (!ctx.cr6.eq) goto loc_82588684;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585320
	ctx.lr = 0x82588684;
	sub_82585320(ctx, base);
loc_82588684:
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x825bdd18
	ctx.lr = 0x825886B8;
	sub_825BDD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82583420
	ctx.lr = 0x825886CC;
	sub_82583420(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82586fc0
	ctx.lr = 0x825886E0;
	sub_82586FC0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r21,r11,18
	r21.u64 = ctx.r11.u32 & 0x3FFF;
	// rlwinm r20,r11,18,18,31
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// bl 0x824ff930
	ctx.lr = 0x82588700;
	sub_824FF930(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// rlwimi r20,r21,14,4,17
	r20.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 14) & 0xFFFC000) | (r20.u64 & 0xFFFFFFFFF0003FFF);
	// rlwinm r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// rlwimi r20,r9,0,0,3
	r20.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000000) | (r20.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r20,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r20.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// bl 0x82589518
	ctx.lr = 0x82588748;
	sub_82589518(ctx, base);
loc_82588748:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// rlwinm r10,r10,18,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFF;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x825885ec
	if (ctx.cr6.lt) goto loc_825885EC;
loc_82588768:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_825A2758) {
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
	// b 0x825a279c
	goto loc_825A279C;
loc_825A2770:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A2784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,28(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bctrl 
	ctx.lr = 0x825A279C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825A279C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825a2770
	if (!ctx.cr6.eq) goto loc_825A2770;
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

DEFINE_REX_FUNC(sub_825A3EF0) {
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
	ctx.lr = 0x825A3EF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825a3f28
	if (!ctx.cr6.eq) goto loc_825A3F28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-10504
	ctx.r6.s64 = ctx.r11.s64 + -10504;
	// addi r5,r10,-10512
	ctx.r5.s64 = ctx.r10.s64 + -10512;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,285
	ctx.r7.s64 = 285;
	// bl 0x824ea978
	ctx.lr = 0x825A3F28;
	sub_824EA978(ctx, base);
loc_825A3F28:
	// lwz r3,24(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3fb0
	if (ctx.cr6.eq) goto loc_825A3FB0;
	// b 0x825a3f9c
	goto loc_825A3F9C;
loc_825A3F38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824efba8
	ctx.lr = 0x825A3F40;
	sub_824EFBA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825a3f78
	goto loc_825A3F78;
loc_825A3F48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824efba8
	ctx.lr = 0x825A3F50;
	sub_824EFBA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824effc8
	ctx.lr = 0x825A3F5C;
	sub_824EFFC8(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// bl 0x824effc8
	ctx.lr = 0x825A3F64;
	sub_824EFFC8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,28(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 28);
	// bl 0x825a28c0
	ctx.lr = 0x825A3F70;
	sub_825A28C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824efb70
	ctx.lr = 0x825A3F78;
	sub_824EFB70(ctx, base);
loc_825A3F78:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ef898
	ctx.lr = 0x825A3F80;
	sub_824EF898(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825a3f48
	if (!ctx.cr0.eq) goto loc_825A3F48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824ef3e0
	ctx.lr = 0x825A3F90;
	sub_824EF3E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824efb70
	ctx.lr = 0x825A3F98;
	sub_824EFB70(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 24);
loc_825A3F9C:
	// bl 0x824ef898
	ctx.lr = 0x825A3FA0;
	sub_824EF898(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x825a3f38
	if (!ctx.cr0.eq) goto loc_825A3F38;
	// lwz r3,24(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 24);
	// bl 0x824ef3e0
	ctx.lr = 0x825A3FB0;
	sub_824EF3E0(ctx, base);
loc_825A3FB0:
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3fc0
	if (ctx.cr6.eq) goto loc_825A3FC0;
	// bl 0x825d6df0
	ctx.lr = 0x825A3FC0;
	sub_825D6DF0(ctx, base);
loc_825A3FC0:
	// lwz r3,28(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a3fd0
	if (ctx.cr6.eq) goto loc_825A3FD0;
	// bl 0x825a2758
	ctx.lr = 0x825A3FD0;
	sub_825A2758(ctx, base);
loc_825A3FD0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825A3FE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825A82C0) {
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
	// bl 0x825a60d8
	ctx.lr = 0x825A82E0;
	sub_825A60D8(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// li r8,17
	ctx.r8.s64 = 17;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// sth r9,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwimi r7,r8,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r7,r10,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r7,r10,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r10,r7,64
	ctx.r10.u64 = ctx.r7.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r10,r7,20,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r10,r7,24,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r10,r7,28,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r7,r10,0,20,16
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r7.u64 & 0x7000);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r10,r7,20,28,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r10,r7,24,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r10,r7,28,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r10,r7,0,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825a83e8
	if (ctx.cr0.eq) goto loc_825A83E8;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A83E8:
	// li r7,45
	ctx.r7.s64 = 45;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,16,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r6,0,10,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3F0000) | (ctx.r5.u64 & 0xFFFFFFFFFFC0FFFF);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r6,r5,0,8,8
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800000) | (ctx.r6.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r6,r6,64
	ctx.r6.u64 = ctx.r6.u64 | 4194304;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r6,r6,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x825a845c
	if (ctx.cr0.eq) goto loc_825A845C;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A845C:
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r8,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// li r9,49
	ctx.r9.s64 = 49;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// ori r8,r8,13107
	ctx.r8.u64 = ctx.r8.u64 | 13107;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r8,0,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,0,8,8
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000) | (ctx.r8.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a84f4
	if (ctx.cr0.eq) goto loc_825A84F4;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A84F4:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,20,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,24,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,28,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,20,28,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,24,24,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x80) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF7F);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,28,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a85c0
	if (ctx.cr0.eq) goto loc_825A85C0;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A85C0:
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r8,0,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r8,0,8,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x30;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a862c
	if (ctx.cr0.eq) goto loc_825A862C;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A862C:
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r9,r8,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,20,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,24,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,28,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r8,r9,0,20,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r8.u64 & 0x7000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,20,28,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,24,24,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,28,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwimi r9,r8,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// oris r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 1048576;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825a86f8
	if (ctx.cr0.eq) goto loc_825A86F8;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A86F8:
	// li r9,65
	ctx.r9.s64 = 65;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,0,10,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F0000) | (ctx.r7.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r7,r8,0,8,8
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000) | (ctx.r7.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r8,r7,64
	ctx.r8.u64 = ctx.r7.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r8,0,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825a8768
	if (ctx.cr0.eq) goto loc_825A8768;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825A8768:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// ori r7,r7,4369
	ctx.r7.u64 = ctx.r7.u64 | 4369;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,4369
	ctx.r10.u64 = ctx.r10.u64 | 4369;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825CDEF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// bge cr6,0x825cdfe4
	if (!ctx.cr6.lt) goto loc_825CDFE4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20256(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20256);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,10980(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10980);
	ctx.f13.f64 = double(temp.f32);
loc_825CDF5C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,22,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,12,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3FF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825cdf5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CDF5C;
loc_825CDFE4:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ce000
	if (ctx.cr6.eq) goto loc_825CE000;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CE000;
	sub_825C73B8(ctx, base);
loc_825CE000:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825ce01c
	if (ctx.cr6.eq) goto loc_825CE01C;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CE01C;
	sub_825C7788(ctx, base);
loc_825CE01C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D1E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825D1E70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825d1e9c
	if (ctx.cr6.eq) goto loc_825D1E9C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x824f0950
	ctx.lr = 0x825D1E9C;
	sub_824F0950(ctx, base);
loc_825D1E9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d1ed8
	if (ctx.cr6.eq) goto loc_825D1ED8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d1ed8
	if (ctx.cr6.eq) goto loc_825D1ED8;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// bctrl 
	ctx.lr = 0x825D1ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D1ED8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825D3E58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825D3E60;
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
	// bne cr6,0x825d3e9c
	if (!ctx.cr6.eq) goto loc_825D3E9C;
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
	// li r7,2527
	ctx.r7.s64 = 2527;
	// bl 0x824ea978
	ctx.lr = 0x825D3E9C;
	sub_824EA978(ctx, base);
loc_825D3E9C:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D3EA8;
	sub_824F02C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d3f0c
	if (!ctx.cr6.eq) goto loc_825D3F0C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d3ecc
	if (ctx.cr6.eq) goto loc_825D3ECC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3ECC;
	sub_824F0950(ctx, base);
loc_825D3ECC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3f04
	if (ctx.cr6.eq) goto loc_825D3F04;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3f04
	if (ctx.cr6.eq) goto loc_825D3F04;
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
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// bctrl 
	ctx.lr = 0x825D3F04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3F04:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d3f64
	goto loc_825D3F64;
loc_825D3F0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825d3f28
	if (ctx.cr6.eq) goto loc_825D3F28;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3F28;
	sub_824F0950(ctx, base);
loc_825D3F28:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3f60
	if (ctx.cr6.eq) goto loc_825D3F60;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d3f60
	if (ctx.cr6.eq) goto loc_825D3F60;
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
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// bctrl 
	ctx.lr = 0x825D3F60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D3F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D79A0) {
	REX_FUNC_PROLOGUE();
	// lbz r3,2144(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2144);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D7AA0) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825D7AC0;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
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

DEFINE_REX_FUNC(sub_825D92B0) {
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
	ctx.lr = 0x825D92B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// bl 0x825f3f68
	ctx.lr = 0x825D92D4;
	sub_825F3F68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d9778
	if (ctx.cr0.eq) goto loc_825D9778;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x825e7538
	ctx.lr = 0x825D92EC;
	sub_825E7538(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D9300;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r23,r11,22852
	r23.s64 = ctx.r11.s64 + 22852;
	// addi r22,r10,9792
	r22.s64 = ctx.r10.s64 + 9792;
	// bne 0x825d9334
	if (!ctx.cr0.eq) goto loc_825D9334;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,10408
	ctx.r5.s64 = ctx.r11.s64 + 10408;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1977
	ctx.r7.s64 = 1977;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D9334;
	sub_824EA978(ctx, base);
loc_825D9334:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1452(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825D9348;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825d936c
	if (ctx.cr0.eq) goto loc_825D936C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825d7a48
	ctx.lr = 0x825D9364;
	sub_825D7A48(ctx, base);
	// mr r21,r30
	r21.u64 = r30.u64;
	// b 0x825d9370
	goto loc_825D9370;
loc_825D936C:
	// li r21,0
	r21.s64 = 0;
loc_825D9370:
	// li r24,1
	r24.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_825D9380:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825d9398
	if (!ctx.cr6.gt) goto loc_825D9398;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825d93a4
	goto loc_825D93A4;
loc_825D9398:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// lwzx r30,r10,r26
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
loc_825D93A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d9408
	if (ctx.cr0.eq) goto loc_825D9408;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d93fc
	if (ctx.cr0.eq) goto loc_825D93FC;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825d93fc
	if (!ctx.cr6.gt) goto loc_825D93FC;
	// addi r28,r30,84
	r28.s64 = r30.s64 + 84;
loc_825D93CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x825d93e8
	if (!ctx.cr6.eq) goto loc_825D93E8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,4(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x825D93E4;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_825D93E8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825d93cc
	if (ctx.cr6.lt) goto loc_825D93CC;
loc_825D93FC:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x825d9380
	goto loc_825D9380;
loc_825D9408:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,2073(r31)
	REX_STORE_U8(r31.u32 + 2073, r24.u8);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825D9428;
	sub_825E7538(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 52);
	// lwz r10,48(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x825d9458
	if (ctx.cr6.eq) goto loc_825D9458;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,10368
	ctx.r5.s64 = ctx.r11.s64 + 10368;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,1996
	ctx.r7.s64 = 1996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D9458;
	sub_824EA978(ctx, base);
loc_825D9458:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825D9464;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D9474;
	sub_825F9F38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825D9484;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D94A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D94C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825D94D0;
	sub_825D82D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825D94DC;
	sub_825FCB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825D94E4;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825d9508
	if (!ctx.cr0.eq) goto loc_825D9508;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r5,r11,10184
	ctx.r5.s64 = ctx.r11.s64 + 10184;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2008
	ctx.r7.s64 = 2008;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D9508;
	sub_824EA978(ctx, base);
loc_825D9508:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d8158
	ctx.lr = 0x825D9510;
	sub_825D8158(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d9670
	if (ctx.cr6.eq) goto loc_825D9670;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x825f9ad0
	ctx.lr = 0x825D952C;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D953C;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D955C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D957C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825D958C;
	sub_825F9F38(ctx, base);
	// stb r24,159(r29)
	REX_STORE_U8(r29.u32 + 159, r24.u8);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d4f00
	ctx.lr = 0x825D95AC;
	sub_825D4F00(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d4f18
	ctx.lr = 0x825D95C8;
	sub_825D4F18(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x825faab8
	ctx.lr = 0x825D95E8;
	sub_825FAAB8(ctx, base);
	// stb r24,154(r29)
	REX_STORE_U8(r29.u32 + 154, r24.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825D95F8;
	sub_825FCB18(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825D9604;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D9614;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D9634;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D9654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825D9664;
	sub_825F9F38(ctx, base);
	// stb r24,153(r30)
	REX_STORE_U8(r30.u32 + 153, r24.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x825d96e0
	goto loc_825D96E0;
loc_825D9670:
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x825f9ad0
	ctx.lr = 0x825D9678;
	sub_825F9AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D9688;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D96A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D96C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,159(r29)
	REX_STORE_U8(r29.u32 + 159, r24.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825f9f38
	ctx.lr = 0x825D96DC;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_825D96E0:
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825D96E8;
	sub_825FCB18(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d9778
	if (ctx.cr6.eq) goto loc_825D9778;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825d9710
	if (!ctx.cr6.lt) goto loc_825D9710;
loc_825D9704:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x825d971c
	goto loc_825D971C;
loc_825D9710:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825f7718
	ctx.lr = 0x825D971C;
	sub_825F7718(ctx, base);
loc_825D971C:
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825d9764
	if (ctx.cr6.lt) goto loc_825D9764;
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
loc_825D9734:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x825d9750
	if (!ctx.cr6.eq) goto loc_825D9750;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825D9750;
	sub_825F9F38(ctx, base);
loc_825D9750:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825d9734
	if (!ctx.cr6.gt) goto loc_825D9734;
loc_825D9764:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825d9704
	if (ctx.cr6.lt) goto loc_825D9704;
loc_825D9778:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825F8AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825F8B00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x825f7fb8
	ctx.lr = 0x825F8B10;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,28564
	ctx.r11.s64 = ctx.r11.s64 + 28564;
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// lwz r11,2736(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x825f3818
	ctx.lr = 0x825F8B48;
	sub_825F3818(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lbz r11,1380(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f8bc4
	if (!ctx.cr0.eq) goto loc_825F8BC4;
	// lwz r28,1452(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825F8B70;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x825f8b8c
	if (ctx.cr0.eq) goto loc_825F8B8C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825fb078
	ctx.lr = 0x825F8B88;
	sub_825FB078(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_825F8B8C:
	// lwz r11,2736(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F8BA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825F8BB8;
	sub_825F9F38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f80c0
	ctx.lr = 0x825F8BC4;
	sub_825F80C0(ctx, base);
loc_825F8BC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825FB268) {
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
	// li r4,126
	ctx.r4.s64 = 126;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fa990
	ctx.lr = 0x825FB284;
	sub_825FA990(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,32240
	ctx.r10.s64 = ctx.r10.s64 + 32240;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825FBED8) {
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
	// bl 0x825b33a0
	ctx.lr = 0x825FBF00;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825fbf2c
	if (ctx.cr0.eq) goto loc_825FBF2C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x825fb2c0
	ctx.lr = 0x825FBF1C;
	sub_825FB2C0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-32712
	ctx.r11.s64 = ctx.r11.s64 + -32712;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x825fbf30
	goto loc_825FBF30;
loc_825FBF2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825FBF30:
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

DEFINE_REX_FUNC(sub_82600900) {
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
	ctx.lr = 0x82600908;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-30120
	ctx.r11.s64 = ctx.r11.s64 + -30120;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r8,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r3,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// stw r4,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// lbz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 100);
	// bne cr6,0x826009c0
	if (!ctx.cr6.eq) goto loc_826009C0;
	// rlwinm. r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826009c0
	if (ctx.cr0.eq) goto loc_826009C0;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r5,r11,3,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// lwz r31,92(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 92);
	// rlwinm r11,r9,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7;
	// lbz r9,295(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 295);
	// mulli r5,r5,6
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(6));
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r10,19,23,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1F8;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,56(r25)
	REX_STORE_U32(r25.u32 + 56, ctx.r10.u32);
	// stw r11,80(r25)
	REX_STORE_U32(r25.u32 + 80, ctx.r11.u32);
	// bl 0x82600618
	ctx.lr = 0x826009BC;
	sub_82600618(ctx, base);
	// b 0x82600b9c
	goto loc_82600B9C;
loc_826009C0:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r8,r8,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7;
	// rlwinm r10,r11,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r10,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// beq 0x82600a24
	if (ctx.cr0.eq) goto loc_82600A24;
	// lwzx r6,r11,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r7,r7,0,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF0000;
	// lhz r11,2(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// or r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r11,r7,0,16,9
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r11.u64 & 0x3F0000);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r7,r11,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// b 0x82600a2c
	goto loc_82600A2C;
loc_82600A24:
	// lwzx r30,r11,r7
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82600A2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r6,r11,9,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r31,r11,16,26,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// extsh r26,r11
	r26.s64 = ctx.r11.s16;
	// beq 0x82600a60
	if (ctx.cr0.eq) goto loc_82600A60;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// li r27,1
	r27.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r24,r11,r10
	r24.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82600A60:
	// rlwinm. r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82600b54
	if (!ctx.cr0.eq) goto loc_82600B54;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x82600b54
	if (!ctx.cr6.eq) goto loc_82600B54;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r28,r11,-1
	r28.s64 = ctx.r11.s64 + -1;
	// stw r28,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, r28.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x82600A8C;
	sub_825F9AD0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r26,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r26.u32);
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// beq 0x82600ac4
	if (ctx.cr0.eq) goto loc_82600AC4;
	// stw r24,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, r24.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82600AC4:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fe3a0
	ctx.lr = 0x82600ADC;
	sub_825FE3A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825d82d0
	ctx.lr = 0x82600AE8;
	sub_825D82D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,308(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x825fcb18
	ctx.lr = 0x82600AF4;
	sub_825FCB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9b60
	ctx.lr = 0x82600AFC;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82600b28
	if (!ctx.cr0.eq) goto loc_82600B28;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-20568
	ctx.r6.s64 = ctx.r11.s64 + -20568;
	// addi r5,r10,10208
	ctx.r5.s64 = ctx.r10.s64 + 10208;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1261
	ctx.r7.s64 = 1261;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x82600B28;
	sub_824EA978(ctx, base);
loc_82600B28:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r31,4
	r31.s64 = 4;
	// rlwinm r11,r11,0,10,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF;
	// mr r26,r28
	r26.u64 = r28.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// sth r28,2(r30)
	REX_STORE_U16(r30.u32 + 2, r28.u16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwimi r11,r9,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82600b68
	goto loc_82600B68;
loc_82600B54:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,276(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825fe3a0
	ctx.lr = 0x82600B68;
	sub_825FE3A0(ctx, base);
loc_82600B68:
	// addi r11,r23,50
	ctx.r11.s64 = r23.s64 + 50;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r23,14
	ctx.r9.s64 = r23.s64 + 14;
	// addi r8,r23,20
	ctx.r8.s64 = r23.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r25
	REX_STORE_U32(ctx.r11.u32 + r25.u32, r24.u32);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r26,r9,r25
	REX_STORE_U32(ctx.r9.u32 + r25.u32, r26.u32);
	// stwx r11,r8,r25
	REX_STORE_U32(ctx.r8.u32 + r25.u32, ctx.r11.u32);
loc_82600B9C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82615CF8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261bb60
	sub_8261BB60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615D50) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-14688
	ctx.r10.s64 = ctx.r10.s64 + -14688;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8260f8f8
	ctx.lr = 0x82615D84;
	sub_8260F8F8(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8260f8f8
	ctx.lr = 0x82615D8C;
	sub_8260F8F8(ctx, base);
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

DEFINE_REX_FUNC(sub_82617298) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826172A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826172d4
	if (ctx.cr6.eq) goto loc_826172D4;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826172d4
	if (ctx.cr6.eq) goto loc_826172D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826172D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826172D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82616d78
	ctx.lr = 0x826172DC;
	sub_82616D78(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lwz r30,68(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82617300
	if (ctx.cr6.eq) goto loc_82617300;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82625b68
	ctx.lr = 0x826172F4;
	sub_82625B68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826172FC;
	sub_8264C3D0(ctx, base);
	// stw r29,68(r31)
	REX_STORE_U32(r31.u32 + 68, r29.u32);
loc_82617300:
	// lwz r30,76(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82617320
	if (ctx.cr6.eq) goto loc_82617320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628aa0
	ctx.lr = 0x82617314;
	sub_82628AA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261731C;
	sub_8264C3D0(ctx, base);
	// stw r29,76(r31)
	REX_STORE_U32(r31.u32 + 76, r29.u32);
loc_82617320:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82617348
	if (ctx.cr6.eq) goto loc_82617348;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x82617344;
	sub_8264C3D0(ctx, base);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
loc_82617348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8261C560) {
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
	ctx.lr = 0x8261C568;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C59C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8261ba58
	ctx.lr = 0x8261C5B4;
	sub_8261BA58(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8261c0b0
	ctx.lr = 0x8261C5C0;
	sub_8261C0B0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C5D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82625870) {
	REX_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82625890
	if (!ctx.cr6.eq) goto loc_82625890;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x8262589c
	goto loc_8262589C;
loc_82625890:
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8262589C:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826258b4
	if (!ctx.cr6.eq) goto loc_826258B4;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x826258c0
	goto loc_826258C0;
loc_826258B4:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_826258C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82626C90) {
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
	ctx.lr = 0x82626C98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82626d64
	if (!ctx.cr6.eq) goto loc_82626D64;
	// lwz r11,556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 556);
	// addi r29,r3,352
	r29.s64 = ctx.r3.s64 + 352;
	// b 0x82626cdc
	goto loc_82626CDC;
loc_82626CC0:
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,204(r29)
	REX_STORE_U32(r29.u32 + 204, ctx.r9.u32);
loc_82626CDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82626cc0
	if (!ctx.cr6.eq) goto loc_82626CC0;
	// stw r27,212(r29)
	REX_STORE_U32(r29.u32 + 212, r27.u32);
	// stw r27,208(r29)
	REX_STORE_U32(r29.u32 + 208, r27.u32);
	// lwz r31,336(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 336);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82626dcc
	if (ctx.cr6.eq) goto loc_82626DCC;
loc_82626CF8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82626dd0
	if (ctx.cr6.lt) goto loc_82626DD0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82626d18
	if (ctx.cr6.eq) goto loc_82626D18;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82626d1c
	goto loc_82626D1C;
loc_82626D18:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82626D1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82626d58
	if (ctx.cr0.eq) goto loc_82626D58;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826170c8
	ctx.lr = 0x82626D44;
	sub_826170C8(ctx, base);
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
	// and r26,r11,r10
	r26.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82626D58:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82626cf8
	if (!ctx.cr6.eq) goto loc_82626CF8;
	// b 0x82626dc4
	goto loc_82626DC4;
loc_82626D64:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82626dcc
	if (!ctx.cr6.eq) goto loc_82626DCC;
	// lwz r31,556(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 556);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82626dcc
	if (ctx.cr6.eq) goto loc_82626DCC;
loc_82626D78:
	// mr r30,r31
	r30.u64 = r31.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82626d94
	if (ctx.cr6.eq) goto loc_82626D94;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82626d98
	goto loc_82626D98;
loc_82626D94:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82626D98:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82626DA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82626dbc
	if (!ctx.cr0.eq) goto loc_82626DBC;
	// addi r3,r28,352
	ctx.r3.s64 = r28.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826288a0
	ctx.lr = 0x82626DBC;
	sub_826288A0(ctx, base);
loc_82626DBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82626d78
	if (!ctx.cr6.eq) goto loc_82626D78;
loc_82626DC4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82626dd0
	if (ctx.cr6.lt) goto loc_82626DD0;
loc_82626DCC:
	// stw r27,572(r28)
	REX_STORE_U32(r28.u32 + 572, r27.u32);
loc_82626DD0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826344D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,22428(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22428);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,2800(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2800);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3788(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3788);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x826345f8
	if (ctx.cr6.lt) goto loc_826345F8;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_82634504:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82634518
	if (!ctx.cr6.lt) goto loc_82634518;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634524
	goto loc_82634524;
loc_82634518:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634524
	if (!ctx.cr6.gt) goto loc_82634524;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634524:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfsx f0,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// bge cr6,0x82634550
	if (!ctx.cr6.lt) goto loc_82634550;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8263455c
	goto loc_8263455C;
loc_82634550:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8263455c
	if (!ctx.cr6.gt) goto loc_8263455C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8263455C:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bge cr6,0x82634588
	if (!ctx.cr6.lt) goto loc_82634588;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634594
	goto loc_82634594;
loc_82634588:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634594
	if (!ctx.cr6.gt) goto loc_82634594;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634594:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bge cr6,0x826345c0
	if (!ctx.cr6.lt) goto loc_826345C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x826345cc
	goto loc_826345CC;
loc_826345C0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x826345cc
	if (!ctx.cr6.gt) goto loc_826345CC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_826345CC:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82634504
	if (ctx.cr6.lt) goto loc_82634504;
loc_826345F8:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82634614:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82634628
	if (!ctx.cr6.lt) goto loc_82634628;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82634634
	goto loc_82634634;
loc_82634628:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82634634
	if (!ctx.cr6.gt) goto loc_82634634;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82634634:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82634614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82634614;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263D828) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x8263D830;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8263dd60
	if (ctx.cr6.lt) goto loc_8263DD60;
	// beq cr6,0x8263d888
	if (ctx.cr6.eq) goto loc_8263D888;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x8263d880
	if (ctx.cr6.lt) goto loc_8263D880;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
loc_8263D880:
	// li r20,1
	r20.s64 = 1;
	// b 0x8263d88c
	goto loc_8263D88C;
loc_8263D888:
	// li r20,0
	r20.s64 = 0;
loc_8263D88C:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d8a4
	if (!ctx.cr6.eq) goto loc_8263D8A4;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263dd60
	if (ctx.cr6.eq) goto loc_8263DD60;
loc_8263D8A4:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263d8b8
	if (!ctx.cr6.eq) goto loc_8263D8B8;
	// lis r22,16
	r22.s64 = 1048576;
	// b 0x8263d8c8
	goto loc_8263D8C8;
loc_8263D8B8:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,22224
	ctx.r9.s64 = ctx.r11.s64 + 22224;
	// lwzx r22,r10,r9
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8263D8C8:
	// lwz r24,120(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 120);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8263d900
	if (!ctx.cr6.gt) goto loc_8263D900;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8263D8E0:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,392(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 392);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r4,60(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// stwx r4,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r4.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8263d8e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263D8E0;
loc_8263D900:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x8263d918
	if (!ctx.cr6.lt) goto loc_8263D918;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8263d924
	goto loc_8263D924;
loc_8263D918:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x8263d924
	if (!ctx.cr6.gt) goto loc_8263D924;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8263D924:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8263dd60
	if (ctx.cr6.lt) goto loc_8263DD60;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8263D93C:
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8263d93c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263D93C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8263dd60
	if (!ctx.cr6.gt) goto loc_8263DD60;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,148
	r26.s64 = ctx.r1.s64 + 148;
	// lfs f31,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f31.f64 = double(temp.f32);
	// ori r21,r8,65535
	r21.u64 = ctx.r8.u64 | 65535;
	// lfs f30,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f30.f64 = double(temp.f32);
	// lfs f29,14888(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 14888);
	f29.f64 = double(temp.f32);
loc_8263D97C:
	// lwz r29,-4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8263d9f4
	if (!ctx.cr6.gt) goto loc_8263D9F4;
	// lwz r8,392(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 392);
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_8263D99C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x8263d9dc
	if (!ctx.cr6.lt) goto loc_8263D9DC;
	// subf r11,r29,r28
	ctx.r11.u64 = r28.u64 - r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8263D9B8:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8263d9c8
	if (ctx.cr6.gt) goto loc_8263D9C8;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_8263D9C8:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8263d9d4
	if (!ctx.cr6.gt) goto loc_8263D9D4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8263D9D4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8263d9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263D9B8;
loc_8263D9DC:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8263d9e8
	if (!ctx.cr6.gt) goto loc_8263D9E8;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8263D9E8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8263d99c
	if (!ctx.cr0.eq) goto loc_8263D99C;
loc_8263D9F4:
	// lwz r11,124(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8263da08
	if (!ctx.cr6.gt) goto loc_8263DA08;
	// slw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8263da14
	goto loc_8263DA14;
loc_8263DA08:
	// bge cr6,0x8263da14
	if (!ctx.cr6.lt) goto loc_8263DA14;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// sraw r5,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
loc_8263DA14:
	// cmpw cr6,r5,r21
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r21.s32, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x8263da24
	if (ctx.cr6.lt) goto loc_8263DA24;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8263DA24:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8263dad0
	if (ctx.cr6.eq) goto loc_8263DAD0;
	// lwz r9,196(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r22
	ctx.r9.s64 = r22.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8263daac
	if (ctx.cr6.eq) goto loc_8263DAAC;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,260(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r10,280(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 280);
	// mulld r3,r7,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r8,264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 264);
	// lwz r4,296(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 296);
	// lwzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// sradi r3,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s64 >> 20;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// srawi r11,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 13;
	// clrlwi r3,r10,19
	ctx.r3.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x8263dadc
	goto loc_8263DADC;
loc_8263DAAC:
	// lwz r10,192(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r4,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * ctx.r9.u64);
	// sradi r11,r3,20
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 20;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// b 0x8263dadc
	goto loc_8263DADC;
loc_8263DAD0:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_8263DADC:
	// subf r30,r29,r28
	r30.u64 = r28.u64 - r29.u64;
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8263d750
	ctx.lr = 0x8263DAF0;
	sub_8263D750(ctx, base);
	// srawi. r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8263db14
	if (ctx.cr0.eq) goto loc_8263DB14;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8263db14
	if (!ctx.cr6.gt) goto loc_8263DB14;
loc_8263DB04:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8263db04
	if (ctx.cr6.gt) goto loc_8263DB04;
loc_8263DB14:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x8263db24
	if (ctx.cr6.gt) goto loc_8263DB24;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8263DB24:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8263db30
	if (ctx.cr6.gt) goto loc_8263DB30;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8263DB30:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8263db50
	if (!ctx.cr6.gt) goto loc_8263DB50;
loc_8263DB40:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8263db40
	if (ctx.cr6.gt) goto loc_8263DB40;
loc_8263DB50:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * f29.f64));
	// ble cr6,0x8263dd50
	if (!ctx.cr6.gt) goto loc_8263DD50;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_8263DB7C:
	// lwz r11,392(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 392);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bge cr6,0x8263dd44
	if (!ctx.cr6.lt) goto loc_8263DD44;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8263dce0
	if (ctx.cr6.lt) goto loc_8263DCE0;
	// addi r8,r28,-3
	ctx.r8.s64 = r28.s64 + -3;
loc_8263DBA0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8263dbd8
	if (!ctx.cr6.lt) goto loc_8263DBD8;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8263dbe8
	goto loc_8263DBE8;
loc_8263DBD8:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8263DBE8:
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8263dc24
	if (!ctx.cr6.lt) goto loc_8263DC24;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8263dc34
	goto loc_8263DC34;
loc_8263DC24:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8263DC34:
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8263dc70
	if (!ctx.cr6.lt) goto loc_8263DC70;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8263dc80
	goto loc_8263DC80;
loc_8263DC70:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8263DC80:
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8263dcbc
	if (!ctx.cr6.lt) goto loc_8263DCBC;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8263dccc
	goto loc_8263DCCC;
loc_8263DCBC:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8263DCCC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8263dba0
	if (ctx.cr6.lt) goto loc_8263DBA0;
loc_8263DCE0:
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r28.s32, ctx.xer);
	// bge cr6,0x8263dd44
	if (!ctx.cr6.lt) goto loc_8263DD44;
	// subf r10,r9,r28
	ctx.r10.u64 = r28.u64 - ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8263DCF4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8263dd2c
	if (!ctx.cr6.lt) goto loc_8263DD2C;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8263dd3c
	goto loc_8263DD3C;
loc_8263DD2C:
	// fadds f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8263DD3C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8263dcf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263DCF4;
loc_8263DD44:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8263db7c
	if (!ctx.cr0.eq) goto loc_8263DB7C;
loc_8263DD50:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r3,172(r27)
	REX_STORE_U32(r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x8263d97c
	if (!ctx.cr0.eq) goto loc_8263D97C;
loc_8263DD60:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8265EC28) {
	REX_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265ECC8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82651e98
	sub_82651E98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265F198) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8265f1b4
	goto loc_8265F1B4;
loc_8265F1A4:
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f1c0
	if (ctx.cr6.eq) goto loc_8265F1C0;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8265F1B4:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8265f1a4
	if (!ctx.cr6.eq) goto loc_8265F1A4;
	// b 0x8265f1e4
	goto loc_8265F1E4;
loc_8265F1C0:
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f200
	if (ctx.cr6.eq) goto loc_8265F200;
loc_8265F1CC:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8265f1e4
	if (ctx.cr6.eq) goto loc_8265F1E4;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265f1cc
	if (!ctx.cr6.eq) goto loc_8265F1CC;
loc_8265F1E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f200
	if (ctx.cr6.eq) goto loc_8265F200;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_8265F200:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826616D8) {
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
	// cmplwi cr6,r6,9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 9, ctx.xer);
	// blt cr6,0x82661734
	if (ctx.cr6.lt) goto loc_82661734;
	// lwz r11,152(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 152);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r7,1(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 1);
	// lwz r8,5(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266171c
	if (ctx.cr6.eq) goto loc_8266171C;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lwz r4,17(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 17);
	// lwz r5,21(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 21);
	// addi r6,r10,13
	ctx.r6.s64 = ctx.r10.s64 + 13;
	// bl 0x826726e8
	ctx.lr = 0x82661718;
	sub_826726E8(ctx, base);
	// b 0x8266173c
	goto loc_8266173C;
loc_8266171C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82674d28
	ctx.lr = 0x8266172C;
	sub_82674D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266173c
	if (ctx.cr0.eq) goto loc_8266173C;
loc_82661734:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4106
	ctx.r3.u64 = ctx.r3.u64 | 4106;
loc_8266173C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82663FB8) {
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
	ctx.lr = 0x82663FC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,132
	r23.s64 = ctx.r3.s64 + 132;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// rlwinm r29,r5,7,25,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0x7F;
	// rlwinm r28,r5,14,25,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x7F;
	// bl 0x827938a4
	ctx.lr = 0x82663FF0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826640d0
	if (ctx.cr6.eq) goto loc_826640D0;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x8266409c
	if (!ctx.cr6.eq) goto loc_8266409C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82664114
	if (ctx.cr6.eq) goto loc_82664114;
	// rlwinm. r11,r31,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826640d0
	if (!ctx.cr0.eq) goto loc_826640D0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// subfic r11,r29,127
	ctx.xer.ca = r29.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - r29.u64;
	// clrlwi r9,r31,15
	ctx.r9.u64 = r31.u32 & 0x1FFFF;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bge cr6,0x826640d0
	if (!ctx.cr6.lt) goto loc_826640D0;
	// addi r9,r11,94
	ctx.r9.s64 = ctx.r11.s64 + 94;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r30
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + r30.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x826640d0
	if (!ctx.cr6.lt) goto loc_826640D0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266404c
	if (!ctx.cr6.eq) goto loc_8266404C;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8266404C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x826640d0
	if (ctx.cr6.eq) goto loc_826640D0;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// subfic r11,r11,127
	ctx.xer.ca = ctx.r11.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - ctx.r11.u64;
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// or r31,r11,r10
	r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82661398
	ctx.lr = 0x82664078;
	sub_82661398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82664114
	if (ctx.cr0.eq) goto loc_82664114;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82664114
	if (ctx.cr6.eq) goto loc_82664114;
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82664108
	if (ctx.cr6.eq) goto loc_82664108;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82664108
	goto loc_82664108;
loc_8266409C:
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 200);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826640d0
	if (!ctx.cr6.eq) goto loc_826640D0;
	// addi r11,r30,432
	ctx.r11.s64 = r30.s64 + 432;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826640d0
	if (ctx.cr6.eq) goto loc_826640D0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826640dc
	if (ctx.cr6.eq) goto loc_826640DC;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x826640dc
	if (ctx.cr6.eq) goto loc_826640DC;
loc_826640D0:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4111
	r31.u64 = r31.u64 | 4111;
	// b 0x82664138
	goto loc_82664138;
loc_826640DC:
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826640ec
	if (ctx.cr0.eq) goto loc_826640EC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_826640EC:
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// clrlwi r10,r31,21
	ctx.r10.u64 = r31.u32 & 0x7FF;
	// rlwinm r9,r31,13,1,7
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 13) & 0x7F000000;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r31,r9,r10
	r31.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne 0x82664108
	if (!ctx.cr0.eq) goto loc_82664108;
	// oris r31,r31,32768
	r31.u64 = r31.u64 | 2147483648;
loc_82664108:
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82664120
	if (!ctx.cr6.eq) goto loc_82664120;
loc_82664114:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4105
	r31.u64 = r31.u64 | 4105;
	// b 0x82664138
	goto loc_82664138;
loc_82664120:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82675b78
	ctx.lr = 0x82664134;
	sub_82675B78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82664138:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827938b4
	ctx.lr = 0x82664140;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82670A08) {
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
	ctx.lr = 0x82670A10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,96
	r29.s64 = ctx.r3.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82670628
	ctx.lr = 0x82670A34;
	sub_82670628(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x8265c9a0
	ctx.lr = 0x82670A3C;
	sub_8265C9A0(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x8265c9a0
	ctx.lr = 0x82670A44;
	sub_8265C9A0(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x8265c9a0
	ctx.lr = 0x82670A4C;
	sub_8265C9A0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8265c9a0
	ctx.lr = 0x82670A54;
	sub_8265C9A0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82670A84;
	sub_826A1E70(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// sth r30,68(r31)
	REX_STORE_U16(r31.u32 + 68, r30.u16);
	// sth r30,70(r31)
	REX_STORE_U16(r31.u32 + 70, r30.u16);
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// bl 0x82670628
	ctx.lr = 0x82670ABC;
	sub_82670628(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82670ACC;
	sub_826A2E60(ctx, base);
	// addi r11,r31,244
	ctx.r11.s64 = r31.s64 + 244;
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// addi r3,r31,254
	ctx.r3.s64 = r31.s64 + 254;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r11.u32);
	// stb r30,252(r31)
	REX_STORE_U8(r31.u32 + 252, r30.u8);
	// stb r30,253(r31)
	REX_STORE_U8(r31.u32 + 253, r30.u8);
	// bl 0x826a2e60
	ctx.lr = 0x82670B1C;
	sub_826A2E60(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// sth r30,284(r31)
	REX_STORE_U16(r31.u32 + 284, r30.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r30,286(r31)
	REX_STORE_U16(r31.u32 + 286, r30.u16);
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82675D48) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8267e2d8
	ctx.lr = 0x82675D60;
	sub_8267E2D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82676188) {
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
	// bl 0x826760b0
	ctx.lr = 0x826761A0;
	sub_826760B0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,266
	ctx.r3.s64 = 266;
	// bl 0x8265d850
	ctx.lr = 0x826761AC;
	sub_8265D850(ctx, base);
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

DEFINE_REX_FUNC(sub_82676F20) {
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
	// lwz r3,392(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82676f54
	if (ctx.cr6.eq) goto loc_82676F54;
	// bl 0x8267f310
	ctx.lr = 0x82676F4C;
	sub_8267F310(ctx, base);
	// stw r30,392(r31)
	REX_STORE_U32(r31.u32 + 392, r30.u32);
	// b 0x82676f5c
	goto loc_82676F5C;
loc_82676F54:
	// lwz r3,388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 388);
	// bl 0x82676d18
	ctx.lr = 0x82676F5C;
	sub_82676D18(ctx, base);
loc_82676F5C:
	// stw r30,388(r31)
	REX_STORE_U32(r31.u32 + 388, r30.u32);
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

DEFINE_REX_FUNC(sub_82678AF8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,22
	ctx.r11.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82678b20
	if (!ctx.cr6.lt) goto loc_82678B20;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// blt cr6,0x82678b20
	if (ctx.cr6.lt) goto loc_82678B20;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// b 0x82678b38
	goto loc_82678B38;
loc_82678B20:
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// blt cr6,0x82678b3c
	if (ctx.cr6.lt) goto loc_82678B3C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82678b3c
	if (!ctx.cr6.lt) goto loc_82678B3C;
	// addi r11,r10,1024
	ctx.r11.s64 = ctx.r10.s64 + 1024;
loc_82678B38:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
loc_82678B3C:
	// rlwinm r11,r4,0,16,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFC00;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82679FD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// addi r8,r3,572
	ctx.r8.s64 = ctx.r3.s64 + 572;
	// b 0x8267a01c
	goto loc_8267A01C;
loc_82679FDC:
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8267a018
	if (!ctx.cr6.eq) goto loc_8267A018;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r7,r10,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8267a018
	if (!ctx.cr0.eq) goto loc_8267A018;
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8267a018
	if (!ctx.cr0.eq) goto loc_8267A018;
	// lwz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 580);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,580(r3)
	REX_STORE_U32(ctx.r3.u32 + 580, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_8267A018:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_8267A01C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bne 0x82679fdc
	if (!ctx.cr0.eq) goto loc_82679FDC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8267BCE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8267BCF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823ef900
	ctx.lr = 0x8267BD00;
	sub_823EF900(ctx, base);
	// lhz r11,336(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 336);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267bd1c
	if (!ctx.cr0.eq) goto loc_8267BD1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267BD18;
	sub_82676D18(ctx, base);
	// b 0x8267bdc8
	goto loc_8267BDC8;
loc_8267BD1C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r29,r11,27,30,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x8267bd38
	if (!ctx.cr6.eq) goto loc_8267BD38;
	// lhz r9,1088(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1088);
	// b 0x8267bd4c
	goto loc_8267BD4C;
loc_8267BD38:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x8267bd48
	if (!ctx.cr6.eq) goto loc_8267BD48;
	// lhz r9,1086(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 1086);
	// b 0x8267bd4c
	goto loc_8267BD4C;
loc_8267BD48:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8267BD4C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r4,56(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 56);
	// subf r6,r10,r28
	ctx.r6.u64 = r28.u64 - ctx.r10.u64;
	// lwz r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82684450
	ctx.lr = 0x8267BD7C;
	sub_82684450(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + r28.u64;
	// bne cr6,0x8267bdb8
	if (!ctx.cr6.eq) goto loc_8267BDB8;
	// addis r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -2147483648;
	// addi r11,r31,1016
	ctx.r11.s64 = r31.s64 + 1016;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,1020(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1020);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r11,1020(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1020);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,1020(r31)
	REX_STORE_U32(r31.u32 + 1020, ctx.r10.u32);
	// b 0x8267bdc8
	goto loc_8267BDC8;
loc_8267BDB8:
	// stw r10,60(r30)
	REX_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82679220
	ctx.lr = 0x8267BDC8;
	sub_82679220(ctx, base);
loc_8267BDC8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267a9c0
	ctx.lr = 0x8267BDD4;
	sub_8267A9C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82682270) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r3,40
	ctx.r7.s64 = ctx.r3.s64 + 40;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82682EE8) {
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
	ctx.lr = 0x82682EF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-10296
	ctx.r9.s64 = ctx.r11.s64 + -10296;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8265c9a0
	ctx.lr = 0x82682F38;
	sub_8265C9A0(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x8265c9a0
	ctx.lr = 0x82682F40;
	sub_8265C9A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// sth r11,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r11.u16);
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826865A0) {
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
	// mulli r11,r3,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(20));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8265d838
	ctx.lr = 0x826865CC;
	sub_8265D838(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826865e8
	if (ctx.cr0.eq) goto loc_826865E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82686528
	ctx.lr = 0x826865DC;
	sub_82686528(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826865f0
	goto loc_826865F0;
loc_826865E8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_826865F0:
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

DEFINE_REX_FUNC(sub_82687D38) {
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
	ctx.lr = 0x82687D40;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// lbz r23,72(r3)
	r23.u64 = REX_LOAD_U8(ctx.r3.u32 + 72);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r10,152(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r21,r10,8
	r21.u64 = ctx.r10.u32 & 0xFFFFFF;
	// beq 0x82687d98
	if (ctx.cr0.eq) goto loc_82687D98;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82687d88
	if (ctx.cr6.eq) goto loc_82687D88;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x82687d98
	if (!ctx.cr6.eq) goto loc_82687D98;
loc_82687D88:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x82687ec4
	if (!ctx.cr6.eq) goto loc_82687EC4;
	// li r19,0
	r19.s64 = 0;
	// b 0x82687d9c
	goto loc_82687D9C;
loc_82687D98:
	// li r19,1
	r19.s64 = 1;
loc_82687D9C:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687db0
	if (ctx.cr0.eq) goto loc_82687DB0;
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
loc_82687DB0:
	// lwz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 56);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82687dc8
	if (!ctx.cr0.eq) goto loc_82687DC8;
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687dd4
	if (ctx.cr0.eq) goto loc_82687DD4;
loc_82687DC8:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// ori r11,r11,12288
	ctx.r11.u64 = ctx.r11.u64 | 12288;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
loc_82687DD4:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r25,1
	r25.s64 = 1;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82687dec
	if (!ctx.cr0.eq) goto loc_82687DEC;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(r23.s32, 3, ctx.xer);
	// bne cr6,0x82687e54
	if (!ctx.cr6.eq) goto loc_82687E54;
loc_82687DEC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// b 0x82687e40
	goto loc_82687E40;
loc_82687DF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,32(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 32);
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82687e3c
	if (!ctx.cr6.eq) goto loc_82687E3C;
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82687e3c
	if (ctx.cr0.eq) goto loc_82687E3C;
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r25,0
	r25.s64 = 0;
	// andi. r10,r10,61439
	ctx.r10.u64 = ctx.r10.u64 & 61439;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r10,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r10.u16);
	// lhz r9,14(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm. r9,r9,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82687e4c
	if (!ctx.cr0.eq) goto loc_82687E4C;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// sth r10,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r10.u16);
loc_82687E3C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82687E40:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82687df8
	if (!ctx.cr6.eq) goto loc_82687DF8;
	// b 0x82687e54
	goto loc_82687E54;
loc_82687E4C:
	// andi. r11,r10,63487
	ctx.r11.u64 = ctx.r10.u64 & 63487;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
loc_82687E54:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// addi r24,r26,68
	r24.s64 = r26.s64 + 68;
	// lwz r30,68(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 68);
	// addi r22,r31,4
	r22.s64 = r31.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r29,r30,r11
	r29.u64 = ctx.r11.u64 - r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82687ed4
	if (ctx.cr6.eq) goto loc_82687ED4;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// beq cr6,0x82687e90
	if (ctx.cr6.eq) goto loc_82687E90;
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// li r23,4
	r23.s64 = 4;
	// li r29,2
	r29.s64 = 2;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
loc_82687E90:
	// li r28,0
	r28.s64 = 0;
loc_82687E94:
	// li r27,0
	r27.s64 = 0;
loc_82687E98:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwinm r6,r11,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82687b28
	ctx.lr = 0x82687EB4;
	sub_82687B28(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// add r30,r3,r29
	r30.u64 = ctx.r3.u64 + r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82688064
	if (!ctx.cr6.gt) goto loc_82688064;
loc_82687EC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82688110
	goto loc_82688110;
loc_82687ED4:
	// lhz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 76);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687f00
	if (ctx.cr0.eq) goto loc_82687F00;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
	// bl 0x82687138
	ctx.lr = 0x82687EEC;
	sub_82687138(ctx, base);
	// lhz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 76);
	// andi. r11,r11,65407
	ctx.r11.u64 = ctx.r11.u64 & 65407;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r11,76(r26)
	REX_STORE_U16(r26.u32 + 76, ctx.r11.u16);
	// lwz r30,0(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 0);
	// subf r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
loc_82687F00:
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(r23.s32, 3, ctx.xer);
	// bne cr6,0x82687e90
	if (!ctx.cr6.eq) goto loc_82687E90;
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82687f24
	if (ctx.cr6.eq) goto loc_82687F24;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// bne cr6,0x82687f28
	if (!ctx.cr6.eq) goto loc_82687F28;
loc_82687F24:
	// li r27,1
	r27.s64 = 1;
loc_82687F28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82687f3c
	if (!ctx.cr6.eq) goto loc_82687F3C;
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// rlwinm r5,r11,0,19,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// b 0x82687f40
	goto loc_82687F40;
loc_82687F3C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_82687F40:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,0(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82687b98
	ctx.lr = 0x82687F54;
	sub_82687B98(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82687fb0
	if (ctx.cr6.eq) goto loc_82687FB0;
	// subfc r11,r29,r3
	ctx.xer.ca = ctx.r3.u32 >= r29.u32;
	ctx.r11.u64 = ctx.r3.u64 - r29.u64;
	// li r23,128
	r23.s64 = 128;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r28,r11,31
	r28.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82687f88
	if (!ctx.cr0.eq) goto loc_82687F88;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82687f88
	if (!ctx.cr6.lt) goto loc_82687F88;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82687f88
	if (ctx.cr6.eq) goto loc_82687F88;
	// li r27,0
	r27.s64 = 0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82687F88:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// beq cr6,0x82687fa4
	if (ctx.cr6.eq) goto loc_82687FA4;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// b 0x82687fa8
	goto loc_82687FA8;
loc_82687FA4:
	// andi. r11,r11,61439
	ctx.r11.u64 = ctx.r11.u64 & 61439;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82687FA8:
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// b 0x82688024
	goto loc_82688024;
loc_82687FB0:
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82687fe0
	if (ctx.cr6.gt) goto loc_82687FE0;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// li r23,128
	r23.s64 = 128;
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// li r28,0
	r28.s64 = 0;
	// bge cr6,0x82687e98
	if (!ctx.cr6.lt) goto loc_82687E98;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82687e98
	if (ctx.cr6.eq) goto loc_82687E98;
	// b 0x82687e94
	goto loc_82687E94;
loc_82687FE0:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// beq cr6,0x82687ffc
	if (ctx.cr6.eq) goto loc_82687FFC;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// b 0x82688000
	goto loc_82688000;
loc_82687FFC:
	// andi. r11,r11,61439
	ctx.r11.u64 = ctx.r11.u64 & 61439;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82688000:
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,0(r20)
	ctx.r7.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// rlwinm r5,r11,0,19,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82687b98
	ctx.lr = 0x82688020;
	sub_82687B98(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_82688024:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82687e98
	if (ctx.cr6.eq) goto loc_82687E98;
	// cmplwi cr6,r29,2440
	ctx.cr6.compare<uint32_t>(r29.u32, 2440, ctx.xer);
	// bge cr6,0x8268804c
	if (!ctx.cr6.lt) goto loc_8268804C;
	// subf r11,r3,r29
	ctx.r11.u64 = r29.u64 - ctx.r3.u64;
	// cmplwi cr6,r11,1220
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1220, ctx.xer);
	// ble cr6,0x82688054
	if (!ctx.cr6.gt) goto loc_82688054;
	// rlwinm r29,r29,31,1,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// li r19,0
	r19.s64 = 0;
	// b 0x82687e98
	goto loc_82687E98;
loc_8268804C:
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// ble cr6,0x8268805c
	if (!ctx.cr6.gt) goto loc_8268805C;
loc_82688054:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82687e98
	goto loc_82687E98;
loc_8268805C:
	// li r29,1220
	r29.s64 = 1220;
	// b 0x82687e98
	goto loc_82687E98;
loc_82688064:
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// bne cr6,0x82688094
	if (!ctx.cr6.eq) goto loc_82688094;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82684ba8
	ctx.lr = 0x8268807C;
	sub_82684BA8(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// rlwinm r5,r11,0,18,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// bl 0x82684538
	ctx.lr = 0x82688090;
	sub_82684538(ctx, base);
	// b 0x826880fc
	goto loc_826880FC;
loc_82688094:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826880bc
	if (ctx.cr6.eq) goto loc_826880BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82684ba8
	ctx.lr = 0x826880BC;
	sub_82684BA8(ctx, base);
loc_826880BC:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 14);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// rlwinm r5,r11,0,18,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// bl 0x82684538
	ctx.lr = 0x826880D0;
	sub_82684538(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x826880e8
	if (ctx.cr6.eq) goto loc_826880E8;
	// lhz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 76);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// sth r11,76(r26)
	REX_STORE_U16(r26.u32 + 76, ctx.r11.u16);
	// b 0x826880fc
	goto loc_826880FC;
loc_826880E8:
	// lhz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 76);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,32(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 32);
	// rlwinm r5,r11,21,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// bl 0x82685c58
	ctx.lr = 0x826880FC;
	sub_82685C58(ctx, base);
loc_826880FC:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// sth r29,12(r31)
	REX_STORE_U16(r31.u32 + 12, r29.u16);
loc_82688110:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(__restgprlr_18) {
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
	// ld r18,-120(r1)
	r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_22) {
	REX_FUNC_PROLOGUE();
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
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(__savevmx_17) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_84) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B1458) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm r10,r3,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// lwz r11,27400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 27400);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B3AC0) {
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
	ctx.lr = 0x826B3AC8;
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// stw r4,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r4.u32);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r29,r11,3
	r29.s64 = ctx.r11.s64 + 3;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// rlwinm r10,r29,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFF000000;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,2272(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2272);
	// ori r10,r10,98
	ctx.r10.u64 = ctx.r10.u64 | 98;
	// stw r8,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b3b44
	if (ctx.cr6.eq) goto loc_826B3B44;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// li r3,94
	ctx.r3.s64 = 94;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b3b48
	goto loc_826B3B48;
loc_826B3B44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B3B48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x826b3b58
	if (!ctx.cr6.gt) goto loc_826B3B58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b3bd4
	goto loc_826B3BD4;
loc_826B3B58:
	// blt cr6,0x826b3bd0
	if (ctx.cr6.lt) goto loc_826B3BD0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x826B3B6C;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// bl 0x826a1e70
	ctx.lr = 0x826B3BA0;
	sub_826A1E70(ctx, base);
	// lwz r11,2272(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2272);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826b3bd0
	if (ctx.cr6.eq) goto loc_826B3BD0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// li r3,67
	ctx.r3.s64 = 67;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B3BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826b3bd4
	goto loc_826B3BD4;
loc_826B3BD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B3BD4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826BACD0) {
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

DEFINE_REX_FUNC(sub_826BE018) {
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
	ctx.lr = 0x826BE020;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6cf0
	ctx.lr = 0x826BE050;
	sub_826C6CF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826BE06C;
	sub_826C6CF0(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826be088
	if (ctx.cr6.eq) goto loc_826BE088;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
loc_826BE088:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826be0e0
	if (ctx.cr6.eq) goto loc_826BE0E0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826BE0A4;
	sub_826C6CF0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826be0d0
	if (ctx.cr6.eq) goto loc_826BE0D0;
	// bl 0x826c6f10
	ctx.lr = 0x826BE0B4;
	sub_826C6F10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// bl 0x826c6c70
	ctx.lr = 0x826BE0D0;
	sub_826C6C70(ctx, base);
loc_826BE0D0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// bl 0x826c6c70
	ctx.lr = 0x826BE0DC;
	sub_826C6C70(ctx, base);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_826BE0E0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826c6c08
	ctx.lr = 0x826BE0F0;
	sub_826C6C08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r29.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r9.u32);
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// bl 0x826c7da8
	ctx.lr = 0x826BE120;
	sub_826C7DA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x826be19c
	if (ctx.cr6.eq) goto loc_826BE19C;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// addi r7,r9,-29168
	ctx.r7.s64 = ctx.r9.s64 + -29168;
	// addi r8,r11,29688
	ctx.r8.s64 = ctx.r11.s64 + 29688;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826be16c
	if (!ctx.cr6.eq) goto loc_826BE16C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29680
	ctx.r10.s64 = ctx.r11.s64 + 29680;
	// b 0x826be17c
	goto loc_826BE17C;
loc_826BE16C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826be180
	if (!ctx.cr6.eq) goto loc_826BE180;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r10,r11,29672
	ctx.r10.s64 = ctx.r11.s64 + 29672;
loc_826BE17C:
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
loc_826BE180:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x826c6700
	ctx.lr = 0x826BE190;
	sub_826C6700(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
loc_826BE19C:
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,608(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 608);
	// addi r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 + 68;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,544(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 544);
	// lwz r6,120(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 120);
	// bl 0x826c82d0
	ctx.lr = 0x826BE1C8;
	sub_826C82D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32148
	ctx.r11.s64 = -2106851328;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// addi r4,r11,-9048
	ctx.r4.s64 = ctx.r11.s64 + -9048;
	// bl 0x826c63e0
	ctx.lr = 0x826BE1EC;
	sub_826C63E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, r30.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,76(r8)
	REX_STORE_U32(ctx.r8.u32 + 76, r28.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,60(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// bl 0x826bdc00
	ctx.lr = 0x826BE228;
	sub_826BDC00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x826c65a8
	ctx.lr = 0x826BE24C;
	sub_826C65A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826c6c08
	ctx.lr = 0x826BE268;
	sub_826C6C08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be2b0
	if (ctx.cr6.lt) goto loc_826BE2B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r29,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// lwz r3,608(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 608);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x826c65a8
	ctx.lr = 0x826BE2A4;
	sub_826C65A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826be2c8
	if (!ctx.cr6.lt) goto loc_826BE2C8;
loc_826BE2B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826be2c8
	if (ctx.cr6.eq) goto loc_826BE2C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 572);
	// bl 0x826c6c70
	ctx.lr = 0x826BE2C8;
	sub_826C6C70(ctx, base);
loc_826BE2C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826D7848) {
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
	ctx.lr = 0x826D7850;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stb r26,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D7884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7be8
	if (ctx.cr6.lt) goto loc_826D7BE8;
	// lwz r31,48(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 48);
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// blt cr6,0x826d7a60
	if (ctx.cr6.lt) goto loc_826D7A60;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D78C4;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7be8
	if (ctx.cr6.lt) goto loc_826D7BE8;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r9,r10,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stb r26,16(r31)
	REX_STORE_U8(r31.u32 + 16, r26.u8);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826d79a0
	if (ctx.cr6.eq) goto loc_826D79A0;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d790c
	if (ctx.cr6.eq) goto loc_826D790C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826D790C:
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d7a60
	if (!ctx.cr6.eq) goto loc_826D7A60;
	// clrlwi r30,r11,28
	r30.u64 = ctx.r11.u32 & 0xF;
	// stb r30,16(r31)
	REX_STORE_U8(r31.u32 + 16, r30.u8);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x826d7a60
	if (!ctx.cr6.eq) goto loc_826D7A60;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D7940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7be8
	if (ctx.cr6.lt) goto loc_826D7BE8;
	// ld r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 8);
	// clrldi r9,r30,32
	ctx.r9.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r10.u64);
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// bgt cr6,0x826d7a60
	if (ctx.cr6.gt) goto loc_826D7A60;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D7994;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7be8
	if (ctx.cr6.lt) goto loc_826D7BE8;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_826D79A0:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r10,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,17(r31)
	REX_STORE_U8(r31.u32 + 17, ctx.r11.u8);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// beq cr6,0x826d79c4
	if (ctx.cr6.eq) goto loc_826D79C4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x826d7a60
	if (!ctx.cr6.eq) goto loc_826D7A60;
loc_826D79C4:
	// rlwinm r11,r10,29,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stb r11,18(r31)
	REX_STORE_U8(r31.u32 + 18, ctx.r11.u8);
	// beq cr6,0x826d7a60
	if (ctx.cr6.eq) goto loc_826D7A60;
	// rlwinm r11,r10,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x3;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r11,19(r31)
	REX_STORE_U8(r31.u32 + 19, ctx.r11.u8);
	// addi r8,r30,1
	ctx.r8.s64 = r30.s64 + 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// bgt cr6,0x826d7a60
	if (ctx.cr6.gt) goto loc_826D7A60;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d3a88
	ctx.lr = 0x826D7A14;
	sub_826D3A88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7be8
	if (ctx.cr6.lt) goto loc_826D7BE8;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r9,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r9.u8);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// stb r8,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r8.u8);
	// beq cr6,0x826d7a88
	if (ctx.cr6.eq) goto loc_826D7A88;
	// rlwinm r11,r10,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x826d7a60
	if (!ctx.cr6.eq) goto loc_826D7A60;
	// rlwinm r11,r10,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x826d7a60
	if (!ctx.cr6.eq) goto loc_826D7A60;
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stb r11,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826d7a70
	if (!ctx.cr6.eq) goto loc_826D7A70;
loc_826D7A60:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826D7A70:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x826d7a7c
	if (!ctx.cr6.lt) goto loc_826D7A7C;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
loc_826D7A7C:
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x826d7a60
	if (!ctx.cr6.eq) goto loc_826D7A60;
loc_826D7A88:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lbz r11,17(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 17);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// beq cr6,0x826d7ad8
	if (ctx.cr6.eq) goto loc_826D7AD8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d7acc
	if (ctx.cr6.eq) goto loc_826D7ACC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d7ae4
	if (!ctx.cr6.eq) goto loc_826D7AE4;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x826d7ae0
	goto loc_826D7AE0;
loc_826D7ACC:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x826d7ae0
	goto loc_826D7AE0;
loc_826D7AD8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826D7AE0:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_826D7AE4:
	// lbz r11,19(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 19);
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d7b1c
	if (ctx.cr6.eq) goto loc_826D7B1C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d7b10
	if (ctx.cr6.eq) goto loc_826D7B10;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d7b28
	if (!ctx.cr6.eq) goto loc_826D7B28;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x826d7b24
	goto loc_826D7B24;
loc_826D7B10:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x826d7b24
	goto loc_826D7B24;
loc_826D7B1C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826D7B24:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_826D7B28:
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d7b60
	if (ctx.cr6.eq) goto loc_826D7B60;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d7b54
	if (ctx.cr6.eq) goto loc_826D7B54;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d7b6c
	if (!ctx.cr6.eq) goto loc_826D7B6C;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x826d7b68
	goto loc_826D7B68;
loc_826D7B54:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x826d7b68
	goto loc_826D7B68;
loc_826D7B60:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826D7B68:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_826D7B6C:
	// lbz r11,25(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 25);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x826d7b98
	if (ctx.cr6.eq) goto loc_826D7B98;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826d7b90
	if (ctx.cr6.eq) goto loc_826D7B90;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x826d7ba0
	if (!ctx.cr6.eq) goto loc_826D7BA0;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// b 0x826d7b9c
	goto loc_826D7B9C;
loc_826D7B90:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// b 0x826d7b9c
	goto loc_826D7B9C;
loc_826D7B98:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
loc_826D7B9C:
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
loc_826D7BA0:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// beq cr6,0x826d7bc4
	if (ctx.cr6.eq) goto loc_826D7BC4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826d7a60
	if (!ctx.cr6.eq) goto loc_826D7A60;
loc_826D7BC4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// stb r26,26(r31)
	REX_STORE_U8(r31.u32 + 26, r26.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r26,27(r31)
	REX_STORE_U8(r31.u32 + 27, r26.u8);
	// stw r25,60(r31)
	REX_STORE_U32(r31.u32 + 60, r25.u32);
	// beq cr6,0x826d7be8
	if (ctx.cr6.eq) goto loc_826D7BE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_826D7BE8:
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826d7c14
	if (!ctx.cr6.eq) goto loc_826D7C14;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// li r9,5
	ctx.r9.s64 = 5;
	// ld r10,24(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,80(r27)
	REX_STORE_U32(r27.u32 + 80, ctx.r9.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r8,32(r27)
	REX_STORE_U64(r27.u32 + 32, ctx.r8.u64);
loc_826D7C14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826F28F8) {
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
	ctx.lr = 0x826F2900;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// std r26,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r26.u64);
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// beq cr6,0x826f2b88
	if (ctx.cr6.eq) goto loc_826F2B88;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826f2b94
	if (ctx.cr6.eq) goto loc_826F2B94;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826f2b88
	if (ctx.cr6.eq) goto loc_826F2B88;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826f2b88
	if (ctx.cr6.eq) goto loc_826F2B88;
	// li r22,1
	r22.s64 = 1;
	// stw r26,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r26.u32);
	// stw r26,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r26.u32);
	// stw r22,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r22.u32);
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r23,4(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x826f2998
	if (ctx.cr6.eq) goto loc_826F2998;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lhz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 88);
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r26,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r26.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
loc_826F2998:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826f2a1c
	if (!ctx.cr6.eq) goto loc_826F2A1C;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bctrl 
	ctx.lr = 0x826F29D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826f29f0
	if (!ctx.cr6.lt) goto loc_826F29F0;
loc_826F29D8:
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r26,0(r24)
	REX_STORE_U32(r24.u32 + 0, r26.u32);
	// stw r22,0(r20)
	REX_STORE_U32(r20.u32 + 0, r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
loc_826F29F0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f2a04
	if (ctx.cr6.eq) goto loc_826F2A04;
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
loc_826F2A04:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f2a14
	if (ctx.cr6.eq) goto loc_826F2A14;
	// stw r22,112(r31)
	REX_STORE_U32(r31.u32 + 112, r22.u32);
loc_826F2A14:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_826F2A1C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x826f2a50
	if (!ctx.cr6.eq) goto loc_826F2A50;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x826f2a50
	if (ctx.cr6.lt) goto loc_826F2A50;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826f2a50
	if (!ctx.cr6.eq) goto loc_826F2A50;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// b 0x826f2b3c
	goto loc_826F2B3C;
loc_826F2A50:
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(r30.u32, 4096, ctx.xer);
	// ble cr6,0x826f2a60
	if (!ctx.cr6.gt) goto loc_826F2A60;
	// li r30,4096
	r30.s64 = 4096;
loc_826F2A60:
	// add r11,r31,r21
	ctx.r11.u64 = r31.u64 + r21.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// bl 0x826a1e70
	ctx.lr = 0x826F2A78;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bge cr6,0x826f2b2c
	if (!ctx.cr6.lt) goto loc_826F2B2C;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826f2b2c
	if (!ctx.cr6.eq) goto loc_826F2B2C;
	// addi r27,r31,12
	r27.s64 = r31.s64 + 12;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x826F2ABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f29d8
	if (ctx.cr6.lt) goto loc_826F29D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f2ad8
	if (ctx.cr6.eq) goto loc_826F2AD8;
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
loc_826F2AD8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f2ae8
	if (ctx.cr6.eq) goto loc_826F2AE8;
	// stw r22,112(r31)
	REX_STORE_U32(r31.u32 + 112, r22.u32);
loc_826F2AE8:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(r30.u32, 4096, ctx.xer);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// ble cr6,0x826f2afc
	if (!ctx.cr6.gt) goto loc_826F2AFC;
	// li r30,4096
	r30.s64 = 4096;
loc_826F2AFC:
	// add r11,r28,r31
	ctx.r11.u64 = r28.u64 + r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// bl 0x826a1e70
	ctx.lr = 0x826F2B14;
	sub_826A1E70(ctx, base);
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// addi r10,r31,116
	ctx.r10.s64 = r31.s64 + 116;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + r21.u64;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r9,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r9.u32);
	// b 0x826f2b3c
	goto loc_826F2B3C;
loc_826F2B2C:
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// add r10,r30,r21
	ctx.r10.u64 = r30.u64 + r21.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
loc_826F2B3C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r9,112(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 112);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x826f2b7c
	if (ctx.cr6.eq) goto loc_826F2B7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826f2b7c
	if (!ctx.cr6.eq) goto loc_826F2B7C;
	// stw r26,0(r20)
	REX_STORE_U32(r20.u32 + 0, r26.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r26,112(r31)
	REX_STORE_U32(r31.u32 + 112, r26.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
loc_826F2B7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
loc_826F2B88:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x826f2b94
	if (ctx.cr6.eq) goto loc_826F2B94;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
loc_826F2B94:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x826f2ba0
	if (ctx.cr6.eq) goto loc_826F2BA0;
	// stw r26,0(r24)
	REX_STORE_U32(r24.u32 + 0, r26.u32);
loc_826F2BA0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x826f2bac
	if (ctx.cr6.eq) goto loc_826F2BAC;
	// stw r26,0(r20)
	REX_STORE_U32(r20.u32 + 0, r26.u32);
loc_826F2BAC:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82711630) {
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
	ctx.lr = 0x82711638;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,84(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r27,r11,-29392
	r27.s64 = ctx.r11.s64 + -29392;
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
	// bl 0x82725f80
	ctx.lr = 0x82711668;
	sub_82725F80(ctx, base);
	// addi r8,r27,1
	ctx.r8.s64 = r27.s64 + 1;
	// li r31,3
	r31.s64 = 3;
	// lbzx r11,r26,r8
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82711680
	if (!ctx.cr6.eq) goto loc_82711680;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_82711680:
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// clrlwi r26,r11,24
	r26.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82711790
	if (!ctx.cr6.eq) goto loc_82711790;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82711790
	if (ctx.cr6.lt) goto loc_82711790;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(r26.s32, 3, ctx.xer);
	// bgt cr6,0x82711790
	if (ctx.cr6.gt) goto loc_82711790;
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
	// bge 0x827116c8
	if (!ctx.cr0.lt) goto loc_827116C8;
	// bl 0x82725e38
	ctx.lr = 0x827116C8;
	sub_82725E38(ctx, base);
loc_827116C8:
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
	// bne cr6,0x82711790
	if (!ctx.cr6.eq) goto loc_82711790;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r11,r11,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// addi r27,r10,-29520
	r27.s64 = ctx.r10.s64 + -29520;
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
	// bl 0x82725f80
	ctx.lr = 0x82711718;
	sub_82725F80(ctx, base);
	// addi r7,r27,1
	ctx.r7.s64 = r27.s64 + 1;
	// lbzx r11,r25,r7
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8271172c
	if (!ctx.cr6.eq) goto loc_8271172C;
	// stw r31,20(r30)
	REX_STORE_U32(r30.u32 + 20, r31.u32);
loc_8271172C:
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 84);
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82711790
	if (!ctx.cr6.eq) goto loc_82711790;
	// srawi r5,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r5.s64 = r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82711750;
	sub_8275DD78(ctx, base);
	// clrlwi r5,r26,31
	ctx.r5.u64 = r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8275dd78
	ctx.lr = 0x82711760;
	sub_8275DD78(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_82711764:
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
	// bl 0x8275dd78
	ctx.lr = 0x82711778;
	sub_8275DD78(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bge 0x82711764
	if (!ctx.cr0.lt) goto loc_82711764;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82711790:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8271F9E0) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(84));
	// lwz r9,20984(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20984);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,14864(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14864);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// lwz r8,14868(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14868);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r8.u32);
	// lwz r7,14872(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14872);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r7.u32);
	// lwz r10,14876(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14876);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// stw r6,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r6.u32);
	// stw r5,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r5.u32);
	// stw r4,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r4.u32);
	// stw r9,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// lwz r8,14880(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14880);
	// stw r8,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r8.u32);
	// lwz r7,14884(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14884);
	// stw r7,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r7.u32);
	// beq cr6,0x8271fa74
	if (ctx.cr6.eq) goto loc_8271FA74;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// stw r7,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r7.u32);
	// stw r6,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r6.u32);
loc_8271FA74:
	// lwz r9,14888(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14888);
	// lwz r10,3756(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// stw r9,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r9.u32);
	// lwz r8,14892(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14892);
	// stw r8,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r8.u32);
	// lwz r7,14896(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14896);
	// stw r7,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r7.u32);
	// lwz r6,14900(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 14900);
	// stw r6,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r6.u32);
	// lwz r5,14904(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 14904);
	// stw r5,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// lwz r4,14908(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14908);
	// stw r4,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r4.u32);
	// lwz r9,14912(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 14912);
	// stw r9,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// lwz r8,14916(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14916);
	// stw r8,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r8.u32);
	// lwz r7,14920(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14920);
	// stw r7,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r7.u32);
	// lwz r6,14924(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 14924);
	// stw r6,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r6.u32);
	// lwz r5,14928(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 14928);
	// stw r5,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// lwz r4,14932(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 14932);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r4.u32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,14936(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 14936);
	// stw r8,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r8.u32);
	// lwz r7,14940(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 14940);
	// stw r7,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// lwz r5,14944(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 14944);
	// stw r5,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r5.u32);
	// stw r6,3780(r3)
	REX_STORE_U32(ctx.r3.u32 + 3780, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827241D8) {
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
	ctx.lr = 0x827241E0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82724704
	if (ctx.cr6.eq) goto loc_82724704;
	// lwz r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82724704
	if (ctx.cr6.eq) goto loc_82724704;
	// bl 0x827234b8
	ctx.lr = 0x82724200;
	sub_827234B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82724574
	if (!ctx.cr6.eq) goto loc_82724574;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// li r30,0
	r30.s64 = 0;
	// ori r7,r10,22857
	ctx.r7.u64 = ctx.r10.u64 | 22857;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82724348
	if (ctx.cr6.eq) goto loc_82724348;
	// lis r7,12338
	ctx.r7.s64 = 808583168;
	// ori r6,r7,13385
	ctx.r6.u64 = ctx.r7.u64 | 13385;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82724348
	if (ctx.cr6.eq) goto loc_82724348;
	// lis r7,12849
	ctx.r7.s64 = 842072064;
	// ori r6,r7,22105
	ctx.r6.u64 = ctx.r7.u64 | 22105;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82724348
	if (ctx.cr6.eq) goto loc_82724348;
	// lis r7,12593
	ctx.r7.s64 = 825294848;
	// ori r6,r7,13392
	ctx.r6.u64 = ctx.r7.u64 | 13392;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x827244dc
	if (!ctx.cr6.eq) goto loc_827244DC;
	// lwz r24,28(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r10,32(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// srawi r7,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	ctx.r7.s64 = r24.s32 >> 2;
	// lwz r11,44(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// addze r23,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r23.s64 = temp.s64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addze r28,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r28.s64 = temp.s64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r23
	r21.u64 = r23.u64;
	// mr r22,r28
	r22.u64 = r28.u64;
	// mr r20,r28
	r20.u64 = r28.u64;
	// addze r10,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r10.s64 = temp.s64;
	// add r31,r9,r7
	r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// bne cr6,0x82724304
	if (!ctx.cr6.eq) goto loc_82724304;
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r5,24(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r3,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 2;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r3.s64 = r31.s32 >> 2;
	// mullw r31,r5,r11
	r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r7,r31,r6
	ctx.r7.u64 = r31.u64 + ctx.r6.u64;
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r30,r7,r4
	r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r27,r6,r4
	r27.u64 = ctx.r6.u64 + ctx.r4.u64;
	// b 0x827244d8
	goto loc_827244D8;
loc_82724304:
	// lwz r3,20(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r5,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 2;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addze r7,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r31,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	r31.s64 = r31.s32 >> 2;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// add r31,r31,r7
	r31.u64 = r31.u64 + ctx.r7.u64;
	// add r30,r7,r5
	r30.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r6,r31,r5
	ctx.r6.u64 = r31.u64 + ctx.r5.u64;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// add r30,r7,r4
	r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r27,r6,r4
	r27.u64 = ctx.r6.u64 + ctx.r4.u64;
	// b 0x827244d8
	goto loc_827244D8;
loc_82724348:
	// lwz r24,28(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r10,32(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// srawi r9,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r9.s64 = r24.s32 >> 1;
	// lwz r11,44(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r7,124(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 124);
	// addze r23,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r23.s64 = temp.s64;
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// mr r21,r23
	r21.u64 = r23.u64;
	// addze r28,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	r28.s64 = temp.s64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// srawi r3,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r3.s64 = r28.s32 >> 1;
	// addze r22,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r22.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r20,r22
	r20.u64 = r22.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// beq cr6,0x82724430
	if (ctx.cr6.eq) goto loc_82724430;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,144(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 144);
	// lwz r10,148(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 148);
	// lwz r5,152(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 152);
	// bne cr6,0x827243dc
	if (!ctx.cr6.eq) goto loc_827243DC;
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r4,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 1;
	// mullw r3,r6,r10
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// mullw r3,r6,r5
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r4,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 1;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// b 0x82724414
	goto loc_82724414;
loc_827243DC:
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r7,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r4,r9,r10
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r9,r5
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
loc_82724414:
	// lwz r3,132(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 132);
	// lwz r4,136(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 136);
	// lwz r5,140(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 140);
	// add r30,r3,r9
	r30.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r29,r4,r6
	r29.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r27,r5,r7
	r27.u64 = ctx.r5.u64 + ctx.r7.u64;
	// b 0x827244dc
	goto loc_827244DC;
loc_82724430:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// bne cr6,0x82724484
	if (!ctx.cr6.eq) goto loc_82724484;
	// lwz r30,24(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,20(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mullw r7,r30,r10
	ctx.r7.s64 = int64_t(r30.s32) * int64_t(ctx.r10.s32);
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r31,r9,r6
	r31.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r3.s64 = r31.s32 >> 2;
	// add r31,r6,r7
	r31.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r6,r30,r5
	ctx.r6.u64 = r30.u64 + ctx.r5.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// b 0x827244d0
	goto loc_827244D0;
loc_82724484:
	// lwz r3,24(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// add r30,r9,r7
	r30.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r31,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	r31.s64 = ctx.r6.s32 >> 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r7,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r31,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	r31.s64 = r30.s32 >> 2;
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// addze r30,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r30.s64 = temp.s64;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r31,r29,r11
	r31.s64 = int64_t(r29.s32) * int64_t(ctx.r11.s32);
	// add r7,r30,r7
	ctx.r7.u64 = r30.u64 + ctx.r7.u64;
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
loc_827244D0:
	// add r30,r6,r4
	r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r27,r7,r4
	r27.u64 = ctx.r7.u64 + ctx.r4.u64;
loc_827244D8:
	// add r29,r9,r4
	r29.u64 = ctx.r9.u64 + ctx.r4.u64;
loc_827244DC:
	// lwz r31,308(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
	// rlwinm r26,r11,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82724510
	if (!ctx.cr6.gt) goto loc_82724510;
loc_827244F0:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82724500;
	sub_826A1E70(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r30,r26,r30
	r30.u64 = r26.u64 + r30.u64;
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// bne 0x827244f0
	if (!ctx.cr0.eq) goto loc_827244F0;
loc_82724510:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x8272453c
	if (!ctx.cr6.gt) goto loc_8272453C;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8272451C:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8272452C;
	sub_826A1E70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r25,r29
	r29.u64 = r25.u64 + r29.u64;
	// add r31,r23,r31
	r31.u64 = r23.u64 + r31.u64;
	// bne 0x8272451c
	if (!ctx.cr0.eq) goto loc_8272451C;
loc_8272453C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x827246cc
	if (!ctx.cr6.gt) goto loc_827246CC;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82724548:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82724558;
	sub_826A1E70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r27,r25,r27
	r27.u64 = r25.u64 + r27.u64;
	// add r31,r21,r31
	r31.u64 = r21.u64 + r31.u64;
	// bne 0x82724548
	if (!ctx.cr0.eq) goto loc_82724548;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_82724574:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x827246d8
	if (!ctx.cr6.eq) goto loc_827246D8;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,28(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r3,44(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r9,32(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r29,308(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 308);
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
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r28,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r28.s64 = temp.s64;
	// srawi r3,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 3;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// rlwinm r27,r10,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r30.s64 = temp.s64;
	// bgt cr6,0x827245e8
	if (ctx.cr6.gt) goto loc_827245E8;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827245e8
	if (!ctx.cr6.gt) goto loc_827245E8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_827245E8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8272464c
	if (!ctx.cr6.eq) goto loc_8272464C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82724614
	if (!ctx.cr6.eq) goto loc_82724614;
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
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
	// b 0x8272469c
	goto loc_8272469C;
loc_82724614:
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r3,20(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
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
	// b 0x827246a0
	goto loc_827246A0;
loc_8272464C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82724668
	if (!ctx.cr6.eq) goto loc_82724668;
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// b 0x82724690
	goto loc_82724690;
loc_82724668:
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,24(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,20(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
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
loc_82724690:
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
loc_8272469C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827246A0:
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x827246cc
	if (!ctx.cr6.gt) goto loc_827246CC;
loc_827246AC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x827246BC;
	sub_826A1E70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// bne 0x827246ac
	if (!ctx.cr0.eq) goto loc_827246AC;
loc_827246CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_827246D8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827246f8
	if (!ctx.cr6.eq) goto loc_827246F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27148
	ctx.r3.s64 = ctx.r11.s64 + 27148;
	// bl 0x82791b60
	ctx.lr = 0x827246EC;
	sub_82791B60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
loc_827246F8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r3,r11,27136
	ctx.r3.s64 = ctx.r11.s64 + 27136;
	// bl 0x82791b60
	ctx.lr = 0x82724704;
	sub_82791B60(ctx, base);
loc_82724704:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8274A200) {
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
	ctx.lr = 0x8274A208;
	// lwz r27,136(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r28,3940(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3940);
	// mullw r30,r27,r5
	r30.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// lwz r26,284(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// addi r31,r11,-30616
	r31.s64 = ctx.r11.s64 + -30616;
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r4
	r30.u64 = r30.u64 + ctx.r4.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r30,1,0,30
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r23
	r21.u64 = ctx.r11.u64 + r23.u64;
	// subf r22,r11,r23
	r22.u64 = r23.u64 - ctx.r11.u64;
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bne cr6,0x8274a270
	if (!ctx.cr6.eq) goto loc_8274A270;
	// li r29,6
	r29.s64 = 6;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r28,15
	r28.s64 = 15;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8274A264:
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// bdnz 0x8274a264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274A264;
	// b 0x8274a2ec
	goto loc_8274A2EC;
loc_8274A270:
	// li r28,6
	r28.s64 = 6;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// subf r27,r7,r10
	r27.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r29,r7,r11
	r29.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r24,15
	r24.s64 = 15;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// li r25,-49
	r25.s64 = -49;
	// li r26,63
	r26.s64 = 63;
loc_8274A290:
	// lbz r28,0(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8274a2a8
	if (!ctx.cr6.eq) goto loc_8274A2A8;
	// stbx r24,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r24.u8);
	// b 0x8274a2e4
	goto loc_8274A2E4;
loc_8274A2A8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8274a2b8
	if (!ctx.cr6.eq) goto loc_8274A2B8;
	// stbx r25,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r25.u8);
	// b 0x8274a2e4
	goto loc_8274A2E4;
loc_8274A2B8:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x8274a2c8
	if (!ctx.cr6.eq) goto loc_8274A2C8;
	// stbx r26,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r26.u8);
	// b 0x8274a2e4
	goto loc_8274A2E4;
loc_8274A2C8:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// bne cr6,0x8274a2e4
	if (!ctx.cr6.eq) goto loc_8274A2E4;
	// lbzx r28,r27,r30
	r28.u64 = REX_LOAD_U8(r27.u32 + r30.u32);
	// addi r20,r31,1024
	r20.s64 = r31.s64 + 1024;
	// rotlwi r28,r28,2
	r28.u64 = __builtin_rotateleft32(r28.u32, 2);
	// lwzx r28,r28,r20
	r28.u64 = REX_LOAD_U32(r28.u32 + r20.u32);
	// stbx r28,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r28.u8);
loc_8274A2E4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bdnz 0x8274a290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274A290;
loc_8274A2EC:
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,108(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x8274a384
	if (ctx.cr6.eq) goto loc_8274A384;
	// lbz r29,1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// rlwinm r29,r29,0,30,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r29,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r29.u8);
	// beq cr6,0x8274a358
	if (ctx.cr6.eq) goto loc_8274A358;
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r30,r30,0,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r27,4(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r26,5(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// extsb r27,r27
	r27.s64 = r27.s8;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// extsb r26,r26
	r26.s64 = r26.s8;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r27,r27,0,0,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r26,r26,0,0,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r28,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r28.u8);
	// stb r27,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r27.u8);
	// stb r26,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r26.u8);
	// b 0x8274a3d0
	goto loc_8274A3D0;
loc_8274A358:
	// lbz r28,4(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r30,r30,0,30,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// lbz r27,5(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// extsb r27,r27
	r27.s64 = r27.s8;
	// rlwinm r28,r28,0,30,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r27,r27,0,30,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
	// stb r27,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r27.u8);
	// b 0x8274a3d0
	goto loc_8274A3D0;
loc_8274A384:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x8274a3d0
	if (ctx.cr6.eq) goto loc_8274A3D0;
	// lwz r30,3388(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3388);
	// lbzx r29,r30,r11
	r29.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwinm r29,r29,0,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r29,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r29.u8);
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r30,r30
	r30.s64 = r30.s8;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwinm r30,r30,0,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r29,r29,0,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r30,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r30.u8);
	// stb r29,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r29.u8);
	// stb r28,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r28.u8);
loc_8274A3D0:
	// lwz r30,284(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x8274aa98
	if (ctx.cr6.eq) goto loc_8274AA98;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8274a3f4
	if (!ctx.cr6.eq) goto loc_8274A3F4;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274aa98
	if (ctx.cr6.eq) goto loc_8274AA98;
loc_8274A3F4:
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x8274a490
	if (!ctx.cr6.eq) goto loc_8274A490;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r6,r30
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r30.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x8274a490
	if (ctx.cr6.eq) goto loc_8274A490;
	// lwz r29,1772(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r30,r22,1,0,30
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r29,r6
	r28.u64 = REX_LOAD_U16(r29.u32 + ctx.r6.u32);
	// lhzx r29,r30,r29
	r29.u64 = REX_LOAD_U16(r30.u32 + r29.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x8274a490
	if (!ctx.cr6.eq) goto loc_8274A490;
	// lwz r29,1776(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r30,r29,r30
	r30.u64 = REX_LOAD_U16(r29.u32 + r30.u32);
	// lhzx r6,r29,r6
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + ctx.r6.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a490
	if (!ctx.cr6.eq) goto loc_8274A490;
	// lbz r6,2(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// addi r27,r31,768
	r27.s64 = r31.s64 + 768;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r26,r31,512
	r26.s64 = r31.s64 + 512;
	// extsb r28,r6
	r28.s64 = ctx.r6.s8;
	// lbz r6,2(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 2);
	// extsb r24,r30
	r24.s64 = r30.s8;
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r30,r28,4,0,27
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r28,r24,4,0,27
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// lwzx r30,r30,r26
	r30.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | r30.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_8274A490:
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274a52c
	if (!ctx.cr6.eq) goto loc_8274A52C;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r6,r30
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r30.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x8274a52c
	if (ctx.cr6.eq) goto loc_8274A52C;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r30,r6,r30
	r30.u64 = ctx.r6.u64 + r30.u64;
	// lhz r29,-2(r30)
	r29.u64 = REX_LOAD_U16(r30.u32 + -2);
	// lhz r30,0(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274a52c
	if (!ctx.cr6.eq) goto loc_8274A52C;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a52c
	if (!ctx.cr6.eq) goto loc_8274A52C;
	// lbz r6,1(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addi r27,r31,256
	r27.s64 = r31.s64 + 256;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r24)
	r28.u64 = REX_LOAD_U8(r24.u32 + 1);
	// extsb r26,r30
	r26.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_8274A52C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x8274a5d8
	if (!ctx.cr6.eq) goto loc_8274A5D8;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r6,r30
	r30.u64 = ctx.r6.u64 + r30.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x8274a5d8
	if (ctx.cr6.eq) goto loc_8274A5D8;
	// lwz r30,1772(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r29,r22,1,0,30
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r30,r6
	r28.u64 = r30.u64 + ctx.r6.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// lhz r28,2(r28)
	r28.u64 = REX_LOAD_U16(r28.u32 + 2);
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x8274a5d8
	if (!ctx.cr6.eq) goto loc_8274A5D8;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r30,2(r29)
	r30.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a5d8
	if (!ctx.cr6.eq) goto loc_8274A5D8;
	// lbz r6,1(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,512
	r27.s64 = r31.s64 + 512;
	// lbz r30,3(r8)
	r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// addi r26,r31,768
	r26.s64 = r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,3(r25)
	r30.u64 = REX_LOAD_U8(r25.u32 + 3);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,1(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_8274A5D8:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r26,r23,1,0,30
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r26,r6
	ctx.r6.u64 = r26.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274a66c
	if (ctx.cr6.eq) goto loc_8274A66C;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r26,r6
	ctx.r6.u64 = r26.u64 + ctx.r6.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274a66c
	if (!ctx.cr6.eq) goto loc_8274A66C;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274a66c
	if (!ctx.cr6.eq) goto loc_8274A66C;
	// lbz r6,1(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,256
	r27.s64 = r31.s64 + 256;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r23,r30
	r23.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r22,1(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r23,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	r30.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & r22.u64;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_8274A66C:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// rlwinm r27,r21,1,0,30
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r27,r6
	ctx.r6.u64 = REX_LOAD_U16(r27.u32 + ctx.r6.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274a6f8
	if (ctx.cr6.eq) goto loc_8274A6F8;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// lhzx r30,r6,r26
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r26.u32);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a6f8
	if (!ctx.cr6.eq) goto loc_8274A6F8;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r30,r6,r26
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r26.u32);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a6f8
	if (!ctx.cr6.eq) goto loc_8274A6F8;
	// lbz r6,2(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,512
	r23.s64 = r31.s64 + 512;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r22,r31,768
	r22.s64 = r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r21,r30
	r21.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,2(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r21,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r23
	r30.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// lwzx r6,r6,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r22.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_8274A6F8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274a78c
	if (!ctx.cr6.eq) goto loc_8274A78C;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// lhzx r6,r27,r6
	ctx.r6.u64 = REX_LOAD_U16(r27.u32 + ctx.r6.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274a78c
	if (ctx.cr6.eq) goto loc_8274A78C;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a78c
	if (!ctx.cr6.eq) goto loc_8274A78C;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a78c
	if (!ctx.cr6.eq) goto loc_8274A78C;
	// lbz r6,2(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,256
	r23.s64 = r31.s64 + 256;
	// lbz r30,3(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,3(r24)
	r30.u64 = REX_LOAD_U8(r24.u32 + 3);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,2(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	r30.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r6,r6,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & r21.u64;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_8274A78C:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274a828
	if (ctx.cr6.eq) goto loc_8274A828;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r30,r6,r26
	r30.u64 = ctx.r6.u64 + r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a828
	if (!ctx.cr6.eq) goto loc_8274A828;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r30,r6,r26
	r30.u64 = ctx.r6.u64 + r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8274a828
	if (!ctx.cr6.eq) goto loc_8274A828;
	// lbz r6,3(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r26,r31,512
	r26.s64 = r31.s64 + 512;
	// lbz r30,1(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r23,r31,768
	r23.s64 = r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,3(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r26
	r30.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// lwzx r6,r6,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & r21.u64;
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_8274A828:
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x8274a8b8
	if (ctx.cr6.eq) goto loc_8274A8B8;
	// lwz r6,1772(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1772);
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274a8b8
	if (!ctx.cr6.eq) goto loc_8274A8B8;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274a8b8
	if (!ctx.cr6.eq) goto loc_8274A8B8;
	// lbz r6,3(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r27,r31,256
	r27.s64 = r31.s64 + 256;
	// lbz r30,1(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r30
	r26.s64 = r30.s8;
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,3(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	r30.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 & r23.u64;
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_8274A8B8:
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r29,r5,r4
	r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// bne cr6,0x8274a9b4
	if (!ctx.cr6.eq) goto loc_8274A9B4;
	// lwz r4,1780(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x8274a9b4
	if (ctx.cr6.eq) goto loc_8274A9B4;
	// subf r6,r6,r29
	ctx.r6.u64 = r29.u64 - ctx.r6.u64;
	// lwz r4,1780(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r5
	r30.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// bne cr6,0x8274a9b4
	if (!ctx.cr6.eq) goto loc_8274A9B4;
	// lwz r4,1784(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// lhzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// lhzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8274a9b4
	if (!ctx.cr6.eq) goto loc_8274A9B4;
	// lbz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// addi r28,r31,512
	r28.s64 = r31.s64 + 512;
	// lbz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r27,r31,768
	r27.s64 = r31.s64 + 768;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U8(r25.u32 + 4);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r30,4(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r26,4(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,5(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + r30.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r30,r31,512
	r30.s64 = r31.s64 + 512;
	// addi r26,r31,768
	r26.s64 = r31.s64 + 768;
	// lwzx r4,r4,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	// lwzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// and r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r5,5(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r6,5(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 5);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,5(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r5,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	// lwzx r6,r4,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 & r23.u64;
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_8274A9B4:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8274aa98
	if (!ctx.cr6.eq) goto loc_8274AA98;
	// lwz r6,1780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// beq cr6,0x8274aa98
	if (ctx.cr6.eq) goto loc_8274AA98;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lhz r5,-2(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8274aa98
	if (!ctx.cr6.eq) goto loc_8274AA98;
	// lwz r6,1784(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lhz r6,-2(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8274aa98
	if (!ctx.cr6.eq) goto loc_8274AA98;
	// lbz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lbz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// addi r30,r31,256
	r30.s64 = r31.s64 + 256;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lbz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U8(r24.u32 + 4);
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwzx r6,r6,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// or r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 | ctx.r6.u64;
	// and r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 & r29.u64;
	// stb r8,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r3,5(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r5,5(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// lbz r10,5(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + 5);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r9,r3,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + r30.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r6,r7,r28
	ctx.r6.u64 = ctx.r7.u64 & r28.u64;
	// stb r6,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
loc_8274AA98:
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82788A70) {
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
	ctx.lr = 0x82788A78;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r11,-27624(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -27624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82788b98
	if (ctx.cr6.eq) goto loc_82788B98;
	// lwz r25,14492(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwz r10,14500(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// subf. r23,r7,r8
	r23.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mullw r31,r25,r7
	r31.s64 = int64_t(r25.s32) * int64_t(ctx.r7.s32);
	// lwz r27,14644(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 14644);
	// lwz r26,14588(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// lwz r30,14544(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 14544);
	// lwz r29,14548(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 14548);
	// lwz r28,14540(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 14540);
	// lwz r22,14480(r9)
	r22.u64 = REX_LOAD_U32(ctx.r9.u32 + 14480);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// add r24,r10,r3
	r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mullw r27,r26,r7
	r27.s64 = int64_t(r26.s32) * int64_t(ctx.r7.s32);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// add r31,r27,r28
	r31.u64 = r27.u64 + r28.u64;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r30,r11,r6
	r30.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// add r11,r31,r4
	ctx.r11.u64 = r31.u64 + ctx.r4.u64;
	// ble 0x82788b20
	if (!ctx.cr0.gt) goto loc_82788B20;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82788AF0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82788b10
	if (!ctx.cr6.gt) goto loc_82788B10;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
loc_82788B04:
	// lbzu r4,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// stbu r4,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r4.u8);
	ctx.r5.u32 = ea;
	// bdnz 0x82788b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82788B04;
loc_82788B10:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// bne 0x82788af0
	if (!ctx.cr0.eq) goto loc_82788AF0;
loc_82788B20:
	// lwz r11,14484(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14484);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// lwz r6,14524(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 14524);
	// srawi r31,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r31.s64 = r23.s32 >> 1;
	// subf r4,r8,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r8,14492(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r7,14644(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14644);
	// li r10,3
	ctx.r10.s64 = 3;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addze r4,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r4.s64 = temp.s64;
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// rlwinm r29,r5,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// rlwinm r31,r9,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r6,r24,3
	ctx.r6.s64 = r24.s64 + 3;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r24,1
	ctx.r5.s64 = r24.s64 + 1;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// bl 0x827887d8
	ctx.lr = 0x82788B90;
	sub_827887D8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce0
	return;
loc_82788B98:
	// lwz r27,14588(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// subf r26,r7,r8
	r26.u64 = ctx.r8.u64 - ctx.r7.u64;
	// lwz r31,14604(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 14604);
	// mullw r10,r27,r7
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r7.s32);
	// lwz r11,14608(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 14608);
	// lwz r8,14492(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// lwz r25,14516(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 14516);
	// lwz r28,14500(r9)
	r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 14500);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// srawi r24,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r24.s64 = r31.s32 >> 1;
	// mullw r29,r8,r7
	r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addze r8,r24
	temp.s64 = r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r24.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r24,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r24.s64 = ctx.r11.s32 >> 2;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// addze r11,r24
	temp.s64 = r24.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r24.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r31,r25,3
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7) != 0);
	r31.s64 = r25.s32 >> 3;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addze r8,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r25,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r25.s64 = r26.s32 >> 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r26,r8,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r29,r28
	r31.u64 = r29.u64 + r28.u64;
	// subf r10,r26,r27
	ctx.r10.u64 = r27.u64 - r26.u64;
	// addze. r20,r25
	temp.s64 = r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r25.u32;
	r20.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r25,r7,r4
	r25.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// add r24,r11,r5
	r24.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r23,r11,r6
	r23.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addze r28,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r28.s64 = temp.s64;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// ble 0x82788cc8
	if (!ctx.cr0.gt) goto loc_82788CC8;
	// add r22,r10,r27
	r22.u64 = ctx.r10.u64 + r27.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// addi r6,r23,-1
	ctx.r6.s64 = r23.s64 + -1;
	// addi r7,r24,-1
	ctx.r7.s64 = r24.s64 + -1;
loc_82788C3C:
	// lwz r10,14492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// ble cr6,0x82788cac
	if (!ctx.cr6.gt) goto loc_82788CAC;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// addi r5,r3,-4
	ctx.r5.s64 = ctx.r3.s64 + -4;
loc_82788C60:
	// lbzu r31,1(r6)
	ea = 1 + ctx.r6.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// lbz r19,1(r11)
	r19.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r30,1(r7)
	ea = 1 + ctx.r7.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// rotlwi r31,r31,16
	r31.u64 = __builtin_rotateleft32(r31.u32, 16);
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r19,r19,16
	r19.u64 = __builtin_rotateleft32(r19.u32, 16);
	// or r31,r31,r30
	r31.u64 = r31.u64 | r30.u64;
	// or r30,r19,r18
	r30.u64 = r19.u64 | r18.u64;
	// rlwinm r19,r31,8,0,23
	r19.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r31,r30,r19
	r31.u64 = r30.u64 | r19.u64;
	// stwu r31,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r5.u32 = ea;
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rotlwi r31,r31,16
	r31.u64 = __builtin_rotateleft32(r31.u32, 16);
	// or r31,r31,r30
	r31.u64 = r31.u64 | r30.u64;
	// or r31,r31,r19
	r31.u64 = r31.u64 | r19.u64;
	// stwu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x82788c60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82788C60;
loc_82788CAC:
	// lwz r10,14496(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// bne 0x82788c3c
	if (!ctx.cr0.eq) goto loc_82788C3C;
loc_82788CC8:
	// lwz r7,14516(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 14516);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,14588(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 14588);
	// add r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 + r23.u64;
	// srawi r4,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// add r30,r10,r21
	r30.u64 = ctx.r10.u64 + r21.u64;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// add r7,r8,r24
	ctx.r7.u64 = ctx.r8.u64 + r24.u64;
	// subf r31,r8,r3
	r31.u64 = ctx.r3.u64 - ctx.r8.u64;
	// add r11,r26,r25
	ctx.r11.u64 = r26.u64 + r25.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,0
	r29.s64 = 0;
	// subf r28,r10,r5
	r28.u64 = ctx.r5.u64 - ctx.r10.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// srawi r8,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r8.s64 = r28.s32 >> 1;
	// addze r26,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	r26.s64 = temp.s64;
	// ble cr6,0x82788db4
	if (!ctx.cr6.gt) goto loc_82788DB4;
	// addi r25,r20,-1
	r25.s64 = r20.s64 + -1;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
loc_82788D18:
	// lwz r10,14492(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14492);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + r30.u64;
	// ble cr6,0x82788d88
	if (!ctx.cr6.gt) goto loc_82788D88;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// addi r8,r30,-4
	ctx.r8.s64 = r30.s64 + -4;
loc_82788D3C:
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbz r24,1(r11)
	r24.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r5,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// lbz r23,0(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r24,r24,16
	r24.u64 = __builtin_rotateleft32(r24.u32, 16);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r5,r24,r23
	ctx.r5.u64 = r24.u64 | r23.u64;
	// rlwinm r24,r6,8,0,23
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// or r6,r5,r24
	ctx.r6.u64 = ctx.r5.u64 | r24.u64;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r6,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r6,r5,r24
	ctx.r6.u64 = ctx.r5.u64 | r24.u64;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82788d3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82788D3C;
loc_82788D88:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r4,r4,r26
	ctx.r4.u64 = ctx.r4.u64 + r26.u64;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + r26.u64;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(r29.s32, r25.s32, ctx.xer);
	// bge cr6,0x82788da4
	if (!ctx.cr6.lt) goto loc_82788DA4;
	// lwz r10,14496(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 14496);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
loc_82788DA4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// blt cr6,0x82788d18
	if (ctx.cr6.lt) goto loc_82788D18;
loc_82788DB4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_827AC2E0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,18(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// lhz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 16);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lhz r6,50(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 50);
	// rlwinm r4,r10,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// lhz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 52);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r6,2,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFF8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827ac328
	if (ctx.cr6.eq) goto loc_827AC328;
	// rlwinm r11,r11,2,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
	// li r6,-9
	ctx.r6.s64 = -9;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// b 0x827ac330
	goto loc_827AC330;
loc_827AC328:
	// li r6,-8
	ctx.r6.s64 = -8;
	// rlwinm r4,r11,2,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF8;
loc_827AC330:
	// cmpwi cr6,r3,16384
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16384, ctx.xer);
	// beq cr6,0x827ac3ac
	if (ctx.cr6.eq) goto loc_827AC3AC;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bge cr6,0x827ac368
	if (!ctx.cr6.lt) goto loc_827AC368;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r8,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r8.u64;
	// b 0x827ac37c
	goto loc_827AC37C;
loc_827AC368:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x827ac37c
	if (!ctx.cr6.gt) goto loc_827AC37C;
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_827AC37C:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x827ac398
	if (!ctx.cr6.lt) goto loc_827AC398;
	// subf r11,r9,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_827AC398:
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x827ac3ac
	if (!ctx.cr6.gt) goto loc_827AC3AC;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827AC3AC:
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B01D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x827B01D8;
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltish v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x2)));
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r10,1120
	ctx.r10.s64 = 1120;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// vslh v12,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r7,0
	ctx.r7.s64 = 0;
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// vsubshs v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827af298
	ctx.lr = 0x827B0220;
	sub_827AF298(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vspltish v1,6
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x6)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827afb20
	ctx.lr = 0x827B0238;
	sub_827AFB20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827B28B8) {
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
	// bl 0x826a1cb8
	ctx.lr = 0x827B28C0;
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
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827BABA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827b9130
	sub_827B9130(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827BB378) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827BB380;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827b1d48
	ctx.lr = 0x827BB3A8;
	sub_827B1D48(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827b98b0
	ctx.lr = 0x827BB3C8;
	sub_827B98B0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827BBD38) {
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
	// bl 0x826a1c80
	ctx.lr = 0x827BBD40;
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,1124(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1124);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,1076(r1)
	REX_STORE_U32(ctx.r1.u32 + 1076, ctx.r5.u32);
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// stw r6,1084(r1)
	REX_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// and r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	// slw r6,r5,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0xD0C))));
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x827bc204
	if (ctx.cr6.eq) goto loc_827BC204;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x827bc050
	if (ctx.cr6.eq) goto loc_827BC050;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bbfe8
	if (!ctx.cr6.gt) goto loc_827BBFE8;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,-96
	ctx.r4.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r14,144
	r14.s64 = 144;
	// li r15,192
	r15.s64 = 192;
	// li r16,240
	r16.s64 = 240;
	// li r17,-80
	r17.s64 = -80;
	// li r18,-32
	r18.s64 = -32;
	// li r19,64
	r19.s64 = 64;
	// li r20,112
	r20.s64 = 112;
	// li r21,160
	r21.s64 = 160;
	// li r22,208
	r22.s64 = 208;
	// li r23,256
	r23.s64 = 256;
loc_827BBE10:
	// rlwinm r31,r8,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r30,r8,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r31,r31,r9
	r31.u64 = r31.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r30,r9
	r30.u64 = r30.u64 + ctx.r9.u64;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r29,r31,r8
	r29.u64 = r31.u64 + ctx.r8.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r25,r9,r8
	r25.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r26,r30,r8
	r26.u64 = r30.u64 + ctx.r8.u64;
	// add r28,r29,r8
	r28.u64 = r29.u64 + ctx.r8.u64;
	// lvx128 v60,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r27,r27,r9
	r27.u64 = r27.u64 + ctx.r9.u64;
	// vmrglb v26,v0,v5
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r24,r28,r8
	r24.u64 = r28.u64 + ctx.r8.u64;
	// lvx128 v56,r25,r10
	ea = (r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r29,r8
	ea = (r29.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r28,r8
	ea = (r28.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r24,r10
	ea = (r24.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v10
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v30,v0,v9
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v29,v0,v8
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r24
	temp.u32 = r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v22,v3,v27
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v25,v2,v3
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v2
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v23,v30,v31
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v19,v0,v4
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v7
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghb v27,v0,v6
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v12,v26
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v11,v12
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v15,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v27,v28
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v14,v19,v27
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v10,v11
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v30,v9,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v8,v9
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v5,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v7,v8
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v4,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v6,v7
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v3,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v12,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v2,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v25,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// vslh v24,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v16,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v20,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v15,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v19,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x827bbe10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BBE10;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_827BBFE8:
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x827bc320
	if (!ctx.cr6.gt) goto loc_827BC320;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// subf r30,r10,r8
	r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r4,-48
	ctx.r9.s64 = ctx.r4.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_827BC01C:
	// lbzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// lbzux r4,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r4.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r31,r3
	ctx.r4.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r4,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r3,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// sthu r5,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r5.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827bc01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BC01C;
	// b 0x827bc320
	goto loc_827BC320;
loc_827BC050:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r29,r3,r8
	r29.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r11,r8
	r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r31,r9,r8
	r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvsl v2,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v29,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,208
	r27.s64 = ctx.r1.s64 + 208;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r31,r8
	ctx.r11.u64 = r31.u64 + ctx.r8.u64;
	// lvx128 v39,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v30,v0,v6
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r11,r8
	r30.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v32,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v31,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v63,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,256
	r29.s64 = ctx.r1.s64 + 256;
	// lvx128 v62,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v34,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v30
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,304
	r26.s64 = ctx.r1.s64 + 304;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v29,v11,v12
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v30,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v27,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v10,v11
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v8,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v27
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,352
	r31.s64 = ctx.r1.s64 + 352;
	// vmrghb v9,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,400
	r30.s64 = ctx.r1.s64 + 400;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r25,r1,448
	r25.s64 = ctx.r1.s64 + 448;
	// vadduhm v24,v9,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v31,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v23,v8,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v26,v0,v31
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v25,v26,v6
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v2,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stvx128 v30,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stvx128 v29,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
	// stvx128 v27,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827BC1D0:
	// lbzx r31,r10,r5
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r3,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827bc1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BC1D0;
	// b 0x827bc320
	goto loc_827BC320;
loc_827BC204:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v58,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 + ctx.r8.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,208
	r29.s64 = ctx.r1.s64 + 208;
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v56,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,256
	r28.s64 = ctx.r1.s64 + 256;
	// lvx128 v53,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvsl v3,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// lvx128 v51,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v4,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v50,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v10,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v28,v12,v2
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v31,v10
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x827bc320
	if (!ctx.cr6.eq) goto loc_827BC320;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r30,r10,r8
	r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// subf r8,r10,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r10.u64;
loc_827BC2EC:
	// lbzx r29,r11,r30
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// lbzux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r4.u16);
	// mr r31,r29
	r31.u64 = r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x827bc2ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827BC2EC;
loc_827BC320:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,1076(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1076);
	// lwz r4,1084(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// bl 0x827b93f0
	ctx.lr = 0x827BC330;
	sub_827B93F0(ctx, base);
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x826a1cd0
	return;
}

