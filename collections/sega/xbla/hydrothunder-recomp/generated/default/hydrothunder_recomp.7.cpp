#include "hydrothunder_funcs.7.h"

DEFINE_REX_FUNC(sub_82120700) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82120708;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82120774
	if (ctx.cr6.eq) goto loc_82120774;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x82120728;
	sub_82120AC0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82120750
	if (!ctx.cr6.lt) goto loc_82120750;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8269cc20
	ctx.lr = 0x8212074C;
	sub_8269CC20(ctx, base);
	// b 0x8212075c
	goto loc_8212075C;
loc_82120750:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_8212075C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
loc_82120774:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212A628) {
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
	ctx.lr = 0x8212A630;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 4);
	// b 0x8212a66c
	goto loc_8212A66C;
loc_8212A648:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x8212A654;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212a664
	if (!ctx.cr0.lt) goto loc_8212A664;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8212a66c
	goto loc_8212A66C;
loc_8212A664:
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8212A66C:
	// lbz r11,65(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212a648
	if (ctx.cr0.eq) goto loc_8212A648;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212a69c
	if (ctx.cr6.eq) goto loc_8212A69C;
	// addi r4,r27,16
	ctx.r4.s64 = r27.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120780
	ctx.lr = 0x8212A694;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8212a750
	if (!ctx.cr0.lt) goto loc_8212A750;
loc_8212A69C:
	// li r30,0
	r30.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// std r30,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r30.u64);
	// bl 0x82120d70
	ctx.lr = 0x8212A6B4;
	sub_82120D70(ctx, base);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8215efb0
	ctx.lr = 0x8212A6C4;
	sub_8215EFB0(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822f6280
	ctx.lr = 0x8212A6CC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8212a75c
	if (ctx.cr0.eq) goto loc_8212A75C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addic. r29,r31,16
	ctx.xer.ca = r31.u32 > 4294967279;
	r29.s64 = r31.s64 + 16;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stb r30,64(r31)
	REX_STORE_U8(r31.u32 + 64, r30.u8);
	// stb r30,65(r31)
	REX_STORE_U8(r31.u32 + 65, r30.u8);
	// beq 0x8212a718
	if (ctx.cr0.eq) goto loc_8212A718;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120d70
	ctx.lr = 0x8212A708;
	sub_82120D70(ctx, base);
	// stw r30,32(r29)
	REX_STORE_U32(r29.u32 + 32, r30.u32);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8215efb0
	ctx.lr = 0x8212A718;
	sub_8215EFB0(ctx, base);
loc_8212A718:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215e730
	ctx.lr = 0x8212A72C;
	sub_8215E730(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f0f0
	ctx.lr = 0x8212A738;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8212A748;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8212A750;
	sub_8215F0F0(ctx, base);
loc_8212A750:
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d04
	return;
loc_8212A75C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8212A774;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82134250) {
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
	ctx.lr = 0x82134258;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821342e8
	if (ctx.cr0.eq) goto loc_821342E8;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821342d8
	if (!ctx.cr6.gt) goto loc_821342D8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r4,24
	r28.s64 = ctx.r4.s64 + 24;
	// li r30,0
	r30.s64 = 0;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_82134290:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// slw r4,r11,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// bl 0x822c80f8
	ctx.lr = 0x821342A0;
	sub_822C80F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x822c71d8
	ctx.lr = 0x821342C4;
	sub_822C71D8(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82134290
	if (ctx.cr6.lt) goto loc_82134290;
loc_821342D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822c80f8
	ctx.lr = 0x821342E4;
	sub_822C80F8(ctx, base);
	// b 0x82134310
	goto loc_82134310;
loc_821342E8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r4,24
	ctx.r6.s64 = ctx.r4.s64 + 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x822c71d8
	ctx.lr = 0x82134310;
	sub_822C71D8(ctx, base);
loc_82134310:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8213A710) {
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
	ctx.lr = 0x8213A734;
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
	ctx.lr = 0x8213A74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6112(r10)
	REX_STORE_U32(ctx.r10.u32 + 6112, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213CB78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,41(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8213cb98
	if (!ctx.cr0.eq) goto loc_8213CB98;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8213CB98:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213cbb8
	if (!ctx.cr6.eq) goto loc_8213CBB8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8213cbd4
	goto loc_8213CBD4;
loc_8213CBB8:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213cbd0
	if (!ctx.cr6.eq) goto loc_8213CBD0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8213cbd4
	goto loc_8213CBD4;
loc_8213CBD0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8213CBD4:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82140C38) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,-16876
	ctx.r4.s64 = ctx.r10.s64 + -16876;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140C6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82140c84
	if (!ctx.cr6.eq) goto loc_82140C84;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stb r11,-17021(r10)
	REX_STORE_U8(ctx.r10.u32 + -17021, ctx.r11.u8);
loc_82140C84:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x82140c94
	if (!ctx.cr6.eq) goto loc_82140C94;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82140C94:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140CAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6044(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82140CC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_821470D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821470D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,76(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r3,76
	r30.s64 = ctx.r3.s64 + 76;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82147128
	goto loc_82147128;
loc_821470F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82147124
	if (!ctx.cr6.eq) goto loc_82147124;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x82147114;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x82147128
	goto loc_82147128;
loc_82147124:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82147128:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x821470f0
	if (!ctx.cr6.eq) goto loc_821470F0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82149CD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82149CE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,248(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 248);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r28,72(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82186288
	ctx.lr = 0x82149D00;
	sub_82186288(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,20(r29)
	REX_STORE_U32(r29.u32 + 20, ctx.r11.u32);
	// lwz r10,32(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 32);
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 24);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r29,4(r28)
	REX_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r10,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r10.u32);
	// stw r9,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r9.u32);
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 252);
	// stw r8,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r8.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82149d4c
	if (ctx.cr6.eq) goto loc_82149D4C;
	// bl 0x82185fe8
	ctx.lr = 0x82149D4C;
	sub_82185FE8(ctx, base);
loc_82149D4C:
	// lwz r7,56(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 56);
	// b 0x82149df4
	goto loc_82149DF4;
loc_82149D54:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149df0
	if (ctx.cr6.eq) goto loc_82149DF0;
loc_82149D64:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82149de4
	if (!ctx.cr6.eq) goto loc_82149DE4;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,68(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149de4
	if (ctx.cr6.eq) goto loc_82149DE4;
loc_82149D8C:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82149da8
	if (ctx.cr6.eq) goto loc_82149DA8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82149d8c
	if (!ctx.cr6.eq) goto loc_82149D8C;
loc_82149DA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82149de4
	if (ctx.cr6.eq) goto loc_82149DE4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82149dc4
	if (ctx.cr6.eq) goto loc_82149DC4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x82149dcc
	goto loc_82149DCC;
loc_82149DC4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r10.u32);
loc_82149DCC:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_82149DE4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82149d64
	if (!ctx.cr6.eq) goto loc_82149D64;
loc_82149DF0:
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
loc_82149DF4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82149d54
	if (!ctx.cr6.eq) goto loc_82149D54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82151E18) {
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
	ctx.lr = 0x82151E20;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,-8472
	ctx.r11.s64 = ctx.r11.s64 + -8472;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,-10640
	ctx.r10.s64 = ctx.r10.s64 + -10640;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r9,-10532
	ctx.r9.s64 = ctx.r9.s64 + -10532;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x82151E6C;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82151E78;
	sub_8269D1B8(ctx, base);
	// li r26,8
	r26.s64 = 8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// li r28,3
	r28.s64 = 3;
	// addi r27,r11,-27112
	r27.s64 = ctx.r11.s64 + -27112;
loc_82151E94:
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,8(r29)
	REX_STORE_U64(r29.u32 + 8, r30.u64);
	// addi r3,r29,44
	ctx.r3.s64 = r29.s64 + 44;
	// std r30,16(r29)
	REX_STORE_U64(r29.u32 + 16, r30.u64);
	// stw r30,28(r29)
	REX_STORE_U32(r29.u32 + 28, r30.u32);
	// stw r30,32(r29)
	REX_STORE_U32(r29.u32 + 32, r30.u32);
	// stw r30,36(r29)
	REX_STORE_U32(r29.u32 + 36, r30.u32);
	// stw r30,40(r29)
	REX_STORE_U32(r29.u32 + 40, r30.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82151EC0;
	sub_826A2E60(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,104
	r29.s64 = r29.s64 + 104;
	// bge 0x82151e94
	if (!ctx.cr0.lt) goto loc_82151E94;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r30,440(r31)
	REX_STORE_U32(r31.u32 + 440, r30.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
	// addi r11,r31,440
	ctx.r11.s64 = r31.s64 + 440;
	// stw r30,448(r31)
	REX_STORE_U32(r31.u32 + 448, r30.u32);
	// bl 0x8269d1d0
	ctx.lr = 0x82151EE8;
	sub_8269D1D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x82151EF4;
	sub_8269D1B8(ctx, base);
	// stw r29,440(r31)
	REX_STORE_U32(r31.u32 + 440, r29.u32);
	// stw r26,448(r31)
	REX_STORE_U32(r31.u32 + 448, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,452(r31)
	REX_STORE_U8(r31.u32 + 452, r30.u8);
	// stb r30,453(r31)
	REX_STORE_U8(r31.u32 + 453, r30.u8);
	// stb r30,454(r31)
	REX_STORE_U8(r31.u32 + 454, r30.u8);
	// stw r30,456(r31)
	REX_STORE_U32(r31.u32 + 456, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82159898) {
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
	ctx.lr = 0x821598A0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 260);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821599b8
	if (ctx.cr0.eq) goto loc_821599B8;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// li r12,-31872
	ctx.r12.s64 = -31872;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,6060(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6060);
	// lwz r9,6056(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 6056);
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,137
	ctx.r12.s64 = 137;
	// rldicr r12,r12,52,11
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFF0000000000000;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821599b8
	if (!ctx.cr6.gt) goto loc_821599B8;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r26,0
	r26.s64 = 0;
	// addi r22,r8,-25252
	r22.s64 = ctx.r8.s64 + -25252;
	// addi r21,r10,-25320
	r21.s64 = ctx.r10.s64 + -25320;
loc_82159908:
	// li r12,-8
	ctx.r12.s64 = -8;
	// ld r8,104(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// add r10,r26,r9
	ctx.r10.u64 = r26.u64 + ctx.r9.u64;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r29,56,7
	ctx.r7.u64 = __builtin_rotateleft64(r29.u64, 56) & 0xFF00000000000000;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// addi r27,r10,224
	r27.s64 = ctx.r10.s64 + 224;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// li r30,0
	r30.s64 = 0;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// lwz r10,196(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 196);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// addi r31,r10,16
	r31.s64 = ctx.r10.s64 + 16;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821599a4
	if (!ctx.cr6.gt) goto loc_821599A4;
	// li r28,0
	r28.s64 = 0;
loc_82159958:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82159968
	if (ctx.cr6.lt) goto loc_82159968;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82159978
	if (ctx.cr6.lt) goto loc_82159978;
loc_82159968:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x82159978;
	sub_821231D0(ctx, base);
loc_82159978:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x821a52c8
	ctx.lr = 0x82159988;
	sub_821A52C8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,80
	r28.s64 = r28.s64 + 80;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82159958
	if (ctx.cr6.lt) goto loc_82159958;
	// lwz r11,6060(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 6060);
	// lwz r9,6056(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 6056);
loc_821599A4:
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,720
	r26.s64 = r26.s64 + 720;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82159908
	if (ctx.cr6.lt) goto loc_82159908;
loc_821599B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82160178) {
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
	ctx.lr = 0x82160180;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x821601c0
	goto loc_821601C0;
loc_8216019C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120780
	ctx.lr = 0x821601A8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821601b8
	if (!ctx.cr0.lt) goto loc_821601B8;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x821601c0
	goto loc_821601C0;
loc_821601B8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821601C0:
	// lbz r11,65(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 65);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216019c
	if (ctx.cr0.eq) goto loc_8216019C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821601f8
	if (ctx.cr6.eq) goto loc_821601F8;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x821601E8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821601f8
	if (ctx.cr0.lt) goto loc_821601F8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x82160204
	goto loc_82160204;
loc_821601F8:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82160204:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82168600) {
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
	// lwz r31,68(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8216866c
	goto loc_8216866C;
loc_82168628:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82168660
	if (!ctx.cr6.gt) goto loc_82168660;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82168644:
	// lwzx r6,r9,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// beq cr6,0x82168678
	if (ctx.cr6.eq) goto loc_82168678;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82168644
	if (ctx.cr6.lt) goto loc_82168644;
loc_82168660:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82169990
	ctx.lr = 0x82168668;
	sub_82169990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8216866C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82168628
	if (!ctx.cr6.eq) goto loc_82168628;
	// b 0x821686c4
	goto loc_821686C4;
loc_82168678:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// fsel f0,f0,f12,f13
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821686C4:
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

DEFINE_REX_FUNC(sub_82171528) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217154C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82126238
	ctx.lr = 0x8217155C;
	sub_82126238(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821233a0
	ctx.lr = 0x82171564;
	sub_821233A0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x82171578
	if (!ctx.cr6.lt) goto loc_82171578;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82171578:
	// bl 0x823eeca0
	ctx.lr = 0x8217157C;
	sub_823EECA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821715b0
	if (!ctx.cr6.eq) goto loc_821715B0;
	// li r31,0
	r31.s64 = 0;
loc_82171588:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82171598;
	sub_82120AC0(ctx, base);
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
loc_821715B0:
	// li r31,1
	r31.s64 = 1;
	// b 0x82171588
	goto loc_82171588;
}

DEFINE_REX_FUNC(sub_821763F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// std r6,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r6.u64);
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r4,16
	ctx.r6.s64 = ctx.r4.s64 + 16;
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// ld r31,8(r10)
	r31.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r10,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r10.u64);
	// std r31,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, r31.u64);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,40(r4)
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.r10.u64);
	// std r9,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r9.u64);
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r10.u64);
	// std r9,48(r4)
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.r9.u64);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r10,72(r4)
	REX_STORE_U64(ctx.r4.u32 + 72, ctx.r10.u64);
	// std r9,64(r4)
	REX_STORE_U64(ctx.r4.u32 + 64, ctx.r9.u64);
	// lfs f13,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// ld r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r10,88(r4)
	REX_STORE_U64(ctx.r4.u32 + 88, ctx.r10.u64);
	// std r9,80(r4)
	REX_STORE_U64(ctx.r4.u32 + 80, ctx.r9.u64);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f12,-28(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,96(r4)
	REX_STORE_U64(ctx.r4.u32 + 96, ctx.r11.u64);
	// std r10,104(r4)
	REX_STORE_U64(ctx.r4.u32 + 104, ctx.r10.u64);
	// lfs f0,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// std r11,112(r4)
	REX_STORE_U64(ctx.r4.u32 + 112, ctx.r11.u64);
	// std r10,120(r4)
	REX_STORE_U64(ctx.r4.u32 + 120, ctx.r10.u64);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821840D8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2ca4
	ctx.lr = 0x821840F0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f30,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	f30.f64 = double(temp.f32);
	// addi r31,r11,16592
	r31.s64 = ctx.r11.s64 + 16592;
	// lfs f29,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	f29.f64 = double(temp.f32);
	// fmuls f12,f29,f30
	ctx.f12.f64 = double(float(f29.f64 * f30.f64));
	// lfs f28,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	f28.f64 = double(temp.f32);
	// lfs f27,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	f27.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,596(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f31,f30
	ctx.f0.f64 = double(float(f31.f64 * f30.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f28,f12
	ctx.f13.f64 = double(float(f28.f64 - ctx.f12.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 - ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x82184158;
	sub_8216CEA8(ctx, base);
	// fmuls f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 * f29.f64));
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(f31.f64 * f30.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x82184180;
	sub_8216CEA8(ctx, base);
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f30,196(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 196);
	f30.f64 = double(temp.f32);
	// lfs f29,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	f29.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f29,f30
	ctx.f0.f64 = double(float(f29.f64 * f30.f64));
	// lfs f28,160(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	f28.f64 = double(temp.f32);
	// lfs f27,164(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	f27.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(f31.f64 * f30.f64));
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f0,f27,f13
	ctx.f0.f64 = double(float(f27.f64 - ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x821841C0;
	sub_8216CEA8(ctx, base);
	// fmuls f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 * f29.f64));
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(f31.f64 * f30.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8216cea8
	ctx.lr = 0x821841E8;
	sub_8216CEA8(ctx, base);
	// lfs f9,168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r31,256
	ctx.r9.s64 = r31.s64 + 256;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// rlwinm r8,r11,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fadds f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fadds f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// addi r6,r31,256
	ctx.r6.s64 = r31.s64 + 256;
	// lfsx f5,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsel f11,f5,f8,f9
	ctx.f11.f64 = ctx.f5.f64 >= 0.0 ? ctx.f8.f64 : ctx.f9.f64;
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfsx f11,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// std r11,16(r30)
	REX_STORE_U64(r30.u32 + 16, ctx.r11.u64);
	// fsel f11,f11,f8,f9
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f8.f64 : ctx.f9.f64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// std r10,24(r30)
	REX_STORE_U64(r30.u32 + 24, ctx.r10.u64);
	// std r9,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r9.u64);
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// std r8,40(r30)
	REX_STORE_U64(r30.u32 + 40, ctx.r8.u64);
	// std r7,48(r30)
	REX_STORE_U64(r30.u32 + 48, ctx.r7.u64);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cf0
	ctx.lr = 0x821842DC;
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

DEFINE_REX_FUNC(sub_8219AE90) {
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
	ctx.lr = 0x8219AE98;
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
	// bne cr6,0x8219aee0
	if (!ctx.cr6.eq) goto loc_8219AEE0;
	// lwz r6,4(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_8219AEC8:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8219AECC:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8219AED8:
	// bl 0x8219b448
	ctx.lr = 0x8219AEDC;
	sub_8219B448(ctx, base);
	// b 0x8219b03c
	goto loc_8219B03C;
loc_8219AEE0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219af0c
	if (!ctx.cr6.eq) goto loc_8219AF0C;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8219AEFC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219b020
	if (!ctx.cr0.lt) goto loc_8219B020;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8219aec8
	goto loc_8219AEC8;
loc_8219AF0C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219af3c
	if (!ctx.cr6.eq) goto loc_8219AF3C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219AF24;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219b020
	if (!ctx.cr0.lt) goto loc_8219B020;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8219aecc
	goto loc_8219AECC;
loc_8219AF3C:
	// addi r26,r29,12
	r26.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8219AF4C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219afac
	if (!ctx.cr0.lt) goto loc_8219AFAC;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219b618
	ctx.lr = 0x8219AF60;
	sub_8219B618(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219AF70;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219afac
	if (!ctx.cr0.lt) goto loc_8219AFAC;
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
	// lbz r11,89(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219afa0
	if (ctx.cr0.eq) goto loc_8219AFA0;
loc_8219AF98:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8219aed8
	goto loc_8219AED8;
loc_8219AFA0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_8219AFA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8219aed8
	goto loc_8219AED8;
loc_8219AFAC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x8219AFB8;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219b020
	if (!ctx.cr0.lt) goto loc_8219B020;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82150a88
	ctx.lr = 0x8219AFCC;
	sub_82150A88(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219aff4
	if (ctx.cr6.eq) goto loc_8219AFF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x8219AFEC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8219b020
	if (!ctx.cr0.lt) goto loc_8219B020;
loc_8219AFF4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,89(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219b018
	if (ctx.cr0.eq) goto loc_8219B018;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x8219af98
	goto loc_8219AF98;
loc_8219B018:
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8219afa4
	goto loc_8219AFA4;
loc_8219B020:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219b348
	ctx.lr = 0x8219B030;
	sub_8219B348(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8219B03C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821A4830) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x822c5e78
	sub_822C5E78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5A28) {
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
	ctx.lr = 0x821A5A30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r3,96
	r28.s64 = ctx.r3.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a5a54
	if (ctx.cr6.eq) goto loc_821A5A54;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a5b58
	if (!ctx.cr6.eq) goto loc_821A5B58;
loc_821A5A54:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r27,-1
	r27.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r29,r10,65535
	r29.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// ble cr6,0x821a5a78
	if (!ctx.cr6.gt) goto loc_821A5A78;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821A5A78:
	// bl 0x822f6338
	ctx.lr = 0x821A5A7C;
	sub_822F6338(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x821a5a8c
	if (!ctx.cr0.eq) goto loc_821A5A8C;
loc_821A5A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821a5b5c
	goto loc_821A5B5C;
loc_821A5A8C:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821a5aa4
	if (ctx.cr6.lt) goto loc_821A5AA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821A5AA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82170ea8
	ctx.lr = 0x821A5AB0;
	sub_82170EA8(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8264e5b0
	ctx.lr = 0x821A5AD0;
	sub_8264E5B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a5ae4
	if (ctx.cr0.eq) goto loc_821A5AE4;
loc_821A5AD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x821A5AE0;
	sub_8269D6A0(ctx, base);
	// b 0x821a5a84
	goto loc_821A5A84;
loc_821A5AE4:
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x8269d6a0
	ctx.lr = 0x821A5AEC;
	sub_8269D6A0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x821a5b00
	if (!ctx.cr6.gt) goto loc_821A5B00;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821A5B00:
	// bl 0x822f6338
	ctx.lr = 0x821A5B04;
	sub_822F6338(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// beq 0x821a5ad8
	if (ctx.cr0.eq) goto loc_821A5AD8;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r6,88(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8264e5b0
	ctx.lr = 0x821A5B2C;
	sub_8264E5B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d6a0
	ctx.lr = 0x821A5B38;
	sub_8269D6A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821a5b58
	if (ctx.cr6.eq) goto loc_821A5B58;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x8269d6a0
	ctx.lr = 0x821A5B48;
	sub_8269D6A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// b 0x821a5b5c
	goto loc_821A5B5C;
loc_821A5B58:
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
loc_821A5B5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821AD538) {
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
	ctx.lr = 0x821AD560;
	sub_821678F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ad938
	ctx.lr = 0x821AD568;
	sub_821AD938(ctx, base);
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

DEFINE_REX_FUNC(sub_821AF8D8) {
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
	ctx.lr = 0x821AF8E0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82151d50
	ctx.lr = 0x821AF900;
	sub_82151D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821af9cc
	if (ctx.cr0.eq) goto loc_821AF9CC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,143(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 143);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x821af954
	if (!ctx.cr0.eq) goto loc_821AF954;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f13,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// std r10,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
loc_821AF954:
	// lbz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821af9cc
	if (!ctx.cr0.eq) goto loc_821AF9CC;
	// ld r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 48);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 56);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r8,r31,-8
	ctx.r8.s64 = r31.s64 + -8;
	// std r7,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// std r5,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
loc_821AF988:
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r10,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821af988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AF988;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r11,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r11.u64);
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r9.u64);
loc_821AF9CC:
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x826a1e70
	ctx.lr = 0x821AF9E0;
	sub_826A1E70(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// std r10,96(r11)
	REX_STORE_U64(ctx.r11.u32 + 96, ctx.r10.u64);
	// ld r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 8);
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// ld r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 0);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// std r10,112(r11)
	REX_STORE_U64(ctx.r11.u32 + 112, ctx.r10.u64);
	// ld r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U64(r28.u32 + 8);
	// std r10,120(r11)
	REX_STORE_U64(ctx.r11.u32 + 120, ctx.r10.u64);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821AFA28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821BABD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BABE0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,-1
	r29.s64 = -1;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// addi r4,r4,40
	ctx.r4.s64 = ctx.r4.s64 + 40;
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stb r11,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r11.u8);
	// lbz r11,3(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 3);
	// stb r11,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r11.u8);
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lbz r11,6(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 6);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 7);
	// stb r11,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r11.u8);
	// lbz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 8);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
	// lbz r11,9(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 9);
	// stb r11,9(r31)
	REX_STORE_U8(r31.u32 + 9, ctx.r11.u8);
	// lbz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 10);
	// stb r11,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r11.u8);
	// lbz r11,11(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 11);
	// stb r11,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r11.u8);
	// lbz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 12);
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// lbz r11,13(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 13);
	// stb r11,13(r31)
	REX_STORE_U8(r31.u32 + 13, ctx.r11.u8);
	// lbz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 14);
	// stb r11,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r11.u8);
	// lbz r11,15(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 15);
	// stb r11,15(r31)
	REX_STORE_U8(r31.u32 + 15, ctx.r11.u8);
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
	// lbz r11,17(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 17);
	// stb r11,17(r31)
	REX_STORE_U8(r31.u32 + 17, ctx.r11.u8);
	// lbz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 18);
	// stb r11,18(r31)
	REX_STORE_U8(r31.u32 + 18, ctx.r11.u8);
	// lbz r11,19(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 19);
	// stb r11,19(r31)
	REX_STORE_U8(r31.u32 + 19, ctx.r11.u8);
	// lbz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 20);
	// stb r11,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r11.u8);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lbz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 28);
	// stb r11,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r11.u8);
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x82120b20
	ctx.lr = 0x821BACCC;
	sub_82120B20(ctx, base);
	// lbz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 68);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// bl 0x82120b20
	ctx.lr = 0x821BACE8;
	sub_82120B20(ctx, base);
	// lbz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 100);
	// stb r11,100(r31)
	REX_STORE_U8(r31.u32 + 100, ctx.r11.u8);
	// lbz r11,101(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 101);
	// stb r11,101(r31)
	REX_STORE_U8(r31.u32 + 101, ctx.r11.u8);
	// lbz r11,102(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 102);
	// stb r11,102(r31)
	REX_STORE_U8(r31.u32 + 102, ctx.r11.u8);
	// lbz r11,103(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 103);
	// stb r11,103(r31)
	REX_STORE_U8(r31.u32 + 103, ctx.r11.u8);
	// lbz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 104);
	// stb r11,104(r31)
	REX_STORE_U8(r31.u32 + 104, ctx.r11.u8);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// lfs f0,112(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lbz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 116);
	// stb r11,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C4938) {
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
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// addi r30,r11,-14036
	r30.s64 = ctx.r11.s64 + -14036;
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// bl 0x821d5aa8
	ctx.lr = 0x821C4964;
	sub_821D5AA8(ctx, base);
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x821d5aa8
	ctx.lr = 0x821C4970;
	sub_821D5AA8(ctx, base);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x821d5aa8
	ctx.lr = 0x821C497C;
	sub_821D5AA8(ctx, base);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x821d5aa8
	ctx.lr = 0x821C4988;
	sub_821D5AA8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120ac0
	ctx.lr = 0x821C4998;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82120ac0
	ctx.lr = 0x821C49A8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82120ac0
	ctx.lr = 0x821C49B8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821C49C8;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_821C8950) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C8958;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,225(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 225);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r4,144
	r31.s64 = ctx.r4.s64 + 144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c8990
	if (ctx.cr0.eq) goto loc_821C8990;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,6216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6216);
	// lwz r3,256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// bl 0x82293d58
	ctx.lr = 0x821C8988;
	sub_82293D58(ctx, base);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stb r30,81(r31)
	REX_STORE_U8(r31.u32 + 81, r30.u8);
loc_821C8990:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821CB020) {
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
	ctx.lr = 0x821CB028;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// bl 0x82178268
	ctx.lr = 0x821CB044;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stb r25,116(r31)
	REX_STORE_U8(r31.u32 + 116, r25.u8);
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// addi r11,r11,-14524
	ctx.r11.s64 = ctx.r11.s64 + -14524;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// bl 0x82120ac0
	ctx.lr = 0x821CB06C;
	sub_82120AC0(ctx, base);
	// addi r26,r31,148
	r26.s64 = r31.s64 + 148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821CB080;
	sub_82120AC0(ctx, base);
	// stw r25,180(r31)
	REX_STORE_U32(r31.u32 + 180, r25.u32);
	// stb r25,184(r31)
	REX_STORE_U8(r31.u32 + 184, r25.u8);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CB090;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x821cb0c0
	if (ctx.cr0.eq) goto loc_821CB0C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-24032
	ctx.r4.s64 = ctx.r11.s64 + -24032;
	// bl 0x82120600
	ctx.lr = 0x821CB0A8;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x821CB0BC;
	sub_82191600(ctx, base);
	// b 0x821cb0c4
	goto loc_821CB0C4;
loc_821CB0C0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CB0C4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CB0D8;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cb0f4
	if (ctx.cr0.eq) goto loc_821CB0F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CB0F4;
	sub_82120AC0(ctx, base);
loc_821CB0F4:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821CB0FC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cb134
	if (ctx.cr0.eq) goto loc_821CB134;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x82120600
	ctx.lr = 0x821CB114;
	sub_82120600(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r6,r11,-15588
	ctx.r6.s64 = ctx.r11.s64 + -15588;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x821e9d10
	ctx.lr = 0x821CB130;
	sub_821E9D10(ctx, base);
	// b 0x821cb138
	goto loc_821CB138;
loc_821CB134:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CB138:
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CB14C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cb168
	if (ctx.cr0.eq) goto loc_821CB168;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821CB168;
	sub_82120AC0(ctx, base);
loc_821CB168:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CB170;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821cb1a0
	if (ctx.cr0.eq) goto loc_821CB1A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-15668
	ctx.r4.s64 = ctx.r11.s64 + -15668;
	// bl 0x82120600
	ctx.lr = 0x821CB188;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x821bf110
	ctx.lr = 0x821CB19C;
	sub_821BF110(ctx, base);
	// b 0x821cb1a4
	goto loc_821CB1A4;
loc_821CB1A0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CB1A4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CB1B4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cb1cc
	if (ctx.cr0.eq) goto loc_821CB1CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x821CB1CC;
	sub_82120AC0(ctx, base);
loc_821CB1CC:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CB1D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cb1f4
	if (ctx.cr0.eq) goto loc_821CB1F4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CB1EC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cb1f8
	goto loc_821CB1F8;
loc_821CB1F4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821CB1F8:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CB204;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CB20C;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-15424
	r28.s64 = ctx.r11.s64 + -15424;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x821cb280
	if (ctx.cr0.eq) goto loc_821CB280;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23944
	ctx.r4.s64 = ctx.r11.s64 + -23944;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CB240;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CB24C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cb270
	if (ctx.cr0.eq) goto loc_821CB270;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-19088
	ctx.r10.s64 = ctx.r10.s64 + -19088;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cb274
	goto loc_821CB274;
loc_821CB270:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CB274:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cb284
	goto loc_821CB284;
loc_821CB280:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821CB284:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CB29C;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CB2A4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cb308
	if (ctx.cr0.eq) goto loc_821CB308;
	// stw r25,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23932
	ctx.r4.s64 = ctx.r11.s64 + -23932;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CB2C8;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CB2D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cb2f8
	if (ctx.cr0.eq) goto loc_821CB2F8;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-18880
	ctx.r10.s64 = ctx.r10.s64 + -18880;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cb2fc
	goto loc_821CB2FC;
loc_821CB2F8:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CB2FC:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cb30c
	goto loc_821CB30C;
loc_821CB308:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821CB30C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CB324;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821DFDB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DFDC0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821dfdec
	if (ctx.cr6.eq) goto loc_821DFDEC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8213bce8
	ctx.lr = 0x821DFDE4;
	sub_8213BCE8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x821dfdf0
	goto loc_821DFDF0;
loc_821DFDEC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821DFDF0:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b6a8
	ctx.lr = 0x821DFE04;
	sub_8216B6A8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6156(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DFE1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b6a8
	ctx.lr = 0x821DFE34;
	sub_8216B6A8(ctx, base);
	// lbz r11,149(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 149);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821dfe90
	if (ctx.cr0.eq) goto loc_821DFE90;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DFE58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dfe90
	if (ctx.cr0.eq) goto loc_821DFE90;
	// lwz r3,6152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DFE74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821dfe90
	if (!ctx.cr0.eq) goto loc_821DFE90;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,132(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8217f510
	ctx.lr = 0x821DFE8C;
	sub_8217F510(ctx, base);
	// b 0x821dff28
	goto loc_821DFF28;
loc_821DFE90:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821dfedc
	if (ctx.cr0.eq) goto loc_821DFEDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12668
	ctx.r4.s64 = ctx.r11.s64 + 12668;
	// bl 0x82120600
	ctx.lr = 0x821DFEA8;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,120(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 120);
	// bl 0x821dd040
	ctx.lr = 0x821DFEB4;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
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
	ctx.lr = 0x821DFED4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x821dff1c
	goto loc_821DFF1C;
loc_821DFEDC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,12676
	ctx.r4.s64 = ctx.r11.s64 + 12676;
	// bl 0x82120600
	ctx.lr = 0x821DFEEC;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,120(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 120);
	// bl 0x821dd040
	ctx.lr = 0x821DFEF8;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
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
	ctx.lr = 0x821DFF18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_821DFF1C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821DFF28;
	sub_82120AC0(ctx, base);
loc_821DFF28:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E9F78) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r10,20272
	ctx.r4.s64 = ctx.r10.s64 + 20272;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8215f338
	ctx.lr = 0x821E9FA4;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821E9FAC;
	sub_8215F1B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821e9fd0
	if (!ctx.cr6.eq) goto loc_821E9FD0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821e9fd8
	if (ctx.cr6.lt) goto loc_821E9FD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821e9fd8
	goto loc_821E9FD8;
loc_821E9FD0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-26856
	ctx.r11.s64 = ctx.r11.s64 + -26856;
loc_821E9FD8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_821ED6D8) {
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
	ctx.lr = 0x821ED6E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r26,12
	ctx.r4.s64 = r26.s64 + 12;
	// bl 0x821a5c88
	ctx.lr = 0x821ED6F8;
	sub_821A5C88(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// bl 0x821613d8
	ctx.lr = 0x821ED718;
	sub_821613D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821d7530
	ctx.lr = 0x821ED728;
	sub_821D7530(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r5,r31,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x821613d8
	ctx.lr = 0x821ED738;
	sub_821613D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a48f8
	ctx.lr = 0x821ED740;
	sub_821A48F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82154908
	ctx.lr = 0x821ED74C;
	sub_82154908(ctx, base);
	// stw r31,40(r26)
	REX_STORE_U32(r26.u32 + 40, r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED760;
	sub_821613D8(ctx, base);
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// addi r29,r26,44
	r29.s64 = r26.s64 + 44;
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821ed7f8
	if (!ctx.cr6.gt) goto loc_821ED7F8;
loc_821ED774:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821ED784;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ed7e0
	if (ctx.cr0.eq) goto loc_821ED7E0;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// ori r10,r11,65534
	ctx.r10.u64 = ctx.r11.u64 | 65534;
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821ed7d4
	if (ctx.cr6.lt) goto loc_821ED7D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x821ed774
	if (ctx.cr6.lt) goto loc_821ED774;
	// b 0x821ed840
	goto loc_821ED840;
loc_821ED7D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821ED7E0;
	sub_822F6020(ctx, base);
loc_821ED7E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821ED7F8;
	sub_82120018(ctx, base);
loc_821ED7F8:
	// bge cr6,0x821ed840
	if (!ctx.cr6.lt) goto loc_821ED840;
loc_821ED7FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ed834
	if (ctx.cr6.eq) goto loc_821ED834;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8269ce98
	ctx.lr = 0x821ED828;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_821ED834:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ed7fc
	if (ctx.cr6.lt) goto loc_821ED7FC;
loc_821ED840:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821ed8e8
	goto loc_821ED8E8;
loc_821ED84C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x821ED854;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ed868
	if (ctx.cr0.eq) goto loc_821ED868;
	// bl 0x821edf98
	ctx.lr = 0x821ED860;
	sub_821EDF98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x821ed86c
	goto loc_821ED86C;
loc_821ED868:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_821ED86C:
	// stw r31,8(r28)
	REX_STORE_U32(r28.u32 + 8, r31.u32);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a5c88
	ctx.lr = 0x821ED87C;
	sub_821A5C88(ctx, base);
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED88C;
	sub_821613D8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED89C;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED8AC;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED8BC;
	sub_821613D8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED8CC;
	sub_821613D8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r28,0(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_821ED8E8:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ed84c
	if (!ctx.cr6.eq) goto loc_821ED84C;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r26,64
	ctx.r4.s64 = r26.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED900;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r26,96
	ctx.r4.s64 = r26.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED910;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r26,100
	ctx.r4.s64 = r26.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED920;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r26,104
	ctx.r4.s64 = r26.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821613d8
	ctx.lr = 0x821ED930;
	sub_821613D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821FFDC0) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ffe00
	if (ctx.cr6.eq) goto loc_821FFE00;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ffe00
	if (ctx.cr6.eq) goto loc_821FFE00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// addi r3,r10,27544
	ctx.r3.s64 = ctx.r10.s64 + 27544;
	// li r5,435
	ctx.r5.s64 = 435;
	// bl 0x821231d0
	ctx.lr = 0x821FFE00;
	sub_821231D0(ctx, base);
loc_821FFE00:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
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

DEFINE_REX_FUNC(sub_82201450) {
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
	ctx.lr = 0x82201458;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82201518
	if (!ctx.cr6.gt) goto loc_82201518;
	// li r27,0
	r27.s64 = 0;
	// lis r24,-32106
	r24.s64 = -2104098816;
loc_82201480:
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lwzx r31,r11,r27
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r30,132(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// bne cr6,0x82201504
	if (!ctx.cr6.eq) goto loc_82201504;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822014A4;
	sub_826A1E70(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822014B4;
	sub_826A1E70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82151d50
	ctx.lr = 0x822014BC;
	sub_82151D50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821a1f88
	ctx.lr = 0x822014C8;
	sub_821A1F88(ctx, base);
	// lwz r3,6288(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6288);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822014E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82201504;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82201504:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82201480
	if (ctx.cr6.lt) goto loc_82201480;
loc_82201518:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82205E20) {
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
	ctx.lr = 0x82205E28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r27,4(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x82205E44;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82205eb4
	if (ctx.cr0.eq) goto loc_82205EB4;
	// addic. r29,r31,8
	ctx.xer.ca = r31.u32 > 4294967287;
	r29.s64 = r31.s64 + 8;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// beq 0x82205e74
	if (ctx.cr0.eq) goto loc_82205E74;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120d70
	ctx.lr = 0x82205E68;
	sub_82120D70(ctx, base);
	// addi r4,r26,28
	ctx.r4.s64 = r26.s64 + 28;
	// addi r3,r29,28
	ctx.r3.s64 = r29.s64 + 28;
	// bl 0x82120d70
	ctx.lr = 0x82205E74;
	sub_82120D70(ctx, base);
loc_82205E74:
	// lis r10,1170
	ctx.r10.s64 = 76677120;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// ori r10,r10,18723
	ctx.r10.u64 = ctx.r10.u64 | 18723;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82205e98
	if (!ctx.cr6.lt) goto loc_82205E98;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x82205E98;
	sub_822F6020(ctx, base);
loc_82205E98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82205EB4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82205ED0;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8220A9C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13000
	ctx.r3.s64 = ctx.r11.s64 + -13000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220B0B8) {
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
	ctx.lr = 0x8220B0C0;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// bl 0x8220aa08
	ctx.lr = 0x8220B0D8;
	sub_8220AA08(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,32700
	ctx.r11.s64 = ctx.r11.s64 + 32700;
	// addi r25,r31,152
	r25.s64 = r31.s64 + 152;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,136
	r29.s64 = r31.s64 + 136;
	// li r30,2
	r30.s64 = 2;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r25
	r28.u64 = r25.u64;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
loc_8220B10C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e6df0
	ctx.lr = 0x8220B114;
	sub_822E6DF0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r28,92
	r28.s64 = r28.s64 + 92;
	// bge 0x8220b10c
	if (!ctx.cr0.lt) goto loc_8220B10C;
	// addi r24,r31,440
	r24.s64 = r31.s64 + 440;
	// stw r23,428(r31)
	REX_STORE_U32(r31.u32 + 428, r23.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r23,436(r31)
	REX_STORE_U8(r31.u32 + 436, r23.u8);
	// addi r30,r31,428
	r30.s64 = r31.s64 + 428;
	// stb r23,437(r31)
	REX_STORE_U8(r31.u32 + 437, r23.u8);
	// stw r11,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r11.u32);
	// li r28,2
	r28.s64 = 2;
	// mr r26,r24
	r26.u64 = r24.u64;
	// stb r23,438(r31)
	REX_STORE_U8(r31.u32 + 438, r23.u8);
loc_8220B148:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8220B158;
	sub_82120AC0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// bge 0x8220b148
	if (!ctx.cr0.lt) goto loc_8220B148;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r26,r11,-26856
	r26.s64 = ctx.r11.s64 + -26856;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120600
	ctx.lr = 0x8220B178;
	sub_82120600(ctx, base);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822e7ad8
	ctx.lr = 0x8220B18C;
	sub_822E7AD8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82120ac0
	ctx.lr = 0x8220B19C;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,32444
	ctx.r4.s64 = ctx.r11.s64 + 32444;
	// bl 0x82120600
	ctx.lr = 0x8220B1AC;
	sub_82120600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822e7f20
	ctx.lr = 0x8220B1BC;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x8220B1CC;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,32452
	ctx.r4.s64 = ctx.r11.s64 + 32452;
	// bl 0x82120600
	ctx.lr = 0x8220B1DC;
	sub_82120600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x822e7f20
	ctx.lr = 0x8220B1EC;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82120ac0
	ctx.lr = 0x8220B1FC;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,32460
	ctx.r4.s64 = ctx.r11.s64 + 32460;
	// bl 0x82120600
	ctx.lr = 0x8220B20C;
	sub_82120600(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,336
	ctx.r3.s64 = r31.s64 + 336;
	// bl 0x822e7f20
	ctx.lr = 0x8220B21C;
	sub_822E7F20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8220B22C;
	sub_82120AC0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x8220B238;
	sub_82120600(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e7cb0
	ctx.lr = 0x8220B248;
	sub_822E7CB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8220B258;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8220B260;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220b290
	if (ctx.cr0.eq) goto loc_8220B290;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,32468
	ctx.r4.s64 = ctx.r11.s64 + 32468;
	// bl 0x82120600
	ctx.lr = 0x8220B278;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r27,1
	r27.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x8220B28C;
	sub_821BF110(ctx, base);
	// b 0x8220b294
	goto loc_8220B294;
loc_8220B290:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8220B294:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8220B2A4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220b2c0
	if (ctx.cr0.eq) goto loc_8220B2C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8220B2C0;
	sub_82120AC0(ctx, base);
loc_8220B2C0:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8220B2C8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220b2f8
	if (ctx.cr0.eq) goto loc_8220B2F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,32480
	ctx.r4.s64 = ctx.r11.s64 + 32480;
	// bl 0x82120600
	ctx.lr = 0x8220B2E0;
	sub_82120600(ctx, base);
	// addi r5,r31,468
	ctx.r5.s64 = r31.s64 + 468;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// bl 0x821bf110
	ctx.lr = 0x8220B2F4;
	sub_821BF110(ctx, base);
	// b 0x8220b2fc
	goto loc_8220B2FC;
loc_8220B2F8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8220B2FC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8220B30C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220b328
	if (ctx.cr0.eq) goto loc_8220B328;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8220B328;
	sub_82120AC0(ctx, base);
loc_8220B328:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8220B330;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8220b360
	if (ctx.cr0.eq) goto loc_8220B360;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,32492
	ctx.r4.s64 = ctx.r11.s64 + 32492;
	// bl 0x82120600
	ctx.lr = 0x8220B348;
	sub_82120600(ctx, base);
	// addi r5,r31,496
	ctx.r5.s64 = r31.s64 + 496;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// bl 0x821bf110
	ctx.lr = 0x8220B35C;
	sub_821BF110(ctx, base);
	// b 0x8220b364
	goto loc_8220B364;
loc_8220B360:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8220B364:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8220B374;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220b38c
	if (ctx.cr0.eq) goto loc_8220B38C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82120ac0
	ctx.lr = 0x8220B38C;
	sub_82120AC0(ctx, base);
loc_8220B38C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82225A90) {
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
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x822f6280
	ctx.lr = 0x82225AA4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225ab4
	if (ctx.cr0.eq) goto loc_82225AB4;
	// bl 0x82225ac8
	ctx.lr = 0x82225AB0;
	sub_82225AC8(ctx, base);
	// b 0x82225ab8
	goto loc_82225AB8;
loc_82225AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225AB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82227198) {
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
	ctx.lr = 0x822271A0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r30,r3,648
	r30.s64 = ctx.r3.s64 + 648;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r24,0
	r24.s64 = 0;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82227294
	if (!ctx.cr0.gt) goto loc_82227294;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r27,0
	r27.s64 = 0;
	// addi r26,r11,-17296
	r26.s64 = ctx.r11.s64 + -17296;
	// addi r25,r10,-17164
	r25.s64 = ctx.r10.s64 + -17164;
loc_822271DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r22,r27,r11
	r22.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82273438
	ctx.lr = 0x822271F0;
	sub_82273438(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x822271F8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822271FC;
	sub_8215FA30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8215f338
	ctx.lr = 0x82227210;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82227214;
	sub_8215FA30(ctx, base);
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222722C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82227258
	if (!ctx.cr0.eq) goto loc_82227258;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822271dc
	if (ctx.cr6.lt) goto loc_822271DC;
	// b 0x82227294
	goto loc_82227294;
loc_82227258:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-24596
	ctx.r4.s64 = ctx.r11.s64 + -24596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8213a1b0
	ctx.lr = 0x8222726C;
	sub_8213A1B0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-24604
	ctx.r4.s64 = ctx.r11.s64 + -24604;
	// bl 0x82121928
	ctx.lr = 0x82227278;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82120700
	ctx.lr = 0x82227284;
	sub_82120700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82227294;
	sub_82120AC0(ctx, base);
loc_82227294:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8222AA90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8222AA98;
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
	// bl 0x82229520
	ctx.lr = 0x8222AAAC;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8222AACC;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8222AAD4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222ab04
	if (ctx.cr0.eq) goto loc_8222AB04;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22952
	ctx.r4.s64 = ctx.r11.s64 + -22952;
	// bl 0x82120600
	ctx.lr = 0x8222AAEC;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x8222AB00;
	sub_821BF110(ctx, base);
	// b 0x8222ab08
	goto loc_8222AB08;
loc_8222AB04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222AB08:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x8222AB18;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222ab30
	if (ctx.cr0.eq) goto loc_8222AB30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8222AB30;
	sub_82120AC0(ctx, base);
loc_8222AB30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8222EF38) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x8222EF40;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// bl 0x82178268
	ctx.lr = 0x8222EF60;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r22,r11,16592
	r22.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-18396
	ctx.r10.s64 = ctx.r10.s64 + -18396;
	// addi r11,r11,-20924
	ctx.r11.s64 = ctx.r11.s64 + -20924;
	// addi r9,r9,-22212
	ctx.r9.s64 = ctx.r9.s64 + -22212;
	// lfs f0,88(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// addi r26,r31,136
	r26.s64 = r31.s64 + 136;
	// addi r4,r11,-21012
	ctx.r4.s64 = ctx.r11.s64 + -21012;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r21,r31,112
	r21.s64 = r31.s64 + 112;
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// bl 0x82120600
	ctx.lr = 0x8222EFB0;
	sub_82120600(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r25,r31,164
	r25.s64 = r31.s64 + 164;
	// addi r4,r11,-20992
	ctx.r4.s64 = ctx.r11.s64 + -20992;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82120600
	ctx.lr = 0x8222EFC4;
	sub_82120600(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r19,1
	r19.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r8,r11,-14036
	ctx.r8.s64 = ctx.r11.s64 + -14036;
	// stb r19,192(r31)
	REX_STORE_U8(r31.u32 + 192, r19.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stw r30,208(r31)
	REX_STORE_U32(r31.u32 + 208, r30.u32);
	// stfs f31,204(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// stw r8,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r8.u32);
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stw r30,212(r31)
	REX_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stb r11,227(r31)
	REX_STORE_U8(r31.u32 + 227, ctx.r11.u8);
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r11,226(r31)
	REX_STORE_U8(r31.u32 + 226, ctx.r11.u8);
	// addi r7,r10,-2096
	ctx.r7.s64 = ctx.r10.s64 + -2096;
	// stb r11,225(r31)
	REX_STORE_U8(r31.u32 + 225, ctx.r11.u8);
	// addi r10,r31,200
	ctx.r10.s64 = r31.s64 + 200;
	// stb r11,224(r31)
	REX_STORE_U8(r31.u32 + 224, ctx.r11.u8);
	// addi r9,r31,232
	ctx.r9.s64 = r31.s64 + 232;
	// stb r30,228(r31)
	REX_STORE_U8(r31.u32 + 228, r30.u8);
	// stfs f31,236(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stw r8,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r8.u32);
	// addi r23,r31,192
	r23.s64 = r31.s64 + 192;
	// stw r30,244(r31)
	REX_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// stb r11,259(r31)
	REX_STORE_U8(r31.u32 + 259, ctx.r11.u8);
	// stb r11,258(r31)
	REX_STORE_U8(r31.u32 + 258, ctx.r11.u8);
	// stb r11,257(r31)
	REX_STORE_U8(r31.u32 + 257, ctx.r11.u8);
	// stb r11,256(r31)
	REX_STORE_U8(r31.u32 + 256, ctx.r11.u8);
	// stb r30,260(r31)
	REX_STORE_U8(r31.u32 + 260, r30.u8);
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x822f6280
	ctx.lr = 0x8222F064;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8222f094
	if (ctx.cr0.eq) goto loc_8222F094;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-20960
	ctx.r4.s64 = ctx.r11.s64 + -20960;
	// bl 0x82120600
	ctx.lr = 0x8222F07C;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// bl 0x82196ba8
	ctx.lr = 0x8222F090;
	sub_82196BA8(ctx, base);
	// b 0x8222f098
	goto loc_8222F098;
loc_8222F094:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8222F098:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r24,r31,80
	r24.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82145710
	ctx.lr = 0x8222F0AC;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x8222F0B8;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8222F0C0;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,-13900
	r20.s64 = ctx.r11.s64 + -13900;
	// beq 0x8222f0e8
	if (ctx.cr0.eq) goto loc_8222F0E8;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r20,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r20.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8222f0ec
	goto loc_8222F0EC;
loc_8222F0E8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8222F0EC:
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r30,33(r29)
	REX_STORE_U8(r29.u32 + 33, r30.u8);
	// beq 0x8222f110
	if (ctx.cr0.eq) goto loc_8222F110;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x8222F110;
	sub_82120AC0(ctx, base);
loc_8222F110:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r11,r11,-2096
	ctx.r11.s64 = ctx.r11.s64 + -2096;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8222F128;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lis r28,-32126
	r28.s64 = -2105409536;
	// beq 0x8222f170
	if (ctx.cr0.eq) goto loc_8222F170;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-28692
	ctx.r4.s64 = ctx.r11.s64 + -28692;
	// bl 0x82120600
	ctx.lr = 0x8222F144;
	sub_82120600(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,-15376(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -15376);
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// bl 0x82120600
	ctx.lr = 0x8222F154;
	sub_82120600(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// bl 0x821d58c8
	ctx.lr = 0x8222F16C;
	sub_821D58C8(ctx, base);
	// b 0x8222f174
	goto loc_8222F174;
loc_8222F170:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8222F174:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82145710
	ctx.lr = 0x8222F184;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x8222F190;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8222F198;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f1b8
	if (ctx.cr0.eq) goto loc_8222F1B8;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r20,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r20.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8222f1bc
	goto loc_8222F1BC;
loc_8222F1B8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8222F1BC:
	// rlwinm. r10,r27,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r30,33(r29)
	REX_STORE_U8(r29.u32 + 33, r30.u8);
	// beq 0x8222f1e0
	if (ctx.cr0.eq) goto loc_8222F1E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r27,r27,0,30,28
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8222F1E0;
	sub_82120AC0(ctx, base);
loc_8222F1E0:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222f1fc
	if (ctx.cr0.eq) goto loc_8222F1FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r27,r27,0,31,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x8222F1FC;
	sub_82120AC0(ctx, base);
loc_8222F1FC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// addi r11,r11,-2096
	ctx.r11.s64 = ctx.r11.s64 + -2096;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8222F214;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222f258
	if (ctx.cr0.eq) goto loc_8222F258;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,13584
	ctx.r4.s64 = ctx.r11.s64 + 13584;
	// bl 0x82120600
	ctx.lr = 0x8222F22C;
	sub_82120600(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,-15376(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + -15376);
	// ori r28,r27,8
	r28.u64 = r27.u64 | 8;
	// bl 0x82120600
	ctx.lr = 0x8222F23C;
	sub_82120600(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r28,16
	r27.u64 = r28.u64 | 16;
	// bl 0x821d58c8
	ctx.lr = 0x8222F254;
	sub_821D58C8(ctx, base);
	// b 0x8222f25c
	goto loc_8222F25C;
loc_8222F258:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8222F25C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82145710
	ctx.lr = 0x8222F26C;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x8222F278;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8222F280;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f2a0
	if (ctx.cr0.eq) goto loc_8222F2A0;
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r20,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r20.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8222f2a4
	goto loc_8222F2A4;
loc_8222F2A0:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8222F2A4:
	// rlwinm. r10,r27,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r30,33(r29)
	REX_STORE_U8(r29.u32 + 33, r30.u8);
	// beq 0x8222f2c8
	if (ctx.cr0.eq) goto loc_8222F2C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r27,r27,0,28,26
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8222F2C8;
	sub_82120AC0(ctx, base);
loc_8222F2C8:
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222f2e4
	if (ctx.cr0.eq) goto loc_8222F2E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x8222F2E4;
	sub_82120AC0(ctx, base);
loc_8222F2E4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x8222F2EC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8222f31c
	if (ctx.cr0.eq) goto loc_8222F31C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-20948
	ctx.r4.s64 = ctx.r11.s64 + -20948;
	// bl 0x82120600
	ctx.lr = 0x8222F304;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// bl 0x82191600
	ctx.lr = 0x8222F318;
	sub_82191600(ctx, base);
	// b 0x8222f320
	goto loc_8222F320;
loc_8222F31C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8222F320:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82145710
	ctx.lr = 0x8222F330;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222f348
	if (ctx.cr0.eq) goto loc_8222F348;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x8222F348;
	sub_82120AC0(ctx, base);
loc_8222F348:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x8222F350;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f37c
	if (ctx.cr0.eq) goto loc_8222F37C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82233df8
	ctx.lr = 0x8222F374;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222f380
	goto loc_8222F380;
loc_8222F37C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8222F380:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222F390;
	sub_821D3988(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x8222F398;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f3b0
	if (ctx.cr0.eq) goto loc_8222F3B0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x8222F3A8;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222f3b4
	goto loc_8222F3B4;
loc_8222F3B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8222F3B4:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222F3C0;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8222F3C8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f3e8
	if (ctx.cr0.eq) goto loc_8222F3E8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8222F3E0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222f3ec
	goto loc_8222F3EC;
loc_8222F3E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8222F3EC:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222F3F8;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x8222F400;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f41c
	if (ctx.cr0.eq) goto loc_8222F41C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x8222F414;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8222f420
	goto loc_8222F420;
loc_8222F41C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8222F420:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x8222F42C;
	sub_821D3988(ctx, base);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// lfs f13,160(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r29,0(r10)
	r29.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lis r5,-32221
	ctx.r5.s64 = -2111635456;
	// std r9,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r9.u64);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// addi r5,r5,-2096
	ctx.r5.s64 = ctx.r5.s64 + -2096;
	// std r29,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r29.u64);
	// li r3,16
	ctx.r3.s64 = 16;
	// ld r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 16);
	// ld r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r4,24(r6)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r6.u32 + 24);
	// std r10,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r10.u64);
	// ld r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// std r7,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r7.u64);
	// std r9,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r9.u64);
	// std r4,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r4.u64);
	// lwz r29,116(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 116);
	// stw r5,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8222F4C4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f4e8
	if (ctx.cr0.eq) goto loc_8222F4E8;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r20,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r20.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x8222f4ec
	goto loc_8222F4EC;
loc_8222F4E8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8222F4EC:
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822f6280
	ctx.lr = 0x8222F4F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222f548
	if (ctx.cr0.eq) goto loc_8222F548;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// stw r19,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r19.u32);
	// addi r10,r10,12244
	ctx.r10.s64 = ctx.r10.s64 + 12244;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r9,r9,-20932
	ctx.r9.s64 = ctx.r9.s64 + -20932;
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// addi r8,r8,-13604
	ctx.r8.s64 = ctx.r8.s64 + -13604;
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
	// b 0x8222f54c
	goto loc_8222F54C;
loc_8222F548:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8222F54C:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82145710
	ctx.lr = 0x8222F55C;
	sub_82145710(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// stb r19,228(r31)
	REX_STORE_U8(r31.u32 + 228, r19.u8);
	// stfs f31,252(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 252, temp.u32);
	// stb r19,260(r31)
	REX_STORE_U8(r31.u32 + 260, r19.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8225D3A0) {
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
	ctx.lr = 0x8225D3A8;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D3C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x8225d46c
	if (ctx.cr0.eq) goto loc_8225D46C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r29,r30,192
	r29.s64 = r30.s64 + 192;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x8225D3E8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225d3fc
	if (!ctx.cr0.eq) goto loc_8225D3FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82263570
	ctx.lr = 0x8225D3F8;
	sub_82263570(ctx, base);
	// b 0x8225d46c
	goto loc_8225D46C;
loc_8225D3FC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// bl 0x82125d00
	ctx.lr = 0x8225D40C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225d420
	if (!ctx.cr0.eq) goto loc_8225D420;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822638b8
	ctx.lr = 0x8225D41C;
	sub_822638B8(ctx, base);
	// b 0x8225d46c
	goto loc_8225D46C;
loc_8225D420:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-9400
	ctx.r4.s64 = ctx.r11.s64 + -9400;
	// addi r3,r10,-8308
	ctx.r3.s64 = ctx.r10.s64 + -8308;
	// li r5,2314
	ctx.r5.s64 = 2314;
	// bl 0x821231d0
	ctx.lr = 0x8225D438;
	sub_821231D0(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 272);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225d46c
	if (!ctx.cr6.gt) goto loc_8225D46C;
loc_8225D448:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225D454;
	sub_8228C340(ctx, base);
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// bl 0x8227d768
	ctx.lr = 0x8225D45C;
	sub_8227D768(ctx, base);
	// lwz r11,272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 272);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225d448
	if (ctx.cr6.lt) goto loc_8225D448;
loc_8225D46C:
	// lwz r11,1596(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1596);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225d72c
	if (!ctx.cr6.eq) goto loc_8225D72C;
	// lwz r31,172(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225d494
	if (ctx.cr0.eq) goto loc_8225D494;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225d72c
	if (!ctx.cr6.eq) goto loc_8225D72C;
loc_8225D494:
	// li r30,1
	r30.s64 = 1;
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stb r30,36(r31)
	REX_STORE_U8(r31.u32 + 36, r30.u8);
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r30,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225d4e0
	if (!ctx.cr0.eq) goto loc_8225D4E0;
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
	ctx.lr = 0x8225D4E0;
	sub_821231D0(ctx, base);
loc_8225D4E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r28,44(r31)
	REX_STORE_U32(r31.u32 + 44, r28.u32);
	// stb r28,52(r31)
	REX_STORE_U8(r31.u32 + 52, r28.u8);
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
	// beq cr6,0x8225d720
	if (ctx.cr6.eq) goto loc_8225D720;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225D518;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D524;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8225D538;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225D548;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D554;
	sub_82178B60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x8225D568;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225D578;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D584;
	sub_82178B60(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8225D598;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225D5A8;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D5B4;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8225D5C8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225D5D8;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D5E4;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8225D5F8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225D608;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D614;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x8225D628;
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
	ctx.lr = 0x8225D644;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225D658;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82288798
	ctx.lr = 0x8225D670;
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
	ctx.lr = 0x8225D688;
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
	ctx.lr = 0x8225D6A0;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82288848
	ctx.lr = 0x8225D6B8;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r11,-8324
	ctx.r4.s64 = ctx.r11.s64 + -8324;
	// bl 0x82288848
	ctx.lr = 0x8225D6C8;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// bl 0x82288848
	ctx.lr = 0x8225D6D8;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225D6E8;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D6F4;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x8225D708;
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
	ctx.lr = 0x8225D720;
	sub_82288798(ctx, base);
loc_8225D720:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x8225D72C;
	sub_8226AFB8(ctx, base);
loc_8225D72C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82274CC0) {
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
	ctx.lr = 0x82274CC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r29,r3,116
	r29.s64 = ctx.r3.s64 + 116;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82274d0c
	if (ctx.cr0.eq) goto loc_82274D0C;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82250408
	ctx.lr = 0x82274D04;
	sub_82250408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82274d4c
	if (!ctx.cr0.eq) goto loc_82274D4C;
loc_82274D0C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r5,36(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274D30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82274d4c
	if (ctx.cr0.eq) goto loc_82274D4C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274D4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274D4C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274D64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82274de8
	if (ctx.cr0.eq) goto loc_82274DE8;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f9,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f7,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f12,f6,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f12.f64)));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82274de8
	if (!ctx.cr6.gt) goto loc_82274DE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82274DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82274DE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8227E530) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8227E538;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,-32755
	ctx.r4.s64 = -32755;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8217f4b0
	ctx.lr = 0x8227E554;
	sub_8217F4B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,544(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 544);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f0,532(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 532);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,536(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f10,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f11,f9
	ctx.f11.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// ld r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwimi r11,r10,11,0,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800) | (ctx.r11.u64 & 0xFFFFFFFF000007FF);
	// fctidz f12,f10
	ctx.f12.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stfd f13,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r31,88(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// rlwimi r7,r11,11,0,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800) | (ctx.r7.u64 & 0xFFFFFFFF000007FF);
	// stw r7,106(r1)
	REX_STORE_U32(ctx.r1.u32 + 106, ctx.r7.u32);
	// clrldi r31,r31,42
	r31.u64 = r31.u64 & 0x3FFFFF;
	// clrldi r10,r8,44
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFF;
	// rldimi r31,r9,22,0
	r31.u64 = (__builtin_rotateleft64(ctx.r9.u64, 22) & 0xFFFFFFFFFFC00000) | (r31.u64 & 0x3FFFFF);
	// rldimi r10,r31,20,0
	ctx.r10.u64 = (__builtin_rotateleft64(r31.u64, 20) & 0xFFFFFFFFFFF00000) | (ctx.r10.u64 & 0xFFFFF);
	// li r12,98
	ctx.r12.s64 = 98;
	// stdx r10,r1,r12
	REX_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r10.u64);
	// bl 0x8217fb30
	ctx.lr = 0x8227E618;
	sub_8217FB30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82287EC0) {
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
	ctx.lr = 0x82287EC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82287fa8
	if (ctx.cr0.eq) goto loc_82287FA8;
	// lfs f0,72(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r29,64
	r30.s64 = r29.s64 + 64;
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f9,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f12,f9,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f8,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f13.f64)));
	// fmadds f12,f6,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f12.f64)));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82287f90
	if (!ctx.cr6.gt) goto loc_82287F90;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82287F90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82287fa8
	if (ctx.cr6.eq) goto loc_82287FA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82250408
	ctx.lr = 0x82287FA0;
	sub_82250408(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287fe4
	if (!ctx.cr0.eq) goto loc_82287FE4;
loc_82287FA8:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r5,36(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 36);
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
	// lwz r3,6288(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82287fe4
	if (ctx.cr0.eq) goto loc_82287FE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82287FE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287FFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8228F160) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120600
	ctx.lr = 0x8228F17C;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x8228F18C;
	sub_82154C08(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8228F1A0;
	sub_82120AC0(ctx, base);
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

DEFINE_REX_FUNC(sub_822909C0) {
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
	// lwz r11,224(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 224);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822909f0
	if (ctx.cr6.eq) goto loc_822909F0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822909f4
	if (!ctx.cr6.eq) goto loc_822909F4;
loc_822909F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822909F4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82290a28
	if (!ctx.cr0.eq) goto loc_82290A28;
	// lwz r11,224(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82290a14
	if (ctx.cr6.eq) goto loc_82290A14;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82290a18
	if (!ctx.cr6.eq) goto loc_82290A18;
loc_82290A14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82290A18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82290a28
	if (!ctx.cr0.eq) goto loc_82290A28;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82290a60
	goto loc_82290A60;
loc_82290A28:
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82290a4c
	if (ctx.cr6.eq) goto loc_82290A4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82290A48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82290a50
	goto loc_82290A50;
loc_82290A4C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82290A50:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & r31.u64;
loc_82290A60:
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

DEFINE_REX_FUNC(sub_822971C0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
	// addi r10,r10,5148
	ctx.r10.s64 = ctx.r10.s64 + 5148;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x822971f8
	if (ctx.cr0.eq) goto loc_822971F8;
	// bl 0x8269ce98
	ctx.lr = 0x822971F8;
	sub_8269CE98(ctx, base);
loc_822971F8:
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

DEFINE_REX_FUNC(sub_8229D4F0) {
	REX_FUNC_PROLOGUE();
	// li r3,84
	ctx.r3.s64 = 84;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229D500) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,276
	ctx.r9.s64 = 276;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,72(r3)
	REX_STORE_U8(ctx.r3.u32 + 72, ctx.r11.u8);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// stw r9,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stb r10,92(r3)
	REX_STORE_U8(ctx.r3.u32 + 92, ctx.r10.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r11,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stb r10,112(r3)
	REX_STORE_U8(ctx.r3.u32 + 112, ctx.r10.u8);
	// addi r7,r7,5584
	ctx.r7.s64 = ctx.r7.s64 + 5584;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lfs f12,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lfs f0,596(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lfs f13,172(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,132(r3)
	REX_STORE_U8(ctx.r3.u32 + 132, ctx.r10.u8);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stb r10,152(r3)
	REX_STORE_U8(ctx.r3.u32 + 152, ctx.r10.u8);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// stb r10,176(r3)
	REX_STORE_U8(ctx.r3.u32 + 176, ctx.r10.u8);
	// stw r11,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3A20) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5916
	ctx.r11.s64 = ctx.r11.s64 + 5916;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822a3a4c
	if (ctx.cr0.eq) goto loc_822A3A4C;
	// bl 0x8269ce98
	ctx.lr = 0x822A3A4C;
	sub_8269CE98(ctx, base);
loc_822A3A4C:
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

DEFINE_REX_FUNC(sub_822A4B10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,5972
	ctx.r3.s64 = ctx.r11.s64 + 5972;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4B70) {
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
	// bl 0x822a3928
	ctx.lr = 0x822A4B90;
	sub_822A3928(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r30,24
	ctx.r9.s64 = r30.s64 + 24;
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A4BA0:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a4ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A4BA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822A4BBC:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822a4bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822A4BBC;
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r3,r11,6008
	ctx.r3.s64 = ctx.r11.s64 + 6008;
	// stw r10,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822A73F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cb8
	ctx.lr = 0x822A7400;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c74
	ctx.lr = 0x822A7408;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r5,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// stw r6,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x822940c8
	ctx.lr = 0x822A7434;
	sub_822940C8(ctx, base);
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f9,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,72(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f4,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f3,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	f29.f64 = double(temp.f32);
	// fmuls f2,f10,f11
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f28,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	f28.f64 = double(temp.f32);
	// fmuls f30,f9,f11
	f30.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f8,f4,f12,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f8.f64)));
	// lfs f25,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	f25.f64 = double(temp.f32);
	// fmadds f6,f3,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f6.f64)));
	// lfs f23,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	f23.f64 = double(temp.f32);
	// fmuls f27,f10,f29
	f27.f64 = double(float(ctx.f10.f64 * f29.f64));
	// lfs f21,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	f21.f64 = double(temp.f32);
	// fmadds f5,f1,f0,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f5.f64)));
	// lfs f20,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	f20.f64 = double(temp.f32);
	// fmuls f22,f9,f28
	f22.f64 = double(float(ctx.f9.f64 * f28.f64));
	// lfs f19,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	f19.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f18,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	f18.f64 = double(temp.f32);
	// fmuls f26,f1,f29
	f26.f64 = double(float(ctx.f1.f64 * f29.f64));
	// lfs f17,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	f17.f64 = double(temp.f32);
	// fmuls f24,f1,f28
	f24.f64 = double(float(ctx.f1.f64 * f28.f64));
	// lfs f1,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * f29.f64));
	// lfs f29,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	f29.f64 = double(temp.f32);
	// fmuls f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * f28.f64));
	// lfs f28,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	f28.f64 = double(temp.f32);
	// fmadds f8,f25,f13,f8
	ctx.f8.f64 = double(float(std::fma(f25.f64, ctx.f13.f64, ctx.f8.f64)));
	// lfs f16,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	f16.f64 = double(temp.f32);
	// fmadds f13,f23,f13,f6
	ctx.f13.f64 = double(float(std::fma(f23.f64, ctx.f13.f64, ctx.f6.f64)));
	// lfs f15,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	f15.f64 = double(temp.f32);
	// fmadds f2,f4,f20,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, f20.f64, ctx.f2.f64)));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f21,f12,f5
	ctx.f12.f64 = double(float(std::fma(f21.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmadds f27,f4,f19,f27
	f27.f64 = double(float(std::fma(ctx.f4.f64, f19.f64, f27.f64)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmadds f11,f21,f20,f11
	ctx.f11.f64 = double(float(std::fma(f21.f64, f20.f64, ctx.f11.f64)));
	// fmadds f6,f3,f1,f22
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, f22.f64)));
	// fmadds f5,f3,f20,f30
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, f20.f64, f30.f64)));
	// fmadds f9,f3,f19,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, f19.f64, ctx.f9.f64)));
	// fmadds f10,f4,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f10.f64)));
	// fmadds f24,f21,f1,f24
	f24.f64 = double(float(std::fma(f21.f64, ctx.f1.f64, f24.f64)));
	// fmadds f26,f21,f19,f26
	f26.f64 = double(float(std::fma(f21.f64, f19.f64, f26.f64)));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f13,f12,f18
	ctx.f13.f64 = double(float(ctx.f12.f64 + f18.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f8,f8,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 + f29.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f4,f25,f17,f2
	ctx.f4.f64 = double(float(std::fma(f25.f64, f17.f64, ctx.f2.f64)));
	// fmadds f13,f7,f17,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, f17.f64, ctx.f11.f64)));
	// fmadds f3,f25,f16,f27
	ctx.f3.f64 = double(float(std::fma(f25.f64, f16.f64, f27.f64)));
	// fmadds f11,f23,f15,f6
	ctx.f11.f64 = double(float(std::fma(f23.f64, f15.f64, ctx.f6.f64)));
	// fmadds f8,f23,f17,f5
	ctx.f8.f64 = double(float(std::fma(f23.f64, f17.f64, ctx.f5.f64)));
	// fmadds f2,f7,f15,f24
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, f15.f64, f24.f64)));
	// fmadds f12,f7,f16,f26
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, f16.f64, f26.f64)));
	// fmadds f9,f23,f16,f9
	ctx.f9.f64 = double(float(std::fma(f23.f64, f16.f64, ctx.f9.f64)));
	// fmadds f10,f25,f15,f10
	ctx.f10.f64 = double(float(std::fma(f25.f64, f15.f64, ctx.f10.f64)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ld r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r8,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r5,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r5.u64);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r30,r1,176
	r30.s64 = ctx.r1.s64 + 176;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r31,32
	ctx.r6.s64 = r31.s64 + 32;
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r28,0(r9)
	r28.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// ld r29,0(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// std r29,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r29.u64);
	// std r28,0(r30)
	REX_STORE_U64(r30.u32 + 0, r28.u64);
	// std r9,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r9.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,204(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A75FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 + ctx.f0.f64));
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cc0
	ctx.lr = 0x822A7650;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822C1A68) {
	REX_FUNC_PROLOGUE();
	// b 0x8269d6a8
	sub_8269D6A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C1A70) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r3,r3,19
	ctx.r3.s64 = ctx.r3.s64 + 19;
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// lwz r9,-19644(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -19644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r10)
	REX_STORE_U32(ctx.r10.u32 + 108, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822C1AA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c1ac0
	if (ctx.cr0.eq) goto loc_822C1AC0;
	// subfic r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r10.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822c1ac4
	goto loc_822C1AC4;
loc_822C1AC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C1AC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2918) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12632);
	// lwz r10,10548(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12052(r3)
	REX_STORE_U32(ctx.r3.u32 + 12052, ctx.r4.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822C2F00) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12036(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12036);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3080) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12072(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12072);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3348) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C33F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3860) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10556(r3)
	REX_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4238) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6068) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822C6070;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x822C6088;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822c6098
	if (!ctx.cr0.eq) goto loc_822C6098;
loc_822C6090:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c6128
	goto loc_822C6128;
loc_822C6098:
	// lis r30,16
	r30.s64 = 1048576;
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// beq 0x822c60b8
	if (ctx.cr0.eq) goto loc_822C60B8;
	// lis r30,48
	r30.s64 = 3145728;
	// li r11,2
	ctx.r11.s64 = 2;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_822C60B8:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c60c4
	if (ctx.cr0.eq) goto loc_822C60C4;
	// oris r30,r30,64
	r30.u64 = r30.u64 | 4194304;
loc_822C60C4:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x823f02b8
	ctx.lr = 0x822C60D4;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822c60ec
	if (!ctx.cr0.eq) goto loc_822C60EC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x822C60E8;
	sub_823F0350(ctx, base);
	// b 0x822c6090
	goto loc_822C6090;
loc_822C60EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r28,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x3FFFFFC;
	// ori r9,r3,3
	ctx.r9.u64 = ctx.r3.u64 | 3;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_822C6128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822CD828) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r4,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// stw r5,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CDA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822CDA88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r29,r3,19908
	r29.s64 = ctx.r3.s64 + 19908;
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r5,r3,19900
	ctx.r5.s64 = ctx.r3.s64 + 19900;
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822cf0b8
	ctx.lr = 0x822CDAB0;
	sub_822CF0B8(ctx, base);
	// lwz r11,19900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 19900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822cdacc
	if (ctx.cr6.lt) goto loc_822CDACC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822CDACC;
	sub_826A1E70(ctx, base);
loc_822CDACC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822CEBC8) {
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
	ctx.lr = 0x822CEBD0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r18,4(r23)
	r18.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// addi r17,r23,20
	r17.s64 = r23.s64 + 20;
	// clrlwi r16,r11,31
	r16.u64 = ctx.r11.u32 & 0x1;
loc_822CEBFC:
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cee1c
	if (ctx.cr6.eq) goto loc_822CEE1C;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// li r19,0
	r19.s64 = 0;
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r20,r11,r31
	r20.u64 = ctx.r11.u64 + r31.u64;
	// b 0x822cee14
	goto loc_822CEE14;
loc_822CEC24:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822cec48
	if (!ctx.cr0.eq) goto loc_822CEC48;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// bge cr6,0x822cee1c
	if (!ctx.cr6.lt) goto loc_822CEE1C;
	// b 0x822cee14
	goto loc_822CEE14;
loc_822CEC48:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x822cecec
	if (!ctx.cr6.eq) goto loc_822CECEC;
	// clrlwi. r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822cee30
	if (!ctx.cr0.eq) goto loc_822CEE30;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r9,r9,r18
	ctx.r9.u64 = ctx.r9.u64 + r18.u64;
	// add r30,r9,r23
	r30.u64 = ctx.r9.u64 + r23.u64;
loc_822CEC68:
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r28,512
	ctx.cr6.compare<uint32_t>(r28.u32, 512, ctx.xer);
	// bge cr6,0x822cee30
	if (!ctx.cr6.lt) goto loc_822CEE30;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x822cec84
	if (ctx.cr6.eq) goto loc_822CEC84;
	// addi r6,r6,-256
	ctx.r6.s64 = ctx.r6.s64 + -256;
loc_822CEC84:
	// lwz r29,8(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r27,12(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// stw r29,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r29.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// stw r27,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r27.u32);
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bctrl 
	ctx.lr = 0x822CECD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cee38
	if (ctx.cr0.lt) goto loc_822CEE38;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// clrlwi. r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x822cec68
	if (!ctx.cr0.eq) goto loc_822CEC68;
	// b 0x822cee14
	goto loc_822CEE14;
loc_822CECEC:
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(r19.u32, 1, ctx.xer);
	// bne cr6,0x822ced7c
	if (!ctx.cr6.eq) goto loc_822CED7C;
loc_822CECF4:
	// clrlwi r30,r10,16
	r30.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r30,8992
	ctx.cr6.compare<uint32_t>(r30.u32, 8992, ctx.xer);
	// blt cr6,0x822cee30
	if (ctx.cr6.lt) goto loc_822CEE30;
	// cmplwi cr6,r30,9120
	ctx.cr6.compare<uint32_t>(r30.u32, 9120, ctx.xer);
	// bge cr6,0x822cee30
	if (!ctx.cr6.lt) goto loc_822CEE30;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// rlwinm r7,r10,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r8,r30,-8992
	ctx.r8.s64 = r30.s64 + -8992;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// clrlwi r29,r11,16
	r29.u64 = ctx.r11.u32 & 0xFFFF;
	// bctrl 
	ctx.lr = 0x822CED60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cee38
	if (ctx.cr0.lt) goto loc_822CEE38;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// clrlwi. r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x822cecf4
	if (!ctx.cr0.eq) goto loc_822CECF4;
	// b 0x822cee14
	goto loc_822CEE14;
loc_822CED7C:
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r27,8960
	ctx.cr6.compare<uint32_t>(r27.u32, 8960, ctx.xer);
	// blt cr6,0x822cee30
	if (ctx.cr6.lt) goto loc_822CEE30;
	// cmplwi cr6,r27,8992
	ctx.cr6.compare<uint32_t>(r27.u32, 8992, ctx.xer);
	// bge cr6,0x822cee30
	if (!ctx.cr6.lt) goto loc_822CEE30;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lwz r26,0(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzu r29,4(r31)
	ea = 4 + r31.u32;
	r29.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// addi r10,r27,-8960
	ctx.r10.s64 = r27.s64 + -8960;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r28,r10,3,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFE0;
	// clrlwi r25,r11,16
	r25.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r30,0
	r30.s64 = 0;
loc_822CEDB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// and. r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 & r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cedf8
	if (!ctx.cr0.eq) goto loc_822CEDF8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r6,r30,r28
	ctx.r6.u64 = r30.u64 + r28.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x822CEDF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822cee38
	if (ctx.cr0.lt) goto loc_822CEE38;
loc_822CEDF8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// blt cr6,0x822cedb4
	if (ctx.cr6.lt) goto loc_822CEDB4;
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// clrlwi. r11,r25,16
	ctx.r11.u64 = r25.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x822ced7c
	if (!ctx.cr0.eq) goto loc_822CED7C;
loc_822CEE14:
	// cmplw cr6,r31,r20
	ctx.cr6.compare<uint32_t>(r31.u32, r20.u32, ctx.xer);
	// blt cr6,0x822cec24
	if (ctx.cr6.lt) goto loc_822CEC24;
loc_822CEE1C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r17,r17,8
	r17.s64 = r17.s64 + 8;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// blt cr6,0x822cebfc
	if (ctx.cr6.lt) goto loc_822CEBFC;
	// b 0x822cee38
	goto loc_822CEE38;
loc_822CEE30:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_822CEE38:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_822E3740) {
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
	ctx.lr = 0x822E3748;
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822e3618
	ctx.lr = 0x822E3760;
	sub_822E3618(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,21764(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21764);
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lwz r8,21756(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21756);
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r9,r9,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// beq cr6,0x822e37c0
	if (ctx.cr6.eq) goto loc_822E37C0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e37a4
	if (ctx.cr6.lt) goto loc_822E37A4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822e37a4
	if (ctx.cr6.gt) goto loc_822E37A4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822E37A4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e37c0
	if (ctx.cr6.lt) goto loc_822E37C0;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x822e37c0
	if (ctx.cr6.gt) goto loc_822E37C0;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
loc_822E37C0:
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r6,21760(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 21760);
	// rlwimi r30,r29,16,0,15
	r30.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,168(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r28,r10,16,0,15
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r5,r9,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// rlwimi r4,r7,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// subf r6,r8,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r8.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// clrlwi r29,r8,16
	r29.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// rlwinm r8,r6,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// or r7,r29,r28
	ctx.r7.u64 = r29.u64 | r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// bl 0x822e3108
	ctx.lr = 0x822E383C;
	sub_822E3108(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,800
	ctx.r4.s64 = 800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82793c24
	ctx.lr = 0x822E384C;
	__imp__RtlFillMemoryUlong(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d48b8
	ctx.lr = 0x822E3858;
	sub_822D48B8(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,200
	ctx.r7.s64 = 200;
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// subf r4,r9,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r4,r6,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// rlwimi r25,r11,16,0,15
	r25.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r25.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// or r6,r29,r28
	ctx.r6.u64 = r29.u64 | r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82793e74
	ctx.lr = 0x822E38C0;
	__imp__VdInitializeScalerCommandBuffer(ctx, base);
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822E38D4;
	sub_826A1E70(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822d5b28
	ctx.lr = 0x822E38E4;
	sub_822D5B28(ctx, base);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822ED048) {
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
	ctx.lr = 0x822ED050;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x822ED060;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,14848
	ctx.r11.s64 = ctx.r11.s64 + 14848;
	// stb r27,116(r30)
	REX_STORE_U8(r30.u32 + 116, r27.u8);
	// li r3,100
	ctx.r3.s64 = 100;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stb r27,117(r30)
	REX_STORE_U8(r30.u32 + 117, r27.u8);
	// bl 0x822f6280
	ctx.lr = 0x822ED080;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed0a0
	if (ctx.cr0.eq) goto loc_822ED0A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x822ED098;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822ed0a4
	goto loc_822ED0A4;
loc_822ED0A0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822ED0A4:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r31,r30,96
	r31.s64 = r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x822ED0B4;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x822ED0BC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed0d4
	if (ctx.cr0.eq) goto loc_822ED0D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822ed508
	ctx.lr = 0x822ED0CC;
	sub_822ED508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822ed0d8
	goto loc_822ED0D8;
loc_822ED0D4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822ED0D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x822ED0E0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822ED0E8;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r28,r11,-15424
	r28.s64 = ctx.r11.s64 + -15424;
	// addi r29,r10,-23836
	r29.s64 = ctx.r10.s64 + -23836;
	// beq 0x822ed15c
	if (ctx.cr0.eq) goto loc_822ED15C;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15868
	ctx.r4.s64 = ctx.r11.s64 + -15868;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822ED11C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822ED128;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed14c
	if (ctx.cr0.eq) goto loc_822ED14C;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11384
	ctx.r10.s64 = ctx.r10.s64 + -11384;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ed150
	goto loc_822ED150;
loc_822ED14C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822ED150:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x822ed160
	goto loc_822ED160;
loc_822ED15C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_822ED160:
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
	ctx.lr = 0x822ED178;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822ED180;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822ed1e4
	if (ctx.cr0.eq) goto loc_822ED1E4;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14804
	ctx.r4.s64 = ctx.r11.s64 + 14804;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822ED1A4;
	sub_821DBB48(ctx, base);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822ED1B0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed1d4
	if (ctx.cr0.eq) goto loc_822ED1D4;
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11360
	ctx.r10.s64 = ctx.r10.s64 + -11360;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ed1d8
	goto loc_822ED1D8;
loc_822ED1D4:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822ED1D8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x822ed1e8
	goto loc_822ED1E8;
loc_822ED1E4:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_822ED1E8:
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
	ctx.lr = 0x822ED200;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822ED208;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x822ed240
	if (ctx.cr0.eq) goto loc_822ED240;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14812
	ctx.r4.s64 = ctx.r11.s64 + 14812;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822ED234;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x822ed244
	goto loc_822ED244;
loc_822ED240:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_822ED244:
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
	ctx.lr = 0x822ED25C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822ED264;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822ed294
	if (ctx.cr0.eq) goto loc_822ED294;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,14820
	ctx.r4.s64 = ctx.r11.s64 + 14820;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822ED288;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x822ed298
	goto loc_822ED298;
loc_822ED294:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_822ED298:
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
	ctx.lr = 0x822ED2B0;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822ED2B8;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-29688
	r31.s64 = ctx.r11.s64 + -29688;
	// beq 0x822ed2e4
	if (ctx.cr0.eq) goto loc_822ED2E4;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-11344
	ctx.r11.s64 = ctx.r11.s64 + -11344;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822ed2e8
	goto loc_822ED2E8;
loc_822ED2E4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822ED2E8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// addi r5,r11,14828
	ctx.r5.s64 = ctx.r11.s64 + 14828;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216be80
	ctx.lr = 0x822ED2FC;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822ED304;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed328
	if (ctx.cr0.eq) goto loc_822ED328;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-11328
	ctx.r11.s64 = ctx.r11.s64 + -11328;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822ed32c
	goto loc_822ED32C;
loc_822ED328:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822ED32C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// bl 0x8216be80
	ctx.lr = 0x822ED33C;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822ED344;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed368
	if (ctx.cr0.eq) goto loc_822ED368;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-11056
	ctx.r11.s64 = ctx.r11.s64 + -11056;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822ed36c
	goto loc_822ED36C;
loc_822ED368:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_822ED36C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,-27100
	ctx.r5.s64 = ctx.r11.s64 + -27100;
	// bl 0x8216be80
	ctx.lr = 0x822ED37C;
	sub_8216BE80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822FDCD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x822fdcec
	if (!ctx.cr6.gt) goto loc_822FDCEC;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_822FDCEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x822fdd00
	if (!ctx.cr6.lt) goto loc_822FDD00;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_822FDD00:
	// stfs f1,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822fac90
	sub_822FAC90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FF9D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ff9f4
	if (ctx.cr6.eq) goto loc_822FF9F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822ff9f8
	goto loc_822FF9F8;
loc_822FF9F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FF9F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffa08
	if (!ctx.cr6.eq) goto loc_822FFA08;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_822FFA08:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822ffa18
	if (!ctx.cr6.eq) goto loc_822FFA18;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FFA18:
	// lfs f0,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82301478) {
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
	ctx.lr = 0x82301480;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823014ec
	if (ctx.cr6.eq) goto loc_823014EC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823014ec
	if (ctx.cr6.eq) goto loc_823014EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r3,100
	r30.s64 = ctx.r3.s64 + 100;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r31,100(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// b 0x823014e4
	goto loc_823014E4;
loc_823014B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x823014c8
	if (!ctx.cr6.eq) goto loc_823014C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823014C8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x82331668
	ctx.lr = 0x823014D4;
	sub_82331668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823014f8
	if (ctx.cr0.eq) goto loc_823014F8;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823014E4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823014b8
	if (!ctx.cr6.eq) goto loc_823014B8;
loc_823014EC:
	// li r3,37
	ctx.r3.s64 = 37;
loc_823014F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_823014F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// bne cr6,0x82301508
	if (!ctx.cr6.eq) goto loc_82301508;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82301508:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82301518
	if (ctx.cr6.eq) goto loc_82301518;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
loc_82301518:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823014f0
	goto loc_823014F0;
}

DEFINE_REX_FUNC(sub_82305E58) {
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
	ctx.lr = 0x82305E60;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8233e338
	ctx.lr = 0x82305E80;
	sub_8233E338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82306124
	if (!ctx.cr0.eq) goto loc_82306124;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a1b58
	ctx.lr = 0x82305E90;
	sub_826A1B58(ctx, base);
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r29,164(r31)
	REX_STORE_U32(r31.u32 + 164, r29.u32);
	// beq 0x82305eac
	if (ctx.cr0.eq) goto loc_82305EAC;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
loc_82305EAC:
	// li r26,0
	r26.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stb r9,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// bl 0x823015f8
	ctx.lr = 0x82305EDC;
	sub_823015F8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8232f588
	ctx.lr = 0x82305EF0;
	sub_8232F588(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82305f14
	if (ctx.cr0.eq) goto loc_82305F14;
loc_82305EF8:
	// lbz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82305f0c
	if (ctx.cr0.eq) goto loc_82305F0C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82301648
	ctx.lr = 0x82305F0C;
	sub_82301648(ctx, base);
loc_82305F0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82306124
	goto loc_82306124;
loc_82305F14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82305F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82305f48
	if (ctx.cr0.eq) goto loc_82305F48;
loc_82305F30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82305F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82305ef8
	goto loc_82305EF8;
loc_82305F48:
	// lis r28,-32129
	r28.s64 = -2105606144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,4384
	r29.s64 = ctx.r11.s64 + 4384;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,591
	ctx.r6.s64 = 591;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82305F74;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82305f84
	if (ctx.cr0.eq) goto loc_82305F84;
	// bl 0x8230fd10
	ctx.lr = 0x82305F80;
	sub_8230FD10(ctx, base);
	// b 0x82305f88
	goto loc_82305F88;
loc_82305F84:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82305F88:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// bne cr6,0x82305fc4
	if (!ctx.cr6.eq) goto loc_82305FC4;
loc_82305F94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82305FA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82305fbc
	if (ctx.cr0.eq) goto loc_82305FBC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82301648
	ctx.lr = 0x82305FBC;
	sub_82301648(ctx, base);
loc_82305FBC:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82306124
	goto loc_82306124;
loc_82305FC4:
	// bl 0x8230eed0
	ctx.lr = 0x82305FC8;
	sub_8230EED0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r11,4120
	r27.s64 = ctx.r11.s64 + 4120;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823317f0
	ctx.lr = 0x82305FD8;
	sub_823317F0(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305f94
	if (ctx.cr6.eq) goto loc_82305F94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8230efe0
	ctx.lr = 0x82305FF8;
	sub_8230EFE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82305f30
	if (!ctx.cr0.eq) goto loc_82305F30;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,606
	ctx.r6.s64 = 606;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82306024;
	sub_82330A38(ctx, base);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82305f94
	if (ctx.cr0.eq) goto loc_82305F94;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82306098
	if (ctx.cr0.eq) goto loc_82306098;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,614
	ctx.r6.s64 = 614;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8230605C;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82306088
	if (ctx.cr0.eq) goto loc_82306088;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,4376
	ctx.r10.s64 = ctx.r10.s64 + 4376;
	// stw r26,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r26.u32);
	// stw r26,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r26.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8230608c
	goto loc_8230608C;
loc_82306088:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8230608C:
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305f94
	if (ctx.cr6.eq) goto loc_82305F94;
loc_82306098:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,624
	ctx.r6.s64 = 624;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x823060B8;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823060c8
	if (ctx.cr0.eq) goto loc_823060C8;
	// bl 0x8230fd10
	ctx.lr = 0x823060C4;
	sub_8230FD10(ctx, base);
	// b 0x823060cc
	goto loc_823060CC;
loc_823060C8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_823060CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// beq cr6,0x82305f94
	if (ctx.cr6.eq) goto loc_82305F94;
	// bl 0x8230eed0
	ctx.lr = 0x823060DC;
	sub_8230EED0(ctx, base);
	// addi r3,r27,8
	ctx.r3.s64 = r27.s64 + 8;
	// bl 0x823317f0
	ctx.lr = 0x823060E4;
	sub_823317F0(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82305f94
	if (ctx.cr6.eq) goto loc_82305F94;
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x8230efe0
	ctx.lr = 0x82306104;
	sub_8230EFE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82305f30
	if (!ctx.cr0.eq) goto loc_82305F30;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x8230ff30
	ctx.lr = 0x82306118;
	sub_8230FF30(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82305f30
	if (!ctx.cr0.eq) goto loc_82305F30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82306124:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823185B8) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-10820(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231865c
	if (ctx.cr0.eq) goto loc_8231865C;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318640
	if (ctx.cr6.eq) goto loc_82318640;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231860C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82315350
	ctx.lr = 0x82318610;
	sub_82315350(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82318638;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82318638:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318644
	if (!ctx.cr0.eq) goto loc_82318644;
loc_82318640:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82318644:
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
loc_8231865C:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318688
	if (ctx.cr6.eq) goto loc_82318688;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm. r11,r11,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82318688
	if (ctx.cr0.eq) goto loc_82318688;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// bl 0x8230d2d0
	ctx.lr = 0x82318680;
	sub_8230D2D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82318644
	if (!ctx.cr0.eq) goto loc_82318644;
loc_82318688:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318640
	if (ctx.cr6.eq) goto loc_82318640;
	// bl 0x8232fc60
	ctx.lr = 0x82318698;
	sub_8232FC60(ctx, base);
	// b 0x82318638
	goto loc_82318638;
}

DEFINE_REX_FUNC(sub_82320620) {
	REX_FUNC_PROLOGUE();
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82320AA0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82320ab0
	if (!ctx.cr6.eq) goto loc_82320AB0;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82320AB0:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82323758) {
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
	ctx.lr = 0x82323760;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,168(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82323804
	if (ctx.cr6.eq) goto loc_82323804;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82323804
	if (ctx.cr6.eq) goto loc_82323804;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82323804
	if (ctx.cr6.eq) goto loc_82323804;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82323804
	if (ctx.cr6.eq) goto loc_82323804;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82323804
	if (!ctx.cr6.gt) goto loc_82323804;
	// li r31,0
	r31.s64 = 0;
loc_823237B4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823237e8
	if (ctx.cr6.eq) goto loc_823237E8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823237E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82323ac0
	if (!ctx.cr0.eq) goto loc_82323AC0;
loc_823237E8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823237b4
	if (ctx.cr6.lt) goto loc_823237B4;
loc_82323804:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// li r23,0
	r23.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r10,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or. r24,r11,r10
	r24.u64 = ctx.r11.u64 | ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble 0x82323abc
	if (!ctx.cr0.gt) goto loc_82323ABC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r28,12
	r27.s64 = r28.s64 + 12;
	// lis r25,-32129
	r25.s64 = -2105606144;
	// addi r26,r11,7500
	r26.s64 = ctx.r11.s64 + 7500;
loc_82323840:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbzu r8,1(r31)
	ea = 1 + r31.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwimi r6,r11,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r6,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// or r28,r11,r6
	r28.u64 = ctx.r11.u64 | ctx.r6.u64;
	// ble 0x82323898
	if (!ctx.cr0.gt) goto loc_82323898;
loc_82323880:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// beq cr6,0x823238a0
	if (ctx.cr6.eq) goto loc_823238A0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82323880
	if (ctx.cr6.lt) goto loc_82323880;
loc_82323898:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// bne cr6,0x823238a8
	if (!ctx.cr6.eq) goto loc_823238A8;
loc_823238A0:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x82323ab0
	goto loc_82323AB0;
loc_823238A8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// bne cr6,0x823238b8
	if (!ctx.cr6.eq) goto loc_823238B8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823238B8:
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823238e4
	if (!ctx.cr6.gt) goto loc_823238E4;
loc_823238CC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823238a0
	if (ctx.cr6.eq) goto loc_823238A0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823238cc
	if (ctx.cr6.lt) goto loc_823238CC;
loc_823238E4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823238a0
	if (ctx.cr6.eq) goto loc_823238A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823238fc
	if (!ctx.cr6.eq) goto loc_823238FC;
	// li r29,0
	r29.s64 = 0;
loc_823238FC:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// ble cr6,0x82323a34
	if (!ctx.cr6.gt) goto loc_82323A34;
loc_82323910:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// bne cr6,0x82323920
	if (!ctx.cr6.eq) goto loc_82323920;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82323920:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8232398c
	if (!ctx.cr6.eq) goto loc_8232398C;
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2232
	ctx.r6.s64 = 2232;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8232394C;
	sub_82330E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8232395c
	if (ctx.cr0.eq) goto loc_8232395C;
	// bl 0x8232ca70
	ctx.lr = 0x82323958;
	sub_8232CA70(ctx, base);
	// b 0x82323960
	goto loc_82323960;
loc_8232395C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82323960:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82323ac8
	if (ctx.cr6.eq) goto loc_82323AC8;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_8232398C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwimi r9,r11,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lwzu r11,4(r31)
	ea = 4 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// rlwinm r8,r11,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// lbz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 28);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r9,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// blt cr6,0x82323910
	if (ctx.cr6.lt) goto loc_82323910;
loc_82323A34:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82323aa4
	if (ctx.cr6.eq) goto loc_82323AA4;
loc_82323A44:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r4,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82323a90
	if (!ctx.cr0.eq) goto loc_82323A90;
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2292
	ctx.r6.s64 = 2292;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82323A90;
	sub_82330D00(ctx, base);
loc_82323A90:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82323a44
	if (!ctx.cr6.eq) goto loc_82323A44;
loc_82323AA4:
	// lhz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 36);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// sth r11,36(r29)
	REX_STORE_U16(r29.u32 + 36, ctx.r11.u16);
loc_82323AB0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpw cr6,r23,r24
	ctx.cr6.compare<int32_t>(r23.s32, r24.s32, ctx.xer);
	// blt cr6,0x82323840
	if (ctx.cr6.lt) goto loc_82323840;
loc_82323ABC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82323AC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
loc_82323AC8:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82323ac0
	goto loc_82323AC0;
}

DEFINE_REX_FUNC(sub_82343440) {
	REX_FUNC_PROLOGUE();
	// stw r4,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82343820) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r9,r9,9376
	ctx.r9.s64 = ctx.r9.s64 + 9376;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,3704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lfs f11,3744(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3744);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r3,228
	ctx.r10.s64 = ctx.r3.s64 + 228;
	// stw r11,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f12,3740(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3740);
	ctx.f12.f64 = double(temp.f32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r10,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// lfs f0,3716(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lfs f10,9368(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 9368);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f13,108(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stfs f11,112(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stw r8,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// stfs f12,116(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// stw r7,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// stfs f12,120(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r9,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r11,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stw r11,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// stw r11,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r3,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r3.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r11,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// stw r11,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r10,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// stw r10,232(r3)
	REX_STORE_U32(ctx.r3.u32 + 232, ctx.r10.u32);
	// stw r11,236(r3)
	REX_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234D718) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8234d728
	if (!ctx.cr6.eq) goto loc_8234D728;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8234D728:
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234d73c
	if (!ctx.cr6.eq) goto loc_8234D73C;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234D73C:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234FD58) {
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
	ctx.lr = 0x8234FD60;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r4,44(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82350a88
	ctx.lr = 0x8234FD74;
	sub_82350A88(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234bbc8
	ctx.lr = 0x8234FD84;
	sub_8234BBC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234e480
	ctx.lr = 0x8234FD90;
	sub_8234E480(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234fdb0
	if (!ctx.cr6.eq) goto loc_8234FDB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234be00
	ctx.lr = 0x8234FDAC;
	sub_8234BE00(ctx, base);
	// b 0x8234fe78
	goto loc_8234FE78;
loc_8234FDB0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234fde8
	if (!ctx.cr6.eq) goto loc_8234FDE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f8,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lfs f6,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234c1b8
	ctx.lr = 0x8234FDE4;
	sub_8234C1B8(ctx, base);
	// b 0x8234fe78
	goto loc_8234FE78;
loc_8234FDE8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234fe78
	if (!ctx.cr6.eq) goto loc_8234FE78;
	// lwz r4,284(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234fe14
	if (ctx.cr6.eq) goto loc_8234FE14;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234fe14
	if (ctx.cr6.eq) goto loc_8234FE14;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// bl 0x823607d8
	ctx.lr = 0x8234FE14;
	sub_823607D8(ctx, base);
loc_8234FE14:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// beq cr6,0x8234fe78
	if (ctx.cr6.eq) goto loc_8234FE78;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,1200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234fe78
	if (!ctx.cr6.gt) goto loc_8234FE78;
loc_8234FE38:
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,1200(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1200);
	// lwz r6,1196(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 1196);
	// mullw r8,r9,r30
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8234c3b8
	ctx.lr = 0x8234FE64;
	sub_8234C3B8(ctx, base);
	// lwz r7,68(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r6,1200(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 1200);
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8234fe38
	if (ctx.cr6.lt) goto loc_8234FE38;
loc_8234FE78:
	// addi r5,r31,312
	ctx.r5.s64 = r31.s64 + 312;
	// addi r4,r31,300
	ctx.r4.s64 = r31.s64 + 300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234ccd0
	ctx.lr = 0x8234FE88;
	sub_8234CCD0(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r24,r31,76
	r24.s64 = r31.s64 + 76;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234fee4
	if (ctx.cr6.eq) goto loc_8234FEE4;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234fee4
	if (!ctx.cr6.gt) goto loc_8234FEE4;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8234FEB0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234FEC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8234fed0
	if (!ctx.cr6.eq) goto loc_8234FED0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8234FED0:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234feb0
	if (ctx.cr6.lt) goto loc_8234FEB0;
loc_8234FEE4:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,4(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234f680
	ctx.lr = 0x8234FEF4;
	sub_8234F680(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ff78
	if (ctx.cr6.eq) goto loc_8234FF78;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234ff78
	if (ctx.cr6.eq) goto loc_8234FF78;
	// lwz r29,8(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8234ff78
	if (!ctx.cr6.lt) goto loc_8234FF78;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8234ff78
	if (!ctx.cr6.gt) goto loc_8234FF78;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8234FF3C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234FF58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8234ff64
	if (!ctx.cr6.eq) goto loc_8234FF64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8234FF64:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234ff3c
	if (ctx.cr6.lt) goto loc_8234FF3C;
loc_8234FF78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 28);
	// bl 0x8234d750
	ctx.lr = 0x8234FF84;
	sub_8234D750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,32(r25)
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + 32);
	// bl 0x8234cba0
	ctx.lr = 0x8234FF90;
	sub_8234CBA0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r29,16
	r29.s64 = 16;
loc_8234FF98:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823ef5f0
	ctx.lr = 0x8234FFA8;
	sub_823EF5F0(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// slw r11,r29,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r29.u32 << (r30.u8 & 0x3F));
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d0d8
	ctx.lr = 0x8234FFC4;
	sub_8234D0D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234ffd8
	if (!ctx.cr6.eq) goto loc_8234FFD8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234d050
	ctx.lr = 0x8234FFD8;
	sub_8234D050(ctx, base);
loc_8234FFD8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8234ff98
	if (ctx.cr6.lt) goto loc_8234FF98;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350030
	if (ctx.cr6.eq) goto loc_82350030;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82350030
	if (ctx.cr6.eq) goto loc_82350030;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82350030
	if (!ctx.cr6.eq) goto loc_82350030;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82349050
	ctx.lr = 0x82350030;
	sub_82349050(ctx, base);
loc_82350030:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235008c
	if (ctx.cr6.eq) goto loc_8235008C;
	// lwz r3,0(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82350054
	if (!ctx.cr6.eq) goto loc_82350054;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// b 0x82350068
	goto loc_82350068;
loc_82350054:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82350068;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82350068:
	// lbz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 416);
	// li r4,1
	ctx.r4.s64 = 1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subfe r5,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8235008C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8235008C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8234dcf8
	ctx.lr = 0x8235009C;
	sub_8234DCF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82364978) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82364988
	if (!ctx.cr6.eq) goto loc_82364988;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82364988:
	// b 0x82364158
	sub_82364158(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82364C58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82334778
	ctx.lr = 0x82364C84;
	sub_82334778(ctx, base);
	// cmplwi cr6,r30,5
	ctx.cr6.compare<uint32_t>(r30.u32, 5, ctx.xer);
	// bgt cr6,0x82364dd8
	if (ctx.cr6.gt) goto loc_82364DD8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82364cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82364CDC;
	// bdzf 4*cr6+eq,0x82364d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82364D10;
	// bdzf 4*cr6+eq,0x82364d44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82364D44;
	// bdzf 4*cr6+eq,0x82364d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82364D78;
	// bne cr6,0x82364dac
	if (!ctx.cr6.eq) goto loc_82364DAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82364cc8
	if (ctx.cr6.gt) goto loc_82364CC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x82364ccc
	if (!ctx.cr6.lt) goto loc_82364CCC;
loc_82364CC8:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_82364CCC:
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823be178
	ctx.lr = 0x82364CD8;
	sub_823BE178(ctx, base);
	// b 0x82364dd8
	goto loc_82364DD8;
loc_82364CDC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82364cfc
	if (ctx.cr6.gt) goto loc_82364CFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x82364d00
	if (!ctx.cr6.lt) goto loc_82364D00;
loc_82364CFC:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_82364D00:
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823be1b8
	ctx.lr = 0x82364D0C;
	sub_823BE1B8(ctx, base);
	// b 0x82364dd8
	goto loc_82364DD8;
loc_82364D10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82364d30
	if (ctx.cr6.gt) goto loc_82364D30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x82364d34
	if (!ctx.cr6.lt) goto loc_82364D34;
loc_82364D30:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_82364D34:
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823be1e8
	ctx.lr = 0x82364D40;
	sub_823BE1E8(ctx, base);
	// b 0x82364dd8
	goto loc_82364DD8;
loc_82364D44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82364d64
	if (ctx.cr6.gt) goto loc_82364D64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x82364d68
	if (!ctx.cr6.lt) goto loc_82364D68;
loc_82364D64:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_82364D68:
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823be218
	ctx.lr = 0x82364D74;
	sub_823BE218(ctx, base);
	// b 0x82364dd8
	goto loc_82364DD8;
loc_82364D78:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82364d98
	if (ctx.cr6.gt) goto loc_82364D98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x82364d9c
	if (!ctx.cr6.lt) goto loc_82364D9C;
loc_82364D98:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_82364D9C:
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823be248
	ctx.lr = 0x82364DA8;
	sub_823BE248(ctx, base);
	// b 0x82364dd8
	goto loc_82364DD8;
loc_82364DAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12516);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x82364dc8
	if (ctx.cr6.lt) goto loc_82364DC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82364dd0
	goto loc_82364DD0;
loc_82364DC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
loc_82364DD0:
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// bl 0x823be258
	ctx.lr = 0x82364DD8;
	sub_823BE258(ctx, base);
loc_82364DD8:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823347a0
	ctx.lr = 0x82364DE0;
	sub_823347A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82375C10) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823753a0
	ctx.lr = 0x82375C34;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375d10
	if (!ctx.cr6.eq) goto loc_82375D10;
loc_82375C3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375C48;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375d10
	if (!ctx.cr6.eq) goto loc_82375D10;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// beq cr6,0x82375c64
	if (ctx.cr6.eq) goto loc_82375C64;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// bne cr6,0x82375d00
	if (!ctx.cr6.eq) goto loc_82375D00;
loc_82375C64:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375C70;
	sub_82340C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375d10
	if (!ctx.cr6.eq) goto loc_82375D10;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82375cc8
	if (ctx.cr6.eq) goto loc_82375CC8;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82375c98
	if (ctx.cr6.eq) goto loc_82375C98;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82375ccc
	goto loc_82375CCC;
loc_82375C98:
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340c58
	ctx.lr = 0x82375CA4;
	sub_82340C58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82375CB4;
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
	// b 0x82375ccc
	goto loc_82375CCC;
loc_82375CC8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82375CCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82375c64
	if (ctx.cr6.eq) goto loc_82375C64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823753a0
	ctx.lr = 0x82375CE4;
	sub_823753A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82375c3c
	if (ctx.cr6.eq) goto loc_82375C3C;
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
loc_82375D00:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82340e38
	ctx.lr = 0x82375D10;
	sub_82340E38(ctx, base);
loc_82375D10:
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

DEFINE_REX_FUNC(sub_82381D78) {
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
	ctx.lr = 0x82381D80;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c74
	ctx.lr = 0x82381D88;
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2184);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,520(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r4,607(r1)
	REX_STORE_U8(ctx.r1.u32 + 607, ctx.r4.u8);
	// stb r5,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r5.u8);
	// lbz r8,532(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 532);
	// rotlwi r9,r8,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// beq 0x82384418
	if (ctx.cr0.eq) goto loc_82384418;
	// lwz r10,2168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2168);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82381e10
	if (!ctx.cr6.eq) goto loc_82381E10;
	// lwz r10,528(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82381e10
	if (ctx.cr6.eq) goto loc_82381E10;
	// lwz r9,2180(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2180);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82381e0c
	if (ctx.cr6.eq) goto loc_82381E0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2165(r3)
	REX_STORE_U8(ctx.r3.u32 + 2165, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cc0
	ctx.lr = 0x82381E08;
	// b 0x826a1cd0
	return;
loc_82381E0C:
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
loc_82381E10:
	// lwz r11,788(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 788);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82383be8
	if (!ctx.cr6.gt) goto loc_82383BE8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r4,21845
	ctx.r4.s64 = 1431633920;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lfs f29,19460(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19460);
	f29.f64 = double(temp.f32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32129
	ctx.r9.s64 = -2105606144;
	// lfs f30,19456(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19456);
	f30.f64 = double(temp.f32);
	// lfs f31,19452(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19452);
	f31.f64 = double(temp.f32);
	// li r18,64
	r18.s64 = 64;
	// li r16,1024
	r16.s64 = 1024;
	// li r14,8
	r14.s64 = 8;
	// ori r19,r4,21846
	r19.u64 = ctx.r4.u64 | 21846;
	// li r15,21
	r15.s64 = 21;
	// li r17,128
	r17.s64 = 128;
	// addi r23,r11,31488
	r23.s64 = ctx.r11.s64 + 31488;
	// addi r20,r10,32064
	r20.s64 = ctx.r10.s64 + 32064;
	// addi r24,r9,32120
	r24.s64 = ctx.r9.s64 + 32120;
loc_82381E6C:
	// addi r11,r22,364
	ctx.r11.s64 = r22.s64 + 364;
	// stw r5,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r11,r21
	r28.u64 = ctx.r11.u64 + r21.u64;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// rlwinm r26,r10,28,4,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r25,r10,28
	r25.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82381ecc
	if (!ctx.cr6.eq) goto loc_82381ECC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x82381ecc
	if (!ctx.cr6.eq) goto loc_82381ECC;
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// clrlwi r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82383bd8
	if (ctx.cr6.lt) goto loc_82383BD8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82381ed8
	if (!ctx.cr6.eq) goto loc_82381ED8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
loc_82381ECC:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82381f08
	if (ctx.cr6.eq) goto loc_82381F08;
loc_82381ED8:
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82381f0c
	if (!ctx.cr6.eq) goto loc_82381F0C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82381f0c
	if (!ctx.cr6.eq) goto loc_82381F0C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82381f08
	if (ctx.cr6.eq) goto loc_82381F08;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82381f0c
	if (!ctx.cr6.eq) goto loc_82381F0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82381f0c
	if (!ctx.cr6.eq) goto loc_82381F0C;
loc_82381F08:
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
loc_82381F0C:
	// addi r11,r22,198
	ctx.r11.s64 = r22.s64 + 198;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r21
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82381f34
	if (!ctx.cr6.eq) goto loc_82381F34;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq cr6,0x82381f38
	if (ctx.cr6.eq) goto loc_82381F38;
loc_82381F34:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82381F38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82381f50
	if (ctx.cr6.eq) goto loc_82381F50;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stw r20,448(r24)
	REX_STORE_U32(r24.u32 + 448, r20.u32);
	// b 0x82381f54
	goto loc_82381F54;
loc_82381F50:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82381F54:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823827e0
	if (ctx.cr6.eq) goto loc_823827E0;
	// lbz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 600);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x82381f8c
	if (!ctx.cr6.eq) goto loc_82381F8C;
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x82381f8c
	if (ctx.cr6.eq) goto loc_82381F8C;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 612);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
loc_82381F8C:
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// stw r5,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r5.u32);
	// stb r11,600(r31)
	REX_STORE_U8(r31.u32 + 600, ctx.r11.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,484(r10)
	REX_STORE_U32(ctx.r10.u32 + 484, ctx.r5.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r5,460(r9)
	REX_STORE_U8(ctx.r9.u32 + 460, ctx.r5.u8);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82381fd0
	if (ctx.cr6.eq) goto loc_82381FD0;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82381fd0
	if (ctx.cr6.eq) goto loc_82381FD0;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// beq cr6,0x82381fd0
	if (ctx.cr6.eq) goto loc_82381FD0;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stb r11,593(r31)
	REX_STORE_U8(r31.u32 + 593, ctx.r11.u8);
loc_82381FD0:
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82381ff4
	if (ctx.cr6.eq) goto loc_82381FF4;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,592(r31)
	REX_STORE_U8(r31.u32 + 592, ctx.r11.u8);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, ctx.xer);
	// bne cr6,0x82381ff4
	if (!ctx.cr6.eq) goto loc_82381FF4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
loc_82381FF4:
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382020
	if (ctx.cr6.eq) goto loc_82382020;
	// lbz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r10,1420(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 1420);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r3,r9,r4
	temp.u8 = (~ctx.r9.u32 + ctx.r4.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
loc_82382020:
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// add r10,r22,r21
	ctx.r10.u64 = r22.u64 + r21.u64;
	// stb r11,600(r31)
	REX_STORE_U8(r31.u32 + 600, ctx.r11.u8);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r5,460(r9)
	REX_STORE_U8(ctx.r9.u32 + 460, ctx.r5.u8);
	// lbz r11,3(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 3);
	// lbz r8,1276(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1276);
	// rlwinm r4,r8,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
	// beq cr6,0x8238207c
	if (ctx.cr6.eq) goto loc_8238207C;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8238207c
	if (ctx.cr6.eq) goto loc_8238207C;
	// lbz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,193
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 193, ctx.xer);
	// blt cr6,0x82382074
	if (ctx.cr6.lt) goto loc_82382074;
	// cmpwi cr6,r11,202
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 202, ctx.xer);
	// ble cr6,0x8238207c
	if (!ctx.cr6.gt) goto loc_8238207C;
loc_82382074:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82382080
	goto loc_82382080;
loc_8238207C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82382080:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823820a0
	if (ctx.cr6.eq) goto loc_823820A0;
	// subf r11,r8,r24
	ctx.r11.u64 = r24.u64 - ctx.r8.u64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 & ctx.r7.u64;
loc_823820A0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823827b8
	if (ctx.cr6.eq) goto loc_823827B8;
	// lhz r9,2162(r21)
	ctx.r9.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// lbz r11,592(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 592);
	// rlwinm r4,r9,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// lwz r10,1428(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r9,r11,1492
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1492));
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x823820e0
	if (ctx.cr6.eq) goto loc_823820E0;
	// lbz r11,593(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 593);
	// addi r11,r11,620
	ctx.r11.s64 = ctx.r11.s64 + 620;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r10,r29
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + r29.u32);
	// b 0x823820e4
	goto loc_823820E4;
loc_823820E0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_823820E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823827b8
	if (ctx.cr6.eq) goto loc_823827B8;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,594(r31)
	REX_STORE_U8(r31.u32 + 594, ctx.r11.u8);
	// lhz r9,2162(r21)
	ctx.r9.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823821c0
	if (ctx.cr6.eq) goto loc_823821C0;
	// lbz r11,1233(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1233);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823821c0
	if (ctx.cr6.eq) goto loc_823821C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x823821c0
	if (ctx.cr6.eq) goto loc_823821C0;
loc_8238211C:
	// lbz r10,1233(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1233);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82382208
	if (ctx.cr6.eq) goto loc_82382208;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8238218c
	if (ctx.cr6.eq) goto loc_8238218C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823821b4
	if (!ctx.cr6.eq) goto loc_823821B4;
	// lbz r9,456(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 456);
	// lbz r10,592(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 592);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823821b4
	if (!ctx.cr6.eq) goto loc_823821B4;
	// lbz r10,1234(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1234);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823821a8
	if (ctx.cr6.lt) goto loc_823821A8;
	// beq cr6,0x82382168
	if (ctx.cr6.eq) goto loc_82382168;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x823821b4
	if (!ctx.cr6.lt) goto loc_823821B4;
	// stb r6,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r6.u8);
	// b 0x823821b4
	goto loc_823821B4;
loc_82382168:
	// lwz r10,1428(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r9,r9,1492
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1492));
	// stb r6,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r6.u8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r8,462(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 462);
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// b 0x82382260
	goto loc_82382260;
loc_8238218C:
	// lbz r10,458(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 458);
	// lbz r9,594(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 594);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823821b4
	if (!ctx.cr6.eq) goto loc_823821B4;
	// lbz r10,1234(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1234);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x82382228
	if (!ctx.cr6.lt) goto loc_82382228;
loc_823821A8:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
loc_823821B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8238211c
	if (!ctx.cr6.eq) goto loc_8238211C;
loc_823821C0:
	// clrlwi r30,r7,24
	r30.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823824a0
	if (!ctx.cr6.eq) goto loc_823824A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bne cr6,0x82382284
	if (!ctx.cr6.eq) goto loc_82382284;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823c84a0
	ctx.lr = 0x823821F0;
	sub_823C84A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823823e4
	if (ctx.cr6.eq) goto loc_823823E4;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r20,448(r24)
	REX_STORE_U32(r24.u32 + 448, r20.u32);
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// b 0x823823e8
	goto loc_823823E8;
loc_82382208:
	// lbz r10,457(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 457);
	// lbz r9,593(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 593);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823821b4
	if (!ctx.cr6.eq) goto loc_823821B4;
	// lbz r10,1234(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1234);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823821a8
	if (ctx.cr6.lt) goto loc_823821A8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
loc_82382228:
	// beq cr6,0x8238223c
	if (ctx.cr6.eq) goto loc_8238223C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x823821b4
	if (!ctx.cr6.lt) goto loc_823821B4;
	// stb r6,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r6.u8);
	// b 0x823821b4
	goto loc_823821B4;
loc_8238223C:
	// lwz r10,1428(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// stb r6,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r6.u8);
	// lbz r9,456(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 456);
	// mulli r9,r9,1492
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1492));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r4,462(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 462);
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_82382260:
	// bne cr6,0x8238226c
	if (!ctx.cr6.eq) goto loc_8238226C;
	// stb r6,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r6.u8);
	// b 0x823821b4
	goto loc_823821B4;
loc_8238226C:
	// lbz r10,960(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 960);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823821b4
	if (ctx.cr6.eq) goto loc_823821B4;
	// stb r6,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r6.u8);
	// b 0x823821b4
	goto loc_823821B4;
loc_82382284:
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823823e8
	if (ctx.cr6.eq) goto loc_823823E8;
	// lbz r8,456(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 456);
	// lwz r9,1428(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// lbz r10,461(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 461);
	// mulli r8,r8,1492
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1492));
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82382388
	if (ctx.cr6.eq) goto loc_82382388;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82382310
	if (ctx.cr6.eq) goto loc_82382310;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823823e8
	if (!ctx.cr6.eq) goto loc_823823E8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,459(r11)
	REX_STORE_U8(ctx.r11.u32 + 459, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r10,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r10.u8);
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823822ec
	if (!ctx.cr6.eq) goto loc_823822EC;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
loc_823822EC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823c84a0
	ctx.lr = 0x82382300;
	sub_823C84A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823823d0
	if (!ctx.cr6.eq) goto loc_823823D0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x823823d8
	goto loc_823823D8;
loc_82382310:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,459(r11)
	REX_STORE_U8(ctx.r11.u32 + 459, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r10,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r8,462(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 462);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82382344
	if (ctx.cr6.eq) goto loc_82382344;
	// lbz r9,960(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 960);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238234c
	if (ctx.cr6.eq) goto loc_8238234C;
loc_82382344:
	// stb r10,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8238234C:
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382364
	if (!ctx.cr6.eq) goto loc_82382364;
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
loc_82382364:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823c84a0
	ctx.lr = 0x82382378;
	sub_823C84A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823823d0
	if (!ctx.cr6.eq) goto loc_823823D0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x823823d8
	goto loc_823823D8;
loc_82382388:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,459(r11)
	REX_STORE_U8(ctx.r11.u32 + 459, ctx.r10.u8);
	// lwz r9,604(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823823ac
	if (!ctx.cr6.eq) goto loc_823823AC;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
loc_823823AC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823c84a0
	ctx.lr = 0x823823C0;
	sub_823C84A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823823d0
	if (!ctx.cr6.eq) goto loc_823823D0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x823823d8
	goto loc_823823D8;
loc_823823D0:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r20,448(r24)
	REX_STORE_U32(r24.u32 + 448, r20.u32);
loc_823823D8:
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// stw r10,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r10.u32);
loc_823823E4:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823823E8:
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238243c
	if (ctx.cr6.eq) goto loc_8238243C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,459(r11)
	REX_STORE_U8(ctx.r11.u32 + 459, ctx.r10.u8);
	// lbz r9,592(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r11,1428(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r10,r9,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1492));
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,1232(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1232);
	// stb r6,461(r8)
	REX_STORE_U8(ctx.r8.u32 + 461, ctx.r6.u8);
	// lwz r11,1428(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r4,592(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 592);
	// mulli r10,r4,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1492));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,960(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 960);
	// stb r11,462(r5)
	REX_STORE_U8(ctx.r5.u32 + 462, ctx.r11.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8238243C:
	// lbz r10,594(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 594);
	// stb r10,458(r11)
	REX_STORE_U8(ctx.r11.u32 + 458, ctx.r10.u8);
	// lbz r9,592(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r9,456(r8)
	REX_STORE_U8(ctx.r8.u32 + 456, ctx.r9.u8);
	// lbz r7,593(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 593);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r7,457(r6)
	REX_STORE_U8(ctx.r6.u32 + 457, ctx.r7.u8);
	// lwz r5,1424(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 1424);
	// lbz r11,594(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 594);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x82382490
	if (!ctx.cr6.lt) goto loc_82382490;
	// lwz r10,2204(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2204);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82382490
	if (ctx.cr6.eq) goto loc_82382490;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,448(r10)
	REX_STORE_U32(ctx.r10.u32 + 448, ctx.r11.u32);
	// b 0x82382498
	goto loc_82382498;
loc_82382490:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r20,448(r11)
	REX_STORE_U32(ctx.r11.u32 + 448, r20.u32);
loc_82382498:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
loc_823824A0:
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lbz r11,593(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 593);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823824c8
	if (ctx.cr6.eq) goto loc_823824C8;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + r29.u64;
	// lbz r9,1239(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1239);
	// stb r9,595(r31)
	REX_STORE_U8(r31.u32 + 595, ctx.r9.u8);
	// b 0x823824cc
	goto loc_823824CC;
loc_823824C8:
	// stb r11,595(r31)
	REX_STORE_U8(r31.u32 + 595, ctx.r11.u8);
loc_823824CC:
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238253c
	if (ctx.cr6.eq) goto loc_8238253C;
	// lbz r11,595(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 595);
	// subfic r10,r11,120
	ctx.xer.ca = ctx.r11.u32 <= 120;
	ctx.r10.u64 = static_cast<uint64_t>(120) - ctx.r11.u64;
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r9,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r9.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r7,448(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 448);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// std r5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * f31.f64));
	// bl 0x826a16a0
	ctx.lr = 0x82382510;
	sub_826A16A0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lwz r4,596(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 596);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f8.u64);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// b 0x82382560
	goto loc_82382560;
loc_8238253C:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,595(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 595);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r8,448(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// lwzx r7,r9,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r23.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r3,r7,8363
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(8363));
	// divwu r11,r3,r4
	ctx.r11.u64 = uint32_t(ctx.r4.u32 ? ctx.r3.u32 / ctx.r4.u32 : 0);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
loc_82382560:
	// stw r11,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8238266c
	if (!ctx.cr6.eq) goto loc_8238266C;
	// stb r5,646(r31)
	REX_STORE_U8(r31.u32 + 646, ctx.r5.u8);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stb r5,650(r31)
	REX_STORE_U8(r31.u32 + 650, ctx.r5.u8);
	// stw r5,656(r31)
	REX_STORE_U32(r31.u32 + 656, ctx.r5.u32);
	// stb r5,662(r31)
	REX_STORE_U8(r31.u32 + 662, ctx.r5.u8);
	// stb r5,637(r31)
	REX_STORE_U8(r31.u32 + 637, ctx.r5.u8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,464(r10)
	REX_STORE_U32(ctx.r10.u32 + 464, ctx.r11.u32);
	// lwz r9,608(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 608);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,472(r8)
	REX_STORE_U32(ctx.r8.u32 + 472, ctx.r9.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,492(r7)
	REX_STORE_U32(ctx.r7.u32 + 492, ctx.r6.u32);
	// lhz r4,2162(r21)
	ctx.r4.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823825d4
	if (ctx.cr6.eq) goto loc_823825D4;
	// lbz r11,1231(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1231);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823825d4
	if (!ctx.cr6.eq) goto loc_823825D4;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r8,63
	ctx.r8.s64 = 63;
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// stw r7,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r7.u32);
loc_823825D4:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,448(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// lbz r10,9(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 9);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823825f8
	if (ctx.cr6.eq) goto loc_823825F8;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stw r10,472(r11)
	REX_STORE_U32(ctx.r11.u32 + 472, ctx.r10.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823825F8:
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82382654
	if (ctx.cr6.eq) goto loc_82382654;
	// lbz r10,1236(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1236);
	// lbz r9,593(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 593);
	// lbz r8,1235(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 1235);
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r10,472(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// mullw r4,r7,r8
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r3,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 3;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,472(r11)
	REX_STORE_U32(ctx.r11.u32 + 472, ctx.r10.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r9,1230(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 1230);
	// lwz r8,448(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// lbz r7,33(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 33);
	// mullw r4,r7,r9
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r3,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 7;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// stw r10,496(r11)
	REX_STORE_U32(ctx.r11.u32 + 496, ctx.r10.u32);
	// b 0x82382660
	goto loc_82382660;
loc_82382654:
	// lwz r10,448(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// stw r9,496(r11)
	REX_STORE_U32(ctx.r11.u32 + 496, ctx.r9.u32);
loc_82382660:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r10,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r10.u8);
loc_8238266C:
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823827b4
	if (ctx.cr6.eq) goto loc_823827B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82382698
	if (ctx.cr6.eq) goto loc_82382698;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82382698
	if (!ctx.cr6.eq) goto loc_82382698;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823827b4
	if (!ctx.cr6.eq) goto loc_823827B4;
loc_82382698:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r5,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r5.u8);
	// lbz r10,592(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r11,1428(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r10,r10,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,960(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 960);
	// rlwinm r4,r7,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823826d0
	if (ctx.cr6.eq) goto loc_823826D0;
	// lbz r11,461(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 461);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823826f0
	if (!ctx.cr6.eq) goto loc_823826F0;
loc_823826D0:
	// stw r18,512(r9)
	REX_STORE_U32(ctx.r9.u32 + 512, r18.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,504(r11)
	REX_STORE_U32(ctx.r11.u32 + 504, ctx.r5.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,500(r10)
	REX_STORE_U32(ctx.r10.u32 + 500, ctx.r5.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,516(r9)
	REX_STORE_U32(ctx.r9.u32 + 516, ctx.r5.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823826F0:
	// lbz r10,592(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r11,1428(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r10,r10,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,1047(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1047);
	// rlwinm r4,r7,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238271c
	if (ctx.cr6.eq) goto loc_8238271C;
	// lbz r11,461(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 461);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238273c
	if (!ctx.cr6.eq) goto loc_8238273C;
loc_8238271C:
	// stw r5,536(r9)
	REX_STORE_U32(ctx.r9.u32 + 536, ctx.r5.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,528(r11)
	REX_STORE_U32(ctx.r11.u32 + 528, ctx.r5.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,524(r10)
	REX_STORE_U32(ctx.r10.u32 + 524, ctx.r5.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,540(r9)
	REX_STORE_U32(ctx.r9.u32 + 540, ctx.r5.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8238273C:
	// lbz r10,592(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r11,1428(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r10,r10,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,1135(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 1135);
	// rlwinm r4,r7,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82382768
	if (ctx.cr6.eq) goto loc_82382768;
	// lbz r11,461(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 461);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82382788
	if (!ctx.cr6.eq) goto loc_82382788;
loc_82382768:
	// stw r5,560(r9)
	REX_STORE_U32(ctx.r9.u32 + 560, ctx.r5.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r5.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,548(r10)
	REX_STORE_U32(ctx.r10.u32 + 548, ctx.r5.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,564(r9)
	REX_STORE_U32(ctx.r9.u32 + 564, ctx.r5.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382788:
	// stb r5,569(r9)
	REX_STORE_U8(ctx.r9.u32 + 569, ctx.r5.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r16,572(r11)
	REX_STORE_U32(ctx.r11.u32 + 572, r16.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r5,520(r10)
	REX_STORE_U8(ctx.r10.u32 + 520, ctx.r5.u8);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r5,544(r9)
	REX_STORE_U8(ctx.r9.u32 + 544, ctx.r5.u8);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,580(r8)
	REX_STORE_U32(ctx.r8.u32 + 580, ctx.r5.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r5,576(r7)
	REX_STORE_U32(ctx.r7.u32 + 576, ctx.r5.u32);
loc_823827B4:
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823827B8:
	// lwz r11,448(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823827e0
	if (ctx.cr6.eq) goto loc_823827E0;
	// lbz r11,1(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823827e0
	if (ctx.cr6.eq) goto loc_823827E0;
	// lwz r11,448(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 448);
	// lbz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stw r10,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r10.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823827E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82382800
	if (ctx.cr6.eq) goto loc_82382800;
loc_823827EC:
	// stw r5,480(r11)
	REX_STORE_U32(ctx.r11.u32 + 480, ctx.r5.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x823827ec
	if (!ctx.cr6.eq) goto loc_823827EC;
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382800:
	// lbz r11,460(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 460);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,460(r8)
	REX_STORE_U8(ctx.r8.u32 + 460, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// lbz r7,2(r28)
	ctx.r7.u64 = REX_LOAD_U8(r28.u32 + 2);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82382840
	if (ctx.cr6.eq) goto loc_82382840;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82381838
	ctx.lr = 0x82382838;
	sub_82381838(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82382840:
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238289c
	if (ctx.cr6.eq) goto loc_8238289C;
	// lbz r10,592(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 592);
	// lwz r11,1428(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// mulli r10,r10,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x8238289c
	if (!ctx.cr6.eq) goto loc_8238289C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r6,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r6.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r9,462(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 462);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82382898
	if (ctx.cr6.eq) goto loc_82382898;
	// lbz r10,960(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 960);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823828a0
	if (ctx.cr6.eq) goto loc_823828A0;
loc_82382898:
	// stb r6,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r6.u8);
loc_8238289C:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823828A0:
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// bne cr6,0x823828bc
	if (!ctx.cr6.eq) goto loc_823828BC;
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823828BC:
	// lbz r10,3(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 3);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bgt cr6,0x82383bd8
	if (ctx.cr6.gt) goto loc_82383BD8;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10468
	ctx.r12.s64 = ctx.r12.s64 + 10468;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82382948;
	case 1:
		goto loc_82382968;
	case 2:
		goto loc_8238299C;
	case 3:
		goto loc_823829F4;
	case 4:
		goto loc_82382A98;
	case 5:
		goto loc_82382B38;
	case 6:
		goto loc_82382BF4;
	case 7:
		goto loc_82382C5C;
	case 8:
		goto loc_82382D04;
	case 9:
		goto loc_82382D8C;
	case 10:
		goto loc_82382ECC;
	case 11:
		goto loc_82382FC4;
	case 12:
		goto loc_82383088;
	case 13:
		goto loc_823830AC;
	case 14:
		goto loc_8238317C;
	case 15:
		goto loc_82383BD8;
	case 16:
		goto loc_823831F0;
	case 17:
		goto loc_823833F0;
	case 18:
		goto loc_8238343C;
	case 19:
		goto loc_82383970;
	case 20:
		goto loc_823839F0;
	case 21:
		goto loc_82383A64;
	case 22:
		goto loc_82383A88;
	case 23:
		goto loc_82383B3C;
	case 24:
		goto loc_82383B8C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82382948:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// stw r11,2172(r21)
	REX_STORE_U32(r21.u32 + 2172, ctx.r11.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382968:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// lwz r10,1408(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 1408);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r5,2196(r21)
	REX_STORE_U32(r21.u32 + 2196, ctx.r5.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// stw r11,2200(r21)
	REX_STORE_U32(r21.u32 + 2200, ctx.r11.u32);
	// blt cr6,0x82382994
	if (ctx.cr6.lt) goto loc_82382994;
	// stw r5,2200(r21)
	REX_STORE_U32(r21.u32 + 2200, ctx.r5.u32);
loc_82382994:
	// stb r6,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_8238299C:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,2196(r21)
	REX_STORE_U32(r21.u32 + 2196, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x823829c4
	if (!ctx.cr6.gt) goto loc_823829C4;
	// stw r5,2196(r21)
	REX_STORE_U32(r21.u32 + 2196, ctx.r5.u32);
loc_823829C4:
	// lbz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823829dc
	if (!ctx.cr6.eq) goto loc_823829DC;
	// lwz r11,2184(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2184);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2200(r21)
	REX_STORE_U32(r21.u32 + 2200, ctx.r11.u32);
loc_823829DC:
	// lwz r11,1408(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1408);
	// lwz r10,2200(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2200);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82383bd8
	if (ctx.cr6.lt) goto loc_82383BD8;
	// stw r5,2200(r21)
	REX_STORE_U32(r21.u32 + 2200, ctx.r5.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823829F4:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382a80
	if (!ctx.cr6.eq) goto loc_82382A80;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382a14
	if (ctx.cr6.eq) goto loc_82382A14;
	// stb r10,633(r31)
	REX_STORE_U8(r31.u32 + 633, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382A14:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,633(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 633);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x82382a44
	if (!ctx.cr6.eq) goto loc_82382A44;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82382a5c
	goto loc_82382A5C;
loc_82382A44:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x82382a5c
	if (!ctx.cr6.eq) goto loc_82382A5C;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r10,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r10.u32);
loc_82382A5C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82382a6c
	if (!ctx.cr6.gt) goto loc_82382A6C;
	// stw r18,604(r31)
	REX_STORE_U32(r31.u32 + 604, r18.u32);
loc_82382A6C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82383bd8
	if (!ctx.cr6.lt) goto loc_82383BD8;
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382A80:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823809f8
	ctx.lr = 0x82382A94;
	sub_823809F8(ctx, base);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382A98:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382b0c
	if (!ctx.cr6.eq) goto loc_82382B0C;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382ab8
	if (ctx.cr6.eq) goto loc_82382AB8;
	// stb r10,628(r31)
	REX_STORE_U8(r31.u32 + 628, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382AB8:
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// bne cr6,0x82382ae8
	if (!ctx.cr6.eq) goto loc_82382AE8;
	// rlwinm r9,r10,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382AE8:
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r9,224
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 224, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382B0C:
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bge cr6,0x82383bd8
	if (!ctx.cr6.lt) goto loc_82383BD8;
	// lbz r9,459(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382B38:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382bac
	if (!ctx.cr6.eq) goto loc_82382BAC;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382b58
	if (ctx.cr6.eq) goto loc_82382B58;
	// stb r10,628(r31)
	REX_STORE_U8(r31.u32 + 628, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382B58:
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r9,240
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 240, ctx.xer);
	// bne cr6,0x82382b88
	if (!ctx.cr6.eq) goto loc_82382B88;
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// rlwinm r8,r10,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382B88:
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r9,224
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 224, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382BAC:
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,628(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 628);
	// cmplwi cr6,r10,224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 224, ctx.xer);
	// bge cr6,0x82383bd8
	if (!ctx.cr6.lt) goto loc_82383BD8;
	// lwz r9,464(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,464(r11)
	REX_STORE_U32(ctx.r11.u32 + 464, ctx.r7.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,464(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bge cr6,0x82382ec0
	if (!ctx.cr6.lt) goto loc_82382EC0;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382BF4:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382c44
	if (!ctx.cr6.eq) goto loc_82382C44;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82382c28
	if (ctx.cr6.eq) goto loc_82382C28;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82382c24
	if (ctx.cr6.eq) goto loc_82382C24;
	// stb r11,644(r31)
	REX_STORE_U8(r31.u32 + 644, ctx.r11.u8);
	// b 0x82382c28
	goto loc_82382C28;
loc_82382C24:
	// stb r11,628(r31)
	REX_STORE_U8(r31.u32 + 628, ctx.r11.u8);
loc_82382C28:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// stb r5,645(r31)
	REX_STORE_U8(r31.u32 + 645, ctx.r5.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382C44:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82380a70
	ctx.lr = 0x82382C58;
	sub_82380A70(ctx, base);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382C5C:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382cdc
	if (!ctx.cr6.eq) goto loc_82382CDC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382c7c
	if (ctx.cr6.eq) goto loc_82382C7C;
	// stb r26,647(r31)
	REX_STORE_U8(r31.u32 + 647, r26.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382C7C:
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382c98
	if (ctx.cr6.eq) goto loc_82382C98;
	// stb r25,648(r31)
	REX_STORE_U8(r31.u32 + 648, r25.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r14,649(r31)
	REX_STORE_U8(r31.u32 + 649, r14.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382C98:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,649(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 649);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82382cd0
	if (!ctx.cr6.eq) goto loc_82382CD0;
	// bl 0x82380c70
	ctx.lr = 0x82382CC8;
	sub_82380C70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82382CD0:
	// bl 0x82380b30
	ctx.lr = 0x82382CD4;
	sub_82380B30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82382CDC:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,649(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 649);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82382cd0
	if (!ctx.cr6.eq) goto loc_82382CD0;
	// bl 0x82380c70
	ctx.lr = 0x82382CFC;
	sub_82380C70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82382D04:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382d30
	if (!ctx.cr6.eq) goto loc_82382D30;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382d30
	if (ctx.cr6.eq) goto loc_82382D30;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// stb r11,663(r31)
	REX_STORE_U8(r31.u32 + 663, ctx.r11.u8);
	// stb r10,664(r31)
	REX_STORE_U8(r31.u32 + 664, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382D30:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,663(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 663);
	// lbz r10,662(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 662);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82382d58
	if (ctx.cr6.lt) goto loc_82382D58;
	// lwz r9,604(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 604);
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r8.u32);
loc_82382D58:
	// lbz r9,664(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 664);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stb r8,662(r31)
	REX_STORE_U8(r31.u32 + 662, ctx.r8.u8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82382d78
	if (ctx.cr6.lt) goto loc_82382D78;
	// stb r5,662(r31)
	REX_STORE_U8(r31.u32 + 662, ctx.r5.u8);
loc_82382D78:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382D8C:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382dac
	if (!ctx.cr6.eq) goto loc_82382DAC;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382dac
	if (ctx.cr6.eq) goto loc_82382DAC;
	// stb r10,665(r31)
	REX_STORE_U8(r31.u32 + 665, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382DAC:
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,665(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 665);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lwz r4,2168(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// rlwinm r8,r10,28,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// mulhw r10,r4,r19
	ctx.r10.s64 = (int64_t(ctx.r4.s32) * int64_t(r19.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82382e38
	if (ctx.cr6.eq) goto loc_82382E38;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82382ebc
	if (!ctx.cr6.eq) goto loc_82382EBC;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82382e30
	if (ctx.cr6.eq) goto loc_82382E30;
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r9,r7,6,18,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0x3FC0;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,480(r11)
	REX_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382E30:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// b 0x82382e70
	goto loc_82382E70;
loc_82382E38:
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82382e6c
	if (ctx.cr6.eq) goto loc_82382E6C;
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// rlwinm r9,r8,6,18,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x3FC0;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,480(r11)
	REX_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382E6C:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
loc_82382E70:
	// lbz r10,593(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 593);
	// lwz r8,448(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,480(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwzx r8,r4,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + r23.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwzx r7,r3,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + r23.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mulli r4,r8,8363
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(8363));
	// mulli r3,r7,8363
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(8363));
	// divwu r7,r4,r10
	ctx.r7.u64 = uint32_t(ctx.r10.u32 ? ctx.r4.u32 / ctx.r10.u32 : 0);
	// divwu r8,r3,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,480(r11)
	REX_STORE_U32(ctx.r11.u32 + 480, ctx.r4.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382EBC:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
loc_82382EC0:
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82382ECC:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382f80
	if (!ctx.cr6.eq) goto loc_82382F80;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382eec
	if (ctx.cr6.eq) goto loc_82382EEC;
	// stb r10,633(r31)
	REX_STORE_U8(r31.u32 + 633, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82382EEC:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,633(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 633);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x82382f1c
	if (!ctx.cr6.eq) goto loc_82382F1C;
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82382f34
	goto loc_82382F34;
loc_82382F1C:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x82382f34
	if (!ctx.cr6.eq) goto loc_82382F34;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r10,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r10.u32);
loc_82382F34:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82382f44
	if (!ctx.cr6.gt) goto loc_82382F44;
	// stw r18,604(r31)
	REX_STORE_U32(r31.u32 + 604, r18.u32);
loc_82382F44:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82382f54
	if (!ctx.cr6.lt) goto loc_82382F54;
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
loc_82382F54:
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,649(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 649);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82382cd0
	if (!ctx.cr6.eq) goto loc_82382CD0;
	// bl 0x82380c70
	ctx.lr = 0x82382F78;
	sub_82380C70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82382F80:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,649(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 649);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82382fb0
	if (!ctx.cr6.eq) goto loc_82382FB0;
	// bl 0x82380c70
	ctx.lr = 0x82382FA0;
	sub_82380C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823809f8
	ctx.lr = 0x82382FA8;
	sub_823809F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82382FB0:
	// bl 0x82380b30
	ctx.lr = 0x82382FB4;
	sub_82380B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823809f8
	ctx.lr = 0x82382FBC;
	sub_823809F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82382FC4:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383068
	if (!ctx.cr6.eq) goto loc_82383068;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82382fe0
	if (ctx.cr6.eq) goto loc_82382FE0;
	// stb r11,633(r31)
	REX_STORE_U8(r31.u32 + 633, ctx.r11.u8);
loc_82382FE0:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// stw r11,640(r31)
	REX_STORE_U32(r31.u32 + 640, ctx.r11.u32);
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82382ff8
	if (ctx.cr6.eq) goto loc_82382FF8;
	// stb r5,645(r31)
	REX_STORE_U8(r31.u32 + 645, ctx.r5.u8);
loc_82382FF8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,633(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 633);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x8238302c
	if (!ctx.cr6.eq) goto loc_8238302C;
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383044
	goto loc_82383044;
loc_8238302C:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x82383044
	if (!ctx.cr6.eq) goto loc_82383044;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r10,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r10.u32);
loc_82383044:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82383054
	if (!ctx.cr6.gt) goto loc_82383054;
	// stw r18,604(r31)
	REX_STORE_U32(r31.u32 + 604, r18.u32);
loc_82383054:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82383bd8
	if (!ctx.cr6.lt) goto loc_82383BD8;
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383068:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82380a70
	ctx.lr = 0x8238307C;
	sub_82380A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823809f8
	ctx.lr = 0x82383084;
	sub_823809F8(ctx, base);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383088:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// stw r11,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r11.u32);
	// ble cr6,0x82383bd8
	if (!ctx.cr6.gt) goto loc_82383BD8;
	// stw r18,620(r31)
	REX_STORE_U32(r31.u32 + 620, r18.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823830AC:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383114
	if (!ctx.cr6.eq) goto loc_82383114;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823830cc
	if (ctx.cr6.eq) goto loc_823830CC;
	// stb r10,676(r31)
	REX_STORE_U8(r31.u32 + 676, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823830CC:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,676(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 676);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x823830fc
	if (!ctx.cr6.eq) goto loc_823830FC;
	// lwz r10,620(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 620);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r11.u32);
	// b 0x82383158
	goto loc_82383158;
loc_823830FC:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x82383158
	if (!ctx.cr6.eq) goto loc_82383158;
	// lwz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 620);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x82383154
	goto loc_82383154;
loc_82383114:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,676(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 676);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82383140
	if (!ctx.cr6.eq) goto loc_82383140;
	// lwz r9,620(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 620);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r10.u32);
loc_82383140:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383158
	if (!ctx.cr6.eq) goto loc_82383158;
	// lwz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 620);
	// subf r10,r8,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_82383154:
	// stw r10,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r10.u32);
loc_82383158:
	// lwz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 620);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82383168
	if (!ctx.cr6.gt) goto loc_82383168;
	// stw r18,620(r31)
	REX_STORE_U32(r31.u32 + 620, r18.u32);
loc_82383168:
	// lwz r11,620(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82383bd8
	if (!ctx.cr6.lt) goto loc_82383BD8;
	// stw r5,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r5.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_8238317C:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lwz r10,448(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823831a8
	if (ctx.cr6.eq) goto loc_823831A8;
	// stw r10,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r10.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823831A8:
	// lbz r10,686(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 686);
	// lwz r8,448(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r9,616(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 616);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823831e8
	if (ctx.cr6.lt) goto loc_823831E8;
	// lwz r9,448(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_823831E8:
	// stw r10,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823831F0:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383214
	if (!ctx.cr6.eq) goto loc_82383214;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383214
	if (ctx.cr6.eq) goto loc_82383214;
	// stb r26,635(r31)
	REX_STORE_U8(r31.u32 + 635, r26.u8);
	// stb r25,636(r31)
	REX_STORE_U8(r31.u32 + 636, r25.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383214:
	// lbz r9,637(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 637);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823833e0
	if (ctx.cr6.eq) goto loc_823833E0;
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,636(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 636);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r7,r9,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// addi r3,r8,-1
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// mullw r4,r7,r10
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// andc r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf. r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bne 0x823833e0
	if (!ctx.cr0.eq) goto loc_823833E0;
	// lbz r10,635(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 635);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823833c4
	if (ctx.cr6.eq) goto loc_823833C4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x8238338c
	if (ctx.cr6.gt) goto loc_8238338C;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12940
	ctx.r12.s64 = ctx.r12.s64 + 12940;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823832C8;
	case 1:
		goto loc_823832D8;
	case 2:
		goto loc_823832E8;
	case 3:
		goto loc_823832F8;
	case 4:
		goto loc_82383308;
	case 5:
		goto loc_82383318;
	case 6:
		goto loc_82383320;
	case 7:
		goto loc_8238338C;
	case 8:
		goto loc_8238332C;
	case 9:
		goto loc_8238333C;
	case 10:
		goto loc_8238334C;
	case 11:
		goto loc_8238335C;
	case 12:
		goto loc_8238336C;
	case 13:
		goto loc_8238338C;
	case 14:
		goto loc_8238337C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823832C8:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_823832D8:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_823832E8:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_823832F8:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_82383308:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_82383318:
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
	// b 0x82383388
	goto loc_82383388;
loc_82383320:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// b 0x82383384
	goto loc_82383384;
loc_8238332C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_8238333C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_8238334C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_8238335C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_8238336C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r11.u32);
	// b 0x82383388
	goto loc_82383388;
loc_8238337C:
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82383384:
	// stw r10,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r10.u32);
loc_82383388:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8238338C:
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// ble cr6,0x823833a0
	if (!ctx.cr6.gt) goto loc_823833A0;
	// stw r18,604(r31)
	REX_STORE_U32(r31.u32 + 604, r18.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823833A0:
	// lwz r10,604(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823833b4
	if (!ctx.cr6.lt) goto loc_823833B4;
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823833B4:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823833C4:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 8;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
loc_823833E0:
	// lbz r11,637(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 637);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,637(r31)
	REX_STORE_U8(r31.u32 + 637, ctx.r11.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823833F0:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383424
	if (!ctx.cr6.eq) goto loc_82383424;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383410
	if (ctx.cr6.eq) goto loc_82383410;
	// stb r26,651(r31)
	REX_STORE_U8(r31.u32 + 651, r26.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383410:
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383424
	if (ctx.cr6.eq) goto loc_82383424;
	// stb r25,652(r31)
	REX_STORE_U8(r31.u32 + 652, r25.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383424:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82380d98
	ctx.lr = 0x82383438;
	sub_82380D98(ctx, base);
	// b 0x82383bd4
	goto loc_82383BD4;
loc_8238343C:
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383450
	if (ctx.cr6.eq) goto loc_82383450;
	// stb r10,677(r31)
	REX_STORE_U8(r31.u32 + 677, ctx.r10.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383450:
	// lbz r10,677(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 677);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bgt cr6,0x82383bd8
	if (ctx.cr6.gt) goto loc_82383BD8;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13440
	ctx.r12.s64 = ctx.r12.s64 + 13440;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_823834F0;
	case 1:
		goto loc_82383508;
	case 2:
		goto loc_82383520;
	case 3:
		goto loc_82383538;
	case 4:
		goto loc_82383550;
	case 5:
		goto loc_82383788;
	case 6:
		goto loc_823837D4;
	case 7:
		goto loc_823838A4;
	case 8:
		goto loc_823838B8;
	case 9:
		goto loc_823834B0;
	case 10:
		goto loc_82383BD8;
	case 11:
		goto loc_82383950;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823834B0:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823834d8
	if (ctx.cr6.eq) goto loc_823834D8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
loc_823834D8:
	// stw r5,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r5.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823834F0:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stb r11,679(r31)
	REX_STORE_U8(r31.u32 + 679, ctx.r11.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383508:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stb r11,680(r31)
	REX_STORE_U8(r31.u32 + 680, ctx.r11.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383520:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// stb r11,681(r31)
	REX_STORE_U8(r31.u32 + 681, ctx.r11.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383538:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,2192(r21)
	REX_STORE_U32(r21.u32 + 2192, ctx.r11.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383550:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82383bd8
	if (ctx.cr6.gt) goto loc_82383BD8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823835d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823835D4;
	// bdzf 4*cr6+eq,0x82383650
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82383650;
	// bdzf 4*cr6+eq,0x82383698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82383698;
	// bdzf 4*cr6+eq,0x823836bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823836BC;
	// bdzf 4*cr6+eq,0x823836e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823836E0;
	// bdzf 4*cr6+eq,0x82383708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82383708;
	// bdzf 4*cr6+eq,0x82383730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82383730;
	// bne cr6,0x8238375c
	if (!ctx.cr6.eq) goto loc_8238375C;
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
loc_823835AC:
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823835c4
	if (ctx.cr6.eq) goto loc_823835C4;
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
loc_823835C4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x823835ac
	if (!ctx.cr6.eq) goto loc_823835AC;
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823835D4:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
loc_823835FC:
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383640
	if (ctx.cr6.eq) goto loc_82383640;
	// lbz r10,456(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 456);
	// lbz r8,462(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 462);
	// lwz r9,1428(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r10,r10,1492
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1492));
	// stb r6,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r6.u8);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8238363c
	if (ctx.cr6.eq) goto loc_8238363C;
	// lbz r10,960(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 960);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383640
	if (ctx.cr6.eq) goto loc_82383640;
loc_8238363C:
	// stb r6,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r6.u8);
loc_82383640:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x823835fc
	if (!ctx.cr6.eq) goto loc_823835FC;
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383650:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
loc_82383678:
	// lbz r10,459(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383688
	if (ctx.cr6.eq) goto loc_82383688;
	// stb r6,569(r11)
	REX_STORE_U8(ctx.r11.u32 + 569, ctx.r6.u8);
loc_82383688:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82383678
	if (!ctx.cr6.eq) goto loc_82383678;
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383698:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// stb r5,461(r11)
	REX_STORE_U8(ctx.r11.u32 + 461, ctx.r5.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823836BC:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// stb r6,461(r11)
	REX_STORE_U8(ctx.r11.u32 + 461, ctx.r6.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823836E0:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,461(r11)
	REX_STORE_U8(ctx.r11.u32 + 461, ctx.r10.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383708:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r10,461(r11)
	REX_STORE_U8(ctx.r11.u32 + 461, ctx.r10.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383730:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,462(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 462);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r9,462(r11)
	REX_STORE_U8(ctx.r11.u32 + 462, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_8238375C:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lbz r10,462(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 462);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,462(r11)
	REX_STORE_U8(ctx.r11.u32 + 462, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383788:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// rlwinm r11,r10,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r9,459(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 459);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// stw r11,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823837D4:
	// lwz r9,2168(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r9,459(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x82383bd8
	if (ctx.cr6.gt) goto loc_82383BD8;
	// lis r12,-32200
	ctx.r12.s64 = -2110259200;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14352
	ctx.r12.s64 = ctx.r12.s64 + 14352;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_82383850;
	case 1:
		goto loc_82383860;
	case 2:
		goto loc_82383BD8;
	case 3:
		goto loc_82383BD8;
	case 4:
		goto loc_82383BD8;
	case 5:
		goto loc_82383BD8;
	case 6:
		goto loc_82383BD8;
	case 7:
		goto loc_82383BD8;
	case 8:
		goto loc_82383BD8;
	case 9:
		goto loc_82383BD8;
	case 10:
		goto loc_82383BD8;
	case 11:
		goto loc_82383BD8;
	case 12:
		goto loc_82383BD8;
	case 13:
		goto loc_82383BD8;
	case 14:
		goto loc_82383870;
	case 15:
		goto loc_82383888;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82383850:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383860:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383870:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,492(r8)
	REX_STORE_U32(ctx.r8.u32 + 492, ctx.r6.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383888:
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// li r9,-1
	ctx.r9.s64 = -1;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stb r8,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r8.u8);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,492(r7)
	REX_STORE_U32(ctx.r7.u32 + 492, ctx.r9.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823838A4:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// stb r10,686(r31)
	REX_STORE_U8(r31.u32 + 686, ctx.r10.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823838B8:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823838dc
	if (!ctx.cr6.eq) goto loc_823838DC;
	// lwz r11,2180(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2180);
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_823838DC:
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823838f0
	if (!ctx.cr6.eq) goto loc_823838F0;
	// stw r10,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r10.u32);
	// b 0x823838f8
	goto loc_823838F8;
loc_823838F0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,672(r31)
	REX_STORE_U32(r31.u32 + 672, ctx.r11.u32);
loc_823838F8:
	// lwz r11,672(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lwz r10,528(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,2196(r21)
	REX_STORE_U32(r21.u32 + 2196, ctx.r11.u32);
	// beq cr6,0x82383bd8
	if (ctx.cr6.eq) goto loc_82383BD8;
	// lwz r11,668(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lwz r10,2180(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2180);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82383bd8
	if (ctx.cr6.gt) goto loc_82383BD8;
loc_82383928:
	// lwz r10,2184(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2184);
	// lwz r9,528(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 528);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r5,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r5.u8);
	// lwz r7,2180(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 2180);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82383928
	if (!ctx.cr6.gt) goto loc_82383928;
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383950:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lwz r11,2172(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2172);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r9,2188(r21)
	REX_STORE_U32(r21.u32 + 2188, ctx.r9.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383970:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383998
	if (!ctx.cr6.eq) goto loc_82383998;
	// lbz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r4,31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 31, ctx.xer);
	// ble cr6,0x82383998
	if (!ctx.cr6.gt) goto loc_82383998;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823c8638
	ctx.lr = 0x82383990;
	sub_823C8638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82383998:
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bgt cr6,0x82383bd8
	if (ctx.cr6.gt) goto loc_82383BD8;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823839cc
	if (!ctx.cr6.eq) goto loc_823839CC;
	// lwz r11,2176(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2176);
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x823c8638
	ctx.lr = 0x823839C4;
	sub_823C8638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_823839CC:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lwz r11,2176(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2176);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x823c8638
	ctx.lr = 0x823839E8;
	sub_823C8638(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_823839F0:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82382cdc
	if (!ctx.cr6.eq) goto loc_82382CDC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383a10
	if (ctx.cr6.eq) goto loc_82383A10;
	// stb r26,647(r31)
	REX_STORE_U8(r31.u32 + 647, r26.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383A10:
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383a2c
	if (ctx.cr6.eq) goto loc_82383A2C;
	// stb r25,648(r31)
	REX_STORE_U8(r31.u32 + 648, r25.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stb r15,649(r31)
	REX_STORE_U8(r31.u32 + 649, r15.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383A2C:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,649(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 649);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x82382cd0
	if (!ctx.cr6.eq) goto loc_82382CD0;
	// bl 0x82380c70
	ctx.lr = 0x82383A5C;
	sub_82380C70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82383bd4
	goto loc_82383BD4;
loc_82383A64:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// stw r11,2156(r21)
	REX_STORE_U32(r21.u32 + 2156, ctx.r11.u32);
	// ble cr6,0x82383bd8
	if (!ctx.cr6.gt) goto loc_82383BD8;
	// stw r17,2156(r21)
	REX_STORE_U32(r21.u32 + 2156, r17.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383A88:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383ae0
	if (!ctx.cr6.eq) goto loc_82383AE0;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383aa4
	if (ctx.cr6.eq) goto loc_82383AA4;
	// stb r11,2160(r21)
	REX_STORE_U8(r21.u32 + 2160, ctx.r11.u8);
loc_82383AA4:
	// lbz r11,2160(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 2160);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x82383ac8
	if (!ctx.cr6.eq) goto loc_82383AC8;
	// lwz r10,2156(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,2156(r21)
	REX_STORE_U32(r21.u32 + 2156, ctx.r11.u32);
	// b 0x82383b18
	goto loc_82383B18;
loc_82383AC8:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,240
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 240, ctx.xer);
	// bne cr6,0x82383b18
	if (!ctx.cr6.eq) goto loc_82383B18;
	// lwz r11,2156(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x82383b14
	goto loc_82383B14;
loc_82383AE0:
	// lbz r11,2160(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 2160);
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82383b00
	if (!ctx.cr6.eq) goto loc_82383B00;
	// lwz r9,2156(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,2156(r21)
	REX_STORE_U32(r21.u32 + 2156, ctx.r10.u32);
loc_82383B00:
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383b18
	if (!ctx.cr6.eq) goto loc_82383B18;
	// lwz r11,2156(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// subf r10,r8,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r8.u64;
loc_82383B14:
	// stw r10,2156(r21)
	REX_STORE_U32(r21.u32 + 2156, ctx.r10.u32);
loc_82383B18:
	// lwz r11,2156(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// ble cr6,0x82383b28
	if (!ctx.cr6.gt) goto loc_82383B28;
	// stw r17,2156(r21)
	REX_STORE_U32(r21.u32 + 2156, r17.u32);
loc_82383B28:
	// lwz r11,2156(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82383bd8
	if (!ctx.cr6.lt) goto loc_82383BD8;
	// stw r5,2156(r21)
	REX_STORE_U32(r21.u32 + 2156, ctx.r5.u32);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383B3C:
	// lwz r11,2168(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// lbz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 4);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r11.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r9,459(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 459);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// stw r11,472(r10)
	REX_STORE_U32(ctx.r10.u32 + 472, ctx.r11.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r10,460(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stb r9,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r9.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r8,460(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 460);
	// ori r7,r8,64
	ctx.r7.u64 = ctx.r8.u64 | 64;
	// stb r7,460(r11)
	REX_STORE_U8(ctx.r11.u32 + 460, ctx.r7.u8);
	// b 0x82383bd8
	goto loc_82383BD8;
loc_82383B8C:
	// lwz r10,2168(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 2168);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82383bc0
	if (!ctx.cr6.eq) goto loc_82383BC0;
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bac
	if (ctx.cr6.eq) goto loc_82383BAC;
	// stb r26,660(r31)
	REX_STORE_U8(r31.u32 + 660, r26.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383BAC:
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383bc0
	if (ctx.cr6.eq) goto loc_82383BC0;
	// stb r25,661(r31)
	REX_STORE_U8(r31.u32 + 661, r25.u8);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82383BC0:
	// lbz r11,459(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383bd8
	if (!ctx.cr6.eq) goto loc_82383BD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82380ea8
	ctx.lr = 0x82383BD4;
	sub_82380EA8(ctx, base);
loc_82383BD4:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82383BD8:
	// lwz r11,788(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 788);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82381e6c
	if (ctx.cr6.lt) goto loc_82381E6C;
loc_82383BE8:
	// lbz r10,607(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 607);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384418
	if (ctx.cr6.eq) goto loc_82384418;
	// lwz r11,788(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 788);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82384418
	if (!ctx.cr6.gt) goto loc_82384418;
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
	// lfs f20,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f20.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f21,3804(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3804);
	f21.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f22,10584(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10584);
	f22.f64 = double(temp.f32);
	// lfs f26,19448(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 19448);
	f26.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f27,19444(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19444);
	f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,19440(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19440);
	f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,3712(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3712);
	f30.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f28,19436(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 19436);
	f28.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f23,19432(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 19432);
	f23.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfd f31,8312(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f24,19424(r10)
	f24.u64 = REX_LOAD_U64(ctx.r10.u32 + 19424);
	// lis r4,218
	ctx.r4.s64 = 14286848;
	// lfs f25,19416(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 19416);
	f25.f64 = double(temp.f32);
	// lfs f16,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f16.f64 = double(temp.f32);
	// addi r26,r21,15740
	r26.s64 = r21.s64 + 15740;
	// lfs f17,19412(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19412);
	f17.f64 = double(temp.f32);
	// addi r22,r21,1276
	r22.s64 = r21.s64 + 1276;
	// lfs f18,19408(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 19408);
	f18.f64 = double(temp.f32);
	// li r25,4
	r25.s64 = 4;
	// lfs f19,19404(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 19404);
	f19.f64 = double(temp.f32);
	// ori r24,r4,30208
	r24.u64 = ctx.r4.u64 | 30208;
loc_82383C98:
	// lbzx r11,r22,r23
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + r23.u32);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82384404
	if (!ctx.cr6.eq) goto loc_82384404;
	// lwz r28,-14948(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + -14948);
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x82384404
	if (ctx.cr6.eq) goto loc_82384404;
loc_82383CB8:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// li r30,0
	r30.s64 = 0;
	// lwz r27,0(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383cdc
	if (!ctx.cr6.eq) goto loc_82383CDC;
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
loc_82383CDC:
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383e3c
	if (ctx.cr6.eq) goto loc_82383E3C;
	// lbz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 456);
	// lbz r9,462(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 462);
	// lwz r10,1428(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 1428);
	// mulli r11,r11,1492
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1492));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82383d78
	if (ctx.cr6.eq) goto loc_82383D78;
	// lbz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383d58
	if (!ctx.cr6.eq) goto loc_82383D58;
	// lbz r11,1046(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1046);
	// li r29,2
	r29.s64 = 2;
	// lbz r20,1045(r30)
	r20.u64 = REX_LOAD_U8(r30.u32 + 1045);
	// addi r7,r30,962
	ctx.r7.s64 = r30.s64 + 962;
	// stb r29,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, r29.u8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r31,500
	ctx.r4.s64 = r31.s64 + 500;
	// lbz r10,1044(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 1044);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lbz r9,1043(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 1043);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// lbz r8,960(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 960);
	// lbz r6,961(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 961);
	// bl 0x82380fb0
	ctx.lr = 0x82383D54;
	sub_82380FB0(ctx, base);
	// b 0x82383d78
	goto loc_82383D78;
loc_82383D58:
	// lwz r11,512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 512);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,569(r31)
	REX_STORE_U8(r31.u32 + 569, ctx.r10.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82383d78
	if (!ctx.cr6.eq) goto loc_82383D78;
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
loc_82383D78:
	// lbz r8,1047(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1047);
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383dc8
	if (ctx.cr6.eq) goto loc_82383DC8;
	// lbz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383dc8
	if (!ctx.cr6.eq) goto loc_82383DC8;
	// lbz r6,1133(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 1133);
	// addi r7,r30,1050
	ctx.r7.s64 = r30.s64 + 1050;
	// lbz r11,1134(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1134);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stb r25,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, r25.u8);
	// addi r4,r31,524
	ctx.r4.s64 = r31.s64 + 524;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lbz r10,1132(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 1132);
	// lbz r9,1131(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 1131);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lbz r6,1048(r30)
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + 1048);
	// bl 0x82380fb0
	ctx.lr = 0x82383DC8;
	sub_82380FB0(ctx, base);
loc_82383DC8:
	// lbz r11,1135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383df8
	if (ctx.cr6.eq) goto loc_82383DF8;
	// lbz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82383df8
	if (!ctx.cr6.eq) goto loc_82383DF8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r6,593(r28)
	ctx.r6.u64 = REX_LOAD_U8(r28.u32 + 593);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823811b8
	ctx.lr = 0x82383DF8;
	sub_823811B8(ctx, base);
loc_82383DF8:
	// lbz r11,569(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 569);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383e3c
	if (ctx.cr6.eq) goto loc_82383E3C;
	// lhz r11,1228(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 1228);
	// lwz r10,572(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 572);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r9,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r9.u32);
	// bge 0x82383e20
	if (!ctx.cr0.lt) goto loc_82383E20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r11.u32);
loc_82383E20:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// bne cr6,0x82383e38
	if (!ctx.cr6.eq) goto loc_82383E38;
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
loc_82383E38:
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
loc_82383E3C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82381740
	ctx.lr = 0x82383E48;
	sub_82381740(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 480);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82383e64
	if (!ctx.cr0.eq) goto loc_82383E64;
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,460(r31)
	REX_STORE_U8(r31.u32 + 460, ctx.r10.u8);
loc_82383E64:
	// lbz r11,459(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 459);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383e78
	if (ctx.cr6.eq) goto loc_82383E78;
	// li r29,0
	r29.s64 = 0;
	// b 0x82383e84
	goto loc_82383E84;
loc_82383E78:
	// lwz r11,604(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 604);
	// lwz r29,612(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 612);
	// stw r11,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r11.u32);
loc_82383E84:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383f64
	if (ctx.cr6.eq) goto loc_82383F64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82383ef8
	if (ctx.cr6.eq) goto loc_82383EF8;
	// lwz r11,1480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1480);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383eb8
	if (ctx.cr6.eq) goto loc_82383EB8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82383EB8:
	// lbz r10,1135(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82383ed8
	if (!ctx.cr6.eq) goto loc_82383ED8;
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ctx.r6.u64;
loc_82383ED8:
	// lbz r11,1488(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1488);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82383ef8
	if (ctx.cr6.eq) goto loc_82383EF8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,3884
	ctx.r11.s64 = ctx.r11.s64 + 3884;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
loc_82383EF8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82383f10
	if (ctx.cr6.eq) goto loc_82383F10;
	// addi r11,r11,3884
	ctx.r11.s64 = ctx.r11.s64 + 3884;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r21
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
loc_82383F10:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82383f2c
	if (ctx.cr6.eq) goto loc_82383F2C;
	// lwz r11,112(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
loc_82383F2C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823c8798
	ctx.lr = 0x82383F3C;
	sub_823C8798(ctx, base);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82383f64
	if (!ctx.cr6.lt) goto loc_82383F64;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x8234f680
	ctx.lr = 0x82383F64;
	sub_8234F680(ctx, base);
loc_82383F64:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823840e8
	if (ctx.cr6.eq) goto loc_823840E8;
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 468);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// beq cr6,0x82384050
	if (ctx.cr6.eq) goto loc_82384050;
	// lwz r8,512(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 512);
	// std r5,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// lwz r10,572(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 572);
	// lwz r4,620(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 620);
	// std r3,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lwz r6,496(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 496);
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r9,2156(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lwz r8,2152(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 2152);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f7,128(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// std r7,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f10,144(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// std r6,248(r1)
	REX_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// lfd f13,200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmuls f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// frsp f8,f0
	ctx.f8.f64 = double(float(ctx.f0.f64));
	// lfd f11,248(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f2,f4
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fmuls f5,f9,f3
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f0,f2,f19
	ctx.f0.f64 = double(float(ctx.f2.f64 * f19.f64));
	// b 0x823840d4
	goto loc_823840D4;
loc_82384050:
	// lwz r10,496(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 496);
	// std r5,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r4,2152(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 2152);
	// lwz r8,620(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 620);
	// std r7,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// lwz r6,2156(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 2156);
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// std r3,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r3.u64);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// std r11,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r11.u64);
	// lfd f10,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f12,232(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// lfd f7,264(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfd f5,216(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f0,f4
	ctx.f0.f64 = double(float(ctx.f4.f64));
	// fmuls f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f0,f9,f18
	ctx.f0.f64 = double(float(ctx.f9.f64 * f18.f64));
loc_823840D4:
	// lfs f13,624(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8234bbc8
	ctx.lr = 0x823840E8;
	sub_8234BBC8(ctx, base);
loc_823840E8:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384148
	if (ctx.cr6.eq) goto loc_82384148;
	// lhz r11,2162(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// beq cr6,0x8238411c
	if (ctx.cr6.eq) goto loc_8238411C;
	// lwz r11,536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 536);
	// lwz r9,484(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 484);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82384120
	goto loc_82384120;
loc_8238411C:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
loc_82384120:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// std r11,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f0,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmsubs f1,f12,f17,f16
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, f17.f64, -f16.f64)));
	// bl 0x8234be00
	ctx.lr = 0x82384148;
	sub_8234BE00(ctx, base);
loc_82384148:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384218
	if (ctx.cr6.eq) goto loc_82384218;
	// lhz r9,2162(r21)
	ctx.r9.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238418c
	if (ctx.cr6.eq) goto loc_8238418C;
	// lbz r11,1135(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lwz r11,480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 480);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// bne cr6,0x82384194
	if (!ctx.cr6.eq) goto loc_82384194;
	// lwz r8,560(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 560);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// b 0x82384194
	goto loc_82384194;
loc_8238418C:
	// lwz r11,480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 480);
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
loc_82384194:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823841e4
	if (ctx.cr6.eq) goto loc_823841E4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f11,f25,f12
	ctx.f11.f64 = double(float(f25.f64 - ctx.f12.f64));
	// fmul f10,f11,f24
	ctx.f10.f64 = ctx.f11.f64 * f24.f64;
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// bl 0x8269f778
	ctx.lr = 0x823841CC;
	sub_8269F778(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fmuls f8,f9,f23
	ctx.f8.f64 = double(float(ctx.f9.f64 * f23.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f7.u64);
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// b 0x823841ec
	goto loc_823841EC;
loc_823841E4:
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r24,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(r24.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? r24.s32 / ctx.r11.s32 : 0);
loc_823841EC:
	// lwz r10,492(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823841fc
	if (!ctx.cr6.lt) goto loc_823841FC;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823841FC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// std r11,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// lfd f0,208(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x8234e480
	ctx.lr = 0x82384218;
	sub_8234E480(ctx, base);
loc_82384218:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x8238425c
	if (ctx.cr6.eq) goto loc_8238425C;
	// lwz r10,1480(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1480);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238423c
	if (ctx.cr6.eq) goto loc_8238423C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8238423C:
	// lbz r9,1135(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8238425c
	if (!ctx.cr6.eq) goto loc_8238425C;
	// addi r10,r10,-255
	ctx.r10.s64 = ctx.r10.s64 + -255;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
loc_8238425C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384398
	if (ctx.cr6.eq) goto loc_82384398;
	// lbz r10,1135(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 1135);
	// li r11,256
	ctx.r11.s64 = 256;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82384288
	if (ctx.cr6.eq) goto loc_82384288;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
loc_82384288:
	// lhz r10,2162(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 2162);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r9,r10,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lwz r10,1480(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1480);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// beq cr6,0x823842c8
	if (ctx.cr6.eq) goto loc_823842C8;
	// std r6,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// lfd f0,224(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f2,f12,f28,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, f30.f64)));
	// b 0x823842dc
	goto loc_823842DC;
loc_823842C8:
	// std r6,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r6.u64);
	// lfd f0,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 240);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f2,f12,f27,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, f27.f64, f30.f64)));
loc_823842DC:
	// bl 0x8269f778
	ctx.lr = 0x823842E0;
	sub_8269F778(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmuls f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, f26.f64);
	// bge cr6,0x823842fc
	if (!ctx.cr6.lt) goto loc_823842FC;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// b 0x82384308
	goto loc_82384308;
loc_823842FC:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f22.f64);
	// ble cr6,0x82384308
	if (!ctx.cr6.gt) goto loc_82384308;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
loc_82384308:
	// lwz r11,32(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 32);
	// fmuls f13,f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f21.f64));
	// lwz r10,264(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 264);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,256(r1)
	REX_STORE_U64(ctx.r1.u32 + 256, ctx.r9.u64);
	// lfd f12,256(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 256);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82384334
	if (!ctx.cr6.gt) goto loc_82384334;
	// fmuls f1,f0,f20
	ctx.f1.f64 = double(float(ctx.f0.f64 * f20.f64));
loc_82384334:
	// lwz r11,1484(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1484);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// clrlwi r9,r11,25
	ctx.r9.u64 = ctx.r11.u32 & 0x7F;
	// lwz r8,1064(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 1064);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.r9.u64);
	// lwzx r3,r7,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,40(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lfd f0,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f15,f13
	f15.f64 = double(float(ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x82384370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1064(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1064);
	// fmr f1,f15
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f15.f64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82384398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82384398:
	// lbz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 460);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823843ec
	if (ctx.cr6.eq) goto loc_823843EC;
	// lwz r11,1064(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 1064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823843d0
	if (ctx.cr6.eq) goto loc_823843D0;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,32(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823843D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823843D0:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8234f290
	ctx.lr = 0x823843DC;
	sub_8234F290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 20);
	// bl 0x82334ca0
	ctx.lr = 0x823843E8;
	sub_82334CA0(ctx, base);
	// stw r29,488(r31)
	REX_STORE_U32(r31.u32 + 488, r29.u32);
loc_823843EC:
	// stb r29,460(r31)
	REX_STORE_U8(r31.u32 + 460, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c8588
	ctx.lr = 0x823843F8;
	sub_823C8588(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(r27.u32, r28.u32, ctx.xer);
	// bne cr6,0x82383cb8
	if (!ctx.cr6.eq) goto loc_82383CB8;
loc_82384404:
	// lwz r11,788(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 788);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82383c98
	if (ctx.cr6.lt) goto loc_82383C98;
loc_82384418:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cc0
	ctx.lr = 0x82384428;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824AE5E0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x824AE5E8;
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ae76c
	if (ctx.cr6.eq) goto loc_824AE76C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// lfd f31,-3744(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824AE620:
	// lwz r28,0(r21)
	r28.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824ae75c
	if (ctx.cr6.eq) goto loc_824AE75C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ae75c
	if (ctx.cr6.eq) goto loc_824AE75C;
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x824aab40
	ctx.lr = 0x824AE644;
	sub_824AAB40(ctx, base);
	// lis r11,4352
	ctx.r11.s64 = 285212672;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ae658
	if (!ctx.cr6.eq) goto loc_824AE658;
	// li r20,1
	r20.s64 = 1;
loc_824AE658:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824ae75c
	if (!ctx.cr6.gt) goto loc_824AE75C;
	// li r29,0
	r29.s64 = 0;
loc_824AE66C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r9,128(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 128);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824ae748
	if (!ctx.cr6.eq) goto loc_824AE748;
	// lbz r11,111(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 111);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// bne cr6,0x824ae748
	if (!ctx.cr6.eq) goto loc_824AE748;
	// lbz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 110);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ae748
	if (!ctx.cr6.eq) goto loc_824AE748;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x824ae6bc
	if (ctx.cr6.eq) goto loc_824AE6BC;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824ae748
	if (ctx.cr6.eq) goto loc_824AE748;
loc_824AE6BC:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824ae740
	if (ctx.cr6.eq) goto loc_824AE740;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_824AE6D0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824ae6fc
	if (ctx.cr6.eq) goto loc_824AE6FC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x824ae6d0
	if (ctx.cr6.lt) goto loc_824AE6D0;
	// b 0x824ae740
	goto loc_824AE740;
loc_824AE6FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 136);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x824AE710;
	sub_82478758(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824ae77c
	if (ctx.cr6.eq) goto loc_824AE77C;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwzx r10,r8,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r26.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stwx r3,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r3.u32);
loc_824AE740:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// beq cr6,0x824ae788
	if (ctx.cr6.eq) goto loc_824AE788;
loc_824AE748:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824ae66c
	if (ctx.cr6.lt) goto loc_824AE66C;
loc_824AE75C:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(r22.u32, r23.u32, ctx.xer);
	// blt cr6,0x824ae620
	if (ctx.cr6.lt) goto loc_824AE620;
loc_824AE76C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824AE770:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
loc_824AE77C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824ae770
	goto loc_824AE770;
loc_824AE788:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4801
	ctx.r5.s64 = 4801;
	// addi r6,r11,-192
	ctx.r6.s64 = ctx.r11.s64 + -192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82489c30
	ctx.lr = 0x824AE7A0;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824ae770
	goto loc_824AE770;
}

DEFINE_REX_FUNC(sub_824BD0F0) {
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
	ctx.lr = 0x824BD0F8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x824bd118
	if (!ctx.cr6.eq) goto loc_824BD118;
loc_824BD110:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824bd330
	goto loc_824BD330;
loc_824BD118:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bd32c
	if (ctx.cr0.eq) goto loc_824BD32C;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824bd32c
	if (ctx.cr6.eq) goto loc_824BD32C;
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// lis r8,28752
	ctx.r8.s64 = 1884291072;
	// divwu r24,r9,r10
	r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x824bd164
	if (ctx.cr6.eq) goto loc_824BD164;
	// lis r9,28768
	ctx.r9.s64 = 1885339648;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824bd164
	if (ctx.cr6.eq) goto loc_824BD164;
	// lis r9,28784
	ctx.r9.s64 = 1886388224;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824bd168
	if (!ctx.cr6.eq) goto loc_824BD168;
loc_824BD164:
	// li r24,2
	r24.s64 = 2;
loc_824BD168:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(r24.u32, 1, ctx.xer);
	// ble cr6,0x824bd32c
	if (!ctx.cr6.gt) goto loc_824BD32C;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r28,0
	r28.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, r28.u32);
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,160
	r27.s64 = ctx.r1.s64 + 160;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r28,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, r28.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stwx r11,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// mr r23,r28
	r23.u64 = r28.u64;
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// stwx r28,r6,r30
	REX_STORE_U32(ctx.r6.u32 + r30.u32, r28.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stwx r11,r6,r27
	REX_STORE_U32(ctx.r6.u32 + r27.u32, ctx.r11.u32);
	// beq cr6,0x824bd32c
	if (ctx.cr6.eq) goto loc_824BD32C;
	// rlwinm r25,r10,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_824BD1DC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824bd21c
	if (ctx.cr0.eq) goto loc_824BD21C;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824bd21c
	if (!ctx.cr0.eq) goto loc_824BD21C;
	// lwz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 124);
	// b 0x824bd268
	goto loc_824BD268;
loc_824BD21C:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824bd22c
	if (ctx.cr0.eq) goto loc_824BD22C;
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 148);
	// b 0x824bd268
	goto loc_824BD268;
loc_824BD22C:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bd264
	if (ctx.cr0.eq) goto loc_824BD264;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824bd264
	if (!ctx.cr6.eq) goto loc_824BD264;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BD254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x824bd264
	if (ctx.cr6.eq) goto loc_824BD264;
	// lwz r5,128(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 128);
	// b 0x824bd268
	goto loc_824BD268;
loc_824BD264:
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
loc_824BD268:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824bd2cc
	if (ctx.cr6.eq) goto loc_824BD2CC;
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_824BD284:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x824bd2bc
	if (!ctx.cr6.eq) goto loc_824BD2BC;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x824bd2bc
	if (!ctx.cr6.eq) goto loc_824BD2BC;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd2cc
	if (ctx.cr6.eq) goto loc_824BD2CC;
loc_824BD2BC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x824bd284
	if (ctx.cr6.lt) goto loc_824BD284;
loc_824BD2CC:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// bne cr6,0x824bd2f8
	if (!ctx.cr6.eq) goto loc_824BD2F8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x824bd338
	if (ctx.cr6.gt) goto loc_824BD338;
loc_824BD2F8:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x824bd31c
	if (ctx.cr6.lt) goto loc_824BD31C;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824bd31c
	if (!ctx.cr6.eq) goto loc_824BD31C;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// bgt cr6,0x824bd338
	if (ctx.cr6.gt) goto loc_824BD338;
loc_824BD31C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r27,r25,r27
	r27.u64 = r25.u64 + r27.u64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// blt cr6,0x824bd1dc
	if (ctx.cr6.lt) goto loc_824BD1DC;
loc_824BD32C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BD330:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cf0
	return;
loc_824BD338:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824bd110
	if (ctx.cr6.eq) goto loc_824BD110;
	// stw r29,0(r22)
	REX_STORE_U32(r22.u32 + 0, r29.u32);
	// b 0x824bd110
	goto loc_824BD110;
}

DEFINE_REX_FUNC(sub_824C77F8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,332(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// lwz r11,432(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x824c7820
	if (!ctx.cr6.gt) goto loc_824C7820;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_824C7820:
	// lwz r10,324(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r9,152(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r10,336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824c7850
	if (!ctx.cr6.lt) goto loc_824C7850;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
loc_824C7850:
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824CA240) {
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
	ctx.lr = 0x824CA248;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 404);
	// li r22,0
	r22.s64 = 0;
	// lwz r24,448(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// rlwinm r23,r10,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x824ca27c
	if (ctx.cr6.eq) goto loc_824CA27C;
	// lwz r11,408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x824ca29c
	goto loc_824CA29C;
loc_824CA27C:
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x824ca290
	if (ctx.cr6.gt) goto loc_824CA290;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// blt cr6,0x824ca294
	if (ctx.cr6.lt) goto loc_824CA294;
loc_824CA290:
	// li r9,1
	ctx.r9.s64 = 1;
loc_824CA294:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_824CA29C:
	// beq cr6,0x824ca2a4
	if (ctx.cr6.eq) goto loc_824CA2A4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824CA2A4:
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824ca2c4
	if (ctx.cr6.eq) goto loc_824CA2C4;
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 416);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x824ca2c4
	if (ctx.cr6.eq) goto loc_824CA2C4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_824CA2C4:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x824ca2d8
	if (ctx.cr6.gt) goto loc_824CA2D8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824ca328
	if (ctx.cr6.eq) goto loc_824CA328;
loc_824CA2D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,404(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 404);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,408(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 408);
	// stw r6,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,412(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 412);
	// stw r4,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 416);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CA328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CA328:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r25,r22
	r25.u64 = r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824ca42c
	if (!ctx.cr6.gt) goto loc_824CA42C;
	// addi r26,r31,336
	r26.s64 = r31.s64 + 336;
	// li r27,115
	r27.s64 = 115;
loc_824CA340:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r28,4(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r28,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x824ca398
	if (!ctx.cr6.eq) goto loc_824CA398;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x824ca398
	if (!ctx.cr6.lt) goto loc_824CA398;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r22,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r22.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824CA398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CA398:
	// lwz r30,404(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 404);
	// lwz r11,408(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x824ca418
	if (ctx.cr6.gt) goto loc_824CA418;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_824CA3B4:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r9,412(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 412);
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x824ca400
	if (ctx.cr6.eq) goto loc_824CA400;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r30.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x824CA400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CA400:
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r11,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r29.u32 = ea;
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x824ca3b4
	if (!ctx.cr6.gt) goto loc_824CA3B4;
loc_824CA418:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824ca340
	if (ctx.cr6.lt) goto loc_824CA340;
loc_824CA42C:
	// lwz r11,412(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824ca458
	if (!ctx.cr6.eq) goto loc_824CA458;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x824ca44c
	if (ctx.cr6.eq) goto loc_824CA44C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-26568
	ctx.r10.s64 = ctx.r11.s64 + -26568;
	// b 0x824ca474
	goto loc_824CA474;
loc_824CA44C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// b 0x824ca474
	goto loc_824CA474;
loc_824CA458:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x824ca46c
	if (ctx.cr6.eq) goto loc_824CA46C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-25368
	ctx.r10.s64 = ctx.r11.s64 + -25368;
	// b 0x824ca474
	goto loc_824CA474;
loc_824CA46C:
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-25088
	ctx.r10.s64 = ctx.r11.s64 + -25088;
loc_824CA474:
	// stw r10,4(r24)
	REX_STORE_U32(r24.u32 + 4, ctx.r10.u32);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x824ca508
	if (!ctx.cr6.gt) goto loc_824CA508;
	// addi r27,r24,20
	r27.s64 = r24.s64 + 20;
	// addi r29,r31,336
	r29.s64 = r31.s64 + 336;
loc_824CA490:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x824ca4c8
	if (ctx.cr6.eq) goto loc_824CA4C8;
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824ca4f0
	if (!ctx.cr6.eq) goto loc_824CA4F0;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + r24.u64;
	// bl 0x824c8aa8
	ctx.lr = 0x824CA4C4;
	sub_824C8AA8(ctx, base);
	// b 0x824ca4f0
	goto loc_824CA4F0;
loc_824CA4C8:
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r5,11
	ctx.r11.s64 = ctx.r5.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r24
	r30.u64 = ctx.r11.u64 + r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x824c8aa8
	ctx.lr = 0x824CA4E8;
	sub_824C8AA8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r10,60(r24)
	REX_STORE_U32(r24.u32 + 60, ctx.r10.u32);
loc_824CA4F0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stwu r22,4(r27)
	ea = 4 + r27.u32;
	REX_STORE_U32(ea, r22.u32);
	r27.u32 = ea;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x824ca490
	if (ctx.cr6.lt) goto loc_824CA490;
loc_824CA508:
	// stw r22,8(r24)
	REX_STORE_U32(r24.u32 + 8, r22.u32);
	// stw r22,16(r24)
	REX_STORE_U32(r24.u32 + 16, r22.u32);
	// stw r22,12(r24)
	REX_STORE_U32(r24.u32 + 12, r22.u32);
	// stw r22,20(r24)
	REX_STORE_U32(r24.u32 + 20, r22.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 280);
	// stw r11,40(r24)
	REX_STORE_U32(r24.u32 + 40, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_824DA550) {
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
	ctx.lr = 0x824DA558;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x824d7948
	ctx.lr = 0x824DA574;
	sub_824D7948(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r18,r10,21904
	r18.s64 = ctx.r10.s64 + 21904;
	// addi r22,r11,28488
	r22.s64 = ctx.r11.s64 + 28488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA594;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824DA59C;
	sub_824D8700(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82449678
	ctx.lr = 0x824DA5A4;
	sub_82449678(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824DA5B4;
	sub_823F02B8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x824da5cc
	if (!ctx.cr0.eq) goto loc_824DA5CC;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,144(r21)
	REX_STORE_U32(r21.u32 + 144, ctx.r11.u32);
	// b 0x824da70c
	goto loc_824DA70C;
loc_824DA5CC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824499e8
	ctx.lr = 0x824DA5E0;
	sub_824499E8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r19,r26,8
	r19.s64 = r26.s64 + 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824da700
	if (!ctx.cr6.lt) goto loc_824DA700;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
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
	// addi r20,r6,-26856
	r20.s64 = ctx.r6.s64 + -26856;
	// addi r29,r7,21228
	r29.s64 = ctx.r7.s64 + 21228;
	// addi r25,r8,21360
	r25.s64 = ctx.r8.s64 + 21360;
	// addi r24,r9,-11040
	r24.s64 = ctx.r9.s64 + -11040;
	// addi r23,r10,21316
	r23.s64 = ctx.r10.s64 + 21316;
	// addi r28,r11,-11052
	r28.s64 = ctx.r11.s64 + -11052;
loc_824DA62C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824da6e4
	if (ctx.cr0.eq) goto loc_824DA6E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824DA640;
	sub_824D7948(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA650;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// bl 0x824eac90
	ctx.lr = 0x824DA66C;
	sub_824EAC90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA680;
	sub_824EAC90(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824DA694;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824DA69C;
	sub_824D8700(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x824da6b4
	if (!ctx.cr6.eq) goto loc_824DA6B4;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// b 0x824da6bc
	goto loc_824DA6BC;
loc_824DA6B4:
	// lwz r10,44(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 44);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824DA6BC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x824d9d00
	ctx.lr = 0x824DA6D8;
	sub_824D9D00(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824DA6E4;
	sub_824D79A8(ctx, base);
loc_824DA6E4:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824da62c
	if (ctx.cr6.lt) goto loc_824DA62C;
loc_824DA700:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823f0350
	ctx.lr = 0x824DA70C;
	sub_823F0350(ctx, base);
loc_824DA70C:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824DA718;
	sub_824D79A8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_824E3F78) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x824e3f30
	ctx.lr = 0x824E3F98;
	sub_824E3F30(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x824e3fb0
	if (ctx.cr0.eq) goto loc_824E3FB0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x8269d1a8
	ctx.lr = 0x824E3FAC;
	sub_8269D1A8(ctx, base);
	// b 0x824e3fc0
	goto loc_824E3FC0;
loc_824E3FB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,26796
	ctx.r4.s64 = ctx.r11.s64 + 26796;
	// bl 0x826a1e70
	ctx.lr = 0x824E3FC0;
	sub_826A1E70(ctx, base);
loc_824E3FC0:
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

DEFINE_REX_FUNC(sub_824E5B18) {
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
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// li r31,0
	r31.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824e5bb4
	if (ctx.cr6.gt) goto loc_824E5BB4;
	// beq cr6,0x824e5bac
	if (ctx.cr6.eq) goto loc_824E5BAC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824e5c30
	if (ctx.cr6.eq) goto loc_824E5C30;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5ba0
	if (ctx.cr6.eq) goto loc_824E5BA0;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5b98
	if (ctx.cr6.eq) goto loc_824E5B98;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5b90
	if (ctx.cr6.eq) goto loc_824E5B90;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5b88
	if (ctx.cr6.eq) goto loc_824E5B88;
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824e5bfc
	if (!ctx.cr6.eq) goto loc_824E5BFC;
	// lis r31,6
	r31.s64 = 393216;
	// b 0x824e5ba4
	goto loc_824E5BA4;
loc_824E5B88:
	// lis r31,6
	r31.s64 = 393216;
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5B90:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824e5ba4
	goto loc_824E5BA4;
loc_824E5B98:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5BA0:
	// lis r31,0
	r31.s64 = 0;
loc_824E5BA4:
	// ori r31,r31,34952
	r31.u64 = r31.u64 | 34952;
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5BAC:
	// lis r31,1
	r31.s64 = 65536;
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5BB4:
	// lis r11,1792
	ctx.r11.s64 = 117440512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5c2c
	if (ctx.cr6.eq) goto loc_824E5C2C;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5c24
	if (ctx.cr6.eq) goto loc_824E5C24;
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5c1c
	if (ctx.cr6.eq) goto loc_824E5C1C;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5c14
	if (ctx.cr6.eq) goto loc_824E5C14;
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5c0c
	if (ctx.cr6.eq) goto loc_824E5C0C;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824e5c04
	if (ctx.cr6.eq) goto loc_824E5C04;
loc_824E5BFC:
	// bl 0x826b40a0
	ctx.lr = 0x824E5C00;
	sub_826B40A0(ctx, base);
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5C04:
	// lis r31,16
	r31.s64 = 1048576;
	// b 0x824e5ba4
	goto loc_824E5BA4;
loc_824E5C0C:
	// lis r31,16
	r31.s64 = 1048576;
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5C14:
	// lis r31,96
	r31.s64 = 6291456;
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5C1C:
	// lis r31,64
	r31.s64 = 4194304;
	// b 0x824e5c30
	goto loc_824E5C30;
loc_824E5C24:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x824e5ba4
	goto loc_824E5BA4;
loc_824E5C2C:
	// lis r31,4
	r31.s64 = 262144;
loc_824E5C30:
	// rlwinm. r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e5c4c
	if (ctx.cr0.eq) goto loc_824E5C4C;
	// lis r12,6
	ctx.r12.s64 = 393216;
	// ori r12,r12,34952
	ctx.r12.u64 = ctx.r12.u64 | 34952;
	// and. r11,r31,r12
	ctx.r11.u64 = r31.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e5c4c
	if (ctx.cr0.eq) goto loc_824E5C4C;
	// bl 0x826b40a0
	ctx.lr = 0x824E5C4C;
	sub_826B40A0(ctx, base);
loc_824E5C4C:
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

DEFINE_REX_FUNC(sub_824EE9F0) {
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
	ctx.lr = 0x824EE9F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,-26736
	r29.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824eea3c
	if (!ctx.cr6.eq) goto loc_824EEA3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26380
	ctx.r5.s64 = ctx.r11.s64 + -26380;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1212
	ctx.r7.s64 = 1212;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEA3C;
	sub_824EA978(ctx, base);
loc_824EEA3C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824eea60
	if (!ctx.cr6.eq) goto loc_824EEA60;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26392
	ctx.r5.s64 = ctx.r11.s64 + -26392;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1213
	ctx.r7.s64 = 1213;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEA60;
	sub_824EA978(ctx, base);
loc_824EEA60:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x824eeaa8
	if (ctx.cr6.eq) goto loc_824EEAA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r11,-26404
	r27.s64 = ctx.r11.s64 + -26404;
loc_824EEA70:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x824eeaac
	if (ctx.cr6.eq) goto loc_824EEAAC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824eeaa0
	if (!ctx.cr6.eq) goto loc_824EEAA0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1227
	ctx.r7.s64 = 1227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EEAA0;
	sub_824EA978(ctx, base);
loc_824EEAA0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x824eea70
	if (!ctx.cr6.eq) goto loc_824EEA70;
loc_824EEAA8:
	// li r31,0
	r31.s64 = 0;
loc_824EEAAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F0B18) {
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
	ctx.lr = 0x824F0B20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-25912
	r26.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824f0b64
	if (!ctx.cr6.eq) goto loc_824F0B64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0B64;
	sub_824EA978(ctx, base);
loc_824F0B64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824f0b88
	if (!ctx.cr6.eq) goto loc_824F0B88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26828
	ctx.r5.s64 = ctx.r11.s64 + -26828;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1534
	ctx.r7.s64 = 1534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0B88;
	sub_824EA978(ctx, base);
loc_824F0B88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f0ac0
	ctx.lr = 0x824F0B90;
	sub_824F0AC0(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne 0x824f0bb4
	if (!ctx.cr0.eq) goto loc_824F0BB4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-25008
	ctx.r5.s64 = ctx.r11.s64 + -25008;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0BB4;
	sub_824EA978(ctx, base);
loc_824F0BB4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ef7f8
	ctx.lr = 0x824F0BBC;
	sub_824EF7F8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824f0c88
	if (ctx.cr0.eq) goto loc_824F0C88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r25,r11,-25020
	r25.s64 = ctx.r11.s64 + -25020;
loc_824F0BCC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824efba8
	ctx.lr = 0x824F0BD4;
	sub_824EFBA8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824f0bf4
	if (!ctx.cr0.eq) goto loc_824F0BF4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F0BF4;
	sub_824EA978(ctx, base);
loc_824F0BF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824f0c44
	if (ctx.cr6.lt) goto loc_824F0C44;
	// beq cr6,0x824f0c30
	if (ctx.cr6.eq) goto loc_824F0C30;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x824f0c6c
	if (!ctx.cr6.lt) goto loc_824F0C6C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x824f05f0
	ctx.lr = 0x824F0C1C;
	sub_824F05F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_824F0C20:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824f0c94
	if (!ctx.cr6.eq) goto loc_824F0C94;
	// li r30,1
	r30.s64 = 1;
	// b 0x824f0c74
	goto loc_824F0C74;
loc_824F0C30:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x824f02c0
	ctx.lr = 0x824F0C3C;
	sub_824F02C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x824f0c20
	goto loc_824F0C20;
loc_824F0C44:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// bl 0x825a3e48
	ctx.lr = 0x824F0C58;
	sub_825A3E48(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	r30.u64 = ctx.r11.u64 & r30.u64;
loc_824F0C6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824f0c94
	if (ctx.cr6.eq) goto loc_824F0C94;
loc_824F0C74:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824efaf8
	ctx.lr = 0x824F0C80;
	sub_824EFAF8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x824f0bcc
	if (!ctx.cr0.eq) goto loc_824F0BCC;
loc_824F0C88:
	// li r3,1
	ctx.r3.s64 = 1;
loc_824F0C8C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_824F0C94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824f0c8c
	goto loc_824F0C8C;
}

DEFINE_REX_FUNC(sub_824FF738) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824FF758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824FF760;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r5,r30,r3
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ff788
	if (ctx.cr6.eq) goto loc_824FF788;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x824FF788;
	sub_8250B4D8(ctx, base);
loc_824FF788:
	// stwx r31,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, r31.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82502110) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82502128
	if (ctx.cr0.eq) goto loc_82502128;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x8250212c
	if (ctx.cr0.eq) goto loc_8250212C;
loc_82502128:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8250212C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82502160
	if (ctx.cr6.eq) goto loc_82502160;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_82502160:
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82503DA0) {
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
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x824ff930
	ctx.lr = 0x82503DC8;
	sub_824FF930(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82503DD8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82503dd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82503DD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82506E68) {
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
	ctx.lr = 0x82506E70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82584438
	ctx.lr = 0x82506E8C;
	sub_82584438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82506fcc
	if (!ctx.cr0.eq) goto loc_82506FCC;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,20(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r9,12,21,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x780;
	// rlwinm r8,r8,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// lwz r29,728(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 728);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r31,r9,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r29,r31
	ctx.r9.u64 = r29.u64 + r31.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r26,-4(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
loc_82506EDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82506ef4
	if (ctx.cr6.eq) goto loc_82506EF4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82506ef8
	if (!ctx.cr6.eq) goto loc_82506EF8;
loc_82506EF4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82506EF8:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82506f78
	if (!ctx.cr0.eq) goto loc_82506F78;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r10,724(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 724);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r8,r8,12,21,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x780;
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82506f68
	if (ctx.cr6.lt) goto loc_82506F68;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82506f54
	if (ctx.cr6.gt) goto loc_82506F54;
	// blt cr6,0x82506f68
	if (ctx.cr6.lt) goto loc_82506F68;
loc_82506F54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825537d0
	ctx.lr = 0x82506F5C;
	sub_825537D0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82506edc
	goto loc_82506EDC;
loc_82506F68:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82504db8
	ctx.lr = 0x82506F74;
	sub_82504DB8(ctx, base);
	// b 0x82506fcc
	goto loc_82506FCC;
loc_82506F78:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82506fa8
	if (!ctx.cr0.eq) goto loc_82506FA8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82506fa8
	if (ctx.cr0.eq) goto loc_82506FA8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82506fb4
	if (!ctx.cr6.gt) goto loc_82506FB4;
loc_82506FA8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82506FB4;
	sub_8251FE00(ctx, base);
loc_82506FB4:
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
	// stwx r27,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r27.u32);
loc_82506FCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8251E520) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x8251e564
	if (!ctx.cr6.lt) goto loc_8251E564;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8251E540:
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x8251e56c
	if (!ctx.cr6.eq) goto loc_8251E56C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8251e540
	if (ctx.cr6.lt) goto loc_8251E540;
loc_8251E564:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8251E56C:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251F408) {
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
	ctx.lr = 0x8251F410;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x8251F428;
	sub_824F7DC0(ctx, base);
	// li r20,0
	r20.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r17,r20
	r17.u64 = r20.u64;
	// addi r27,r19,60
	r27.s64 = r19.s64 + 60;
	// li r26,7
	r26.s64 = 7;
	// li r16,1
	r16.s64 = 1;
	// li r15,3
	r15.s64 = 3;
loc_8251F444:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8251f678
	if (ctx.cr6.eq) goto loc_8251F678;
	// rlwinm r11,r17,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + r18.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_8251F45C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x8251f66c
	if (ctx.cr6.eq) goto loc_8251F66C;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825297d0
	ctx.lr = 0x8251F478;
	sub_825297D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8251f658
	if (ctx.cr6.eq) goto loc_8251F658;
	// mr r31,r20
	r31.u64 = r20.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_8251F494:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8251f4f0
	if (ctx.cr6.eq) goto loc_8251F4F0;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f4e8
	if (ctx.cr6.eq) goto loc_8251F4E8;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// rlwinm. r7,r8,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8251f4e4
	if (ctx.cr0.eq) goto loc_8251F4E4;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8251F4C0:
	// rlwinm r4,r8,27,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r4,r4,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r4,r16,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (r16.u32 << (ctx.r4.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8251f4c0
	if (ctx.cr6.lt) goto loc_8251F4C0;
loc_8251F4E4:
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
loc_8251F4E8:
	// lwz r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// b 0x8251f494
	goto loc_8251F494;
loc_8251F4F0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8251F508:
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251f560
	if (ctx.cr0.eq) goto loc_8251F560;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251f540
	if (ctx.cr6.eq) goto loc_8251F540;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_8251F524:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8251f540
	if (ctx.cr6.eq) goto loc_8251F540;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x8251f524
	if (ctx.cr6.lt) goto loc_8251F524;
loc_8251F540:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x8251f550
	if (!ctx.cr6.eq) goto loc_8251F550;
	// stfsu f0,4(r6)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r6.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8251F550:
	// slw r9,r15,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andc r9,r29,r9
	ctx.r9.u64 = r29.u64 & ~ctx.r9.u64;
	// or r29,r9,r11
	r29.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_8251F560:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x8251f508
	if (ctx.cr6.lt) goto loc_8251F508;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251f58c
	if (!ctx.cr6.eq) goto loc_8251F58C;
	// srw. r11,r5,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (r31.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251f64c
	if (ctx.cr0.eq) goto loc_8251F64C;
loc_8251F58C:
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x826a1e70
	ctx.lr = 0x8251F598;
	sub_826A1E70(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// ori r8,r11,5192
	ctx.r8.u64 = ctx.r11.u64 | 5192;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// slw r11,r16,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r16.u32 << (r31.u8 & 0x3F));
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rldimi r8,r9,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwimi r7,r31,14,15,17
	ctx.r7.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 14) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// srd r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwimi r11,r9,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwimi r9,r11,1,27,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r9,r11,1,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r9,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r9.u32);
loc_8251F5EC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251f64c
	if (ctx.cr6.eq) goto loc_8251F64C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f644
	if (ctx.cr6.eq) goto loc_8251F644;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r29,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8251F644:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8251f5ec
	goto loc_8251F5EC;
loc_8251F64C:
	// stwu r30,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, r30.u32);
	r28.u32 = ea;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// b 0x8251f66c
	goto loc_8251F66C;
loc_8251F658:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c2288
	ctx.lr = 0x8251F66C;
	sub_825C2288(ctx, base);
loc_8251F66C:
	// lwz r30,32(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8251f45c
	if (!ctx.cr6.eq) goto loc_8251F45C;
loc_8251F678:
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x8251f444
	if (!ctx.cr0.eq) goto loc_8251F444;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-7352
	ctx.r6.s64 = ctx.r11.s64 + -7352;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826a0028
	ctx.lr = 0x8251F69C;
	sub_826A0028(ctx, base);
	// mr r21,r20
	r21.u64 = r20.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8251fb7c
	if (ctx.cr6.eq) goto loc_8251FB7C;
	// mr r22,r18
	r22.u64 = r18.u64;
loc_8251F6AC:
	// lwz r24,0(r22)
	r24.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8251fb6c
	if (ctx.cr6.eq) goto loc_8251FB6C;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// rlwinm r4,r11,18,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// beq cr6,0x8251f844
	if (ctx.cr6.eq) goto loc_8251F844;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_8251F6D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251f764
	if (ctx.cr6.eq) goto loc_8251F764;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8251f75c
	if (ctx.cr6.eq) goto loc_8251F75C;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// addi r8,r24,44
	ctx.r8.s64 = r24.s64 + 44;
loc_8251F6FC:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8251f740
	if (ctx.cr6.eq) goto loc_8251F740;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_8251F710:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8251f730
	if (ctx.cr6.eq) goto loc_8251F730;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8251f710
	if (ctx.cr6.lt) goto loc_8251F710;
	// b 0x8251f740
	goto loc_8251F740;
loc_8251F730:
	// slw r10,r15,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r9.u8 & 0x3F));
	// slw r29,r11,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// andc r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// or r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 | r29.u64;
loc_8251F740:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8251f75c
	if (ctx.cr6.eq) goto loc_8251F75C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8251f6fc
	if (ctx.cr6.lt) goto loc_8251F6FC;
loc_8251F75C:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8251f778
	if (ctx.cr6.eq) goto loc_8251F778;
loc_8251F764:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// blt cr6,0x8251f6d0
	if (ctx.cr6.lt) goto loc_8251F6D0;
	// b 0x8251f83c
	goto loc_8251F83C;
loc_8251F778:
	// addi r8,r24,4
	ctx.r8.s64 = r24.s64 + 4;
loc_8251F77C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251f824
	if (ctx.cr6.eq) goto loc_8251F824;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251f810
	if (ctx.cr6.eq) goto loc_8251F810;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8251f7ac
	goto loc_8251F7AC;
loc_8251F7A4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8251F7AC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251f7a4
	if (!ctx.cr6.eq) goto loc_8251F7A4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r5,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8251F810:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251f77c
	if (!ctx.cr6.eq) goto loc_8251F77C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8251f77c
	goto loc_8251F77C;
loc_8251F824:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c2288
	ctx.lr = 0x8251F838;
	sub_825C2288(ctx, base);
	// stw r20,0(r22)
	REX_STORE_U32(r22.u32 + 0, r20.u32);
loc_8251F83C:
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(r30.u32, r21.u32, ctx.xer);
	// blt cr6,0x8251fb6c
	if (ctx.cr6.lt) goto loc_8251FB6C;
loc_8251F844:
	// addi r23,r21,1
	r23.s64 = r21.s64 + 1;
loc_8251F848:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r31,r20
	r31.u64 = r20.u64;
	// li r28,-1
	r28.s64 = -1;
	// mr r25,r20
	r25.u64 = r20.u64;
	// rlwinm r29,r11,18,29,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplw cr6,r23,r17
	ctx.cr6.compare<uint32_t>(r23.u32, r17.u32, ctx.xer);
	// bge cr6,0x8251fb6c
	if (!ctx.cr6.lt) goto loc_8251FB6C;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r18
	r26.u64 = ctx.r11.u64 + r18.u64;
loc_8251F874:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251f94c
	if (ctx.cr6.eq) goto loc_8251F94C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// rlwinm. r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// beq 0x8251f924
	if (ctx.cr0.eq) goto loc_8251F924;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// addi r5,r10,44
	ctx.r5.s64 = ctx.r10.s64 + 44;
loc_8251F8A4:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251f8ec
	if (ctx.cr6.eq) goto loc_8251F8EC;
	// addi r9,r24,44
	ctx.r9.s64 = r24.s64 + 44;
loc_8251F8B8:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8251f8d8
	if (ctx.cr6.eq) goto loc_8251F8D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// blt cr6,0x8251f8b8
	if (ctx.cr6.lt) goto loc_8251F8B8;
	// b 0x8251f8ec
	goto loc_8251F8EC;
loc_8251F8D8:
	// slw r9,r15,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r11.u8 & 0x3F));
	// slw r14,r10,r11
	r14.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// or r8,r9,r14
	ctx.r8.u64 = ctx.r9.u64 | r14.u64;
loc_8251F8EC:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8251f910
	if (!ctx.cr6.eq) goto loc_8251F910;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// beq cr6,0x8251f924
	if (ctx.cr6.eq) goto loc_8251F924;
	// slw r10,r15,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r11.u8 & 0x3F));
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_8251F910:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8251f8a4
	if (ctx.cr6.lt) goto loc_8251F8A4;
loc_8251F924:
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8251f94c
	if (!ctx.cr6.eq) goto loc_8251F94C;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, ctx.xer);
	// blt cr6,0x8251f94c
	if (ctx.cr6.lt) goto loc_8251F94C;
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r27.u32, ctx.xer);
	// blt cr6,0x8251f94c
	if (ctx.cr6.lt) goto loc_8251F94C;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
loc_8251F94C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r30,r17
	ctx.cr6.compare<uint32_t>(r30.u32, r17.u32, ctx.xer);
	// blt cr6,0x8251f874
	if (ctx.cr6.lt) goto loc_8251F874;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251fb6c
	if (ctx.cr6.eq) goto loc_8251FB6C;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r24,44
	ctx.r4.s64 = r24.s64 + 44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r30,r28,r18
	r30.u64 = REX_LOAD_U32(r28.u32 + r18.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8251F97C;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251f9bc
	if (ctx.cr6.eq) goto loc_8251F9BC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r9,r30,44
	ctx.r9.s64 = r30.s64 + 44;
loc_8251F990:
	// srw r10,r25,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// blt cr6,0x8251f9b0
	if (ctx.cr6.lt) goto loc_8251F9B0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
loc_8251F9B0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8251f990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251F990;
loc_8251F9BC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825bd9c0
	ctx.lr = 0x8251F9D8;
	sub_825BD9C0(ctx, base);
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,0
	ctx.r9.s64 = 0;
	// slw r11,r16,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r16.u32 << (r31.u8 & 0x3F));
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r24,4
	ctx.r8.s64 = r24.s64 + 4;
	// rlwimi r11,r10,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r7,r11,1,27,30
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r7,r11,1,15,17
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C000) | (ctx.r7.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
loc_8251FA24:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fa88
	if (ctx.cr6.eq) goto loc_8251FA88;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251fa74
	if (ctx.cr6.eq) goto loc_8251FA74;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8251fa54
	goto loc_8251FA54;
loc_8251FA4C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8251FA54:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251fa4c
	if (!ctx.cr6.eq) goto loc_8251FA4C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
loc_8251FA74:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251fa24
	if (!ctx.cr6.eq) goto loc_8251FA24;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8251fa24
	goto loc_8251FA24;
loc_8251FA88:
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
loc_8251FA8C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251fb34
	if (ctx.cr6.eq) goto loc_8251FB34;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251fb20
	if (ctx.cr6.eq) goto loc_8251FB20;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8251fabc
	goto loc_8251FABC;
loc_8251FAB4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8251FABC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251fab4
	if (!ctx.cr6.eq) goto loc_8251FAB4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r31.u32);
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r25,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r25,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8251FB20:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251fa8c
	if (!ctx.cr6.eq) goto loc_8251FA8C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8251fa8c
	goto loc_8251FA8C;
loc_8251FB34:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c2288
	ctx.lr = 0x8251FB48;
	sub_825C2288(ctx, base);
	// stw r31,0(r22)
	REX_STORE_U32(r22.u32 + 0, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825c2288
	ctx.lr = 0x8251FB60;
	sub_825C2288(ctx, base);
	// mr r24,r31
	r24.u64 = r31.u64;
	// stwx r20,r28,r18
	REX_STORE_U32(r28.u32 + r18.u32, r20.u32);
	// b 0x8251f848
	goto loc_8251F848;
loc_8251FB6C:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(r21.u32, r17.u32, ctx.xer);
	// blt cr6,0x8251f6ac
	if (ctx.cr6.lt) goto loc_8251F6AC;
loc_8251FB7C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8257F238) {
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
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bgt cr6,0x8257f2ac
	if (ctx.cr6.gt) goto loc_8257F2AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257F254:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r31,r10,20348
	r31.s64 = ctx.r10.s64 + 20348;
	// lhz r10,17984(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 17984);
loc_8257F264:
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_8257F270:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8257f270
	if (!ctx.cr6.eq) goto loc_8257F270;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r6,r11,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r11.u64;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r9,17704
	ctx.r5.s64 = ctx.r9.s64 + 17704;
	// subfic r4,r10,15
	ctx.xer.ca = ctx.r10.u32 <= 15;
	ctx.r4.u64 = static_cast<uint64_t>(15) - ctx.r10.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// bl 0x826a1a58
	ctx.lr = 0x8257F2A4;
	sub_826A1A58(ctx, base);
loc_8257F2A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8257f488
	goto loc_8257F488;
loc_8257F2AC:
	// cmplwi cr6,r4,319
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 319, ctx.xer);
	// bgt cr6,0x8257f2cc
	if (ctx.cr6.gt) goto loc_8257F2CC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r31,r10,20348
	r31.s64 = ctx.r10.s64 + 20348;
	// lhz r10,25328(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 25328);
	// b 0x8257f264
	goto loc_8257F264;
loc_8257F2CC:
	// cmplwi cr6,r4,351
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 351, ctx.xer);
	// bgt cr6,0x8257f2ec
	if (ctx.cr6.gt) goto loc_8257F2EC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// li r11,320
	ctx.r11.s64 = 320;
	// addi r31,r10,20348
	r31.s64 = ctx.r10.s64 + 20348;
	// lhz r10,25304(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 25304);
	// b 0x8257f264
	goto loc_8257F264;
loc_8257F2EC:
	// cmplwi cr6,r4,607
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 607, ctx.xer);
	// bgt cr6,0x8257f30c
	if (ctx.cr6.gt) goto loc_8257F30C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// li r11,352
	ctx.r11.s64 = 352;
	// addi r31,r10,20348
	r31.s64 = ctx.r10.s64 + 20348;
	// lhz r10,25296(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 25296);
	// b 0x8257f264
	goto loc_8257F264;
loc_8257F30C:
	// cmplwi cr6,r4,623
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 623, ctx.xer);
	// bgt cr6,0x8257f31c
	if (ctx.cr6.gt) goto loc_8257F31C;
	// li r11,608
	ctx.r11.s64 = 608;
	// b 0x8257f254
	goto loc_8257F254;
loc_8257F31C:
	// cmplwi cr6,r4,687
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 687, ctx.xer);
	// bgt cr6,0x8257f33c
	if (ctx.cr6.gt) goto loc_8257F33C;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// li r11,624
	ctx.r11.s64 = 624;
	// addi r31,r10,20348
	r31.s64 = ctx.r10.s64 + 20348;
	// lhz r10,17980(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 17980);
	// b 0x8257f264
	goto loc_8257F264;
loc_8257F33C:
	// cmplwi cr6,r4,719
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 719, ctx.xer);
	// bgt cr6,0x8257f35c
	if (ctx.cr6.gt) goto loc_8257F35C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// li r11,688
	ctx.r11.s64 = 688;
	// addi r31,r10,20348
	r31.s64 = ctx.r10.s64 + 20348;
	// lhz r10,25300(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 25300);
	// b 0x8257f264
	goto loc_8257F264;
loc_8257F35C:
	// cmplwi cr6,r4,720
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 720, ctx.xer);
	// bgt cr6,0x8257f37c
	if (ctx.cr6.gt) goto loc_8257F37C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r31,r11,20348
	r31.s64 = ctx.r11.s64 + 20348;
	// lhz r11,2736(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2736);
loc_8257F374:
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// b 0x8257f2a4
	goto loc_8257F2A4;
loc_8257F37C:
	// cmplwi cr6,r4,721
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 721, ctx.xer);
	// bgt cr6,0x8257f398
	if (ctx.cr6.gt) goto loc_8257F398;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r31,r11,20348
	r31.s64 = ctx.r11.s64 + 20348;
	// lhz r11,25268(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 25268);
	// b 0x8257f374
	goto loc_8257F374;
loc_8257F398:
	// cmplwi cr6,r4,722
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 722, ctx.xer);
	// bgt cr6,0x8257f3b8
	if (ctx.cr6.gt) goto loc_8257F3B8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r31,r11,20348
	r31.s64 = ctx.r11.s64 + 20348;
	// lwz r11,-19428(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -19428);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8257f2a4
	goto loc_8257F2A4;
loc_8257F3B8:
	// cmplwi cr6,r4,723
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 723, ctx.xer);
	// bgt cr6,0x8257f3e8
	if (ctx.cr6.gt) goto loc_8257F3E8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r9,r10,-18732
	ctx.r9.s64 = ctx.r10.s64 + -18732;
	// addi r31,r11,20348
	r31.s64 = ctx.r11.s64 + 20348;
	// lwz r11,-18732(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -18732);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stb r9,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r9.u8);
	// b 0x8257f2a4
	goto loc_8257F2A4;
loc_8257F3E8:
	// cmplwi cr6,r4,724
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 724, ctx.xer);
	// bgt cr6,0x8257f420
	if (ctx.cr6.gt) goto loc_8257F420;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r9,r10,-19440
	ctx.r9.s64 = ctx.r10.s64 + -19440;
	// addi r31,r11,20348
	r31.s64 = ctx.r11.s64 + 20348;
	// lwz r11,-19440(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -19440);
loc_8257F404:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lhz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// sth r9,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r9.u16);
	// b 0x8257f2a4
	goto loc_8257F2A4;
loc_8257F420:
	// cmplwi cr6,r4,725
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 725, ctx.xer);
	// bgt cr6,0x8257f440
	if (ctx.cr6.gt) goto loc_8257F440;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r9,r10,-19452
	ctx.r9.s64 = ctx.r10.s64 + -19452;
	// addi r31,r11,20348
	r31.s64 = ctx.r11.s64 + 20348;
	// lwz r11,-19452(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -19452);
	// b 0x8257f404
	goto loc_8257F404;
loc_8257F440:
	// cmplwi cr6,r4,726
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 726, ctx.xer);
	// bgt cr6,0x8257f480
	if (ctx.cr6.gt) goto loc_8257F480;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r9,r10,-18744
	ctx.r9.s64 = ctx.r10.s64 + -18744;
	// addi r31,r11,20348
	r31.s64 = ctx.r11.s64 + 20348;
	// lwz r11,-18744(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -18744);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lhz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lbz r9,10(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 10);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// sth r7,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r7.u16);
	// stb r9,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r9.u8);
	// b 0x8257f2a4
	goto loc_8257F2A4;
loc_8257F480:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18756
	ctx.r3.s64 = ctx.r11.s64 + -18756;
loc_8257F488:
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

DEFINE_REX_FUNC(sub_825863D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825863E0;
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
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586408;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258642c
	if (ctx.cr6.eq) goto loc_8258642C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82586428;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8258642C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586434;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586444;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586450;
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

DEFINE_REX_FUNC(sub_8258CA60) {
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
	ctx.lr = 0x8258CA68;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82520410
	ctx.lr = 0x8258CA90;
	sub_82520410(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r21,1
	r21.s64 = 1;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x8258d168
	if (ctx.cr6.eq) goto loc_8258D168;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r22,2
	r22.s64 = 2;
	// li r23,-1
	r23.s64 = -1;
	// lfs f29,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f29.f64 = double(temp.f32);
	// lfd f30,-3744(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// lfs f31,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_8258CAC4:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82589f28
	ctx.lr = 0x8258CACC;
	sub_82589F28(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8258d058
	if (ctx.cr6.lt) goto loc_8258D058;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bge cr6,0x8258d1a0
	if (!ctx.cr6.lt) goto loc_8258D1A0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8255db50
	ctx.lr = 0x8258CAEC;
	sub_8255DB50(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82584600
	ctx.lr = 0x8258CAF8;
	sub_82584600(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r27,172(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r19,176(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82580ab0
	ctx.lr = 0x8258CB0C;
	sub_82580AB0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r27,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r27.u32);
	// stw r19,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r19.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258cb48
	if (!ctx.cr0.eq) goto loc_8258CB48;
	// rlwinm r4,r11,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// rlwinm r29,r11,30,18,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// b 0x8258cbc4
	goto loc_8258CBC4;
loc_8258CB48:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258ccf4
	if (!ctx.cr6.eq) goto loc_8258CCF4;
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x8258cb98
	if (!ctx.cr6.eq) goto loc_8258CB98;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8258CB7C;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
loc_8258CB88:
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// subfc r11,r22,r11
	ctx.xer.ca = ctx.r11.u32 >= r22.u32;
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	// subfze r30,r23
	temp.u8 = ~r23.u32 + ctx.xer.ca < ~r23.u32;
	r30.u64 = ~r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8258ccd0
	goto loc_8258CCD0;
loc_8258CB98:
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x8258cc84
	if (!ctx.cr6.eq) goto loc_8258CC84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8258CBB4;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r4,r11,17
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r29,r11,17,18,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
loc_8258CBC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r30,r4,40
	r30.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8258cc10
	if (!ctx.cr6.eq) goto loc_8258CC10;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258cbf4
	if (!ctx.cr6.eq) goto loc_8258CBF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82520608
	ctx.lr = 0x8258CBF4;
	sub_82520608(ctx, base);
loc_8258CBF4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,14,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// b 0x8258cb88
	goto loc_8258CB88;
loc_8258CC10:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82520410
	ctx.lr = 0x8258CC24;
	sub_82520410(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8258CC28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589f28
	ctx.lr = 0x8258CC30;
	sub_82589F28(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne cr6,0x8258cc28
	if (!ctx.cr6.eq) goto loc_8258CC28;
	// lwz r10,1004(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1004);
	// addi r11,r31,972
	ctx.r11.s64 = r31.s64 + 972;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r30,1004(r31)
	REX_STORE_U32(r31.u32 + 1004, r30.u32);
	// ble cr6,0x8258cc60
	if (!ctx.cr6.gt) goto loc_8258CC60;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// mr r30,r21
	r30.u64 = r21.u64;
	// ble cr6,0x8258cc64
	if (!ctx.cr6.gt) goto loc_8258CC64;
loc_8258CC60:
	// li r30,0
	r30.s64 = 0;
loc_8258CC64:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8258cc7c
	if (ctx.cr6.lt) goto loc_8258CC7C;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x8258cc7c
	if (ctx.cr6.gt) goto loc_8258CC7C;
	// mr r29,r21
	r29.u64 = r21.u64;
	// b 0x8258ccf4
	goto loc_8258CCF4;
loc_8258CC7C:
	// li r29,0
	r29.s64 = 0;
	// b 0x8258ccf4
	goto loc_8258CCF4;
loc_8258CC84:
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// bne cr6,0x8258ccdc
	if (!ctx.cr6.eq) goto loc_8258CCDC;
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8258ccb0
	if (!ctx.cr0.eq) goto loc_8258CCB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8258ccc4
	goto loc_8258CCC4;
loc_8258CCB0:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r11,r11,31,17,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFE;
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_8258CCC4:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8258CCD0:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r29,r10,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8258ccf4
	goto loc_8258CCF4;
loc_8258CCDC:
	// lhz r10,14(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 14);
	// rlwinm r11,r11,0,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r30,r11,30,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r29,r10,31,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_8258CCF4:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,6
	ctx.r10.s64 = 6;
	// subfc r9,r11,r28
	ctx.xer.ca = r28.u32 >= ctx.r11.u32;
	ctx.r9.u64 = r28.u64 - ctx.r11.u64;
	// eqv r11,r11,r28
	ctx.r11.u64 = ~(ctx.r11.u64 ^ r28.u64);
	// eqv r8,r10,r28
	ctx.r8.u64 = ~(ctx.r10.u64 ^ r28.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subfc r10,r10,r28
	ctx.xer.ca = r28.u32 >= ctx.r10.u32;
	ctx.r10.u64 = r28.u64 - ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r28,r11,31
	r28.u64 = ctx.r11.u32 & 0x1;
	// beq 0x8258cf3c
	if (ctx.cr0.eq) goto loc_8258CF3C;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258cecc
	if (!ctx.cr0.eq) goto loc_8258CECC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fa30
	ctx.lr = 0x8258CD40;
	sub_8257FA30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq 0x8258cd8c
	if (ctx.cr0.eq) goto loc_8258CD8C;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cd70
	if (ctx.cr0.eq) goto loc_8258CD70;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// b 0x8258cd84
	goto loc_8258CD84;
loc_8258CD70:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_8258CD84:
	// bl 0x825c19c8
	ctx.lr = 0x8258CD88;
	sub_825C19C8(ctx, base);
	// b 0x8258cf80
	goto loc_8258CF80;
loc_8258CD8C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825c19c8
	ctx.lr = 0x8258CD9C;
	sub_825C19C8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825c19c8
	ctx.lr = 0x8258CDB0;
	sub_825C19C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x825870b0
	ctx.lr = 0x8258CDC4;
	sub_825870B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585cc8
	ctx.lr = 0x8258CDD4;
	sub_82585CC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r7,228
	ctx.r7.s64 = 228;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r5,r11,18,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// bl 0x825b9110
	ctx.lr = 0x8258CDF4;
	sub_825B9110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585be8
	ctx.lr = 0x8258CE04;
	sub_82585BE8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// rlwinm r5,r11,18,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// li r7,228
	ctx.r7.s64 = 228;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b9110
	ctx.lr = 0x8258CE24;
	sub_825B9110(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82586ec0
	ctx.lr = 0x8258CE38;
	sub_82586EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583180
	ctx.lr = 0x8258CE48;
	sub_82583180(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825830b0
	ctx.lr = 0x8258CE58;
	sub_825830B0(ctx, base);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258CE78;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x8258CE98;
	sub_824F71B8(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8258CEB8;
	sub_8250AB60(ctx, base);
loc_8258CEB8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258CEC4;
	sub_8250AD28(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// b 0x8258d004
	goto loc_8258D004;
loc_8258CECC:
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8258d15c
	if (ctx.cr6.eq) goto loc_8258D15C;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258CEF8;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x8258CF14;
	sub_824F71B8(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r11,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258CF38;
	sub_82584ED0(ctx, base);
	// b 0x8258ceb8
	goto loc_8258CEB8;
loc_8258CF3C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8257fa30
	ctx.lr = 0x8258CF4C;
	sub_8257FA30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258cf94
	if (ctx.cr0.eq) goto loc_8258CF94;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8258cf94
	if (!ctx.cr6.eq) goto loc_8258CF94;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x825bdd18
	ctx.lr = 0x8258CF80;
	sub_825BDD18(ctx, base);
loc_8258CF80:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// b 0x8258d15c
	goto loc_8258D15C;
loc_8258CF94:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258d15c
	if (ctx.cr0.eq) goto loc_8258D15C;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x8258CFB8;
	sub_825BB860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x824f71b8
	ctx.lr = 0x8258CFD8;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// cntlzw r10,r29
	ctx.r10.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258CFF4;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8258D000;
	sub_8250AD28(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
loc_8258D004:
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// beq cr6,0x8258d024
	if (ctx.cr6.eq) goto loc_8258D024;
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x8258d038
	if (ctx.cr6.eq) goto loc_8258D038;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x8258d034
	goto loc_8258D034;
loc_8258D024:
	// andi. r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 & 26214;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,26214
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26214, ctx.xer);
	// beq cr6,0x8258d038
	if (ctx.cr6.eq) goto loc_8258D038;
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
loc_8258D034:
	// sth r11,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r11.u16);
loc_8258D038:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// rlwimi r11,r21,0,16,14
	ctx.r11.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r11.u64 & 0x10000);
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x8258d15c
	goto loc_8258D15C;
loc_8258D058:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8255db50
	ctx.lr = 0x8258D064;
	sub_8255DB50(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82584600
	ctx.lr = 0x8258D070;
	sub_82584600(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r30,188(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,192(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82580ab0
	ctx.lr = 0x8258D084;
	sub_82580AB0(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r30,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, r30.u32);
	// stw r29,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8257fa30
	ctx.lr = 0x8258D0B0;
	sub_8257FA30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258d104
	if (ctx.cr0.eq) goto loc_8258D104;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x8258d0cc
	if (ctx.cr6.eq) goto loc_8258D0CC;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// b 0x8258d0d0
	goto loc_8258D0D0;
loc_8258D0CC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_8258D0D0:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x8258d15c
	if (ctx.cr6.eq) goto loc_8258D15C;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x825bdd18
	ctx.lr = 0x8258D0F4;
	sub_825BDD18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8258d158
	goto loc_8258D158;
loc_8258D104:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258D110;
	sub_82584ED0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8250a620
	ctx.lr = 0x8258D11C;
	sub_8250A620(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825bdd18
	ctx.lr = 0x8258D13C;
	sub_825BDD18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ld r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825864b8
	ctx.lr = 0x8258D14C;
	sub_825864B8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// rlwimi r11,r21,0,16,14
	ctx.r11.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r11.u64 & 0x10000);
loc_8258D158:
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_8258D15C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(r25.u32, r26.u32, ctx.xer);
	// blt cr6,0x8258cac4
	if (ctx.cr6.lt) goto loc_8258CAC4;
loc_8258D168:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8258d188
	if (!ctx.cr6.eq) goto loc_8258D188;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82589ed0
	ctx.lr = 0x8258D17C;
	sub_82589ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// beq 0x8258d18c
	if (ctx.cr0.eq) goto loc_8258D18C;
loc_8258D188:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258D18C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258d1ac
	if (!ctx.cr0.eq) goto loc_8258D1AC;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258D1A0;
	sub_824E4368(ctx, base);
loc_8258D1A0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258D1AC;
	sub_824E4368(ctx, base);
loc_8258D1AC:
	// lwz r10,1004(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1004);
	// addi r11,r31,972
	ctx.r11.s64 = r31.s64 + 972;
	// stw r10,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// stw r20,1004(r31)
	REX_STORE_U32(r31.u32 + 1004, r20.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

DEFINE_REX_FUNC(sub_825C67A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x825c67bc
	goto loc_825C67BC;
loc_825C67B4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_825C67BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x825c67b4
	if (!ctx.cr6.eq) goto loc_825C67B4;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825C6D68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825C6D70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r10,244(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,1064
	ctx.r11.s64 = ctx.r11.s64 + 1064;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x825c6de0
	if (ctx.cr6.eq) goto loc_825C6DE0;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c6de0
	if (ctx.cr6.eq) goto loc_825C6DE0;
	// lwz r28,212(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r10,216(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825c6de0
	if (!ctx.cr6.lt) goto loc_825C6DE0;
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
loc_825C6DB0:
	// lwz r30,200(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 200);
	// b 0x825c6dc4
	goto loc_825C6DC4;
loc_825C6DB8:
	// lwzu r3,8(r29)
	ea = 8 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x8269ce98
	ctx.lr = 0x825C6DC0;
	sub_8269CE98(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_825C6DC4:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825c6db8
	if (ctx.cr6.lt) goto loc_825C6DB8;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825c6db0
	if (ctx.cr6.lt) goto loc_825C6DB0;
loc_825C6DE0:
	// lwz r3,240(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 240);
	// bl 0x8269ce98
	ctx.lr = 0x825C6DE8;
	sub_8269CE98(ctx, base);
	// lwz r3,248(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x8269ce98
	ctx.lr = 0x825C6DF0;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c6d18
	ctx.lr = 0x825C6DF8;
	sub_825C6D18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825CC4B8) {
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
	// bl 0x826a1ca8
	ctx.lr = 0x825CC4C0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca8
	ctx.lr = 0x825CC4C8;
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
	// beq cr6,0x825cc4f4
	if (ctx.cr6.eq) goto loc_825CC4F4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CC4F0;
	sub_82408848(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CC4F4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cc510
	if (ctx.cr6.eq) goto loc_825CC510;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CC50C;
	sub_825C7448(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825CC510:
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
	// lfs f31,3716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3716);
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
	// bne 0x825cc580
	if (!ctx.cr0.eq) goto loc_825CC580;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cc588
	goto loc_825CC588;
loc_825CC580:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CC588:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cc5a0
	if (ctx.cr6.eq) goto loc_825CC5A0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CC5A0;
	sub_82409A88(ctx, base);
loc_825CC5A0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cc918
	if (!ctx.cr6.gt) goto loc_825CC918;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f11,15196(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 15196);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f10,20216(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + 20216);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19656(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,19032(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 19032);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_825CC604:
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
	// beq cr6,0x825cc83c
	if (ctx.cr6.eq) goto loc_825CC83C;
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
loc_825CC83C:
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x825cc84c
	if (ctx.cr6.lt) goto loc_825CC84C;
	// li r10,127
	ctx.r10.s64 = 127;
loc_825CC84C:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x825cc864
	if (!ctx.cr6.gt) goto loc_825CC864;
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// blt cr6,0x825cc868
	if (ctx.cr6.lt) goto loc_825CC868;
	// li r4,127
	ctx.r4.s64 = 127;
	// b 0x825cc868
	goto loc_825CC868;
loc_825CC864:
	// li r4,-127
	ctx.r4.s64 = -127;
loc_825CC868:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x825cc878
	if (ctx.cr6.lt) goto loc_825CC878;
	// li r10,127
	ctx.r10.s64 = 127;
loc_825CC878:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x825cc890
	if (!ctx.cr6.gt) goto loc_825CC890;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x825cc894
	if (ctx.cr6.lt) goto loc_825CC894;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x825cc894
	goto loc_825CC894;
loc_825CC890:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_825CC894:
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x825cc8a4
	if (ctx.cr6.lt) goto loc_825CC8A4;
	// li r10,127
	ctx.r10.s64 = 127;
loc_825CC8A4:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x825cc8bc
	if (!ctx.cr6.gt) goto loc_825CC8BC;
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// blt cr6,0x825cc8c0
	if (ctx.cr6.lt) goto loc_825CC8C0;
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x825cc8c0
	goto loc_825CC8C0;
loc_825CC8BC:
	// li r6,-127
	ctx.r6.s64 = -127;
loc_825CC8C0:
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x825cc8d0
	if (ctx.cr6.lt) goto loc_825CC8D0;
	// li r10,127
	ctx.r10.s64 = 127;
loc_825CC8D0:
	// cmpwi cr6,r10,-127
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -127, ctx.xer);
	// ble cr6,0x825cc8e8
	if (!ctx.cr6.gt) goto loc_825CC8E8;
	// cmpwi cr6,r3,127
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 127, ctx.xer);
	// blt cr6,0x825cc8ec
	if (ctx.cr6.lt) goto loc_825CC8EC;
	// li r3,127
	ctx.r3.s64 = 127;
	// b 0x825cc8ec
	goto loc_825CC8EC;
loc_825CC8E8:
	// li r3,-127
	ctx.r3.s64 = -127;
loc_825CC8EC:
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
	// blt cr6,0x825cc604
	if (ctx.cr6.lt) goto loc_825CC604;
loc_825CC918:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf4
	ctx.lr = 0x825CC924;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825E73E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E73F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x825f7d60
	ctx.lr = 0x825E7404;
	sub_825F7D60(ctx, base);
	// b 0x825e7424
	goto loc_825E7424;
loc_825E7408:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825E741C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825f7ca8
	ctx.lr = 0x825E7424;
	sub_825F7CA8(ctx, base);
loc_825E7424:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bne cr6,0x825e7408
	if (!ctx.cr6.eq) goto loc_825E7408;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825e7454
	if (ctx.cr6.eq) goto loc_825E7454;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7c38
	ctx.lr = 0x825E7448;
	sub_825F7C38(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x825b3528
	ctx.lr = 0x825E7454;
	sub_825B3528(ctx, base);
loc_825E7454:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r29,1452(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E7468;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825e749c
	if (ctx.cr0.eq) goto loc_825E749C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,27480
	ctx.r6.s64 = ctx.r10.s64 + 27480;
	// addi r5,r9,27496
	ctx.r5.s64 = ctx.r9.s64 + 27496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825e6ac8
	ctx.lr = 0x825E7498;
	sub_825E6AC8(ctx, base);
	// b 0x825e74a0
	goto loc_825E74A0;
loc_825E749C:
	// li r31,0
	r31.s64 = 0;
loc_825E74A0:
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825EF9B8) {
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
	ctx.lr = 0x825EF9C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,52(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r21,1
	r21.s64 = 1;
	// lwz r26,4(r9)
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// addi r24,r11,22852
	r24.s64 = ctx.r11.s64 + 22852;
	// addi r23,r10,15448
	r23.s64 = ctx.r10.s64 + 15448;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x825efae4
	if (!ctx.cr6.gt) goto loc_825EFAE4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r27,0
	r27.s64 = 0;
	// addi r25,r11,16616
	r25.s64 = ctx.r11.s64 + 16616;
loc_825EFA00:
	// lwz r3,52(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825efa1c
	if (!ctx.cr6.lt) goto loc_825EFA1C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x825efa24
	goto loc_825EFA24;
loc_825EFA1C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EFA24;
	sub_825F7718(ctx, base);
loc_825EFA24:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825efad4
	if (!ctx.cr6.eq) goto loc_825EFAD4;
	// lwz r3,52(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825efa50
	if (!ctx.cr6.lt) goto loc_825EFA50;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x825efa58
	goto loc_825EFA58;
loc_825EFA50:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EFA58;
	sub_825F7718(ctx, base);
loc_825EFA58:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// bne 0x825efad4
	if (!ctx.cr0.eq) goto loc_825EFAD4;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825efad4
	if (ctx.cr0.eq) goto loc_825EFAD4;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,116(r22)
	ctx.r9.u64 = REX_LOAD_U32(r22.u32 + 116);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r10,27
	r30.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// srw r11,r11,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (r30.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825efac0
	if (!ctx.cr0.eq) goto loc_825EFAC0;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1837
	ctx.r7.s64 = 1837;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EFAC0;
	sub_824EA978(ctx, base);
loc_825EFAC0:
	// lwz r11,116(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 116);
	// slw r10,r21,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r21.u32 << (r30.u8 & 0x3F));
	// lwzx r9,r31,r11
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stwx r10,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r10.u32);
loc_825EFAD4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(r29.s32, r26.s32, ctx.xer);
	// blt cr6,0x825efa00
	if (ctx.cr6.lt) goto loc_825EFA00;
loc_825EFAE4:
	// lwz r11,120(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 120);
	// b 0x825efaf0
	goto loc_825EFAF0;
loc_825EFAEC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_825EFAF0:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825efaec
	if (!ctx.cr6.eq) goto loc_825EFAEC;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r4,40(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lwz r3,8(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 8);
	// bl 0x8260a6d0
	ctx.lr = 0x825EFB10;
	sub_8260A6D0(ctx, base);
	// lwz r11,120(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 120);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 40);
	// stw r11,32(r28)
	REX_STORE_U32(r28.u32 + 32, ctx.r11.u32);
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
	// lwz r27,172(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825efb4c
	if (!ctx.cr6.eq) goto loc_825EFB4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r11,16604
	ctx.r5.s64 = ctx.r11.s64 + 16604;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r7,1854
	ctx.r7.s64 = 1854;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825EFB4C;
	sub_824EA978(ctx, base);
loc_825EFB4C:
	// lwz r11,120(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 120);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,172(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r9,80(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// stw r11,56(r27)
	REX_STORE_U32(r27.u32 + 56, ctx.r11.u32);
	// stw r9,80(r27)
	REX_STORE_U32(r27.u32 + 80, ctx.r9.u32);
	// lwz r10,228(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 228);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825efba4
	if (ctx.cr0.eq) goto loc_825EFBA4;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,116(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 116);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// slw r8,r21,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,228(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 228);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,228(r27)
	REX_STORE_U32(r27.u32 + 228, ctx.r11.u32);
loc_825EFBA4:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// li r30,0
	r30.s64 = 0;
	// lwz r26,4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x825efcdc
	if (!ctx.cr6.gt) goto loc_825EFCDC;
	// li r29,0
	r29.s64 = 0;
loc_825EFBBC:
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825efbd8
	if (!ctx.cr6.lt) goto loc_825EFBD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825efbe0
	goto loc_825EFBE0;
loc_825EFBD8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EFBE0;
	sub_825F7718(ctx, base);
loc_825EFBE0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825efc10
	if (!ctx.cr6.lt) goto loc_825EFC10;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825efc18
	goto loc_825EFC18;
loc_825EFC10:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EFC18;
	sub_825F7718(ctx, base);
loc_825EFC18:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x825efc68
	if (!ctx.cr6.lt) goto loc_825EFC68;
	// lwz r3,48(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825efc50
	if (!ctx.cr6.lt) goto loc_825EFC50;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825efc58
	goto loc_825EFC58;
loc_825EFC50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7718
	ctx.lr = 0x825EFC58;
	sub_825F7718(ctx, base);
loc_825EFC58:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 28);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_825EFC68:
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825efccc
	if (!ctx.cr6.eq) goto loc_825EFCCC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x825efc94
	if (ctx.cr6.eq) goto loc_825EFC94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825ed358
	ctx.lr = 0x825EFC90;
	sub_825ED358(ctx, base);
	// b 0x825efccc
	goto loc_825EFCCC;
loc_825EFC94:
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r28)
	REX_STORE_U32(r28.u32 + 60, ctx.r11.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r3,8(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 8);
	// bl 0x8260a6d0
	ctx.lr = 0x825EFCAC;
	sub_8260A6D0(ctx, base);
	// lwz r11,120(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 120);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x825ef6e8
	ctx.lr = 0x825EFCCC;
	sub_825EF6E8(ctx, base);
loc_825EFCCC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// blt cr6,0x825efbbc
	if (ctx.cr6.lt) goto loc_825EFBBC;
loc_825EFCDC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_825FD948) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825fcd38
	ctx.lr = 0x825FD96C;
	sub_825FCD38(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r30,136(r31)
	REX_STORE_U32(r31.u32 + 136, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-30696
	ctx.r11.s64 = ctx.r11.s64 + -30696;
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

DEFINE_REX_FUNC(sub_82607AE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607AE8;
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
	// bl 0x825b33a0
	ctx.lr = 0x82607B08;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82607b2c
	if (ctx.cr0.eq) goto loc_82607B2C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f8ce0
	ctx.lr = 0x82607B28;
	sub_825F8CE0(ctx, base);
	// b 0x82607b30
	goto loc_82607B30;
loc_82607B2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607B30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260A860) {
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
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8260a940
	if (!ctx.cr6.eq) goto loc_8260A940;
	// lwz r11,228(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a8b0
	if (ctx.cr0.eq) goto loc_8260A8B0;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8260a8b0
	if (!ctx.cr6.eq) goto loc_8260A8B0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825f9940
	ctx.lr = 0x8260A8A8;
	sub_825F9940(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8260a94c
	if (!ctx.cr0.eq) goto loc_8260A94C;
loc_8260A8B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A8C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a938
	if (ctx.cr0.eq) goto loc_8260A938;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A8E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a8f4
	if (ctx.cr0.eq) goto loc_8260A8F4;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8260a94c
	if (ctx.cr6.eq) goto loc_8260A94C;
loc_8260A8F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a938
	if (ctx.cr0.eq) goto loc_8260A938;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260A924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260a938
	if (ctx.cr0.eq) goto loc_8260A938;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8260a94c
	if (ctx.cr6.eq) goto loc_8260A94C;
loc_8260A938:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8260a950
	goto loc_8260A950;
loc_8260A940:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8260a950
	if (ctx.cr6.eq) goto loc_8260A950;
loc_8260A94C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260A950:
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

DEFINE_REX_FUNC(sub_8260EBD0) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EBFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260EC14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
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
	ctx.lr = 0x8260EC30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82611208) {
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
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82611260
	if (ctx.cr0.eq) goto loc_82611260;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r30,r11,-13532
	r30.s64 = ctx.r11.s64 + -13532;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x8261123C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,20704
	ctx.r11.s64 = ctx.r11.s64 + 20704;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r9,80(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 80);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x827938b4
	ctx.lr = 0x82611260;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82611260:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82610858
	ctx.lr = 0x82611268;
	sub_82610858(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82611280
	if (!ctx.cr0.eq) goto loc_82611280;
	// lis r4,-22633
	ctx.r4.s64 = -1483276288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82611280;
	sub_823F0350(ctx, base);
loc_82611280:
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

DEFINE_REX_FUNC(sub_82614440) {
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
	ctx.lr = 0x82614448;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// b 0x8261447c
	goto loc_8261447C;
loc_82614460:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82614488
	if (ctx.cr6.eq) goto loc_82614488;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82614490
	if (ctx.cr6.eq) goto loc_82614490;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8261447C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82614460
	if (!ctx.cr6.eq) goto loc_82614460;
	// b 0x82614490
	goto loc_82614490;
loc_82614488:
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_82614490:
	// lwz r11,232(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 232);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82614500
	if (ctx.cr6.eq) goto loc_82614500;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_826144B0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x826144d4
	if (!ctx.cr6.eq) goto loc_826144D4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// b 0x826144ec
	goto loc_826144EC;
loc_826144D4:
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826144ec
	if (!ctx.cr6.eq) goto loc_826144EC;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_826144EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82614500
	if (ctx.cr6.eq) goto loc_82614500;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826144b0
	if (!ctx.cr6.eq) goto loc_826144B0;
loc_82614500:
	// lwz r30,0(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r31,4(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 4);
	// beq cr6,0x8261452c
	if (ctx.cr6.eq) goto loc_8261452C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82614520;
	sub_8264C3D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// bl 0x826132e0
	ctx.lr = 0x8261452C;
	sub_826132E0(ctx, base);
loc_8261452C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82614550
	if (ctx.cr6.eq) goto loc_82614550;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82614544;
	sub_8264C3D0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// bl 0x826132e0
	ctx.lr = 0x82614550;
	sub_826132E0(ctx, base);
loc_82614550:
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r31,4(r28)
	REX_STORE_U32(r28.u32 + 4, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826132e0
	ctx.lr = 0x82614564;
	sub_826132E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r29,124
	ctx.r3.s64 = r29.s64 + 124;
	// bl 0x82613b78
	ctx.lr = 0x82614570;
	sub_82613B78(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bgt cr6,0x82614580
	if (ctx.cr6.gt) goto loc_82614580;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82614580:
	// stw r11,260(r29)
	REX_STORE_U32(r29.u32 + 260, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8261BDC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261BDD0;
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
	ctx.lr = 0x8261BDF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261be0c
	if (ctx.cr6.eq) goto loc_8261BE0C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261be10
	goto loc_8261BE10;
loc_8261BE0C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
loc_8261BE10:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8261be28
	if (!ctx.cr6.eq) goto loc_8261BE28;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8261BE28;
	sub_826A1E70(ctx, base);
loc_8261BE28:
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
	ctx.lr = 0x8261BE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82625668) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lhz r7,14(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// stw r7,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lhz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// stw r10,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r10.u32);
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// stw r3,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82626410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82626418;
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
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// bl 0x82793894
	ctx.lr = 0x82626438;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r29,r11,14
	r29.u64 = ctx.r11.u64 | 14;
	// b 0x82626464
	goto loc_82626464;
loc_82626464:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82625d70
	ctx.lr = 0x82626470;
	sub_82625D70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// beq 0x826264f4
	if (ctx.cr0.eq) goto loc_826264F4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826264f4
	if (ctx.cr6.eq) goto loc_826264F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82625d70
	ctx.lr = 0x82626490;
	sub_82625D70(ctx, base);
	// stw r3,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826264f4
	if (ctx.cr0.eq) goto loc_826264F4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826264f4
	if (ctx.cr6.eq) goto loc_826264F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82625d70
	ctx.lr = 0x826264B0;
	sub_82625D70(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826264f4
	if (ctx.cr0.eq) goto loc_826264F4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826264f4
	if (ctx.cr6.eq) goto loc_826264F4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82625d70
	ctx.lr = 0x826264D0;
	sub_82625D70(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826264f4
	if (ctx.cr0.eq) goto loc_826264F4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826264f4
	if (ctx.cr6.eq) goto loc_826264F4;
	// li r28,0
	r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x82626558
	goto loc_82626558;
loc_826264F4:
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262651c
	if (ctx.cr6.eq) goto loc_8262651C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8262651c
	if (ctx.cr6.eq) goto loc_8262651C;
	// bl 0x826263b0
	ctx.lr = 0x82626510;
	sub_826263B0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r29,24(r30)
	REX_STORE_U32(r30.u32 + 24, r29.u32);
	// b 0x82626520
	goto loc_82626520;
loc_8262651C:
	// li r29,0
	r29.s64 = 0;
loc_82626520:
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8262653c
	if (ctx.cr6.eq) goto loc_8262653C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8262653c
	if (ctx.cr6.eq) goto loc_8262653C;
	// bl 0x826263b0
	ctx.lr = 0x82626538;
	sub_826263B0(ctx, base);
	// stw r29,28(r30)
	REX_STORE_U32(r30.u32 + 28, r29.u32);
loc_8262653C:
	// lwz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82626558
	if (ctx.cr6.eq) goto loc_82626558;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82626558
	if (ctx.cr6.eq) goto loc_82626558;
	// bl 0x826263b0
	ctx.lr = 0x82626554;
	sub_826263B0(ctx, base);
	// stw r29,32(r30)
	REX_STORE_U32(r30.u32 + 32, r29.u32);
loc_82626558:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8262C148) {
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
	ctx.lr = 0x8262C158;
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
	// bne cr6,0x8262c378
	if (!ctx.cr6.eq) goto loc_8262C378;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8262c6f8
	if (ctx.cr6.eq) goto loc_8262C6F8;
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
loc_8262C204:
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
	// beq cr6,0x8262c2f0
	if (ctx.cr6.eq) goto loc_8262C2F0;
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
	// b 0x8262c35c
	goto loc_8262C35C;
loc_8262C2F0:
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
loc_8262C35C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8262c204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262C204;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262C36C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8262C378:
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
	// beq cr6,0x8262c6f8
	if (ctx.cr6.eq) goto loc_8262C6F8;
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
loc_8262C4D0:
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
	// beq cr6,0x8262c5b0
	if (ctx.cr6.eq) goto loc_8262C5B0;
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
	// b 0x8262c620
	goto loc_8262C620;
loc_8262C5B0:
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
loc_8262C620:
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
	// bdnz 0x8262c4d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262C4D0;
loc_8262C6F8:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cbc
	ctx.lr = 0x8262C700;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265DF80) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,996
	ctx.r10.u64 = ctx.r10.u64 | 996;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8265dfa0
	if (ctx.cr6.eq) goto loc_8265DFA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8265dfc4
	if (ctx.cr6.lt) goto loc_8265DFC4;
	// b 0x8265dfac
	goto loc_8265DFAC;
loc_8265DFA0:
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265dfc4
	if (ctx.cr6.eq) goto loc_8265DFC4;
loc_8265DFAC:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8265dfcc
	if (ctx.cr6.lt) goto loc_8265DFCC;
loc_8265DFC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8265DFCC:
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mulli r11,r4,92
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(92));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8265F410) {
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
	ctx.lr = 0x8265F418;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-11136
	ctx.r11.s64 = ctx.r11.s64 + -11136;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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
	// bl 0x8264fec0
	ctx.lr = 0x8265F458;
	sub_8264FEC0(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// std r29,16(r31)
	REX_STORE_U64(r31.u32 + 16, r29.u64);
	// bl 0x826a2e60
	ctx.lr = 0x8265F470;
	sub_826A2E60(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,0
	r30.s64 = 0;
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// addi r7,r31,344
	ctx.r7.s64 = r31.s64 + 344;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// li r6,15
	ctx.r6.s64 = 15;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// addi r11,r31,92
	ctx.r11.s64 = r31.s64 + 92;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// std r30,104(r31)
	REX_STORE_U64(r31.u32 + 104, r30.u64);
	// std r30,112(r31)
	REX_STORE_U64(r31.u32 + 112, r30.u64);
	// std r30,120(r31)
	REX_STORE_U64(r31.u32 + 120, r30.u64);
	// std r30,128(r31)
	REX_STORE_U64(r31.u32 + 128, r30.u64);
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
	// std r30,144(r31)
	REX_STORE_U64(r31.u32 + 144, r30.u64);
	// std r30,152(r31)
	REX_STORE_U64(r31.u32 + 152, r30.u64);
	// std r30,160(r31)
	REX_STORE_U64(r31.u32 + 160, r30.u64);
	// std r30,168(r31)
	REX_STORE_U64(r31.u32 + 168, r30.u64);
	// std r30,176(r31)
	REX_STORE_U64(r31.u32 + 176, r30.u64);
	// std r30,184(r31)
	REX_STORE_U64(r31.u32 + 184, r30.u64);
	// std r30,192(r31)
	REX_STORE_U64(r31.u32 + 192, r30.u64);
	// std r30,200(r31)
	REX_STORE_U64(r31.u32 + 200, r30.u64);
	// std r30,208(r31)
	REX_STORE_U64(r31.u32 + 208, r30.u64);
	// std r30,216(r31)
	REX_STORE_U64(r31.u32 + 216, r30.u64);
	// std r30,224(r31)
	REX_STORE_U64(r31.u32 + 224, r30.u64);
	// std r30,232(r31)
	REX_STORE_U64(r31.u32 + 232, r30.u64);
	// std r30,240(r31)
	REX_STORE_U64(r31.u32 + 240, r30.u64);
	// std r30,248(r31)
	REX_STORE_U64(r31.u32 + 248, r30.u64);
	// std r30,256(r31)
	REX_STORE_U64(r31.u32 + 256, r30.u64);
	// std r30,264(r31)
	REX_STORE_U64(r31.u32 + 264, r30.u64);
	// std r30,272(r31)
	REX_STORE_U64(r31.u32 + 272, r30.u64);
	// std r30,280(r31)
	REX_STORE_U64(r31.u32 + 280, r30.u64);
	// std r30,288(r31)
	REX_STORE_U64(r31.u32 + 288, r30.u64);
	// std r30,296(r31)
	REX_STORE_U64(r31.u32 + 296, r30.u64);
	// std r30,304(r31)
	REX_STORE_U64(r31.u32 + 304, r30.u64);
	// std r30,312(r31)
	REX_STORE_U64(r31.u32 + 312, r30.u64);
	// std r30,320(r31)
	REX_STORE_U64(r31.u32 + 320, r30.u64);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,340(r31)
	REX_STORE_U32(r31.u32 + 340, r30.u32);
	// bl 0x826b3f38
	ctx.lr = 0x8265F544;
	sub_826B3F38(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// sth r30,374(r31)
	REX_STORE_U16(r31.u32 + 374, r30.u16);
	// addic r10,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r10.s64 = r26.s64 + -1;
	// addi r6,r9,-11152
	ctx.r6.s64 = ctx.r9.s64 + -11152;
	// lwz r11,252(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// subfe r8,r10,r26
	temp.u8 = (~ctx.r10.u32 + r26.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// addic r7,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	ctx.r7.s64 = r25.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfe r7,r7,r25
	temp.u8 = (~ctx.r7.u32 + r25.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + r25.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + r25.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r5,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	ctx.r5.s64 = r24.s64 + -1;
	// rlwimi r7,r8,1,0,30
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r7.u64 & 0xFFFFFFFF00000001);
	// subfe r8,r5,r24
	temp.u8 = (~ctx.r5.u32 + r24.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + r24.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r5.u64 + r24.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r8,r7,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// lwz r9,-11152(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -11152);
	// stw r9,376(r31)
	REX_STORE_U32(r31.u32 + 376, ctx.r9.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r9.u32);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r5.u32);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r8,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r7.u32);
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// stb r30,392(r31)
	REX_STORE_U8(r31.u32 + 392, r30.u8);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r30,393(r31)
	REX_STORE_U8(r31.u32 + 393, r30.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r11,r31,376
	ctx.r11.s64 = r31.s64 + 376;
	// stb r9,394(r31)
	REX_STORE_U8(r31.u32 + 394, ctx.r9.u8);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8266E830) {
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
	ctx.lr = 0x8266E838;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// lis r10,-32646
	ctx.r10.s64 = -2139488256;
	// lwz r28,12(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r4,28(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// lwz r5,32(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r25,20(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 20);
	// ori r23,r10,4106
	r23.u64 = ctx.r10.u64 | 4106;
	// lwz r26,24(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 24);
	// beq 0x8266ea04
	if (ctx.cr0.eq) goto loc_8266EA04;
	// lwz r6,208(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 208);
	// mr r27,r25
	r27.u64 = r25.u64;
	// lwz r7,220(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 220);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8266e890
	if (!ctx.cr6.eq) goto loc_8266E890;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8266ea04
	if (ctx.cr6.eq) goto loc_8266EA04;
loc_8266E890:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826762a8
	ctx.lr = 0x8266E898;
	sub_826762A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266e998
	if (ctx.cr0.eq) goto loc_8266E998;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266e8f4
	if (ctx.cr0.eq) goto loc_8266E8F4;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266e8c4
	if (ctx.cr0.eq) goto loc_8266E8C4;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8266e8e4
	if (!ctx.cr6.gt) goto loc_8266E8E4;
loc_8266E8C4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266adb8
	ctx.lr = 0x8266E8D8;
	sub_8266ADB8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x8266eb40
	if (!ctx.cr0.eq) goto loc_8266EB40;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8266E8E4:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266eb50
	if (ctx.cr0.eq) goto loc_8266EB50;
	// b 0x8266e9fc
	goto loc_8266E9FC;
loc_8266E8F4:
	// lwz r8,220(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 220);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8266e97c
	if (ctx.cr0.eq) goto loc_8266E97C;
	// lwz r9,212(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 212);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8266E90C:
	// rlwinm r6,r11,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwzx r29,r9,r10
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r5,r11,29
	ctx.r5.u64 = ctx.r11.u32 & 0x7;
	// slw r5,r24,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r5.u8 & 0x3F));
	// lbzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// and. r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8266e940
	if (!ctx.cr0.eq) goto loc_8266E940;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r6,r11,-2
	ctx.r6.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8266e90c
	if (ctx.cr6.lt) goto loc_8266E90C;
	// b 0x8266e97c
	goto loc_8266E97C;
loc_8266E940:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// bl 0x82675b70
	ctx.lr = 0x8266E95C;
	sub_82675B70(ctx, base);
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 80);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,74
	ctx.r11.s64 = ctx.r11.s64 + 74;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8266E97C:
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266e9e0
	if (ctx.cr0.eq) goto loc_8266E9E0;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8266e9a4
	if (ctx.cr6.eq) goto loc_8266E9A4;
loc_8266E998:
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// ori r5,r5,4106
	ctx.r5.u64 = ctx.r5.u64 | 4106;
	// b 0x8266eb40
	goto loc_8266EB40;
loc_8266E9A4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8266e9c0
	if (!ctx.cr6.eq) goto loc_8266E9C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8266e9d0
	goto loc_8266E9D0;
loc_8266E9C0:
	// subf. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// ble 0x8266e9d0
	if (!ctx.cr0.gt) goto loc_8266E9D0;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_8266E9D0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8266e9e0
	if (ctx.cr6.eq) goto loc_8266E9E0;
	// blt cr6,0x8266eb40
	if (ctx.cr6.lt) goto loc_8266EB40;
	// b 0x8266eb50
	goto loc_8266EB50;
loc_8266E9E0:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8266e9fc
	if (!ctx.cr6.eq) goto loc_8266E9FC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_8266E9FC:
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8266EA04:
	// lwz r11,292(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 292);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266ea28
	if (!ctx.cr0.eq) goto loc_8266EA28;
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8266ea30
	if (!ctx.cr6.eq) goto loc_8266EA30;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266eb50
	if (ctx.cr0.eq) goto loc_8266EB50;
loc_8266EA28:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x8266eb40
	goto loc_8266EB40;
loc_8266EA30:
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8266eb2c
	if (ctx.cr6.eq) goto loc_8266EB2C;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266eb2c
	if (!ctx.cr0.eq) goto loc_8266EB2C;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266eb2c
	if (!ctx.cr0.eq) goto loc_8266EB2C;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// clrlwi r9,r11,8
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFFF;
	// beq 0x8266eaa8
	if (ctx.cr0.eq) goto loc_8266EAA8;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bne cr6,0x8266ea78
	if (!ctx.cr6.eq) goto loc_8266EA78;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_8266EA78:
	// subfic r9,r26,127
	ctx.xer.ca = r26.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - r26.u64;
	// subfic r8,r26,-1
	ctx.xer.ca = r26.u32 <= 4294967295;
	ctx.r8.u64 = static_cast<uint64_t>(-1) - r26.u64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r9,r9,18,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFFFC0000;
	// rlwinm r8,r8,25,0,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xFE000000;
	// ori r7,r7,65534
	ctx.r7.u64 = ctx.r7.u64 | 65534;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// rlwinm r11,r11,18,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x20000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x8266eac8
	goto loc_8266EAC8;
loc_8266EAA8:
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
	// rlwinm r11,r11,19,14,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3F800;
	// lwz r8,200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 200);
	// rlwinm r10,r10,25,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xFE000000;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r9,r8,18,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFFFC0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_8266EAC8:
	// lwz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r7,160(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r11,r31,268
	ctx.r11.s64 = r31.s64 + 268;
	// stw r8,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r8.u32);
	// stw r24,272(r31)
	REX_STORE_U32(r31.u32 + 272, r24.u32);
	// stw r9,276(r31)
	REX_STORE_U32(r31.u32 + 276, ctx.r9.u32);
	// stw r7,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r7.u32);
	// lwz r9,60(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 60);
	// stw r9,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r9.u32);
	// lwz r9,76(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 76);
	// stw r9,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r9.u32);
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// stw r25,296(r31)
	REX_STORE_U32(r31.u32 + 296, r25.u32);
	// stw r26,300(r31)
	REX_STORE_U32(r31.u32 + 300, r26.u32);
	// stw r4,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r4.u32);
	// stw r5,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r5.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r10,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r10.u32);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 428);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r30,336(r31)
	REX_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r11,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r11.u32);
	// b 0x8266eb58
	goto loc_8266EB58;
loc_8266EB2C:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266eb50
	if (ctx.cr0.eq) goto loc_8266EB50;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// ori r5,r5,4098
	ctx.r5.u64 = ctx.r5.u64 | 4098;
loc_8266EB40:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266EB50;
	sub_8266BFC8(ctx, base);
loc_8266EB50:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82675ad0
	ctx.lr = 0x8266EB58;
	sub_82675AD0(ctx, base);
loc_8266EB58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8267FB30) {
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
	ctx.lr = 0x8267FB38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,828(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 828);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8267fb58
	if (!ctx.cr0.eq) goto loc_8267FB58;
	// bl 0x8267bec0
	ctx.lr = 0x8267FB54;
	sub_8267BEC0(ctx, base);
	// b 0x8267fc10
	goto loc_8267FC10;
loc_8267FB58:
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// beq cr6,0x8267fc10
	if (ctx.cr6.eq) goto loc_8267FC10;
	// addi r28,r30,592
	r28.s64 = r30.s64 + 592;
	// addi r31,r29,52
	r31.s64 = r29.s64 + 52;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8267FB74:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8267fba0
	if (!ctx.cr6.lt) goto loc_8267FBA0;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x8267fba0
	if (!ctx.cr6.gt) goto loc_8267FBA0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// b 0x8267fba4
	goto loc_8267FBA4;
loc_8267FBA0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_8267FBA4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne cr6,0x8267fbc4
	if (!ctx.cr6.eq) goto loc_8267FBC4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8267f5c8
	ctx.lr = 0x8267FBC0;
	sub_8267F5C8(ctx, base);
	// b 0x8267fbc8
	goto loc_8267FBC8;
loc_8267FBC4:
	// bl 0x82683b90
	ctx.lr = 0x8267FBC8;
	sub_82683B90(ctx, base);
loc_8267FBC8:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8267fbd4
	if (!ctx.cr0.lt) goto loc_8267FBD4;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8267FBD4:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// bne 0x8267fb74
	if (!ctx.cr0.eq) goto loc_8267FB74;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge cr6,0x8267fc10
	if (!ctx.cr6.lt) goto loc_8267FC10;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8267fc10
	if (ctx.cr6.eq) goto loc_8267FC10;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r26,24(r30)
	REX_STORE_U32(r30.u32 + 24, r26.u32);
	// stb r25,1185(r30)
	REX_STORE_U8(r30.u32 + 1185, r25.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// stb r25,1184(r30)
	REX_STORE_U8(r30.u32 + 1184, r25.u8);
	// bl 0x826797d8
	ctx.lr = 0x8267FC10;
	sub_826797D8(ctx, base);
loc_8267FC10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826836C8) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82683788
	if (!ctx.cr0.eq) goto loc_82683788;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82683788
	if (!ctx.cr0.eq) goto loc_82683788;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82683300
	ctx.lr = 0x826836F8;
	sub_82683300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x82683714
	if (!ctx.cr6.eq) goto loc_82683714;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82683788
	if (ctx.cr0.eq) goto loc_82683788;
	// ld r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 72);
loc_82683714:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82683778
	if (ctx.cr6.eq) goto loc_82683778;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82683788
	if (ctx.cr6.lt) goto loc_82683788;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ld r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// addi r3,r11,612
	ctx.r3.s64 = ctx.r11.s64 + 612;
	// cmpld cr6,r10,r4
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82683758
	if (ctx.cr6.lt) goto loc_82683758;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82683758:
	// std r4,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r4.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// beq cr6,0x82683770
	if (ctx.cr6.eq) goto loc_82683770;
	// bl 0x826793d0
	ctx.lr = 0x8268376C;
	sub_826793D0(ctx, base);
	// b 0x82683788
	goto loc_82683788;
loc_82683770:
	// bl 0x82682e88
	ctx.lr = 0x82683774;
	sub_82682E88(ctx, base);
	// b 0x82683788
	goto loc_82683788;
loc_82683778:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,612
	ctx.r3.s64 = ctx.r11.s64 + 612;
	// bl 0x826831d8
	ctx.lr = 0x82683788;
	sub_826831D8(ctx, base);
loc_82683788:
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

DEFINE_REX_FUNC(sub_826885C8) {
	REX_FUNC_PROLOGUE();
	// lhz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,76(r3)
	REX_STORE_U16(ctx.r3.u32 + 76, ctx.r11.u16);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,564(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 564);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,564(r10)
	REX_STORE_U32(ctx.r10.u32 + 564, ctx.r11.u32);
	// lhz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 76);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// sth r11,76(r3)
	REX_STORE_U16(ctx.r3.u32 + 76, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268A180) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8268A188;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,232
	r30.s64 = ctx.r3.s64 + 232;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x8268A1A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826896a0
	ctx.lr = 0x8268A1AC;
	sub_826896A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8268a1c0
	if (!ctx.cr0.eq) goto loc_8268A1C0;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8268a1c8
	goto loc_8268A1C8;
loc_8268A1C0:
	// bl 0x8268e388
	ctx.lr = 0x8268A1C4;
	sub_8268E388(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8268A1C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x8268A1D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8268C308) {
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
	ctx.lr = 0x8268C310;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// bl 0x82793874
	ctx.lr = 0x8268C328;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r29,1
	r29.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// b 0x8268c3a8
	goto loc_8268C3A8;
loc_8268C338:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
loc_8268C340:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8268c364
	if (!ctx.cr6.eq) goto loc_8268C364;
	// stwcx. r8,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8268c340
	if (!ctx.cr0.eq) goto loc_8268C340;
	// b 0x8268c36c
	goto loc_8268C36C;
loc_8268C364:
	// stwcx. r10,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8268C36C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8268c3b4
	if (ctx.cr6.eq) goto loc_8268C3B4;
loc_8268C378:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r30
	ea = r30.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// bne cr6,0x8268c39c
	if (!ctx.cr6.eq) goto loc_8268C39C;
	// stwcx. r28,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8268c378
	if (!ctx.cr0.eq) goto loc_8268C378;
	// b 0x8268c3a4
	goto loc_8268C3A4;
loc_8268C39C:
	// stwcx. r11,0,r30
	ea = r30.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8268C3A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8268C3A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268c338
	if (!ctx.cr6.eq) goto loc_8268C338;
	// b 0x8268c3c0
	goto loc_8268C3C0;
loc_8268C3B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8268c3b4
	if (!ctx.cr6.eq) goto loc_8268C3B4;
loc_8268C3C0:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268c3d4
	if (ctx.cr6.eq) goto loc_8268C3D4;
	// bl 0x827941b4
	ctx.lr = 0x8268C3D0;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_8268C3D4:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x826917a0
	ctx.lr = 0x8268C3DC;
	sub_826917A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x82689b40
	ctx.lr = 0x8268C3F4;
	sub_82689B40(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268c434
	if (!ctx.cr6.gt) goto loc_8268C434;
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
loc_8268C40C:
	// lwz r3,-16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r28,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r28.u32);
	r29.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268c40c
	if (ctx.cr6.lt) goto loc_8268C40C;
loc_8268C434:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826993E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82699420
	if (!ctx.cr6.eq) goto loc_82699420;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82699420
	if (!ctx.cr6.eq) goto loc_82699420;
	// lbz r11,21(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82699420
	if (!ctx.cr6.eq) goto loc_82699420;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-11320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82699420:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269A1B0) {
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
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8269a3fc
	if (ctx.cr6.lt) goto loc_8269A3FC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8269a3f4
	if (ctx.cr6.gt) goto loc_8269A3F4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8269a248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8269A248;
	// bdzf 4*cr6+eq,0x8269a298
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8269A298;
	// bdzf 4*cr6+eq,0x8269a2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8269A2F4;
	// bdzf 4*cr6+eq,0x8269a370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8269A370;
	// bdzf 4*cr6+eq,0x8269a384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8269A384;
	// bdzf 4*cr6+eq,0x8269a3d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8269A3D0;
	// bne cr6,0x8269a3e4
	if (!ctx.cr6.eq) goto loc_8269A3E4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// sth r10,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r10.u16);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,-24144
	ctx.r9.s64 = ctx.r9.s64 + -24144;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
loc_8269A230:
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
loc_8269A234:
	// stw r31,60(r31)
	REX_STORE_U32(r31.u32 + 60, r31.u32);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x827942a4
	ctx.lr = 0x8269A240;
	__imp__MicDeviceRequest(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8269a3f4
	goto loc_8269A3F4;
loc_8269A248:
	// li r8,161
	ctx.r8.s64 = 161;
	// li r7,130
	ctx.r7.s64 = 130;
	// stb r8,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r8.u8);
	// li r8,3
	ctx.r8.s64 = 3;
loc_8269A258:
	// addi r9,r31,128
	ctx.r9.s64 = r31.s64 + 128;
	// stb r7,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r7.u8);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// stw r8,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r11,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r11.u16);
	// addi r10,r10,-24144
	ctx.r10.s64 = ctx.r10.s64 + -24144;
	// sth r11,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r11.u16);
	// sth r9,78(r31)
	REX_STORE_U16(r31.u32 + 78, ctx.r9.u16);
	// sth r6,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r6.u16);
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// b 0x8269a234
	goto loc_8269A234;
loc_8269A298:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r8,26
	ctx.r8.s64 = 26;
	// lhz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 128);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// lis r6,-32150
	ctx.r6.s64 = -2106982400;
	// li r5,161
	ctx.r5.s64 = 161;
	// li r4,131
	ctx.r4.s64 = 131;
	// li r30,512
	r30.s64 = 512;
	// sthbrx r7,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, __builtin_bswap16(ctx.r7.u16));
	// addi r8,r6,-24144
	ctx.r8.s64 = ctx.r6.s64 + -24144;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r5,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r5.u8);
	// stb r4,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r4.u8);
	// sth r30,78(r31)
	REX_STORE_U16(r31.u32 + 78, r30.u16);
loc_8269A2D4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r8,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,82(r31)
	REX_STORE_U16(r31.u32 + 82, ctx.r11.u16);
	// sth r9,80(r31)
	REX_STORE_U16(r31.u32 + 80, ctx.r9.u16);
	// sth r11,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r11.u16);
	// sth r11,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r11.u16);
	// b 0x8269a230
	goto loc_8269A230;
loc_8269A2F4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r9,28
	ctx.r9.s64 = 28;
	// lhz r8,128(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 128);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// sthbrx r8,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, __builtin_bswap16(ctx.r8.u16));
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lha r9,26(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 26));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8269a32c
	if (!ctx.cr0.lt) goto loc_8269A32C;
	// lha r8,28(r11)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x8269a32c
	if (!ctx.cr0.gt) goto loc_8269A32C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8269a340
	goto loc_8269A340;
loc_8269A32C:
	// lha r11,28(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
loc_8269A340:
	// sthbrx r9,0,r10
	REX_STORE_U16(ctx.r10.u32, __builtin_bswap16(ctx.r9.u16));
	// lis r8,-32150
	ctx.r8.s64 = -2106982400;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,512
	ctx.r7.s64 = 512;
	// stb r10,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r10.u8);
	// addi r8,r8,-24144
	ctx.r8.s64 = ctx.r8.s64 + -24144;
	// stb r9,77(r31)
	REX_STORE_U8(r31.u32 + 77, ctx.r9.u8);
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r7,78(r31)
	REX_STORE_U16(r31.u32 + 78, ctx.r7.u16);
	// b 0x8269a2d4
	goto loc_8269A2D4;
loc_8269A370:
	// li r8,161
	ctx.r8.s64 = 161;
	// li r7,129
	ctx.r7.s64 = 129;
	// stb r8,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r8.u8);
	// li r8,6
	ctx.r8.s64 = 6;
	// b 0x8269a258
	goto loc_8269A258;
loc_8269A384:
	// lhz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 128);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// sthbrx r11,0,r10
	REX_STORE_U16(ctx.r10.u32, __builtin_bswap16(ctx.r11.u16));
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// lhz r8,26(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 26);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8269a3bc
	if (ctx.cr6.lt) goto loc_8269A3BC;
	// lhz r8,28(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 28);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8269a3c0
	if (!ctx.cr6.gt) goto loc_8269A3C0;
loc_8269A3BC:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8269A3C0:
	// sth r10,24(r9)
	REX_STORE_U16(ctx.r9.u32 + 24, ctx.r10.u16);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// sth r10,22(r11)
	REX_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// b 0x8269a3f4
	goto loc_8269A3F4;
loc_8269A3D0:
	// li r8,161
	ctx.r8.s64 = 161;
	// li r7,129
	ctx.r7.s64 = 129;
	// stb r8,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r8.u8);
	// li r8,8
	ctx.r8.s64 = 8;
	// b 0x8269a258
	goto loc_8269A258;
loc_8269A3E4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,22
	ctx.r10.s64 = 22;
	// lhz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 128);
	// sthbrx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, __builtin_bswap16(ctx.r9.u16));
loc_8269A3F4:
	// cmpwi cr6,r4,259
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 259, ctx.xer);
	// beq cr6,0x8269a450
	if (ctx.cr6.eq) goto loc_8269A450;
loc_8269A3FC:
	// lbz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 124);
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269a420
	if (ctx.cr0.eq) goto loc_8269A420;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,124(r31)
	REX_STORE_U8(r31.u32 + 124, ctx.r10.u8);
	// lbz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 30);
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// stb r10,30(r11)
	REX_STORE_U8(ctx.r11.u32 + 30, ctx.r10.u8);
loc_8269A420:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8269a444
	if (!ctx.cr6.eq) goto loc_8269A444;
	// stw r4,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82793e24
	ctx.lr = 0x8269A440;
	__imp__KeSetEvent(ctx, base);
	// b 0x8269a450
	goto loc_8269A450;
loc_8269A444:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82699fb8
	ctx.lr = 0x8269A450;
	sub_82699FB8(ctx, base);
loc_8269A450:
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

DEFINE_REX_FUNC(__savevmx_125) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_28) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_80) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826B4010) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B4018;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// lwz r11,-30824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30824);
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826B404C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826b408c
	if (ctx.cr0.lt) goto loc_826B408C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826b4064
	if (ctx.cr6.eq) goto loc_826B4064;
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_826B4064:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826b4074
	if (ctx.cr6.eq) goto loc_826B4074;
	// ld r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
loc_826B4074:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826b4084
	if (ctx.cr6.eq) goto loc_826B4084;
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
loc_826B4084:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b4094
	goto loc_826B4094;
loc_826B408C:
	// bl 0x823f0020
	ctx.lr = 0x826B4090;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B4094:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826B8050) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// std r11,528(r3)
	REX_STORE_U64(ctx.r3.u32 + 528, ctx.r11.u64);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// stw r11,536(r3)
	REX_STORE_U32(ctx.r3.u32 + 536, ctx.r11.u32);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r3,520(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x826bf220
	ctx.lr = 0x826B8098;
	sub_826BF220(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r7,r10,16389
	ctx.r7.u64 = ctx.r10.u64 | 16389;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826b80d4
	goto loc_826B80D4;
loc_826B80D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826b80e4
	if (ctx.cr6.eq) goto loc_826B80E4;
	// ld r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 88);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_826B80E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

DEFINE_REX_FUNC(sub_826BC268) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826bc2a0
	if (ctx.cr6.eq) goto loc_826BC2A0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r3.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r3,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// blr 
	return;
loc_826BC2A0:
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r3.u32);
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BF540) {
	REX_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BF6C0) {
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
	// bl 0x826bf650
	ctx.lr = 0x826BF6D8;
	sub_826BF650(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BF6EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,660(r31)
	REX_STORE_U32(r31.u32 + 660, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_826C1A68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,84(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826C2F50) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C2F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c2fe8
	if (ctx.cr6.eq) goto loc_826C2FE8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826b6670
	ctx.lr = 0x826C2FA8;
	sub_826B6670(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c2fcc
	if (ctx.cr6.eq) goto loc_826C2FCC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826C2FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C2FCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826C2FD0:
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
loc_826C2FE8:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x826c2fd0
	goto loc_826C2FD0;
}

DEFINE_REX_FUNC(sub_826C71A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826C71B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r28,0(r31)
	REX_STORE_U64(r31.u32 + 0, r28.u64);
	// std r28,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r28.u64);
	// lbz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x826c6cf0
	ctx.lr = 0x826C71E0;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7248
	if (ctx.cr6.lt) goto loc_826C7248;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826c7208
	if (!ctx.cr6.eq) goto loc_826C7208;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826C7208:
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// bl 0x826c7058
	ctx.lr = 0x826C721C;
	sub_826C7058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826c7234
	if (!ctx.cr6.lt) goto loc_826C7234;
	// std r28,0(r31)
	REX_STORE_U64(r31.u32 + 0, r28.u64);
	// std r28,0(r29)
	REX_STORE_U64(r29.u32 + 0, r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826C7234:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// cmpd cr6,r10,r11
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x826c7248
	if (!ctx.cr6.lt) goto loc_826C7248;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_826C7248:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826CF188) {
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
	ctx.lr = 0x826CF190;
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
	// ble cr6,0x826cf2f4
	if (!ctx.cr6.gt) goto loc_826CF2F4;
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
	ctx.lr = 0x826CF1D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cf2fc
	if (ctx.cr6.lt) goto loc_826CF2FC;
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
	// bge cr6,0x826cf29c
	if (!ctx.cr6.lt) goto loc_826CF29C;
loc_826CF204:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_826CF214:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x826cf22c
	if (ctx.cr6.eq) goto loc_826CF22C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826CF22C:
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
	ctx.lr = 0x826CF248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826cf2fc
	if (ctx.cr6.lt) goto loc_826CF2FC;
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
	// bge cr6,0x826cf28c
	if (!ctx.cr6.lt) goto loc_826CF28C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x826cf214
	goto loc_826CF214;
loc_826CF28C:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// blt cr6,0x826cf204
	if (ctx.cr6.lt) goto loc_826CF204;
loc_826CF29C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bne cr6,0x826cf2e0
	if (!ctx.cr6.eq) goto loc_826CF2E0;
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
	// beq cr6,0x826cf2d0
	if (ctx.cr6.eq) goto loc_826CF2D0;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_826CF2D0:
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
loc_826CF2E0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826cf2fc
	if (!ctx.cr6.gt) goto loc_826CF2FC;
loc_826CF2F4:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_826CF2FC:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r30.s32, ctx.xer);
	// bne cr6,0x826cf31c
	if (!ctx.cr6.eq) goto loc_826CF31C;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// sth r11,490(r29)
	REX_STORE_U16(r29.u32 + 490, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826CF31C:
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
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826DD460) {
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
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826dcc08
	ctx.lr = 0x826DD480;
	sub_826DCC08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd4ec
	if (ctx.cr6.lt) goto loc_826DD4EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dd048
	ctx.lr = 0x826DD490;
	sub_826DD048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd4ec
	if (ctx.cr6.lt) goto loc_826DD4EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826dcf50
	ctx.lr = 0x826DD4A4;
	sub_826DCF50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dd4ec
	if (ctx.cr6.lt) goto loc_826DD4EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_826DD4EC:
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

DEFINE_REX_FUNC(sub_826DF230) {
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
	ctx.lr = 0x826DF238;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x826df168
	ctx.lr = 0x826DF270;
	sub_826DF168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df3bc
	if (ctx.cr6.lt) goto loc_826DF3BC;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826df2ac
	if (ctx.cr6.eq) goto loc_826DF2AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 56);
	// bl 0x826deca8
	ctx.lr = 0x826DF290;
	sub_826DECA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df3bc
	if (ctx.cr6.lt) goto loc_826DF3BC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826df168
	ctx.lr = 0x826DF2A4;
	sub_826DF168(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df3bc
	if (ctx.cr6.lt) goto loc_826DF3BC;
loc_826DF2AC:
	// ld r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x826deb30
	ctx.lr = 0x826DF2C4;
	sub_826DEB30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df3bc
	if (ctx.cr6.lt) goto loc_826DF3BC;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r8,r10
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x826df30c
	if (!ctx.cr6.eq) goto loc_826DF30C;
	// ld r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 128);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x826df30c
	if (ctx.cr6.lt) goto loc_826DF30C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826de738
	ctx.lr = 0x826DF2FC;
	sub_826DE738(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826df3bc
	if (ctx.cr6.lt) goto loc_826DF3BC;
	// ld r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r8,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r8.u64);
loc_826DF30C:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpld cr6,r6,r11
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x826df360
	if (ctx.cr6.lt) goto loc_826DF360;
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// cmpld cr6,r6,r11
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x826df380
	if (!ctx.cr6.eq) goto loc_826DF380;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x826df380
	goto loc_826DF380;
loc_826DF360:
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r7.u32);
loc_826DF380:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r7,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r6.u32);
	// ld r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r5,0(r25)
	REX_STORE_U64(r25.u32 + 0, ctx.r5.u64);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r4,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r4.u64);
loc_826DF3BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826ED1D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826ED1E8:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x826ed1e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826ED1E8;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826EF0D0) {
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
	ctx.lr = 0x826EF0D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// lwz r28,0(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x826ef118
	if (!ctx.cr6.gt) goto loc_826EF118;
loc_826EF108:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x826ef108
	if (ctx.cr6.gt) goto loc_826EF108;
loc_826EF118:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,312(r29)
	REX_STORE_U16(r29.u32 + 312, ctx.r11.u16);
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// bge cr6,0x826ef1ac
	if (!ctx.cr6.lt) goto loc_826EF1AC;
loc_826EF130:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826f20d8
	ctx.lr = 0x826EF13C;
	sub_826F20D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ef1ec
	if (ctx.cr6.lt) goto loc_826EF1EC;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// lhz r6,202(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r30.s32, ctx.xer);
	// bge cr6,0x826ef1c4
	if (!ctx.cr6.lt) goto loc_826EF1C4;
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r8.u16);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r6,r5,r28
	REX_STORE_U32(ctx.r5.u32 + r28.u32, ctx.r6.u32);
	// lhz r4,202(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 202);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// stw r26,56(r29)
	REX_STORE_U32(r29.u32 + 56, r26.u32);
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// blt cr6,0x826ef130
	if (ctx.cr6.lt) goto loc_826EF130;
loc_826EF1AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ef1d4
	if (ctx.cr6.eq) goto loc_826EF1D4;
	// sth r30,490(r27)
	REX_STORE_U16(r27.u32 + 490, r30.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826EF1C4:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826EF1D4:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sth r8,490(r27)
	REX_STORE_U16(r27.u32 + 490, ctx.r8.u16);
loc_826EF1EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826F68B8) {
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
	ctx.lr = 0x826F68C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r4)
	r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r28,0(r7)
	r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// cmpw cr6,r26,r5
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x826f6974
	if (!ctx.cr6.lt) goto loc_826F6974;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r26,r5
	r29.u64 = ctx.r5.u64 - r26.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r26,r29,r26
	r26.u64 = r29.u64 + r26.u64;
	// li r24,1
	r24.s64 = 1;
loc_826F6904:
	// lhz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 110);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f692c
	if (!ctx.cr6.lt) goto loc_826F692C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x826f6938
	goto loc_826F6938;
loc_826F692C:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826f6938
	if (!ctx.cr6.gt) goto loc_826F6938;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_826F6938:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826F6950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mullw r11,r9,r25
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// sth r8,0(r27)
	REX_STORE_U16(r27.u32 + 0, ctx.r8.u16);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// bne 0x826f6904
	if (!ctx.cr0.eq) goto loc_826F6904;
loc_826F6974:
	// stw r26,0(r23)
	REX_STORE_U32(r23.u32 + 0, r26.u32);
	// stw r27,0(r22)
	REX_STORE_U32(r22.u32 + 0, r27.u32);
	// stw r28,0(r21)
	REX_STORE_U32(r21.u32 + 0, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_826FC738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826FC740;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fc75c
	if (!ctx.cr6.eq) goto loc_826FC75C;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
loc_826FC75C:
	// lwz r10,22260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22260);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826fc778
	if (!ctx.cr6.eq) goto loc_826FC778;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
loc_826FC778:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,22256(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22256);
	// lwz r8,20904(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20904);
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r6,r10,39848
	ctx.r6.u64 = ctx.r10.u64 | 39848;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwzx r3,r11,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// beq cr6,0x826fc7e4
	if (ctx.cr6.eq) goto loc_826FC7E4;
	// lwz r10,20908(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826fc7e4
	if (ctx.cr6.eq) goto loc_826FC7E4;
	// lwz r10,22004(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22004);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lwz r9,22000(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 22000);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r7,24832
	ctx.r6.s64 = ctx.r7.s64 + 24832;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x826fc7ec
	goto loc_826FC7EC;
loc_826FC7E4:
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_826FC7EC:
	// lwz r10,22088(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 22088);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,21764(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 21764);
	// lwz r8,21768(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 21768);
	// lwz r7,22092(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 22092);
	// lwz r6,21904(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 21904);
	// lwz r31,3468(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 3468);
	// lwz r30,3472(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 3472);
	// lwz r29,21796(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 21796);
	// lwz r28,21800(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 21800);
	// lwz r11,22364(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 22364);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r28,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82716ae0
	ctx.lr = 0x826FC84C;
	sub_82716AE0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82711470) {
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
	ctx.lr = 0x82711478;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// srd r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r4,r11,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x82725f80
	ctx.lr = 0x827114AC;
	sub_82725F80(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x827114c0
	if (!ctx.cr6.eq) goto loc_827114C0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
loc_827114C0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r26,0
	r26.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827115b4
	if (!ctx.cr6.eq) goto loc_827115B4;
	// extsb r28,r11
	r28.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82711618
	if (ctx.cr6.eq) goto loc_82711618;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x82711504
	if (!ctx.cr6.gt) goto loc_82711504;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// b 0x827115a0
	goto loc_827115A0;
loc_82711504:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82711564
	if (!ctx.cr6.gt) goto loc_82711564;
loc_8271150C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82711564
	if (ctx.cr6.eq) goto loc_82711564;
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
	// bge 0x82711554
	if (!ctx.cr0.lt) goto loc_82711554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82711554;
	sub_82725E38(ctx, base);
loc_82711554:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8271150c
	if (ctx.cr6.gt) goto loc_8271150C;
loc_82711564:
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
	// bge 0x8271159c
	if (!ctx.cr0.lt) goto loc_8271159C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8271159C;
	sub_82725E38(ctx, base);
loc_8271159C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_827115A0:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827115cc
	if (ctx.cr6.eq) goto loc_827115CC;
loc_827115B4:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// lwz r10,1760(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stw r26,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_827115CC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// addi r9,r28,-1
	ctx.r9.s64 = r28.s64 + -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x827115fc
	if (ctx.cr6.eq) goto loc_827115FC;
	// lwz r10,1760(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_827115FC:
	// slw r10,r10,r28
	ctx.r10.u64 = r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r28.u8 & 0x3F));
	// lwz r9,1760(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_82711618:
	// li r26,0
	r26.s64 = 0;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// lwz r11,1760(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82720A68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82720A70;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82720aac
	if (!ctx.cr6.gt) goto loc_82720AAC;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subf r11,r9,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82720A98:
	// lbzux r8,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mulli r4,r8,315
	ctx.r4.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(315));
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// stwu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82720a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720A98;
loc_82720AAC:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// rlwinm r31,r5,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r6.u32);
	// stwx r10,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// ble cr6,0x82720afc
	if (!ctx.cr6.gt) goto loc_82720AFC;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82720AE0:
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
	// bdnz 0x82720ae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720AE0;
loc_82720AFC:
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r10,-4(r6)
	REX_STORE_U32(ctx.r6.u32 + -4, ctx.r10.u32);
	// ble cr6,0x82720b4c
	if (!ctx.cr6.gt) goto loc_82720B4C;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82720B24:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r8,r9,217
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(217));
	// srawi r9,r8,12
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 12;
	// subf r8,r9,r29
	ctx.r8.u64 = r29.u64 - ctx.r9.u64;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82720b24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720B24;
loc_82720B4C:
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r6.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stwx r10,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// ble cr6,0x82720b94
	if (!ctx.cr6.gt) goto loc_82720B94;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82720B6C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r4,406
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(406));
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82720b6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720B6C;
loc_82720B94:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82720bd8
	if (!ctx.cr6.gt) goto loc_82720BD8;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r9,r7,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r7.u64;
	// li r8,255
	ctx.r8.s64 = 255;
loc_82720BAC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// ble cr6,0x82720bcc
	if (!ctx.cr6.gt) goto loc_82720BCC;
	// subfic r6,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r6.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r4,r5
	temp.u8 = (ctx.r5.u32 + 0xFFFFFFFFu < ctx.r5.u32) | (ctx.r5.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ctx.r5.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
loc_82720BCC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbux r11,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82720bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82720BAC;
loc_82720BD8:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8272B210) {
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
	ctx.lr = 0x8272B218;
	// srawi. r10,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r27,r11,r6
	r27.u64 = ctx.r6.u64 - ctx.r11.u64;
	// ble 0x8272b304
	if (!ctx.cr0.gt) goto loc_8272B304;
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
loc_8272B240:
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
	// bdnz 0x8272b240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B240;
loc_8272B304:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8272b33c
	if (!ctx.cr6.gt) goto loc_8272B33C;
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// subf r8,r4,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r4.u64;
loc_8272B318:
	// lbzx r10,r9,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x8272b330
	if (!ctx.cr6.gt) goto loc_8272B330;
	// li r11,255
	ctx.r11.s64 = 255;
loc_8272B330:
	// stbx r11,r8,r4
	REX_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x8272b318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272B318;
loc_8272B33C:
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8273E460) {
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
	// bl 0x826a1c80
	ctx.lr = 0x8273E468;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// li r23,0
	r23.s64 = 0;
	// addi r28,r6,-8
	r28.s64 = ctx.r6.s64 + -8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8273e584
	if (ctx.cr6.eq) goto loc_8273E584;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8273E4A8:
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r6.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r3.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r6.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r3.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r8,10(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r6.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r3.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r6.u8);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lbzx r4,r5,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r4,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r4.u8);
	// add r31,r28,r9
	r31.u64 = r28.u64 + ctx.r9.u64;
	// bdnz 0x8273e4a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273E4A8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x8273f6b8
	if (!ctx.cr6.eq) goto loc_8273F6B8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_8273E584:
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bgt cr6,0x8273f6b0
	if (ctx.cr6.gt) goto loc_8273F6B0;
	// lis r12,-32140
	ctx.r12.s64 = -2106327040;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6748
	ctx.r12.s64 = ctx.r12.s64 + -6748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_8273E5D4;
	case 1:
		goto loc_8273EDF8;
	case 2:
		goto loc_8273EF68;
	case 3:
		goto loc_8273F074;
	case 4:
		goto loc_8273E8E0;
	case 5:
		goto loc_8273F184;
	case 6:
		goto loc_8273F434;
	case 7:
		goto loc_8273F22C;
	case 8:
		goto loc_8273E7DC;
	case 9:
		goto loc_8273F540;
	case 10:
		goto loc_8273EA80;
	case 11:
		goto loc_8273EC30;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8273E5D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8273def8
	ctx.lr = 0x8273E5DC;
	sub_8273DEF8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r9,r29,-2
	ctx.r9.s64 = r29.s64 + -2;
	// addi r11,r11,-25232
	ctx.r11.s64 = ctx.r11.s64 + -25232;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
loc_8273E604:
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lhzu r29,2(r8)
	ea = 2 + ctx.r8.u32;
	r29.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// lhz r5,6(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r7,r5,r29
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// lhz r3,2(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// lhz r27,0(r4)
	r27.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r6,r27,r6
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(ctx.r6.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// stb r6,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r6.u8);
	// lhz r26,2(r4)
	r26.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// lhz r5,10(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// mullw r7,r5,r29
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// mullw r6,r26,r6
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r3,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r27.u32);
	// stb r7,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r7.u8);
	// lhz r26,14(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r3,6(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mullw r6,r5,r7
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r26,r29
	ctx.r7.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r3,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r27.u32);
	// stb r7,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r7.u8);
	// lhz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r9.u32 + 8);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r26,18(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r5,6(r4)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// lhz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// mullw r6,r5,r7
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r26,r29
	ctx.r7.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r7,r3,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r27.u32);
	// stb r7,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r7.u8);
	// lhz r7,22(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r5,10(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 10);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 8);
	// lhz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// mullw r6,r3,r6
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r29.s32);
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r6,r3,r10
	ctx.r6.u64 = ctx.r3.u64 + ctx.r10.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r3,r5,r27
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + r27.u32);
	// stb r3,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r3.u8);
	// lhz r27,26(r11)
	r27.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// lhz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 12);
	// lhz r26,24(r11)
	r26.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// lhz r6,10(r4)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// mullw r6,r6,r26
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// mullw r7,r27,r29
	ctx.r7.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// stb r6,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r6.u8);
	// lhz r5,14(r9)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + 14);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r6,28(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r27,12(r4)
	r27.u64 = REX_LOAD_U16(ctx.r4.u32 + 12);
	// lhz r7,30(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// mullw r6,r27,r6
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(ctx.r6.s32);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r29.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r6,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// stb r6,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r6.u8);
	// lhz r7,34(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// lhz r4,14(r4)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// lhzu r27,32(r11)
	ea = 32 + ctx.r11.u32;
	r27.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r6,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r29.s32);
	// mullw r6,r4,r27
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r7,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 16;
	// add r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// lbzx r5,r6,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r5.u8);
	// add r31,r28,r7
	r31.u64 = r28.u64 + ctx.r7.u64;
	// bdnz 0x8273e604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273E604;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273E7DC:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8273E7F4:
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzu r10,-1(r8)
	ea = -1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lhz r5,2(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// lbzx r7,r3,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// stb r7,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r7.u8);
	// lhz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r4,r5,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r4,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r4.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r3.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r6,10(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r4,r5,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// stb r4,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r4.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r6,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r5,14(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lbzx r3,r4,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// stb r3,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r3.u8);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r7,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r6,r7,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stb r6,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r6.u8);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bdnz 0x8273e7f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273E7F4;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273E8E0:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,17(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 17);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r6,18(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 18);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// lbz r7,19(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 19);
	// lbz r10,3(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r27,r8,1
	r27.s64 = ctx.r8.s64 + 1;
	// lbz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r7,21(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// addi r26,r9,1
	r26.s64 = ctx.r9.s64 + 1;
	// lbz r10,5(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lbz r8,22(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 22);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbz r9,6(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbz r7,23(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 23);
	// srawi r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	// lbz r10,7(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 7);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r8,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r8.s64 = r27.s32 >> 1;
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// srawi r6,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r6.s64 = r26.s32 >> 1;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r27,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r27.s64 = ctx.r7.s32 >> 1;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// srawi r26,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r26.s64 = ctx.r10.s32 >> 1;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// clrlwi r5,r27,24
	ctx.r5.u64 = r27.u32 & 0xFF;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r3,r26,24
	ctx.r3.u64 = r26.u32 & 0xFF;
loc_8273E9B0:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// stb r10,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r10.u8);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// stb r10,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r10.u8);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// stb r10,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r10,10(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// stb r10,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// stb r10,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// stb r10,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// lwz r27,0(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r26,r10,r3
	r26.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// lbzx r27,r26,r27
	r27.u64 = REX_LOAD_U8(r26.u32 + r27.u32);
	// stb r27,7(r31)
	REX_STORE_U8(r31.u32 + 7, r27.u8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273e9b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273E9B0;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273EA80:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r27,24(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,6(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 6);
	// lbz r9,3(r27)
	ctx.r9.u64 = REX_LOAD_U8(r27.u32 + 3);
	// lbz r7,5(r27)
	ctx.r7.u64 = REX_LOAD_U8(r27.u32 + 5);
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lbz r26,7(r27)
	r26.u64 = REX_LOAD_U8(r27.u32 + 7);
	// rotlwi r4,r9,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// rotlwi r3,r7,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r5,2(r27)
	ctx.r5.u64 = REX_LOAD_U8(r27.u32 + 2);
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r29,4(r27)
	r29.u64 = REX_LOAD_U8(r27.u32 + 4);
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbz r24,1(r27)
	r24.u64 = REX_LOAD_U8(r27.u32 + 1);
	// rotlwi r25,r26,3
	r25.u64 = __builtin_rotateleft32(r26.u32, 3);
	// add r9,r7,r3
	ctx.r9.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// subf r6,r26,r25
	ctx.r6.u64 = r25.u64 - r26.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// addi r27,r9,4
	r27.s64 = ctx.r9.s64 + 4;
	// addi r26,r7,4
	r26.s64 = ctx.r7.s64 + 4;
	// addi r25,r6,4
	r25.s64 = ctx.r6.s64 + 4;
	// addi r5,r24,4
	ctx.r5.s64 = r24.s64 + 4;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8273EAF8:
	// lbzu r10,-1(r8)
	ea = -1 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lhz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r9,r10,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// addi r24,r9,4
	r24.s64 = ctx.r9.s64 + 4;
	// add r20,r6,r7
	r20.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r7,r24,3
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7) != 0);
	ctx.r7.s64 = r24.s32 >> 3;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r6,r24,r25
	ctx.r6.u64 = r25.u64 - r24.u64;
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lbzx r7,r20,r7
	ctx.r7.u64 = REX_LOAD_U8(r20.u32 + ctx.r7.u32);
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - r24.u64;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// add r20,r4,r10
	r20.u64 = ctx.r4.u64 + ctx.r10.u64;
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - r24.u64;
	// stb r7,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r7.u8);
	// add r19,r3,r10
	r19.u64 = ctx.r3.u64 + ctx.r10.u64;
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - r24.u64;
	// add r18,r29,r10
	r18.u64 = r29.u64 + ctx.r10.u64;
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - r24.u64;
	// add r17,r27,r10
	r17.u64 = r27.u64 + ctx.r10.u64;
	// subf r10,r24,r10
	ctx.r10.u64 = ctx.r10.u64 - r24.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r24,r26,r10
	r24.u64 = r26.u64 + ctx.r10.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lbzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// srawi r10,r20,3
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7) != 0);
	ctx.r10.s64 = r20.s32 >> 3;
	// stb r9,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r9.u8);
	// lhz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// srawi r10,r19,3
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7) != 0);
	ctx.r10.s64 = r19.s32 >> 3;
	// stb r7,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r7.u8);
	// lhz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r9,r7,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// srawi r10,r18,3
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x7) != 0);
	ctx.r10.s64 = r18.s32 >> 3;
	// stb r9,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r9.u8);
	// lhz r7,10(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// srawi r10,r17,3
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x7) != 0);
	ctx.r10.s64 = r17.s32 >> 3;
	// stb r7,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r7.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// srawi r10,r24,3
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7) != 0);
	ctx.r10.s64 = r24.s32 >> 3;
	// stb r7,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r7.u8);
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stb r10,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// lbzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r9,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r9.u8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273eaf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273EAF8;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273EC30:
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// lwz r26,20(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// rotlwi r9,r3,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// lbz r3,5(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lbz r7,2(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r6,3(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// rotlwi r7,r7,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// rotlwi r6,r6,3
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lbz r29,7(r4)
	r29.u64 = REX_LOAD_U8(ctx.r4.u32 + 7);
	// rotlwi r4,r3,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r5,r5,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// rotlwi r3,r10,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// rotlwi r29,r29,3
	r29.u64 = __builtin_rotateleft32(r29.u32, 3);
loc_8273EC88:
	// lbzu r10,-1(r26)
	ea = -1 + r26.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	r26.u32 = ea;
	// lhz r25,2(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r21,24(r30)
	r21.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lbz r20,0(r21)
	r20.u64 = REX_LOAD_U8(r21.u32 + 0);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r24,r25,r24
	r24.u64 = r25.u64 + r24.u64;
	// add r25,r9,r10
	r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r19,r8,r10
	r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r25,r25,3
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x7) != 0);
	r25.s64 = r25.s32 >> 3;
	// add r18,r7,r10
	r18.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r17,r6,r10
	r17.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r16,r5,r10
	r16.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r15,r4,r10
	r15.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lbzx r24,r24,r25
	r24.u64 = REX_LOAD_U8(r24.u32 + r25.u32);
	// add r14,r3,r10
	r14.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// subf r9,r20,r9
	ctx.r9.u64 = ctx.r9.u64 - r20.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// srawi r25,r19,3
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7) != 0);
	r25.s64 = r19.s32 >> 3;
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
	// lhz r20,4(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r10,r20
	ctx.r10.s64 = r20.s16;
	// lbz r20,1(r21)
	r20.u64 = REX_LOAD_U8(r21.u32 + 1);
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// subf r8,r20,r8
	ctx.r8.u64 = ctx.r8.u64 - r20.u64;
	// srawi r10,r18,3
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x7) != 0);
	ctx.r10.s64 = r18.s32 >> 3;
	// lbzx r25,r24,r25
	r25.u64 = REX_LOAD_U8(r24.u32 + r25.u32);
	// stb r25,1(r31)
	REX_STORE_U8(r31.u32 + 1, r25.u8);
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r20,2(r21)
	r20.u64 = REX_LOAD_U8(r21.u32 + 2);
	// lhz r25,6(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// lbzx r25,r25,r10
	r25.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// srawi r10,r17,3
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x7) != 0);
	ctx.r10.s64 = r17.s32 >> 3;
	// stb r25,2(r31)
	REX_STORE_U8(r31.u32 + 2, r25.u8);
	// subf r7,r20,r7
	ctx.r7.u64 = ctx.r7.u64 - r20.u64;
	// lhz r25,8(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r20,3(r21)
	r20.u64 = REX_LOAD_U8(r21.u32 + 3);
	// subf r6,r20,r6
	ctx.r6.u64 = ctx.r6.u64 - r20.u64;
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// lbzx r25,r25,r10
	r25.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// srawi r10,r16,3
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x7) != 0);
	ctx.r10.s64 = r16.s32 >> 3;
	// stb r25,3(r31)
	REX_STORE_U8(r31.u32 + 3, r25.u8);
	// lhz r25,10(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r20,4(r21)
	r20.u64 = REX_LOAD_U8(r21.u32 + 4);
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// subf r5,r20,r5
	ctx.r5.u64 = ctx.r5.u64 - r20.u64;
	// lwz r20,80(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r25,r25,r10
	r25.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// srawi r10,r15,3
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0x7) != 0);
	ctx.r10.s64 = r15.s32 >> 3;
	// stb r25,4(r31)
	REX_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r25,12(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// lbz r24,5(r21)
	r24.u64 = REX_LOAD_U8(r21.u32 + 5);
	// subf r4,r24,r4
	ctx.r4.u64 = ctx.r4.u64 - r24.u64;
	// lbzx r25,r25,r10
	r25.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// srawi r10,r14,3
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x7) != 0);
	ctx.r10.s64 = r14.s32 >> 3;
	// stb r25,5(r31)
	REX_STORE_U8(r31.u32 + 5, r25.u8);
	// lhz r25,14(r11)
	r25.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r25,r25
	r25.s64 = r25.s16;
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// lbz r24,6(r21)
	r24.u64 = REX_LOAD_U8(r21.u32 + 6);
	// lbzx r25,r25,r10
	r25.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// srawi r10,r20,3
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7) != 0);
	ctx.r10.s64 = r20.s32 >> 3;
	// stb r25,6(r31)
	REX_STORE_U8(r31.u32 + 6, r25.u8);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - r24.u64;
	// lbz r24,7(r21)
	r24.u64 = REX_LOAD_U8(r21.u32 + 7);
	// lhzu r25,16(r11)
	ea = 16 + ctx.r11.u32;
	r25.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r25,r25
	r25.s64 = r25.s16;
	// subf r29,r24,r29
	r29.u64 = r29.u64 - r24.u64;
	// lwz r24,0(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r25,r25,r24
	r25.u64 = r25.u64 + r24.u64;
	// lbzx r25,r25,r10
	r25.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stb r25,7(r31)
	REX_STORE_U8(r31.u32 + 7, r25.u8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273ec88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273EC88;
	// lwz r21,300(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273EDF8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-31912
	ctx.r11.s64 = ctx.r11.s64 + -31912;
	// addi r10,r29,-2
	ctx.r10.s64 = r29.s64 + -2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8273EE14:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 24);
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// lhz r5,2(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lbzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// lwz r6,24(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 24);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbzx r9,r5,r6
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r9,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r9.u8);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lbz r6,2(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lhz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lbzx r9,r5,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stb r9,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lhz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 24);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbzx r9,r6,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r9,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r9.u8);
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lhz r4,10(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbzx r9,r5,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// stb r9,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r9.u8);
	// lhz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r7,5(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbzx r9,r6,r5
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r9,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r9.u8);
	// lhz r8,14(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 14);
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r3,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stb r9,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// lhzu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r6,7(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbzx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r3,r4,r7
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// stb r3,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r3.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r31,r28,r9
	r31.u64 = r28.u64 + ctx.r9.u64;
	// bdnz 0x8273ee14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273EE14;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273EF68:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8273EF78:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r6,r7,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// stb r6,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r6.u8);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r8,r3,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r5.u32);
	// stb r8,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r8.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r4.u8);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r8,5(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lhz r3,10(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r4.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lbz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r6,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r5.u8);
	// lbz r8,7(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r4,14(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// lhzu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lbz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r4.u8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273ef78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273EF78;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273F074:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8273F084:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lhz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r4.u8);
	// lhz r7,6(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r6,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r5.u8);
	// lhz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r7.u8);
	// lhz r6,10(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r3.u8);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lbz r8,5(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r6
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// stb r3,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r3.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lhz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r4.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lbz r10,7(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stb r8,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r8.u8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273f084
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F084;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273F184:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
loc_8273F18C:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x8273f1e0
	if (ctx.cr6.gt) goto loc_8273F1E0;
	// neg r9,r6
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r7,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r7.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8273F1B0:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r3.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x8273f1b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F1B0;
loc_8273F1E0:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8273f218
	if (!ctx.cr6.gt) goto loc_8273F218;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8273F1F4:
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x8273f1f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F1F4;
loc_8273F218:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// cmpwi cr6,r6,-7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -7, ctx.xer);
	// bgt cr6,0x8273f18c
	if (ctx.cr6.gt) goto loc_8273F18C;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273F22C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8273F230:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// ble cr6,0x8273f28c
	if (!ctx.cr6.gt) goto loc_8273F28C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_8273F248:
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 0);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r5,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r5.u8);
	// lhzu r4,2(r29)
	ea = 2 + r29.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r8,r9,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// stbu r8,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	r31.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x8273f248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F248;
loc_8273F28C:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U16(r29.u32 + 0);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// subfic r7,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r7.u64 = static_cast<uint64_t>(7) - ctx.r9.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ble cr6,0x8273f314
	if (!ctx.cr6.gt) goto loc_8273F314;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
loc_8273F2DC:
	// lbzu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lhz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 0);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 1;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// srawi r9,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbzx r6,r9,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8273f2dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F2DC;
loc_8273F314:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8273f230
	if (ctx.cr6.lt) goto loc_8273F230;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bge cr6,0x8273f6b0
	if (!ctx.cr6.lt) goto loc_8273F6B0;
	// subfic r10,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r10.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8273F334:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lhz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U16(r29.u32 + 0);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stb r5,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r5.u8);
	// lhzu r10,2(r29)
	ea = 2 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r3,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r31.u32 = ea;
	// lhzu r10,2(r29)
	ea = 2 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// lbz r9,1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stbu r5,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	r31.u32 = ea;
	// lhzu r10,2(r29)
	ea = 2 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// lbz r9,1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r3,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r31.u32 = ea;
	// lbz r9,2(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r10,2(r29)
	ea = 2 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stbu r5,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	r31.u32 = ea;
	// lhzu r10,2(r29)
	ea = 2 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// lbz r9,2(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r3,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r31.u32 = ea;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r10,2(r29)
	ea = 2 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lbz r9,3(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// stbu r5,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	r31.u32 = ea;
	// lbz r9,3(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r10,2(r29)
	ea = 2 + r29.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	r29.u32 = ea;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbzx r10,r3,r4
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// stbu r10,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r31.u32 = ea;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273f334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F334;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273F434:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8273F444:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r8,-1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r4.u8);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r4.u8);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r4.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r6,r3
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// stb r5,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r5.u8);
	// lhz r4,10(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r7.u8);
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lhz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r3.u8);
	// lhz r7,14(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r8,5(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r5,r6
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r4,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r4.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhzu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lbz r10,6(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// lbzx r7,r8,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// stb r7,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r7.u8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273f444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F444;
	// b 0x8273f6b0
	goto loc_8273F6B0;
loc_8273F540:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r6,r10,-31912
	ctx.r6.s64 = ctx.r10.s64 + -31912;
loc_8273F558:
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lhz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r4,-2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// lbzx r8,r3,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// stb r7,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r7.u8);
	// lhz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbzx r8,r3,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r3.u8);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lbzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// stb r7,2(r31)
	REX_STORE_U8(r31.u32 + 2, ctx.r7.u8);
	// lbz r5,1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lhz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r8,r3,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,3(r31)
	REX_STORE_U8(r31.u32 + 3, ctx.r3.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lhz r3,10(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// stb r7,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r7.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// extsb r3,r5
	ctx.r3.s64 = ctx.r5.s8;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lhz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lbzx r8,r3,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r3,r4,r5
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// stb r3,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r3.u8);
	// lhz r3,14(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// lbzx r8,r4,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r7,r8,r29
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + r29.u32);
	// stb r7,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r7.u8);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r4,r5
	ctx.r4.s64 = ctx.r5.s8;
	// lhzu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lbzx r10,r4,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stb r7,7(r31)
	REX_STORE_U8(r31.u32 + 7, ctx.r7.u8);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// bdnz 0x8273f558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273F558;
loc_8273F6B0:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x8273f73c
	if (ctx.cr6.eq) goto loc_8273F73C;
loc_8273F6B8:
	// addi r11,r22,8
	ctx.r11.s64 = r22.s64 + 8;
	// stw r23,0(r22)
	REX_STORE_U32(r22.u32 + 0, r23.u32);
	// stw r23,4(r22)
	REX_STORE_U32(r22.u32 + 4, r23.u32);
	// stw r23,8(r22)
	REX_STORE_U32(r22.u32 + 8, r23.u32);
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r11.u32 = ea;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
loc_8273F73C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827B4CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,16
	ctx.r11.s64 = 16;
	// bne cr6,0x827b4e04
	if (!ctx.cr6.eq) goto loc_827B4E04;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,4
	r31.s64 = 4;
	// vperm128 v63,v63,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r7,r4,4
	ctx.r7.s64 = ctx.r4.s64 + 4;
	// lwz r9,30004(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 30004);
	// lvx128 v60,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v62,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vperm128 v59,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v58,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v59,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r5,r31
	ea = (ctx.r5.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v57,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v54,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v54,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v62,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v53,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r3,0
	ctx.r3.s64 = 0;
	// vperm128 v52,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v53,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r8,r31
	ea = (ctx.r8.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v51,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v48,v49,v4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v62,v50,v51,v3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vperm128 v47,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vperm128 v46,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvewx128 v47,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r8,r31
	ea = (ctx.r8.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v45,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v63,v44,v45,v2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v43,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v41,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v42,v41,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vperm128 v40,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v43,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_827B4E04:
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v39,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v38,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v35,v39,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v36,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v34,v38,v36,v7
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v35,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v34,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v33,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v32,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v61,v32,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vperm128 v60,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v61,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v60,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v57,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v56,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v57,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v56,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v53,v55,v54,v4
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v52,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v52,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v51,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v49,v51,v50,v3
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v62,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v48,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v49,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v47,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v45,v47,v46,v2
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v44,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvx128 v45,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v44,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v41,v42,v43,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vperm128 v40,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stvx128 v41,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v36,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v39,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v37,v39,v38,v7
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v37,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827D2BA8) {
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
	ctx.lr = 0x827D2BB0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// stw r7,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r6,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r22,3944(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 3944);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r10,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r11,3,0,28
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// rlwinm r14,r11,4,0,27
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r17,r9,2,0,29
	r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x827d2c50
	if (ctx.cr6.eq) goto loc_827D2C50;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r28,204(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x827d2c60
	goto loc_827D2C60;
loc_827D2C50:
	// li r28,0
	r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_827D2C60:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x827d300c
	if (ctx.cr6.eq) goto loc_827D300C;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// b 0x827d2c84
	goto loc_827D2C84;
loc_827D2C80:
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_827D2C84:
	// lwz r10,22164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22164);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827d2cc4
	if (ctx.cr6.eq) goto loc_827D2CC4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827d2cbc
	if (!ctx.cr6.lt) goto loc_827D2CBC;
	// lwz r11,22196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827d2cbc
	if (!ctx.cr6.eq) goto loc_827D2CBC;
	// li r20,0
	r20.s64 = 0;
	// b 0x827d2cd0
	goto loc_827D2CD0;
loc_827D2CBC:
	// li r20,1
	r20.s64 = 1;
	// b 0x827d2cd0
	goto loc_827D2CD0;
loc_827D2CC4:
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subfze r20,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	r20.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_827D2CD0:
	// lwz r30,100(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r18,0
	r18.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d2fdc
	if (ctx.cr6.eq) goto loc_827D2FDC;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r19,r28,3
	r19.s64 = r28.s64 + 3;
	// addi r16,r3,-2
	r16.s64 = ctx.r3.s64 + -2;
	// addi r15,r11,-2
	r15.s64 = ctx.r11.s64 + -2;
loc_827D2CF0:
	// add r11,r16,r22
	ctx.r11.u64 = r16.u64 + r22.u64;
	// lbz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U8(r22.u32 + 0);
	// add r9,r15,r22
	ctx.r9.u64 = r15.u64 + r22.u64;
	// lbz r8,1(r22)
	ctx.r8.u64 = REX_LOAD_U8(r22.u32 + 1);
	// lbz r7,2(r22)
	ctx.r7.u64 = REX_LOAD_U8(r22.u32 + 2);
	// rlwinm r6,r10,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// lbz r5,3(r22)
	ctx.r5.u64 = REX_LOAD_U8(r22.u32 + 3);
	// extsb r27,r8
	r27.s64 = ctx.r8.s8;
	// extsb r24,r7
	r24.s64 = ctx.r7.s8;
	// lbz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r23,r5
	r23.s64 = ctx.r5.s8;
	// lbz r3,2(r9)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r11,r4,25
	ctx.r11.u64 = ctx.r4.u32 & 0x7F;
	// clrlwi r26,r3,25
	r26.u64 = ctx.r3.u32 & 0x7F;
	// rlwinm r25,r3,0,0,24
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// bne cr6,0x827d2e80
	if (!ctx.cr6.eq) goto loc_827D2E80;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x827d2de8
	if (!ctx.cr6.eq) goto loc_827D2DE8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x827d2d90
	if (ctx.cr6.eq) goto loc_827D2D90;
	// rlwinm r11,r27,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r6,r27,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x78;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D2D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2D90:
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x827d2de8
	if (!ctx.cr6.eq) goto loc_827D2DE8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x827d2de8
	if (ctx.cr6.eq) goto loc_827D2DE8;
	// rlwinm r11,r26,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// rlwinm r6,r26,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + r17.u64;
	// bctrl 
	ctx.lr = 0x827D2DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2DE8:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x827d2e10
	if (ctx.cr6.eq) goto loc_827D2E10;
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2E10:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x827d2e44
	if (ctx.cr6.eq) goto loc_827D2E44;
	// rlwinm r11,r24,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// rlwinm r6,r24,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0x3C;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// bctrl 
	ctx.lr = 0x827D2E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2E44:
	// lwz r11,15900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r19,r30
	ctx.r3.u64 = r19.u64 + r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D2E60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x827d2fbc
	if (ctx.cr6.eq) goto loc_827D2FBC;
	// rlwinm r11,r23,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r23,2,26,29
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3C;
	// mullw r11,r11,r21
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r21.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x827d2fa4
	goto loc_827D2FA4;
loc_827D2E80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2eb0
	if (ctx.cr6.eq) goto loc_827D2EB0;
	// rlwinm r10,r11,31,1,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r9,15896(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// rlwinm r6,r11,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + r21.u64;
	// bctrl 
	ctx.lr = 0x827D2EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2EB0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x827d2f10
	if (!ctx.cr6.eq) goto loc_827D2F10;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r11,r14
	ctx.r3.u64 = ctx.r11.u64 + r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2ED8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x827d2f10
	if (!ctx.cr6.eq) goto loc_827D2F10;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x827d2f10
	if (ctx.cr6.eq) goto loc_827D2F10;
	// rlwinm r11,r26,31,1,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x7FFFFFF8;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// rlwinm r6,r26,3,25,28
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0x78;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r17
	ctx.r3.u64 = ctx.r11.u64 + r17.u64;
	// bctrl 
	ctx.lr = 0x827D2F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2F10:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x827d2f38
	if (ctx.cr6.eq) goto loc_827D2F38;
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2F38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2F38:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827d2f4c
	if (ctx.cr6.eq) goto loc_827D2F4C;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(r24.u32, 2, ctx.xer);
	// bne cr6,0x827d2f6c
	if (!ctx.cr6.eq) goto loc_827D2F6C;
loc_827D2F4C:
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2F6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2F6C:
	// lwz r11,15900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r19,r30
	ctx.r3.u64 = r19.u64 + r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D2F88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827d2f9c
	if (ctx.cr6.eq) goto loc_827D2F9C;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(r23.u32, 2, ctx.xer);
	// bne cr6,0x827d2fbc
	if (!ctx.cr6.eq) goto loc_827D2FBC;
loc_827D2F9C:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
loc_827D2FA4:
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D2FBC:
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r22,r22,6
	r22.s64 = r22.s64 + 6;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r18,r5
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x827d2cf0
	if (ctx.cr6.lt) goto loc_827D2CF0;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
loc_827D2FDC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// blt cr6,0x827d2c80
	if (ctx.cr6.lt) goto loc_827D2C80;
loc_827D300C:
	// lwz r25,3944(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 3944);
	// li r26,0
	r26.s64 = 0;
	// lwz r23,308(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r20,316(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// beq cr6,0x827d3290
	if (ctx.cr6.eq) goto loc_827D3290;
	// li r21,0
	r21.s64 = 0;
loc_827D3028:
	// lwz r10,22164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x827d3088
	if (ctx.cr6.eq) goto loc_827D3088;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827d307c
	if (!ctx.cr6.lt) goto loc_827D307C;
	// lwz r10,22196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// add r9,r10,r21
	ctx.r9.u64 = ctx.r10.u64 + r21.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x827d307c
	if (!ctx.cr6.eq) goto loc_827D307C;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r22,0
	r22.s64 = 0;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x827d3080
	if (!ctx.cr6.lt) goto loc_827D3080;
	// add r11,r10,r21
	ctx.r11.u64 = ctx.r10.u64 + r21.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827d3080
	if (!ctx.cr6.eq) goto loc_827D3080;
	// li r24,0
	r24.s64 = 0;
	// b 0x827d30a0
	goto loc_827D30A0;
loc_827D307C:
	// li r22,1
	r22.s64 = 1;
loc_827D3080:
	// li r24,1
	r24.s64 = 1;
	// b 0x827d30a0
	goto loc_827D30A0;
loc_827D3088:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r10,r10,r26
	ctx.xer.ca = r26.u32 >= ctx.r10.u32;
	ctx.r10.u64 = r26.u64 - ctx.r10.u64;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// subfze r22,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	r22.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r11,r8,r26
	ctx.xer.ca = r26.u32 >= ctx.r8.u32;
	ctx.r11.u64 = r26.u64 - ctx.r8.u64;
	// subfze r24,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	r24.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_827D30A0:
	// mr r30,r23
	r30.u64 = r23.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d3270
	if (ctx.cr6.eq) goto loc_827D3270;
	// subf r28,r23,r20
	r28.u64 = r20.u64 - r23.u64;
loc_827D30B4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x827d3104
	if (!ctx.cr6.eq) goto loc_827D3104;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,15896(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r29,r30
	ctx.r3.u64 = r29.u64 + r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D30E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,15896(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827D3104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D3104:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x827d31a0
	if (!ctx.cr6.eq) goto loc_827D31A0;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// lbz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x827d3154
	if (ctx.cr6.eq) goto loc_827D3154;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D3154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D3154:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// lbz r9,5(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x827d31a0
	if (ctx.cr6.eq) goto loc_827D31A0;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// lwz r9,15896(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D31A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D31A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x827d31ec
	if (ctx.cr6.eq) goto loc_827D31EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// addi r29,r11,-5
	r29.s64 = ctx.r11.s64 + -5;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r30,r29
	ctx.r3.u64 = r30.u64 + r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D31CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,15900(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D31EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D31EC:
	// lbz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 4);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827d3220
	if (ctx.cr6.eq) goto loc_827D3220;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D3220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D3220:
	// lbz r11,5(r25)
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + 5);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827d3258
	if (ctx.cr6.eq) goto loc_827D3258;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// lwz r9,15900(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D3258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D3258:
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,6
	r25.s64 = r25.s64 + 6;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x827d30b4
	if (ctx.cr6.lt) goto loc_827D30B4;
loc_827D3270:
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// add r23,r10,r23
	r23.u64 = ctx.r10.u64 + r23.u64;
	// add r20,r10,r20
	r20.u64 = ctx.r10.u64 + r20.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827d3028
	if (ctx.cr6.lt) goto loc_827D3028;
loc_827D3290:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

