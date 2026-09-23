#include "hydrothunder_funcs.88.h"

DEFINE_REX_FUNC(sub_82125660) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f31,136(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 136);
	// bl 0x823ecc50
	ctx.lr = 0x8212568C;
	sub_823ECC50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821256b8
	if (ctx.cr0.eq) goto loc_821256B8;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f0,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 8);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fdiv f31,f13,f0
	f31.f64 = ctx.f13.f64 / ctx.f0.f64;
loc_821256B8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A468) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8212A470;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82162210
	ctx.lr = 0x8212A48C;
	sub_82162210(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x8212a4d8
	if (!ctx.cr6.eq) goto loc_8212A4D8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x8212a4cc
	if (!ctx.cr6.eq) goto loc_8212A4CC;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8212a4ec
	goto loc_8212A4EC;
loc_8212A4CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8212a4ec
	goto loc_8212A4EC;
loc_8212A4D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8212a4ec
	if (!ctx.cr6.eq) goto loc_8212A4EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8212A4EC:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8212a528
	if (ctx.cr6.eq) goto loc_8212A528;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x8212A51C;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_8212A528:
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82130DD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130E90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lfs f1,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821326E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,436
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,432(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 432);
	// lwz r8,428(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r7,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,432(r11)
	REX_STORE_U32(ctx.r11.u32 + 432, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r11,r11,172
	ctx.xer.ca = ctx.r11.u32 > 4294967123;
	ctx.r11.s64 = ctx.r11.s64 + 172;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134F98) {
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
	ctx.lr = 0x82134FA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12456
	ctx.r9.s64 = ctx.r11.s64 + -12456;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,-27368
	ctx.r11.s64 = ctx.r11.s64 + -27368;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822d36c8
	ctx.lr = 0x82134FF8;
	sub_822D36C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82135014
	if (ctx.cr0.eq) goto loc_82135014;
	// mullw r5,r29,r30
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8213500C;
	sub_826A1E70(ctx, base);
	// lwz r11,13652(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13652);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_82135014:
	// lwz r11,256(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 256);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// stw r11,256(r28)
	REX_STORE_U32(r28.u32 + 256, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8213A6C8) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18972
	ctx.r11.s64 = ctx.r11.s64 + -18972;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213a6f4
	if (ctx.cr0.eq) goto loc_8213A6F4;
	// bl 0x8269ce98
	ctx.lr = 0x8213A6F4;
	sub_8269CE98(ctx, base);
loc_8213A6F4:
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

DEFINE_REX_FUNC(sub_8213BAA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213BAB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,-1
	r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82120b20
	ctx.lr = 0x8213BACC;
	sub_82120B20(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// bl 0x82120b20
	ctx.lr = 0x8213BAE0;
	sub_82120B20(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// bl 0x82120b20
	ctx.lr = 0x8213BAF4;
	sub_82120B20(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213EEB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8213EEC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-17296
	ctx.r4.s64 = ctx.r10.s64 + -17296;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8215f670
	ctx.lr = 0x8213EEF0;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8213ef04
	if (ctx.cr6.lt) goto loc_8213EF04;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8213ef08
	goto loc_8213EF08;
loc_8213EF04:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8213EF08:
	// bl 0x8215fbf8
	ctx.lr = 0x8213EF0C;
	sub_8215FBF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17264
	ctx.r4.s64 = ctx.r11.s64 + -17264;
	// bl 0x8215f670
	ctx.lr = 0x8213EF1C;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215efb0
	ctx.lr = 0x8213EF24;
	sub_8215EFB0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-17252
	ctx.r5.s64 = ctx.r11.s64 + -17252;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8213ef58
	ctx.lr = 0x8213EF3C;
	sub_8213EF58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x8213EF48;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82144B28) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82145038) {
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
	ctx.lr = 0x82145040;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82145158
	if (!ctx.cr6.eq) goto loc_82145158;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82145078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82145150
	if (ctx.cr0.eq) goto loc_82145150;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82145150
	if (!ctx.cr6.eq) goto loc_82145150;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r29,10
	ctx.cr6.compare<uint32_t>(r29.u32, 10, ctx.xer);
	// addi r31,r11,29744
	r31.s64 = ctx.r11.s64 + 29744;
	// bge cr6,0x821450b0
	if (!ctx.cr6.lt) goto loc_821450B0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x821450B0;
	sub_821231D0(ctx, base);
loc_821450B0:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821450d0
	if (ctx.cr6.eq) goto loc_821450D0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821450D0;
	sub_821231D0(ctx, base);
loc_821450D0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r31,6(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 6);
	// lwz r30,2(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 2);
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821450F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfd f0,296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 296);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8217f4b0
	ctx.lr = 0x82145118;
	sub_8217F4B0(ctx, base);
	// stw r29,90(r1)
	REX_STORE_U32(ctx.r1.u32 + 90, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,94(r1)
	REX_STORE_U32(ctx.r1.u32 + 94, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,98(r1)
	REX_STORE_U32(ctx.r1.u32 + 98, r31.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r3,6152(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6152);
	// li r6,14
	ctx.r6.s64 = 14;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82145150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82145150:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82145284
	goto loc_82145284;
loc_82145158:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82145280
	if (!ctx.cr6.eq) goto loc_82145280;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82145150
	if (!ctx.cr6.eq) goto loc_82145150;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r29,14
	ctx.cr6.compare<uint32_t>(r29.u32, 14, ctx.xer);
	// addi r29,r11,29744
	r29.s64 = ctx.r11.s64 + 29744;
	// bge cr6,0x82145190
	if (!ctx.cr6.lt) goto loc_82145190;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x82145190;
	sub_821231D0(ctx, base);
loc_82145190:
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821451b0
	if (ctx.cr0.eq) goto loc_821451B0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x821451B0;
	sub_821231D0(ctx, base);
loc_821451B0:
	// lwz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 10);
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82145150
	if (!ctx.cr6.eq) goto loc_82145150;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r9,6(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 6);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r11.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82145234
	if (!ctx.cr6.gt) goto loc_82145234;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-15244
	ctx.r4.s64 = ctx.r11.s64 + -15244;
	// addi r3,r10,-15056
	ctx.r3.s64 = ctx.r10.s64 + -15056;
	// li r5,345
	ctx.r5.s64 = 345;
	// bl 0x821231d0
	ctx.lr = 0x82145234;
	sub_821231D0(ctx, base);
loc_82145234:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82145150
	if (!ctx.cr6.eq) goto loc_82145150;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82145150
	if (!ctx.cr6.eq) goto loc_82145150;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x82145150
	goto loc_82145150;
loc_82145280:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82145284:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82155E88) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82155eb0
	if (ctx.cr6.eq) goto loc_82155EB0;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82155eb8
	goto loc_82155EB8;
loc_82155EB0:
	// bl 0x82155fd0
	ctx.lr = 0x82155EB4;
	sub_82155FD0(ctx, base);
	// lwz r3,10004(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10004);
loc_82155EB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821579B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821579B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82157aac
	if (!ctx.cr6.eq) goto loc_82157AAC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82157aac
	if (ctx.cr6.eq) goto loc_82157AAC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82157aac
	if (!ctx.cr6.gt) goto loc_82157AAC;
	// cmpwi cr6,r6,101
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 101, ctx.xer);
	// bgt cr6,0x82157aac
	if (ctx.cr6.gt) goto loc_82157AAC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r6,708(r3)
	REX_STORE_U32(ctx.r3.u32 + 708, ctx.r6.u32);
	// ble cr6,0x82157a08
	if (!ctx.cr6.gt) goto loc_82157A08;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r3,704
	ctx.r10.s64 = ctx.r3.s64 + 704;
loc_821579FC:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821579fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821579FC;
loc_82157A08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82157c30
	ctx.lr = 0x82157A10;
	sub_82157C30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157aac
	if (ctx.cr0.eq) goto loc_82157AAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,708(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 708);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r31,712
	r28.s64 = r31.s64 + 712;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ee7d8
	ctx.lr = 0x82157A4C;
	sub_823EE7D8(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x82157aac
	if (!ctx.cr6.eq) goto loc_82157AAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82157ab8
	ctx.lr = 0x82157A60;
	sub_82157AB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82157aac
	if (ctx.cr0.eq) goto loc_82157AAC;
	// addi r30,r31,4692
	r30.s64 = r31.s64 + 4692;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x82157A7C;
	sub_826A2E60(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,704(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 704);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,708(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 708);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ee7d8
	ctx.lr = 0x82157AA0;
	sub_823EE7D8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beq cr6,0x82157ab0
	if (ctx.cr6.eq) goto loc_82157AB0;
loc_82157AAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157AB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8215E6B8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x8215e6e4
	if (!ctx.cr6.lt) goto loc_8215E6E4;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,18704
	ctx.r4.s64 = ctx.r10.s64 + 18704;
	// bl 0x8215d5d0
	ctx.lr = 0x8215E6E0;
	sub_8215D5D0(ctx, base);
	// b 0x8215e720
	goto loc_8215E720;
loc_8215E6E4:
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8215E6F8:
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8215e6f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215E6F8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8215E720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82160FC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82160FD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x8269cce0
	ctx.lr = 0x82160FF0;
	sub_8269CCE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82161020
	if (ctx.cr0.eq) goto loc_82161020;
loc_82160FF8:
	// lbz r11,-1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -1);
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// bne cr6,0x82161018
	if (!ctx.cr6.eq) goto loc_82161018;
	// li r4,34
	ctx.r4.s64 = 34;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// bl 0x8269cce0
	ctx.lr = 0x82161010;
	sub_8269CCE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82160ff8
	if (!ctx.cr0.eq) goto loc_82160FF8;
loc_82161018:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82161038
	if (!ctx.cr6.eq) goto loc_82161038;
loc_82161020:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,19136
	ctx.r4.s64 = ctx.r11.s64 + 19136;
loc_8216102C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160698
	ctx.lr = 0x82161034;
	sub_82160698(ctx, base);
	// b 0x821611c4
	goto loc_821611C4;
loc_82161038:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r4,r11,r30
	ctx.r4.u64 = r30.u64 - ctx.r11.u64;
	// bl 0x821216f8
	ctx.lr = 0x82161048;
	sub_821216F8(ctx, base);
	// b 0x821611ac
	goto loc_821611AC;
loc_8216104C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r5,92
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 92, ctx.xer);
	// bne cr6,0x82161194
	if (!ctx.cr6.eq) goto loc_82161194;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bgt cr6,0x821610bc
	if (ctx.cr6.gt) goto loc_821610BC;
	// beq cr6,0x821610b4
	if (ctx.cr6.eq) goto loc_821610B4;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x821610ac
	if (ctx.cr6.eq) goto loc_821610AC;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x821610a4
	if (ctx.cr6.eq) goto loc_821610A4;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x8216109c
	if (ctx.cr6.eq) goto loc_8216109C;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// bne cr6,0x821611cc
	if (!ctx.cr6.eq) goto loc_821611CC;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82161194
	goto loc_82161194;
loc_8216109C:
	// li r5,92
	ctx.r5.s64 = 92;
	// b 0x82161194
	goto loc_82161194;
loc_821610A4:
	// li r5,47
	ctx.r5.s64 = 47;
	// b 0x82161194
	goto loc_82161194;
loc_821610AC:
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x82161194
	goto loc_82161194;
loc_821610B4:
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x82161194
	goto loc_82161194;
loc_821610BC:
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// beq cr6,0x82161190
	if (ctx.cr6.eq) goto loc_82161190;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// beq cr6,0x82161188
	if (ctx.cr6.eq) goto loc_82161188;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// beq cr6,0x82161180
	if (ctx.cr6.eq) goto loc_82161180;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// bne cr6,0x821611cc
	if (!ctx.cr6.eq) goto loc_821611CC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// subf r11,r5,r30
	ctx.r11.u64 = r30.u64 - ctx.r5.u64;
	// stw r5,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821611d8
	if (ctx.cr6.lt) goto loc_821611D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821610F8:
	// lbzx r11,r5,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82161118
	if (ctx.cr6.lt) goto loc_82161118;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82161118
	if (ctx.cr6.gt) goto loc_82161118;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x82161144
	goto loc_82161144;
loc_82161118:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82161130
	if (ctx.cr6.lt) goto loc_82161130;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bgt cr6,0x82161130
	if (ctx.cr6.gt) goto loc_82161130;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x82161144
	goto loc_82161144;
loc_82161130:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x821611d8
	if (ctx.cr6.lt) goto loc_821611D8;
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// bgt cr6,0x821611d8
	if (ctx.cr6.gt) goto loc_821611D8;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_82161144:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x821610f8
	if (ctx.cr6.lt) goto loc_821610F8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821611d8
	if (ctx.cr6.eq) goto loc_821611D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82170f90
	ctx.lr = 0x82161170;
	sub_82170F90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821611a0
	goto loc_821611A0;
loc_82161180:
	// li r5,9
	ctx.r5.s64 = 9;
	// b 0x82161194
	goto loc_82161194;
loc_82161188:
	// li r5,13
	ctx.r5.s64 = 13;
	// b 0x82161194
	goto loc_82161194;
loc_82161190:
	// li r5,10
	ctx.r5.s64 = 10;
loc_82161194:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212a778
	ctx.lr = 0x821611A0;
	sub_8212A778(ctx, base);
loc_821611A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821611AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8216104c
	if (!ctx.cr6.eq) goto loc_8216104C;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821611C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
loc_821611CC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,19244
	ctx.r4.s64 = ctx.r11.s64 + 19244;
	// b 0x8216102c
	goto loc_8216102C;
loc_821611D8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,19184
	ctx.r4.s64 = ctx.r11.s64 + 19184;
	// b 0x8216102c
	goto loc_8216102C;
}

DEFINE_REX_FUNC(sub_82172B88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15728
	ctx.r3.s64 = ctx.r11.s64 + -15728;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821731B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821731C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r10,27484
	ctx.r4.s64 = ctx.r10.s64 + 27484;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r30,r11,r31
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82173200;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x82173220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27492
	ctx.r4.s64 = ctx.r10.s64 + 27492;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r30,r11,r31
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217324C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bctrl 
	ctx.lr = 0x8217326C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82179BB0) {
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
	ctx.lr = 0x82179BB8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82179c68
	if (ctx.cr6.eq) goto loc_82179C68;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82179c68
	if (ctx.cr6.eq) goto loc_82179C68;
	// subfic r25,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	r25.u64 = static_cast<uint64_t>(4) - ctx.r3.u64;
loc_82179BE0:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x82179BF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179c28
	if (ctx.cr0.eq) goto loc_82179C28;
	// add r11,r25,r31
	ctx.r11.u64 = r25.u64 + r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r31
	ctx.r11.u64 = r31.u64 - ctx.r5.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8269cc20
	ctx.lr = 0x82179C20;
	sub_8269CC20(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x82179c5c
	goto loc_82179C5C;
loc_82179C28:
	// lwz r4,-4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// b 0x82179c44
	goto loc_82179C44;
loc_82179C34:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// mr r27,r29
	r27.u64 = r29.u64;
	// lwzu r4,-4(r29)
	ea = -4 + r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
loc_82179C44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x82179C50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82179c34
	if (!ctx.cr0.eq) goto loc_82179C34;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_82179C5C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(r31.u32, r24.u32, ctx.xer);
	// bne cr6,0x82179be0
	if (!ctx.cr6.eq) goto loc_82179BE0;
loc_82179C68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8217EED8) {
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
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x823ed118
	ctx.lr = 0x8217EEFC;
	sub_823ED118(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8217ef1c
	if (!ctx.cr6.eq) goto loc_8217EF1C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,29272
	ctx.r4.s64 = ctx.r11.s64 + 29272;
	// addi r3,r10,29320
	ctx.r3.s64 = ctx.r10.s64 + 29320;
	// li r5,85
	ctx.r5.s64 = 85;
	// bl 0x821231d0
	ctx.lr = 0x8217EF1C;
	sub_821231D0(ctx, base);
loc_8217EF1C:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// b 0x8217ef54
	goto loc_8217EF54;
loc_8217EF24:
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EF38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EF4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823ecca8
	ctx.lr = 0x8217EF54;
	sub_823ECCA8(ctx, base);
loc_8217EF54:
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x8217ef24
	if (ctx.cr0.eq) goto loc_8217EF24;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EF78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217EF8C;
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

DEFINE_REX_FUNC(sub_82186690) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821866c8
	if (ctx.cr6.eq) goto loc_821866C8;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,32132
	ctx.r10.s64 = ctx.r10.s64 + 32132;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82185bc0
	ctx.lr = 0x821866C8;
	sub_82185BC0(ctx, base);
loc_821866C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821897B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15644
	ctx.r3.s64 = ctx.r11.s64 + -15644;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189D20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15636
	ctx.r3.s64 = ctx.r11.s64 + -15636;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189DD0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821d3ac0
	ctx.lr = 0x82189DF4;
	sub_821D3AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r11,r11,-32440
	ctx.r11.s64 = ctx.r11.s64 + -32440;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82189E0C;
	sub_826A2E60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r11,16592
	ctx.r7.s64 = ctx.r11.s64 + 16592;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// lfd f0,136(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 136);
	// stw r8,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// addi r10,r31,172
	ctx.r10.s64 = r31.s64 + 172;
	// stfd f0,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.f0.u64);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// stw r8,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r8.u32);
loc_82189E50:
	// stfd f0,4(r10)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 4, ctx.f0.u64);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82189e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82189E50;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82189f08
	ctx.lr = 0x82189E6C;
	sub_82189F08(ctx, base);
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

DEFINE_REX_FUNC(sub_8218E460) {
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
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f12,108(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f11.f64)));
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8218e4d8
	if (!ctx.cr6.gt) goto loc_8218E4D8;
	// lbz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8218e4c0
	if (!ctx.cr0.eq) goto loc_8218E4C0;
	// lwz r3,148(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218e4c0
	if (ctx.cr6.eq) goto loc_8218E4C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218E4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8218E4C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,152(r31)
	REX_STORE_U8(r31.u32 + 152, ctx.r10.u8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8218e4dc
	if (ctx.cr6.eq) goto loc_8218E4DC;
loc_8218E4D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8218E4DC:
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

DEFINE_REX_FUNC(sub_82191660) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82191698
	if (!ctx.cr6.eq) goto loc_82191698;
	// lbz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x821916a0
	goto loc_821916A0;
loc_82191698:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
loc_821916A0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82191714
	if (ctx.cr0.eq) goto loc_82191714;
	// lbz r10,41(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 41);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82191714
	if (ctx.cr6.eq) goto loc_82191714;
	// stb r11,41(r31)
	REX_STORE_U8(r31.u32 + 41, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821916D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821916F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82191714
	if (ctx.cr0.eq) goto loc_82191714;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191714
	if (ctx.cr6.eq) goto loc_82191714;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82191714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82191714:
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

DEFINE_REX_FUNC(sub_821962C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196970) {
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
	ctx.lr = 0x82196978;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r30,r3,144
	r30.s64 = ctx.r3.s64 + 144;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
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
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r10,144(r3)
	REX_STORE_U64(ctx.r3.u32 + 144, ctx.r10.u64);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,160(r3)
	REX_STORE_U64(ctx.r3.u32 + 160, ctx.r9.u64);
	// std r11,152(r3)
	REX_STORE_U64(ctx.r3.u32 + 152, ctx.r11.u64);
	// std r10,168(r3)
	REX_STORE_U64(ctx.r3.u32 + 168, ctx.r10.u64);
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, r26.u32);
	// beq cr6,0x82196ac0
	if (ctx.cr6.eq) goto loc_82196AC0;
	// lfs f0,180(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,16(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// b 0x82196a64
	goto loc_82196A64;
loc_82196A08:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196A20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82196a60
	if (ctx.cr6.eq) goto loc_82196A60;
	// addi r27,r28,64
	r27.s64 = r28.s64 + 64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82176218
	ctx.lr = 0x82196A40;
	sub_82176218(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r27,16
	ctx.r3.s64 = r27.s64 + 16;
	// bl 0x82176218
	ctx.lr = 0x82196A50;
	sub_82176218(ctx, base);
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
loc_82196A60:
	// lwz r28,16(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 16);
loc_82196A64:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82196a08
	if (!ctx.cr6.eq) goto loc_82196A08;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82196a88
	if (!ctx.cr6.eq) goto loc_82196A88;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82196a88
	if (!ctx.cr6.eq) goto loc_82196A88;
	// stw r26,128(r31)
	REX_STORE_U32(r31.u32 + 128, r26.u32);
loc_82196A88:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82196ac0
	if (!ctx.cr6.gt) goto loc_82196AC0;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82196ac0
	if (!ctx.cr6.eq) goto loc_82196AC0;
	// lfs f13,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82196ac0
	if (ctx.cr6.lt) goto loc_82196AC0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
loc_82196AC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821A1798) {
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
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x821a17c8
	goto loc_821A17C8;
loc_821A17B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A17C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_821A17C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x821a17b0
	if (!ctx.cr6.eq) goto loc_821A17B0;
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

DEFINE_REX_FUNC(sub_821A3AA8) {
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
	// lwz r10,-20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -20);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,-16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + -16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A3AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A47B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3da8
	sub_821A3DA8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5818) {
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
	ctx.lr = 0x821A5820;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821a595c
	if (ctx.cr6.lt) goto loc_821A595C;
	// beq cr6,0x821a5898
	if (ctx.cr6.eq) goto loc_821A5898;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821a5864
	if (ctx.cr6.lt) goto loc_821A5864;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x821a595c
	if (ctx.cr6.lt) goto loc_821A595C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-26112
	ctx.r4.s64 = ctx.r11.s64 + -26112;
	// addi r3,r10,-25688
	ctx.r3.s64 = ctx.r10.s64 + -25688;
	// li r5,198
	ctx.r5.s64 = 198;
	// bl 0x821231d0
	ctx.lr = 0x821A5860;
	sub_821231D0(ctx, base);
	// b 0x821a595c
	goto loc_821A595C;
loc_821A5864:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821a595c
	if (ctx.cr6.eq) goto loc_821A595C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823ed2c0
	ctx.lr = 0x821A5880;
	sub_823ED2C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821a5958
	goto loc_821A5958;
loc_821A5898:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r30,r31,52
	r30.s64 = r31.s64 + 52;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821a595c
	if (ctx.cr6.eq) goto loc_821A595C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ed2c0
	ctx.lr = 0x821A58B8;
	sub_823ED2C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a5948
	if (ctx.cr0.eq) goto loc_821A5948;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x821A58C8;
	sub_823EDE70(ctx, base);
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// ori r11,r11,49156
	ctx.r11.u64 = ctx.r11.u64 | 49156;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821a58e0
	if (!ctx.cr6.eq) goto loc_821A58E0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821a5958
	goto loc_821A5958;
loc_821A58E0:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bne cr6,0x821a5938
	if (!ctx.cr6.eq) goto loc_821A5938;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// bl 0x82125c20
	ctx.lr = 0x821A58FC;
	sub_82125C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,40(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r27,48(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r26,32(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x821a5a28
	ctx.lr = 0x821A5910;
	sub_821A5A28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x8264d318
	ctx.lr = 0x821A5930;
	sub_8264D318(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821a5940
	if (ctx.cr6.eq) goto loc_821A5940;
loc_821A5938:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821a5958
	goto loc_821A5958;
loc_821A5940:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821a5958
	goto loc_821A5958;
loc_821A5948:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lwz r4,100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x82125c20
	ctx.lr = 0x821A5954;
	sub_82125C20(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_821A5958:
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_821A595C:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821ACF28) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,28384
	ctx.r4.s64 = ctx.r11.s64 + 28384;
	// bl 0x8215f338
	ctx.lr = 0x821ACF4C;
	sub_8215F338(ctx, base);
	// stw r3,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_821AEB58) {
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
	ctx.lr = 0x821AEB60;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, r30.u32);
	// addi r27,r3,180
	r27.s64 = ctx.r3.s64 + 180;
	// stb r30,192(r3)
	REX_STORE_U8(ctx.r3.u32 + 192, r30.u8);
	// addi r28,r3,196
	r28.s64 = ctx.r3.s64 + 196;
	// stw r30,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, r30.u32);
	// stb r30,208(r3)
	REX_STORE_U8(ctx.r3.u32 + 208, r30.u8);
	// lwz r29,156(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// blt cr6,0x821aeda8
	if (ctx.cr6.lt) goto loc_821AEDA8;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821aebd0
	if (!ctx.cr6.gt) goto loc_821AEBD0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,48
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(48));
	// bl 0x8269d1d0
	ctx.lr = 0x821AEBAC;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AEBC0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821AEBC8;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r27)
	REX_STORE_U32(r27.u32 + 0, r26.u32);
	// stw r29,8(r27)
	REX_STORE_U32(r27.u32 + 8, r29.u32);
loc_821AEBD0:
	// lwz r29,156(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821aec10
	if (!ctx.cr6.gt) goto loc_821AEC10;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r29,48
	ctx.r3.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(48));
	// bl 0x8269d1d0
	ctx.lr = 0x821AEBEC;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mulli r5,r11,48
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821AEC00;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821AEC08;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r28)
	REX_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
loc_821AEC10:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821aec90
	if (!ctx.cr6.gt) goto loc_821AEC90;
	// addi r29,r31,152
	r29.s64 = r31.s64 + 152;
loc_821AEC20:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AEC2C;
	sub_821AFA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// bl 0x821afa30
	ctx.lr = 0x821AEC40;
	sub_821AFA30(ctx, base);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821de548
	ctx.lr = 0x821AEC50;
	sub_821DE548(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AEC5C;
	sub_821AFA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// bl 0x821afa30
	ctx.lr = 0x821AEC70;
	sub_821AFA30(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821de548
	ctx.lr = 0x821AEC80;
	sub_821DE548(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821aec20
	if (ctx.cr6.lt) goto loc_821AEC20;
loc_821AEC90:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,142(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 142);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne 0x821aed88
	if (!ctx.cr0.eq) goto loc_821AED88;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821af738
	ctx.lr = 0x821AECE8;
	sub_821AF738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x821af808
	ctx.lr = 0x821AED14;
	sub_821AF808(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bl 0x821af738
	ctx.lr = 0x821AED44;
	sub_821AF738(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// bl 0x821af808
	ctx.lr = 0x821AED74;
	sub_821AF808(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
loc_821AED88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821de608
	ctx.lr = 0x821AED98;
	sub_821DE608(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821de608
	ctx.lr = 0x821AEDA8;
	sub_821DE608(ctx, base);
loc_821AEDA8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821BFCB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BFCC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,128(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821bfd08
	if (ctx.cr6.eq) goto loc_821BFD08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8216b740
	ctx.lr = 0x821BFCEC;
	sub_8216B740(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r11,1592
	ctx.r3.s64 = ctx.r11.s64 + 1592;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// bl 0x8215f5f8
	ctx.lr = 0x821BFD00;
	sub_8215F5F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x821BFD08;
	sub_8215FBF8(ctx, base);
loc_821BFD08:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C30C8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C30F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C3100;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,168(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c31b8
	if (ctx.cr6.eq) goto loc_821C31B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r3,6180(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6180);
	// rlwinm r30,r11,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C314C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// lwz r3,6180(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6180);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821c3164
	if (ctx.cr6.lt) goto loc_821C3164;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821C3164:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c31b8
	if (ctx.cr0.eq) goto loc_821C31B8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C319C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c31b8
	if (ctx.cr0.eq) goto loc_821C31B8;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C31B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821C31B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C91A0) {
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
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x821a4ea0
	ctx.lr = 0x821C91C4;
	sub_821A4EA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821C91CC;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c91dc
	if (ctx.cr0.eq) goto loc_821C91DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821C91DC;
	sub_8269CE98(ctx, base);
loc_821C91DC:
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

DEFINE_REX_FUNC(sub_821CB640) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821CB648;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,180(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 180);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cb678
	if (ctx.cr6.eq) goto loc_821CB678;
	// lbz r11,184(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 184);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cb678
	if (ctx.cr0.eq) goto loc_821CB678;
	// bl 0x8232fd48
	ctx.lr = 0x821CB674;
	sub_8232FD48(ctx, base);
	// stb r29,184(r31)
	REX_STORE_U8(r31.u32 + 184, r29.u8);
loc_821CB678:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821CE7A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14668
	ctx.r3.s64 = ctx.r11.s64 + -14668;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CEA78) {
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
	ctx.lr = 0x821CEA8C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cea9c
	if (ctx.cr0.eq) goto loc_821CEA9C;
	// bl 0x821ceab0
	ctx.lr = 0x821CEA98;
	sub_821CEAB0(ctx, base);
	// b 0x821ceaa0
	goto loc_821CEAA0;
loc_821CEA9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CEAA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1360) {
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
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x821D138C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x821D1394;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d13a4
	if (ctx.cr0.eq) goto loc_821D13A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821D13A4;
	sub_8269CE98(ctx, base);
loc_821D13A4:
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

DEFINE_REX_FUNC(sub_821D4280) {
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
	ctx.lr = 0x821D4288;
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x82178268
	ctx.lr = 0x821D42A0;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// addi r25,r28,132
	r25.s64 = r28.s64 + 132;
	// addi r11,r10,10180
	ctx.r11.s64 = ctx.r10.s64 + 10180;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r28,116
	r30.s64 = r28.s64 + 116;
	// stfs f0,120(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 120, temp.u32);
	// addi r27,r28,120
	r27.s64 = r28.s64 + 120;
	// stfs f0,124(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 124, temp.u32);
	// addi r26,r28,124
	r26.s64 = r28.s64 + 124;
	// stfs f0,128(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 128, temp.u32);
	// addi r24,r28,128
	r24.s64 = r28.s64 + 128;
	// stb r10,116(r28)
	REX_STORE_U8(r28.u32 + 116, ctx.r10.u8);
	// bl 0x8212dd98
	ctx.lr = 0x821D42E8;
	sub_8212DD98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,572(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 132, temp.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// lfs f13,44(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r28,136
	r23.s64 = r28.s64 + 136;
	// lfs f12,228(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// addi r22,r28,144
	r22.s64 = r28.s64 + 144;
	// stfs f13,136(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 136, temp.u32);
	// addi r21,r28,148
	r21.s64 = r28.s64 + 148;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 216, temp.u32);
	// stfs f0,144(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 144, temp.u32);
	// stfs f12,148(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 148, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821D4324;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821d4354
	if (ctx.cr0.eq) goto loc_821D4354;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,9740
	ctx.r4.s64 = ctx.r11.s64 + 9740;
	// bl 0x82120600
	ctx.lr = 0x821D433C;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x82191600
	ctx.lr = 0x821D4350;
	sub_82191600(ctx, base);
	// b 0x821d4358
	goto loc_821D4358;
loc_821D4354:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4358:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r28,80
	r29.s64 = r28.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D436C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4388
	if (ctx.cr0.eq) goto loc_821D4388;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821D4388;
	sub_82120AC0(ctx, base);
loc_821D4388:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4390;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d43c0
	if (ctx.cr0.eq) goto loc_821D43C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,9756
	ctx.r4.s64 = ctx.r11.s64 + 9756;
	// bl 0x82120600
	ctx.lr = 0x821D43A8;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x821D43BC;
	sub_82196BA8(ctx, base);
	// b 0x821d43c4
	goto loc_821D43C4;
loc_821D43C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D43C4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D43D4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d43f0
	if (ctx.cr0.eq) goto loc_821D43F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821D43F0;
	sub_82120AC0(ctx, base);
loc_821D43F0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D43F8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4428
	if (ctx.cr0.eq) goto loc_821D4428;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-21064
	ctx.r4.s64 = ctx.r11.s64 + -21064;
	// bl 0x82120600
	ctx.lr = 0x821D4410;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821D4424;
	sub_82196BA8(ctx, base);
	// b 0x821d442c
	goto loc_821D442C;
loc_821D4428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D442C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D443C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4458
	if (ctx.cr0.eq) goto loc_821D4458;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821D4458;
	sub_82120AC0(ctx, base);
loc_821D4458:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4460;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4490
	if (ctx.cr0.eq) goto loc_821D4490;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,9772
	ctx.r4.s64 = ctx.r11.s64 + 9772;
	// bl 0x82120600
	ctx.lr = 0x821D4478;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821D448C;
	sub_82196BA8(ctx, base);
	// b 0x821d4494
	goto loc_821D4494;
loc_821D4490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4494:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D44A4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d44c0
	if (ctx.cr0.eq) goto loc_821D44C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x821D44C0;
	sub_82120AC0(ctx, base);
loc_821D44C0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D44C8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d44f8
	if (ctx.cr0.eq) goto loc_821D44F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,9788
	ctx.r4.s64 = ctx.r11.s64 + 9788;
	// bl 0x82120600
	ctx.lr = 0x821D44E0;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x821D44F4;
	sub_82196BA8(ctx, base);
	// b 0x821d44fc
	goto loc_821D44FC;
loc_821D44F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D44FC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D450C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4528
	if (ctx.cr0.eq) goto loc_821D4528;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4528;
	sub_82120AC0(ctx, base);
loc_821D4528:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4530;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4560
	if (ctx.cr0.eq) goto loc_821D4560;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,9800
	ctx.r4.s64 = ctx.r11.s64 + 9800;
	// bl 0x82120600
	ctx.lr = 0x821D4548;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x821D455C;
	sub_82196BA8(ctx, base);
	// b 0x821d4564
	goto loc_821D4564;
loc_821D4560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4564:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4574;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4590
	if (ctx.cr0.eq) goto loc_821D4590;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r31,r31,0,27,25
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4590;
	sub_82120AC0(ctx, base);
loc_821D4590:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4598;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d45c8
	if (ctx.cr0.eq) goto loc_821D45C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,9808
	ctx.r4.s64 = ctx.r11.s64 + 9808;
	// bl 0x82120600
	ctx.lr = 0x821D45B0;
	sub_82120600(ctx, base);
	// addi r5,r28,140
	ctx.r5.s64 = r28.s64 + 140;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,64
	r31.u64 = r31.u64 | 64;
	// bl 0x8219d708
	ctx.lr = 0x821D45C4;
	sub_8219D708(ctx, base);
	// b 0x821d45cc
	goto loc_821D45CC;
loc_821D45C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D45CC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D45DC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d45f8
	if (ctx.cr0.eq) goto loc_821D45F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// rlwinm r31,r31,0,26,24
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x821D45F8;
	sub_82120AC0(ctx, base);
loc_821D45F8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4600;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4630
	if (ctx.cr0.eq) goto loc_821D4630;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,9820
	ctx.r4.s64 = ctx.r11.s64 + 9820;
	// bl 0x82120600
	ctx.lr = 0x821D4618;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,128
	r31.u64 = r31.u64 | 128;
	// bl 0x82196ba8
	ctx.lr = 0x821D462C;
	sub_82196BA8(ctx, base);
	// b 0x821d4634
	goto loc_821D4634;
loc_821D4630:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4634:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4644;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4660
	if (ctx.cr0.eq) goto loc_821D4660;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r31,r31,0,25,23
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x821D4660;
	sub_82120AC0(ctx, base);
loc_821D4660:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4668;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4698
	if (ctx.cr0.eq) goto loc_821D4698;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r4,r11,9840
	ctx.r4.s64 = ctx.r11.s64 + 9840;
	// bl 0x82120600
	ctx.lr = 0x821D4680;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
	// bl 0x82196ba8
	ctx.lr = 0x821D4694;
	sub_82196BA8(ctx, base);
	// b 0x821d469c
	goto loc_821D469C;
loc_821D4698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D469C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D46AC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d46c8
	if (ctx.cr0.eq) goto loc_821D46C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// rlwinm r31,r31,0,24,22
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D46C8;
	sub_82120AC0(ctx, base);
loc_821D46C8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D46D0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4700
	if (ctx.cr0.eq) goto loc_821D4700;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,9860
	ctx.r4.s64 = ctx.r11.s64 + 9860;
	// bl 0x82120600
	ctx.lr = 0x821D46E8;
	sub_82120600(ctx, base);
	// addi r5,r28,152
	ctx.r5.s64 = r28.s64 + 152;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,512
	r31.u64 = r31.u64 | 512;
	// bl 0x8219d708
	ctx.lr = 0x821D46FC;
	sub_8219D708(ctx, base);
	// b 0x821d4704
	goto loc_821D4704;
loc_821D4700:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4704:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4714;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4730
	if (ctx.cr0.eq) goto loc_821D4730;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r31,r31,0,23,21
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4730;
	sub_82120AC0(ctx, base);
loc_821D4730:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4738;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4768
	if (ctx.cr0.eq) goto loc_821D4768;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,9876
	ctx.r4.s64 = ctx.r11.s64 + 9876;
	// bl 0x82120600
	ctx.lr = 0x821D4750;
	sub_82120600(ctx, base);
	// addi r5,r28,156
	ctx.r5.s64 = r28.s64 + 156;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,1024
	r31.u64 = r31.u64 | 1024;
	// bl 0x8219d708
	ctx.lr = 0x821D4764;
	sub_8219D708(ctx, base);
	// b 0x821d476c
	goto loc_821D476C;
loc_821D4768:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D476C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D477C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4798
	if (ctx.cr0.eq) goto loc_821D4798;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// rlwinm r31,r31,0,22,20
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4798;
	sub_82120AC0(ctx, base);
loc_821D4798:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D47A0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d47d0
	if (ctx.cr0.eq) goto loc_821D47D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,9888
	ctx.r4.s64 = ctx.r11.s64 + 9888;
	// bl 0x82120600
	ctx.lr = 0x821D47B8;
	sub_82120600(ctx, base);
	// addi r5,r28,160
	ctx.r5.s64 = r28.s64 + 160;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,2048
	r31.u64 = r31.u64 | 2048;
	// bl 0x8219d708
	ctx.lr = 0x821D47CC;
	sub_8219D708(ctx, base);
	// b 0x821d47d4
	goto loc_821D47D4;
loc_821D47D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D47D4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D47E4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4800
	if (ctx.cr0.eq) goto loc_821D4800;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r31,r31,0,21,19
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4800;
	sub_82120AC0(ctx, base);
loc_821D4800:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4808;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4838
	if (ctx.cr0.eq) goto loc_821D4838;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// bl 0x82120600
	ctx.lr = 0x821D4820;
	sub_82120600(ctx, base);
	// addi r5,r28,164
	ctx.r5.s64 = r28.s64 + 164;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,4096
	r31.u64 = r31.u64 | 4096;
	// bl 0x82196ba8
	ctx.lr = 0x821D4834;
	sub_82196BA8(ctx, base);
	// b 0x821d483c
	goto loc_821D483C;
loc_821D4838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D483C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D484C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4868
	if (ctx.cr0.eq) goto loc_821D4868;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,20,18
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4868;
	sub_82120AC0(ctx, base);
loc_821D4868:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4870;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d48a0
	if (ctx.cr0.eq) goto loc_821D48A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,9908
	ctx.r4.s64 = ctx.r11.s64 + 9908;
	// bl 0x82120600
	ctx.lr = 0x821D4888;
	sub_82120600(ctx, base);
	// addi r5,r28,168
	ctx.r5.s64 = r28.s64 + 168;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,8192
	r31.u64 = r31.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x821D489C;
	sub_82196BA8(ctx, base);
	// b 0x821d48a4
	goto loc_821D48A4;
loc_821D48A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D48A4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D48B4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d48d0
	if (ctx.cr0.eq) goto loc_821D48D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,19,17
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D48D0;
	sub_82120AC0(ctx, base);
loc_821D48D0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D48D8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4908
	if (ctx.cr0.eq) goto loc_821D4908;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,9920
	ctx.r4.s64 = ctx.r11.s64 + 9920;
	// bl 0x82120600
	ctx.lr = 0x821D48F0;
	sub_82120600(ctx, base);
	// addi r5,r28,172
	ctx.r5.s64 = r28.s64 + 172;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,16384
	r31.u64 = r31.u64 | 16384;
	// bl 0x82196ba8
	ctx.lr = 0x821D4904;
	sub_82196BA8(ctx, base);
	// b 0x821d490c
	goto loc_821D490C;
loc_821D4908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D490C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D491C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4938
	if (ctx.cr0.eq) goto loc_821D4938;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,18,16
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4938;
	sub_82120AC0(ctx, base);
loc_821D4938:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4940;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4970
	if (ctx.cr0.eq) goto loc_821D4970;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,9932
	ctx.r4.s64 = ctx.r11.s64 + 9932;
	// bl 0x82120600
	ctx.lr = 0x821D4958;
	sub_82120600(ctx, base);
	// addi r5,r28,176
	ctx.r5.s64 = r28.s64 + 176;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r31,r31,32768
	r31.u64 = r31.u64 | 32768;
	// bl 0x8219d708
	ctx.lr = 0x821D496C;
	sub_8219D708(ctx, base);
	// b 0x821d4974
	goto loc_821D4974;
loc_821D4970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4974:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4984;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d49a0
	if (ctx.cr0.eq) goto loc_821D49A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r31,r31,0,17,15
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D49A0;
	sub_82120AC0(ctx, base);
loc_821D49A0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D49A8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d49d8
	if (ctx.cr0.eq) goto loc_821D49D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,9952
	ctx.r4.s64 = ctx.r11.s64 + 9952;
	// bl 0x82120600
	ctx.lr = 0x821D49C0;
	sub_82120600(ctx, base);
	// addi r5,r28,180
	ctx.r5.s64 = r28.s64 + 180;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,1
	r31.u64 = r31.u64 | 65536;
	// bl 0x8219d708
	ctx.lr = 0x821D49D4;
	sub_8219D708(ctx, base);
	// b 0x821d49dc
	goto loc_821D49DC;
loc_821D49D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D49DC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D49EC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4a08
	if (ctx.cr0.eq) goto loc_821D4A08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r31,r31,0,16,14
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4A08;
	sub_82120AC0(ctx, base);
loc_821D4A08:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4A10;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4a40
	if (ctx.cr0.eq) goto loc_821D4A40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,9972
	ctx.r4.s64 = ctx.r11.s64 + 9972;
	// bl 0x82120600
	ctx.lr = 0x821D4A28;
	sub_82120600(ctx, base);
	// addi r5,r28,184
	ctx.r5.s64 = r28.s64 + 184;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,2
	r31.u64 = r31.u64 | 131072;
	// bl 0x8219d708
	ctx.lr = 0x821D4A3C;
	sub_8219D708(ctx, base);
	// b 0x821d4a44
	goto loc_821D4A44;
loc_821D4A40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4A44:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4A54;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4a70
	if (ctx.cr0.eq) goto loc_821D4A70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r31,r31,0,15,13
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4A70;
	sub_82120AC0(ctx, base);
loc_821D4A70:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4A78;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4aa8
	if (ctx.cr0.eq) goto loc_821D4AA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,10000
	ctx.r4.s64 = ctx.r11.s64 + 10000;
	// bl 0x82120600
	ctx.lr = 0x821D4A90;
	sub_82120600(ctx, base);
	// addi r5,r28,188
	ctx.r5.s64 = r28.s64 + 188;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,4
	r31.u64 = r31.u64 | 262144;
	// bl 0x8219d708
	ctx.lr = 0x821D4AA4;
	sub_8219D708(ctx, base);
	// b 0x821d4aac
	goto loc_821D4AAC;
loc_821D4AA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4AAC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4ABC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4ad8
	if (ctx.cr0.eq) goto loc_821D4AD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r31,r31,0,14,12
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4AD8;
	sub_82120AC0(ctx, base);
loc_821D4AD8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4AE0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4b10
	if (ctx.cr0.eq) goto loc_821D4B10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,10028
	ctx.r4.s64 = ctx.r11.s64 + 10028;
	// bl 0x82120600
	ctx.lr = 0x821D4AF8;
	sub_82120600(ctx, base);
	// addi r5,r28,192
	ctx.r5.s64 = r28.s64 + 192;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,8
	r31.u64 = r31.u64 | 524288;
	// bl 0x8219d708
	ctx.lr = 0x821D4B0C;
	sub_8219D708(ctx, base);
	// b 0x821d4b14
	goto loc_821D4B14;
loc_821D4B10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4B14:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4B24;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4b40
	if (ctx.cr0.eq) goto loc_821D4B40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r31,r31,0,13,11
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4B40;
	sub_82120AC0(ctx, base);
loc_821D4B40:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4B48;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4b78
	if (ctx.cr0.eq) goto loc_821D4B78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,10052
	ctx.r4.s64 = ctx.r11.s64 + 10052;
	// bl 0x82120600
	ctx.lr = 0x821D4B60;
	sub_82120600(ctx, base);
	// addi r5,r28,196
	ctx.r5.s64 = r28.s64 + 196;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,16
	r31.u64 = r31.u64 | 1048576;
	// bl 0x82196ba8
	ctx.lr = 0x821D4B74;
	sub_82196BA8(ctx, base);
	// b 0x821d4b7c
	goto loc_821D4B7C;
loc_821D4B78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4B7C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4B8C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4ba8
	if (ctx.cr0.eq) goto loc_821D4BA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// rlwinm r31,r31,0,12,10
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4BA8;
	sub_82120AC0(ctx, base);
loc_821D4BA8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4BB0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4be0
	if (ctx.cr0.eq) goto loc_821D4BE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,10076
	ctx.r4.s64 = ctx.r11.s64 + 10076;
	// bl 0x82120600
	ctx.lr = 0x821D4BC8;
	sub_82120600(ctx, base);
	// addi r5,r28,200
	ctx.r5.s64 = r28.s64 + 200;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,32
	r31.u64 = r31.u64 | 2097152;
	// bl 0x82196ba8
	ctx.lr = 0x821D4BDC;
	sub_82196BA8(ctx, base);
	// b 0x821d4be4
	goto loc_821D4BE4;
loc_821D4BE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4BE4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4BF4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4c10
	if (ctx.cr0.eq) goto loc_821D4C10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// rlwinm r31,r31,0,11,9
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4C10;
	sub_82120AC0(ctx, base);
loc_821D4C10:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4C18;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4c48
	if (ctx.cr0.eq) goto loc_821D4C48;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,10104
	ctx.r4.s64 = ctx.r11.s64 + 10104;
	// bl 0x82120600
	ctx.lr = 0x821D4C30;
	sub_82120600(ctx, base);
	// addi r5,r28,204
	ctx.r5.s64 = r28.s64 + 204;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,64
	r31.u64 = r31.u64 | 4194304;
	// bl 0x82196ba8
	ctx.lr = 0x821D4C44;
	sub_82196BA8(ctx, base);
	// b 0x821d4c4c
	goto loc_821D4C4C;
loc_821D4C48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4C4C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4C5C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4c78
	if (ctx.cr0.eq) goto loc_821D4C78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// rlwinm r31,r31,0,10,8
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4C78;
	sub_82120AC0(ctx, base);
loc_821D4C78:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4C80;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4cb0
	if (ctx.cr0.eq) goto loc_821D4CB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,10128
	ctx.r4.s64 = ctx.r11.s64 + 10128;
	// bl 0x82120600
	ctx.lr = 0x821D4C98;
	sub_82120600(ctx, base);
	// addi r5,r28,208
	ctx.r5.s64 = r28.s64 + 208;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,128
	r31.u64 = r31.u64 | 8388608;
	// bl 0x82196ba8
	ctx.lr = 0x821D4CAC;
	sub_82196BA8(ctx, base);
	// b 0x821d4cb4
	goto loc_821D4CB4;
loc_821D4CB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4CB4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4CC4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4ce0
	if (ctx.cr0.eq) goto loc_821D4CE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// rlwinm r31,r31,0,9,7
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x821D4CE0;
	sub_82120AC0(ctx, base);
loc_821D4CE0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821D4CE8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821d4d18
	if (ctx.cr0.eq) goto loc_821D4D18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r11,10152
	ctx.r4.s64 = ctx.r11.s64 + 10152;
	// bl 0x82120600
	ctx.lr = 0x821D4D00;
	sub_82120600(ctx, base);
	// addi r5,r28,212
	ctx.r5.s64 = r28.s64 + 212;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r31,r31,256
	r31.u64 = r31.u64 | 16777216;
	// bl 0x82196ba8
	ctx.lr = 0x821D4D14;
	sub_82196BA8(ctx, base);
	// b 0x821d4d1c
	goto loc_821D4D1C;
loc_821D4D18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4D1C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821D4D2C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4d44
	if (ctx.cr0.eq) goto loc_821D4D44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82120ac0
	ctx.lr = 0x821D4D44;
	sub_82120AC0(ctx, base);
loc_821D4D44:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821D4D4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4d6c
	if (ctx.cr0.eq) goto loc_821D4D6C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821dc550
	ctx.lr = 0x821D4D64;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821d4d70
	goto loc_821D4D70;
loc_821D4D6C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821D4D70:
	// stw r4,112(r28)
	REX_STORE_U32(r28.u32 + 112, ctx.r4.u32);
	// addi r3,r28,96
	ctx.r3.s64 = r28.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821D4D7C;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821D4D84;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821d4dfc
	if (ctx.cr0.eq) goto loc_821D4DFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,896(r1)
	REX_STORE_U32(ctx.r1.u32 + 896, ctx.r11.u32);
	// addi r6,r1,896
	ctx.r6.s64 = ctx.r1.s64 + 896;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821D4DAC;
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
	ctx.lr = 0x821D4DC0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4dec
	if (ctx.cr0.eq) goto loc_821D4DEC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-26016
	ctx.r10.s64 = ctx.r10.s64 + -26016;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821d4df0
	goto loc_821D4DF0;
loc_821D4DEC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821D4DF0:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821d4e00
	goto loc_821D4E00;
loc_821D4DFC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821D4E00:
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821D4E18;
	sub_82264568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82229FC8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-23236
	ctx.r3.s64 = ctx.r11.s64 + -23236;
	// bl 0x8216bc98
	ctx.lr = 0x82229FF8;
	sub_8216BC98(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_8222AF50) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x8222AF68;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222af8c
	if (ctx.cr0.eq) goto loc_8222AF8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229520
	ctx.lr = 0x8222AF78;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-21900
	ctx.r11.s64 = ctx.r11.s64 + -21900;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8222af90
	goto loc_8222AF90;
loc_8222AF8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222AF90:
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

DEFINE_REX_FUNC(sub_8222D3B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8222D3C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,896
	r30.s64 = ctx.r3.s64 + 896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// bl 0x82120ac0
	ctx.lr = 0x8222D3E0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82120ac0
	ctx.lr = 0x8222D3F0;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222d418
	ctx.lr = 0x8222D3F8;
	sub_8222D418(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222d408
	if (ctx.cr0.eq) goto loc_8222D408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8222D408;
	sub_8269CE98(ctx, base);
loc_8222D408:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82230108) {
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
	ctx.lr = 0x82230110;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r6,-23760
	ctx.r8.s64 = ctx.r6.s64 + -23760;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r10,2224
	r28.s64 = ctx.r10.s64 + 2224;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r5,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// beq cr6,0x822301f8
	if (ctx.cr6.eq) goto loc_822301F8;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822301D4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822301f4
	if (ctx.cr0.eq) goto loc_822301F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822301F4:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_822301F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82237D90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13500
	ctx.r3.s64 = ctx.r11.s64 + -13500;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82237F80) {
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
	ctx.lr = 0x82237F88;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,16592
	ctx.r8.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r6,-23760
	ctx.r8.s64 = ctx.r6.s64 + -23760;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r28,r10,32456
	r28.s64 = ctx.r10.s64 + 32456;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,12(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r5,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r5.u32);
	// stw r4,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r4.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// beq cr6,0x82238070
	if (ctx.cr6.eq) goto loc_82238070;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8223804C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223806c
	if (ctx.cr0.eq) goto loc_8223806C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8223806C:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_82238070:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82241280) {
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
	ctx.lr = 0x82241288;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3844(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 3844);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822412c8
	if (ctx.cr0.eq) goto loc_822412C8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6292(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6292);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822412C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,3844(r31)
	REX_STORE_U8(r31.u32 + 3844, r23.u8);
loc_822412C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82242520
	ctx.lr = 0x822412D4;
	sub_82242520(ctx, base);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// li r24,1
	r24.s64 = 1;
	// mr r25,r23
	r25.u64 = r23.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822412FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822413d4
	if (!ctx.cr0.gt) goto loc_822413D4;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82241308:
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822413b0
	if (ctx.cr0.eq) goto loc_822413B0;
	// lwz r11,3856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3856);
	// clrlwi r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 224);
	// and r24,r10,r11
	r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne 0x82241378
	if (!ctx.cr0.eq) goto loc_82241378;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82241370
	if (ctx.cr6.eq) goto loc_82241370;
	// lbz r11,740(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 740);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82241378
	if (ctx.cr0.eq) goto loc_82241378;
loc_82241370:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8224137c
	goto loc_8224137C;
loc_82241378:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8224137C:
	// lwz r3,460(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 460);
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822413b0
	if (ctx.cr0.eq) goto loc_822413B0;
	// lwz r11,3856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3856);
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 224);
	// and r27,r11,r10
	r27.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_822413B0:
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,304
	r30.s64 = r30.s64 + 304;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822413CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82241308
	if (ctx.cr6.lt) goto loc_82241308;
loc_822413D4:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822413fc
	if (ctx.cr0.eq) goto loc_822413FC;
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822413F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82241400
	if (!ctx.cr0.eq) goto loc_82241400;
loc_822413FC:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82241400:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r29,r10,16592
	r29.s64 = ctx.r10.s64 + 16592;
	// lfs f31,700(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 700);
	f31.f64 = double(temp.f32);
	// beq 0x82241458
	if (ctx.cr0.eq) goto loc_82241458;
	// lfs f0,3904(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 3904);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,3904(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 3904, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82241458
	if (ctx.cr6.lt) goto loc_82241458;
	// lbz r11,3936(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 3936);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82241450
	if (!ctx.cr0.eq) goto loc_82241450;
	// stw r23,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r23.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-17808
	ctx.r3.s64 = ctx.r11.s64 + -17808;
	// bl 0x8216bc98
	ctx.lr = 0x82241448;
	sub_8216BC98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3936(r31)
	REX_STORE_U8(r31.u32 + 3936, ctx.r11.u8);
loc_82241450:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82241c40
	ctx.lr = 0x82241458;
	sub_82241C40(ctx, base);
loc_82241458:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224146c
	if (ctx.cr0.eq) goto loc_8224146C;
	// lfs f0,3900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 3900);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,3900(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 3900, temp.u32);
loc_8224146C:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822414dc
	if (ctx.cr0.eq) goto loc_822414DC;
	// lfs f0,3896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 3896);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,3896(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 3896, temp.u32);
	// mr r30,r23
	r30.u64 = r23.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224149C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822414b4
	if (ctx.cr0.eq) goto loc_822414B4;
	// lfs f13,3896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 3896);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,576(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// b 0x822414bc
	goto loc_822414BC;
loc_822414B4:
	// lfs f0,3896(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 3896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
loc_822414BC:
	// blt cr6,0x822414c4
	if (ctx.cr6.lt) goto loc_822414C4;
	// li r30,1
	r30.s64 = 1;
loc_822414C4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822414dc
	if (ctx.cr0.eq) goto loc_822414DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822430d8
	ctx.lr = 0x822414D4;
	sub_822430D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82241654
	goto loc_82241654;
loc_822414DC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,3940(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 3940);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82241650
	if (!ctx.cr6.gt) goto loc_82241650;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfs f0,3940(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 3940, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82241650
	if (ctx.cr6.gt) goto loc_82241650;
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// addi r4,r11,-13316
	ctx.r4.s64 = ctx.r11.s64 + -13316;
	// bl 0x821fd140
	ctx.lr = 0x8224152C;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241650
	if (ctx.cr0.eq) goto loc_82241650;
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224154C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,113(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 113);
	// mulli r10,r3,304
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(304));
	// lwz r9,3856(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3856);
	// lwz r7,3880(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3880);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-16452
	r31.s64 = ctx.r11.s64 + -16452;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x822415f0
	if (ctx.cr6.lt) goto loc_822415F0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x822415a4
	if (!ctx.cr6.eq) goto loc_822415A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,-16432
	r31.s64 = ctx.r11.s64 + -16432;
	// b 0x822415f0
	goto loc_822415F0;
loc_822415A4:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x822415b8
	if (!ctx.cr6.eq) goto loc_822415B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,-16420
	r31.s64 = ctx.r11.s64 + -16420;
	// b 0x822415f0
	goto loc_822415F0;
loc_822415B8:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x822415cc
	if (!ctx.cr6.eq) goto loc_822415CC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,-16404
	r31.s64 = ctx.r11.s64 + -16404;
	// b 0x822415f0
	goto loc_822415F0;
loc_822415CC:
	// lwz r3,6284(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822415E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x822415f0
	if (!ctx.cr6.eq) goto loc_822415F0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r31,r11,-16392
	r31.s64 = ctx.r11.s64 + -16392;
loc_822415F0:
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,6296(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6296);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// ble cr6,0x82241650
	if (!ctx.cr6.gt) goto loc_82241650;
	// lfs f0,648(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82241650
	if (!ctx.cr6.gt) goto loc_82241650;
	// lbz r11,657(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 657);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82241650
	if (!ctx.cr0.eq) goto loc_82241650;
	// lwz r3,6296(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6296);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-16984
	ctx.r5.s64 = ctx.r11.s64 + -16984;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82241650:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82241654:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8225F6C8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288ce0
	ctx.lr = 0x8225F6E4;
	sub_82288CE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f778
	if (ctx.cr0.eq) goto loc_8225F778;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225f70c
	if (ctx.cr0.eq) goto loc_8225F70C;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225b1c8
	ctx.lr = 0x8225F708;
	sub_8225B1C8(ctx, base);
	// b 0x8225f778
	goto loc_8225F778;
loc_8225F70C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8225F730;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-26252
	ctx.r5.s64 = ctx.r11.s64 + -26252;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8225F748;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r5,r11,-10688
	ctx.r5.s64 = ctx.r11.s64 + -10688;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8225F760;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8225F770;
	sub_8216BC98(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,1596(r31)
	REX_STORE_U32(r31.u32 + 1596, ctx.r11.u32);
loc_8225F778:
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

DEFINE_REX_FUNC(sub_82263C60) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263C90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82263ce0
	if (!ctx.cr0.gt) goto loc_82263CE0;
loc_82263C98:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,616(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 616);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,616(r10)
	REX_STORE_U32(ctx.r10.u32 + 616, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263CD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82263c98
	if (ctx.cr6.lt) goto loc_82263C98;
loc_82263CE0:
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

DEFINE_REX_FUNC(sub_822675F8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82267608
	if (!ctx.cr6.eq) goto loc_82267608;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82267608:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822684F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82268500;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x8226853c
	goto loc_8226853C;
loc_82268518:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82268524;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82268534
	if (!ctx.cr0.lt) goto loc_82268534;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8226853c
	goto loc_8226853C;
loc_82268534:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8226853C:
	// lbz r11,57(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82268518
	if (ctx.cr0.eq) goto loc_82268518;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8226856c
	if (ctx.cr6.eq) goto loc_8226856C;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82268564;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82268644
	if (!ctx.cr0.lt) goto loc_82268644;
loc_8226856C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8213c418
	ctx.lr = 0x82268574;
	sub_8213C418(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120670
	ctx.lr = 0x82268584;
	sub_82120670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82268898
	ctx.lr = 0x82268590;
	sub_82268898(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x82268598;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82268650
	if (ctx.cr0.eq) goto loc_82268650;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r28,r31,12
	ctx.xer.ca = r31.u32 > 4294967283;
	r28.s64 = r31.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r11,56(r31)
	REX_STORE_U8(r31.u32 + 56, ctx.r11.u8);
	// stb r11,57(r31)
	REX_STORE_U8(r31.u32 + 57, ctx.r11.u8);
	// beq 0x822685e4
	if (ctx.cr0.eq) goto loc_822685E4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120670
	ctx.lr = 0x822685D8;
	sub_82120670(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x82268898
	ctx.lr = 0x822685E4;
	sub_82268898(ctx, base);
loc_822685E4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822689c8
	ctx.lr = 0x822685F8;
	sub_822689C8(ctx, base);
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8213cc48
	ctx.lr = 0x82268610;
	sub_8213CC48(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8269ce98
	ctx.lr = 0x82268618;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82268628;
	sub_82120AC0(ctx, base);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8213cc48
	ctx.lr = 0x8226863C;
	sub_8213CC48(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8269ce98
	ctx.lr = 0x82268644;
	sub_8269CE98(ctx, base);
loc_82268644:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
loc_82268650:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8226866C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82271D58) {
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
	ctx.lr = 0x82271D60;
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// addi r29,r3,648
	r29.s64 = ctx.r3.s64 + 648;
	// ld r9,156(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 156);
	// li r28,0
	r28.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// ble 0x82271e20
	if (!ctx.cr0.gt) goto loc_82271E20;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r8,r9,16592
	ctx.r8.s64 = ctx.r9.s64 + 16592;
	// addi r26,r3,148
	r26.s64 = ctx.r3.s64 + 148;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,16592(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16592);
	f30.f64 = double(temp.f32);
	// addi r27,r10,-4200
	r27.s64 = ctx.r10.s64 + -4200;
	// lfs f31,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f31.f64 = double(temp.f32);
loc_82271DB8:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lfs f0,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f29,f0,f30,f31
	f29.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f31.f64)));
	// bl 0x8215f338
	ctx.lr = 0x82271DD0;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82271DD4;
	sub_8215F990(ctx, base);
	// lwz r11,632(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 632);
	// rlwinm r10,r3,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8226a5d0
	ctx.lr = 0x82271DF0;
	sub_8226A5D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82271db8
	if (ctx.cr6.lt) goto loc_82271DB8;
loc_82271E20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_822793A8) {
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
	ctx.lr = 0x822793B0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca8
	ctx.lr = 0x822793B8;
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227970c
	if (ctx.cr6.eq) goto loc_8227970C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r27,r10,-1596
	r27.s64 = ctx.r10.s64 + -1596;
	// lfs f31,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f0,228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,560(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 560);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r25,16(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f30,232(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 232);
	f30.f64 = double(temp.f32);
	// bge cr6,0x82279568
	if (!ctx.cr6.lt) goto loc_82279568;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,356(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,12(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r3,6140(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6140);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// fadds f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82279464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82279478
	if (ctx.cr6.lt) goto loc_82279478;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8227947c
	goto loc_8227947C;
loc_82279478:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8227947C:
	// addi r3,r31,2764
	ctx.r3.s64 = r31.s64 + 2764;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r29,r31,2808
	r29.s64 = r31.s64 + 2808;
	// bl 0x822e6ff8
	ctx.lr = 0x82279490;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x822794B4;
	sub_82174318(ctx, base);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lfs f0,2808(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 2808);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,324
	ctx.r11.s64 = r31.s64 + 324;
	// fmadds f29,f0,f30,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f29.f64)));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// blt cr6,0x822794e0
	if (ctx.cr6.lt) goto loc_822794E0;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822794e4
	goto loc_822794E4;
loc_822794E0:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_822794E4:
	// addi r3,r31,2856
	ctx.r3.s64 = r31.s64 + 2856;
	// addi r29,r31,2900
	r29.s64 = r31.s64 + 2900;
	// bl 0x822e6ff8
	ctx.lr = 0x822794F0;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82279514;
	sub_82174318(ctx, base);
	// lfs f0,2900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 2900);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmadds f0,f0,f30,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f29.f64)));
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f1,352(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 352);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x822ee668
	ctx.lr = 0x82279530;
	sub_822EE668(ctx, base);
	// addi r3,r31,2948
	ctx.r3.s64 = r31.s64 + 2948;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r29,r31,2992
	r29.s64 = r31.s64 + 2992;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822e6ff8
	ctx.lr = 0x82279544;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82279568;
	sub_82174318(ctx, base);
loc_82279568:
	// lfs f0,192(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82279708
	if (!ctx.cr6.gt) goto loc_82279708;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,356(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,6140(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6140);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// fadds f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bctrl 
	ctx.lr = 0x822795C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822795d8
	if (ctx.cr6.lt) goto loc_822795D8;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822795dc
	goto loc_822795DC;
loc_822795D8:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_822795DC:
	// addi r3,r31,2764
	ctx.r3.s64 = r31.s64 + 2764;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r30,r31,2808
	r30.s64 = r31.s64 + 2808;
	// bl 0x822e6ff8
	ctx.lr = 0x822795F0;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82279614;
	sub_82174318(ctx, base);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lfs f0,2808(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 2808);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,324
	ctx.r11.s64 = r31.s64 + 324;
	// fmadds f29,f0,f30,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f29.f64)));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// blt cr6,0x82279640
	if (ctx.cr6.lt) goto loc_82279640;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82279644
	goto loc_82279644;
loc_82279640:
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_82279644:
	// addi r3,r31,2856
	ctx.r3.s64 = r31.s64 + 2856;
	// addi r30,r31,2900
	r30.s64 = r31.s64 + 2900;
	// bl 0x822e6ff8
	ctx.lr = 0x82279650;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82279674;
	sub_82174318(ctx, base);
	// lfs f0,2900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 2900);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,188(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f0,f30,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f29.f64)));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// li r3,5
	ctx.r3.s64 = 5;
	// ble cr6,0x822796b4
	if (!ctx.cr6.gt) goto loc_822796B4;
	// bl 0x822ee668
	ctx.lr = 0x82279698;
	sub_822EE668(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-1576
	ctx.r4.s64 = ctx.r11.s64 + -1576;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a0568
	ctx.lr = 0x822796AC;
	sub_826A0568(ctx, base);
	// addi r3,r31,3040
	ctx.r3.s64 = r31.s64 + 3040;
	// b 0x822796d4
	goto loc_822796D4;
loc_822796B4:
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bl 0x822ee668
	ctx.lr = 0x822796BC;
	sub_822EE668(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-1572
	ctx.r4.s64 = ctx.r11.s64 + -1572;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826a0568
	ctx.lr = 0x822796D0;
	sub_826A0568(ctx, base);
	// addi r3,r31,3132
	ctx.r3.s64 = r31.s64 + 3132;
loc_822796D4:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822e6ff8
	ctx.lr = 0x822796E4;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r9,33
	ctx.r9.s64 = 33;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82279708;
	sub_82174318(ctx, base);
loc_82279708:
	// stfs f31,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 356, temp.u32);
loc_8227970C:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cf4
	ctx.lr = 0x82279718;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82290770) {
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
	ctx.lr = 0x82290778;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,792(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 792);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822907d8
	if (!ctx.cr6.gt) goto loc_822907D8;
	// addi r31,r4,124
	r31.s64 = ctx.r4.s64 + 124;
	// lis r28,-32106
	r28.s64 = -2104098816;
loc_8229079C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822907c4
	if (ctx.cr6.eq) goto loc_822907C4;
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822907c4
	if (ctx.cr6.eq) goto loc_822907C4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822907C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
loc_822907C4:
	// lwz r11,792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 792);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8229079c
	if (ctx.cr6.lt) goto loc_8229079C;
loc_822907D8:
	// stw r27,792(r30)
	REX_STORE_U32(r30.u32 + 792, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82294688) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ld r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822946D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822946EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82294704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
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

DEFINE_REX_FUNC(sub_8229E410) {
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
	// lbz r10,73(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 73);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5672
	ctx.r11.s64 = ctx.r11.s64 + 5672;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8229e484
	if (ctx.cr0.eq) goto loc_8229E484;
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229E454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e484
	if (ctx.cr6.eq) goto loc_8229E484;
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
	ctx.lr = 0x8229E484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229E484:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,5916
	ctx.r11.s64 = ctx.r11.s64 + 5916;
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

DEFINE_REX_FUNC(sub_822A3560) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A3598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A35B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f12,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 * ctx.f1.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f13,524(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
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

DEFINE_REX_FUNC(sub_822A6588) {
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
	// bl 0x822a65f8
	ctx.lr = 0x822A65A8;
	sub_822A65F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a65dc
	if (ctx.cr0.eq) goto loc_822A65DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822a65dc
	if (ctx.cr6.eq) goto loc_822A65DC;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
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
	ctx.lr = 0x822A65DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A65DC:
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

DEFINE_REX_FUNC(sub_822A8168) {
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
	ctx.lr = 0x822A8170;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lfs f0,48(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lfs f13,48(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,52(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f11,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x822b4f68
	ctx.lr = 0x822A81E4;
	sub_822B4F68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a8234
	if (ctx.cr0.eq) goto loc_822A8234;
	// li r3,1
	ctx.r3.s64 = 1;
loc_822A81F0:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r7,0(r26)
	REX_STORE_U64(r26.u32 + 0, ctx.r7.u64);
	// std r10,8(r26)
	REX_STORE_U64(r26.u32 + 8, ctx.r10.u64);
	// std r6,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r6.u64);
	// std r9,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r5,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r5.u64);
	// std r8,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r8.u64);
	// b 0x822a825c
	goto loc_822A825C;
loc_822A8234:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b4bf0
	ctx.lr = 0x822A8250;
	sub_822B4BF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x822a81f0
	if (!ctx.cr0.eq) goto loc_822A81F0;
loc_822A825C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822B5700) {
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
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,6688
	ctx.r10.s64 = ctx.r10.s64 + 6688;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// stw r5,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r6,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B5780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B5798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,64(r31)
	REX_STORE_U8(r31.u32 + 64, ctx.r11.u8);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_822BC448) {
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
	ctx.lr = 0x822BC450;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7236
	ctx.r4.s64 = ctx.r11.s64 + 7236;
	// bl 0x82180150
	ctx.lr = 0x822BC468;
	sub_82180150(ctx, base);
	// lbz r11,246(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 246);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822bc514
	if (ctx.cr0.eq) goto loc_822BC514;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bc5b4
	if (!ctx.cr6.gt) goto loc_822BC5B4;
	// li r29,0
	r29.s64 = 0;
loc_822BC488:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
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
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822bc4fc
	if (ctx.cr6.eq) goto loc_822BC4FC;
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bc4fc
	if (ctx.cr6.eq) goto loc_822BC4FC;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bc4fc
	if (!ctx.cr0.eq) goto loc_822BC4FC;
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f13,240(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822afa30
	ctx.lr = 0x822BC4E4;
	sub_822AFA30(ctx, base);
	// lwz r3,500(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 500);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC4FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC4FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc488
	if (ctx.cr6.lt) goto loc_822BC488;
	// b 0x822bc5b4
	goto loc_822BC5B4;
loc_822BC514:
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bc5b4
	if (!ctx.cr6.gt) goto loc_822BC5B4;
	// li r29,0
	r29.s64 = 0;
loc_822BC524:
	// lwz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 212);
	// lwzx r31,r11,r29
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822bc544
	if (ctx.cr6.eq) goto loc_822BC544;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822bc548
	if (!ctx.cr6.eq) goto loc_822BC548;
loc_822BC544:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BC548:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bc5a0
	if (ctx.cr0.eq) goto loc_822BC5A0;
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822bc5a0
	if (ctx.cr6.eq) goto loc_822BC5A0;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bc5a0
	if (!ctx.cr0.eq) goto loc_822BC5A0;
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lfs f13,240(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r31,144
	ctx.r4.s64 = r31.s64 + 144;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822afa30
	ctx.lr = 0x822BC588;
	sub_822AFA30(ctx, base);
	// lwz r3,500(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 500);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822BC5A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BC5A0:
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bc524
	if (ctx.cr6.lt) goto loc_822BC524;
loc_822BC5B4:
	// bl 0x821800b8
	ctx.lr = 0x822BC5B8;
	sub_821800B8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822C29F8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12056(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12056);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2A28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2B08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2EA8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10752(r3)
	REX_STORE_U32(ctx.r3.u32 + 10752, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C32B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	REX_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3940) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12028(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12028);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,12028(r3)
	REX_STORE_U32(ctx.r3.u32 + 12028, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4430) {
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
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C63F0) {
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
	ctx.lr = 0x822C63F8;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c6770
	if (!ctx.cr6.eq) goto loc_822C6770;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c642c
	if (!ctx.cr6.gt) goto loc_822C642C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C642C;
	sub_822D5B28(ctx, base);
loc_822C642C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r11,r11,15104
	ctx.r11.u64 = ctx.r11.u64 | 15104;
	// lis r9,-16359
	ctx.r9.s64 = -1072103424;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,11008
	ctx.r9.u64 = ctx.r9.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,96
	ctx.r5.s64 = 96;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// addi r29,r11,14856
	r29.s64 = ctx.r11.s64 + 14856;
	// addi r4,r29,-96
	ctx.r4.s64 = r29.s64 + -96;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822C6478;
	sub_826A1E70(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r11,r30,96
	ctx.r11.s64 = r30.s64 + 96;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c6498
	if (!ctx.cr6.gt) goto loc_822C6498;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C6498;
	sub_822D5B28(ctx, base);
loc_822C6498:
	// lis r11,-16374
	ctx.r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822C64C8;
	sub_826A1E70(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c64e4
	if (!ctx.cr6.gt) goto loc_822C64E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C64E4;
	sub_822D5B28(ctx, base);
loc_822C64E4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// ori r11,r11,8576
	ctx.r11.u64 = ctx.r11.u64 | 8576;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r8,8851
	ctx.r8.s64 = 8851;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ori r9,r9,8448
	ctx.r9.u64 = ctx.r9.u64 | 8448;
	// ori r10,r7,65535
	ctx.r10.u64 = ctx.r7.u64 | 65535;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r31,8978
	r31.s64 = 8978;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r30,0
	r30.s64 = 0;
	// li r29,8205
	r29.s64 = 8205;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r28,8704
	r28.s64 = 8704;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// li r10,8707
	ctx.r10.s64 = 8707;
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,0
	r21.s64 = 0;
	// li r20,8712
	r20.s64 = 8712;
	// lwz r22,84(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,4
	r19.s64 = 4;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r18,8452
	r18.s64 = 8452;
	// li r17,0
	r17.s64 = 0;
	// li r8,8832
	ctx.r8.s64 = 8832;
	// lis r27,8
	r27.s64 = 524288;
	// li r16,8962
	r16.s64 = 8962;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// li r15,4
	r15.s64 = 4;
	// lis r26,2
	r26.s64 = 131072;
	// li r14,0
	r14.s64 = 0;
	// ori r26,r26,8320
	r26.u64 = r26.u64 | 8320;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r3.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lis r24,16
	r24.s64 = 1048576;
	// ori r24,r24,16
	r24.u64 = r24.u64 | 16;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r3.u32 = ea;
	// lwz r31,260(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r18,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r18.u32);
	ctx.r3.u32 = ea;
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r17.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r16,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r16.u32);
	ctx.r3.u32 = ea;
	// stwu r15,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r14,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r14.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c6644
	if (!ctx.cr6.gt) goto loc_822C6644;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C6644;
	sub_822D5B28(ctx, base);
loc_822C6644:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// ori r10,r10,129
	ctx.r10.u64 = ctx.r10.u64 | 129;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r12,1
	ctx.r12.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r11,r11,35,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r10.u64);
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// lwz r11,10436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10436);
	// lwz r10,10440(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10440);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 17;
	// bl 0x822c1c90
	ctx.lr = 0x822C6770;
	sub_822C1C90(ctx, base);
loc_822C6770:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822E2048) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stfs f1,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f2,-16(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r10,r10,13024
	ctx.r10.s64 = ctx.r10.s64 + 13024;
	// vspltisw128 v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// vspltisw128 v60,-1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vspltisw128 v58,-9
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_set1_epi32(int(0xFFFFFFF7)));
	// vspltisw128 v55,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_set1_epi32(int(0x1)));
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,13008
	ctx.r11.s64 = ctx.r8.s64 + 13008;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v63,v59,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v59.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v59.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// vslw128 v57,v60,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_sllv_epi32(a, shift));
	}
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// vspltw128 v30,v62,1
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// addi r10,r10,13056
	ctx.r10.s64 = ctx.r10.s64 + 13056;
	// vspltw128 v31,v62,0
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v56,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v28,v62,2
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// vspltw128 v2,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vspltw128 v1,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// vspltw128 v29,v63,2
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// vspltw128 v27,v63,3
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v26,v62,3
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// vspltw128 v5,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// vspltw128 v6,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vor128 v13,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vspltw128 v8,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v11,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v61,v62,v57
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// vor128 v0,v61,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v61.u8));
	// vlogefp128 v53,v61
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v53.f32[0] = log2f(ctx.v61.f32[0]);
	ctx.v53.f32[1] = log2f(ctx.v61.f32[1]);
	ctx.v53.f32[2] = log2f(ctx.v61.f32[2]);
	ctx.v53.f32[3] = log2f(ctx.v61.f32[3]);
	// vslw128 v3,v60,v58
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v58.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_sllv_epi32(a, shift));
	}
	// addi r11,r11,13040
	ctx.r11.s64 = ctx.r11.s64 + 13040;
	// vcfpsxws128 v54,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// vcmpeqfp128 v9,v63,v59
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vsel v3,v0,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v12,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// vsubfp128 v0,v3,v56
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vspltw128 v4,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v7,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vspltw128 v10,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vrfim128 v61,v53
	simde_mm_store_ps(ctx.v61.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v53.f32), SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC));
	// vand128 v54,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vmulfp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v1,v0,v1,v2
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v31,v0,v30,v31
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(v31.f32)));
	// vmulfp128 v2,v0,v63
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v3,v61,v63
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v1,v13,v29,v1
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v29.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v31,v13,v28,v31
	simde_mm_store_ps(v31.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v28.f32)), simde_mm_load_ps(v31.f32)));
	// vmulfp128 v30,v13,v13
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v27,v1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v27.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v0,v0,v26,v31
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v26.f32)), simde_mm_load_ps(v31.f32)));
	// vmaddfp v0,v30,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v2,v0,v3
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vrfim128 v61,v0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v0.f32), SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC));
	// vsubfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
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
	// vmulfp128 v13,v0,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v4,v0,v4,v12
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v0,v6,v5
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v7,v13,v7,v4
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v8,v13,v8,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vslw128 v54,v54,v60
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v54.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vand128 v57,v62,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vmaddfp v7,v0,v10,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v13,v13,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vslw128 v60,v60,v58
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v60.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v58.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi32(0x1F));
		simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_sllv_epi32(a, shift));
	}
	// vcmpeqfp128 v58,v62,v59
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v59.f32)));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vcmpgtfp128 v53,v59,v63
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vand128 v57,v57,v54
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vrfiz128 v54,v63
	simde_mm_store_ps(ctx.v54.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vcmpgtfp128 v62,v59,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vsrw128 v10,v60,v55
	ctx.v10.u32[0] = ctx.v60.u32[0] >> (ctx.v55.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v60.u32[1] >> (ctx.v55.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v60.u32[2] >> (ctx.v55.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v60.u32[3] >> (ctx.v55.u8[12] & 0x1F);
	// vmaddfp v8,v0,v11,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vor128 v11,v59,v57
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v0,v56,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v56.u8));
	// vor128 v60,v58,v9
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// vcmpeqfp128 v63,v63,v54
	simde_mm_store_ps(ctx.v63.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmaddfp v7,v13,v8,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vandc128 v13,v58,v53
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vsel v13,v10,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vandc128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vsel v8,v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vor128 v62,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor128 v7,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vrefp128 v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v62.f32)));
	// vor128 v9,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vor128 v10,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vnmsubfp v6,v9,v0,v12
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v6,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v10,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v12,v13,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v63,v61,v12
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v0,v63,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vsel v13,v0,v8,v7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FFAA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ffac0
	if (ctx.cr6.eq) goto loc_822FFAC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822ffac4
	goto loc_822FFAC4;
loc_822FFAC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FFAC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ffad4
	if (!ctx.cr6.eq) goto loc_822FFAD4;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_822FFAD4:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x822ffaf8
	if (ctx.cr6.eq) goto loc_822FFAF8;
	// stfs f1,28(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ffaf8
	if (ctx.cr6.eq) goto loc_822FFAF8;
	// b 0x822fcdd0
	sub_822FCDD0(ctx, base);
	return;
loc_822FFAF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82301368) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82301370;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,88(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,88
	r30.s64 = ctx.r3.s64 + 88;
	// b 0x823013d4
	goto loc_823013D4;
loc_82301384:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x823013d4
	if (!ctx.cr6.eq) goto loc_823013D4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x823108f8
	ctx.lr = 0x823013CC;
	sub_823108F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823013e0
	if (!ctx.cr0.eq) goto loc_823013E0;
loc_823013D4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82301384
	if (!ctx.cr6.eq) goto loc_82301384;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823013E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82304040) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82304048;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,56(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82304064
	if (ctx.cr6.eq) goto loc_82304064;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82304068
	goto loc_82304068;
loc_82304064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304068:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230408c
	if (ctx.cr6.eq) goto loc_8230408C;
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82304084
	if (ctx.cr6.eq) goto loc_82304084;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82304090
	goto loc_82304090;
loc_82304084:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82304090
	goto loc_82304090;
loc_8230408C:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_82304090:
	// lwz r11,312(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 312);
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x823040c4
	goto loc_823040C4;
loc_823040A4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823040b4
	if (!ctx.cr6.eq) goto loc_823040B4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823040B4:
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823040cc
	if (ctx.cr6.eq) goto loc_823040CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823040C4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823040a4
	if (!ctx.cr6.eq) goto loc_823040A4;
loc_823040CC:
	// lwz r11,168(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 168);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82304100
	if (!ctx.cr6.gt) goto loc_82304100;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823040E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// beq cr6,0x82304100
	if (ctx.cr6.eq) goto loc_82304100;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823040e4
	if (ctx.cr6.lt) goto loc_823040E4;
loc_82304100:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f70d8
	ctx.lr = 0x82304108;
	sub_822F70D8(ctx, base);
	// rlwinm r10,r3,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// beq cr6,0x82304130
	if (ctx.cr6.eq) goto loc_82304130;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82304134
	goto loc_82304134;
loc_82304130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304134:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8230F3E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230f3f0
	if (ctx.cr6.eq) goto loc_8230F3F0;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_8230F3F0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230f400
	if (ctx.cr6.eq) goto loc_8230F400;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8230F400:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230FB40) {
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
	ctx.lr = 0x8230FB48;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8230fb70
	if (ctx.cr6.eq) goto loc_8230FB70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8230FB70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332540
	ctx.lr = 0x8230FB78;
	sub_82332540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230FB90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230fbf0
	if (!ctx.cr0.eq) goto loc_8230FBF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230FBB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230fbf0
	if (!ctx.cr0.eq) goto loc_8230FBF0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8230fbd0
	if (ctx.cr6.eq) goto loc_8230FBD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8230FBD0;
	sub_826A1E70(ctx, base);
loc_8230FBD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230fbec
	if (ctx.cr6.eq) goto loc_8230FBEC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332188
	ctx.lr = 0x8230FBE8;
	sub_82332188(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_8230FBEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230FBF0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82313B10) {
	REX_FUNC_PROLOGUE();
	// b 0x823139b8
	sub_823139B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82313B18) {
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
	// lbz r11,5(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82313be0
	if (!ctx.cr0.eq) goto loc_82313BE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82313b50
	if (!ctx.cr6.eq) goto loc_82313B50;
	// li r3,95
	ctx.r3.s64 = 95;
	// b 0x82313be4
	goto loc_82313BE4;
loc_82313B50:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313B64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823165c0
	ctx.lr = 0x82313B6C;
	sub_823165C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313B80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82313b90
	if (!ctx.cr0.eq) goto loc_82313B90;
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x82313be4
	goto loc_82313BE4;
loc_82313B90:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82329fc0
	ctx.lr = 0x82313B9C;
	sub_82329FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313be4
	if (!ctx.cr0.eq) goto loc_82313BE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82313BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82313bd8
	if (ctx.cr0.eq) goto loc_82313BD8;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8232adb0
	ctx.lr = 0x82313BD0;
	sub_8232ADB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82313be4
	if (!ctx.cr0.eq) goto loc_82313BE4;
loc_82313BD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
loc_82313BE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82313BE4:
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

DEFINE_REX_FUNC(sub_82317830) {
	REX_FUNC_PROLOGUE();
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82318010) {
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
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82318044
	if (ctx.cr6.eq) goto loc_82318044;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82331a00
	ctx.lr = 0x82318044;
	sub_82331A00(ctx, base);
loc_82318044:
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

DEFINE_REX_FUNC(sub_82319C58) {
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
	ctx.lr = 0x82319C60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82319cb4
	if (!ctx.cr6.gt) goto loc_82319CB4;
	// li r30,0
	r30.s64 = 0;
loc_82319C84:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x82319ab0
	ctx.lr = 0x82319C98;
	sub_82319AB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82319cb8
	if (!ctx.cr0.eq) goto loc_82319CB8;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82319c84
	if (ctx.cr6.lt) goto loc_82319C84;
loc_82319CB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319CB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8231E268) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231e298
	if (ctx.cr6.eq) goto loc_8231E298;
	// li r3,32
	ctx.r3.s64 = 32;
	// b 0x8231e300
	goto loc_8231E300;
loc_8231E298:
	// cmplwi cr6,r30,50000
	ctx.cr6.compare<uint32_t>(r30.u32, 50000, ctx.xer);
	// ble cr6,0x8231e2a8
	if (!ctx.cr6.gt) goto loc_8231E2A8;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8231e300
	goto loc_8231E300;
loc_8231E2A8:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,6908
	ctx.r5.s64 = ctx.r10.s64 + 6908;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,572
	ctx.r6.s64 = 572;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8231E2D0;
	sub_82330A38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8231e2e0
	if (ctx.cr0.eq) goto loc_8231E2E0;
	// bl 0x8230b9a8
	ctx.lr = 0x8231E2DC;
	sub_8230B9A8(ctx, base);
	// b 0x8231e2e4
	goto loc_8231E2E4;
loc_8231E2E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231E2E4:
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231e2f8
	if (!ctx.cr6.eq) goto loc_8231E2F8;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8231e300
	goto loc_8231E300;
loc_8231E2F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8230bf18
	ctx.lr = 0x8231E300;
	sub_8230BF18(ctx, base);
loc_8231E300:
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

DEFINE_REX_FUNC(sub_823246B0) {
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
	ctx.lr = 0x823246B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// b 0x8232472c
	goto loc_8232472C;
loc_823246CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// bne cr6,0x823246dc
	if (!ctx.cr6.eq) goto loc_823246DC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823246DC:
	// lwz r31,52(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r30,r11,52
	r30.s64 = ctx.r11.s64 + 52;
	// b 0x82324720
	goto loc_82324720;
loc_823246E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x823246f8
	if (!ctx.cr6.eq) goto loc_823246F8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823246F8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lfs f1,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82312758
	ctx.lr = 0x82324704;
	sub_82312758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232471c
	if (ctx.cr0.eq) goto loc_8232471C;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x8232471c
	if (ctx.cr6.eq) goto loc_8232471C;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// bne cr6,0x82324738
	if (!ctx.cr6.eq) goto loc_82324738;
loc_8232471C:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82324720:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x823246e8
	if (!ctx.cr6.eq) goto loc_823246E8;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_8232472C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x823246cc
	if (!ctx.cr6.eq) goto loc_823246CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82324738:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82329138) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82329160
	if (ctx.cr6.eq) goto loc_82329160;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ld r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_82329160:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82329D50) {
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
	// beq cr6,0x82329d98
	if (ctx.cr6.eq) goto loc_82329D98;
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82329dc0
	if (!ctx.cr0.eq) goto loc_82329DC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329dc4
	if (!ctx.cr0.eq) goto loc_82329DC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82329dbc
	goto loc_82329DBC;
loc_82329D98:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82329DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82329dc4
	if (!ctx.cr0.eq) goto loc_82329DC4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329DBC:
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
loc_82329DC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82329DC4:
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

DEFINE_REX_FUNC(sub_8232D278) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8232d29c
	if (!ctx.cr6.eq) goto loc_8232D29C;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x8232d2c0
	goto loc_8232D2C0;
loc_8232D29C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8232fbb0
	ctx.lr = 0x8232D2B0;
	sub_8232FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232d2c0
	if (!ctx.cr0.eq) goto loc_8232D2C0;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_8232D2C0:
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

DEFINE_REX_FUNC(sub_8232F5D0) {
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
	// bl 0x82332760
	ctx.lr = 0x8232F5E4;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f5f4
	if (!ctx.cr6.eq) goto loc_8232F5F4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82338df0
	ctx.lr = 0x8232F5F4;
	sub_82338DF0(ctx, base);
loc_8232F5F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232FF68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// bl 0x8235ace0
	ctx.lr = 0x8232FF9C;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232ffc8
	if (!ctx.cr6.eq) goto loc_8232FFC8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8232FFC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232FFC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82336178) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r10,r11,8960
	ctx.r10.s64 = ctx.r11.s64 + 8960;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8235dc88
	ctx.lr = 0x823361A0;
	sub_8235DC88(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r9,1508
	ctx.r6.u64 = ctx.r9.u64 | 1508;
	// ori r3,r7,44100
	ctx.r3.u64 = ctx.r7.u64 | 44100;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r5,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stb r11,32(r31)
	REX_STORE_U8(r31.u32 + 32, ctx.r11.u8);
	// stwx r10,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8233EC00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8233EC08;
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
	// bl 0x8234aac0
	ctx.lr = 0x8233EC20;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ec3c
	if (!ctx.cr6.eq) goto loc_8233EC3C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8234bf68
	ctx.lr = 0x8233EC3C;
	sub_8234BF68(ctx, base);
loc_8233EC3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8233F328) {
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
	ctx.lr = 0x8233F344;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233f370
	if (ctx.cr6.eq) goto loc_8233F370;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233f37c
	if (ctx.cr6.eq) goto loc_8233F37C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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
loc_8233F370:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234d568
	ctx.lr = 0x8233F37C;
	sub_8234D568(ctx, base);
loc_8233F37C:
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

DEFINE_REX_FUNC(sub_82341418) {
	REX_FUNC_PROLOGUE();
	// b 0x82341168
	sub_82341168(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823419D0) {
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
	ctx.lr = 0x823419D8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,308(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 308);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341d5c
	if (ctx.cr6.eq) goto loc_82341D5C;
	// lwz r3,324(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 324);
	// bl 0x8233e7e0
	ctx.lr = 0x82341A00;
	sub_8233E7E0(ctx, base);
	// lwz r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 312);
	// addi r10,r28,312
	ctx.r10.s64 = r28.s64 + 312;
	// li r26,1
	r26.s64 = 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82341a44
	if (ctx.cr6.eq) goto loc_82341A44;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// stb r26,329(r28)
	REX_STORE_U8(r28.u32 + 329, r26.u8);
loc_82341A44:
	// lwz r3,324(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 324);
	// bl 0x8233e820
	ctx.lr = 0x82341A4C;
	sub_8233E820(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341d0c
	if (ctx.cr6.eq) goto loc_82341D0C;
	// lwz r10,220(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r3,192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82341adc
	if (!ctx.cr6.eq) goto loc_82341ADC;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r5,0,3,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1FFFF800;
	// rlwinm r10,r10,0,20,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0000FFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// addi r8,r10,540
	ctx.r8.s64 = ctx.r10.s64 + 540;
	// lbz r9,652(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 652);
	// beq cr6,0x82341ab4
	if (ctx.cr6.eq) goto loc_82341AB4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82341a94
	if (!ctx.cr6.eq) goto loc_82341A94;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_82341A94:
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,516(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// lwz r6,512(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// lwz r4,536(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 536);
	// bl 0x823394f8
	ctx.lr = 0x82341AB0;
	sub_823394F8(ctx, base);
	// b 0x82341c2c
	goto loc_82341C2C;
loc_82341AB4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82341ac0
	if (!ctx.cr6.eq) goto loc_82341AC0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_82341AC0:
	// lwz r4,216(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,516(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 516);
	// lwz r6,512(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 512);
	// bl 0x823394f8
	ctx.lr = 0x82341AD8;
	sub_823394F8(ctx, base);
	// b 0x82341c2c
	goto loc_82341C2C;
loc_82341ADC:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82341bd4
	if (!ctx.cr6.eq) goto loc_82341BD4;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// rlwinm r8,r9,0,21,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7C0;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// rlwinm r8,r8,0,25,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFC7F;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82341b24
	if (!ctx.cr6.eq) goto loc_82341B24;
loc_82341B04:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x8233e370
	ctx.lr = 0x82341B0C;
	sub_8233E370(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,0,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C0;
	// rlwinm r10,r10,0,25,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC7F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341b04
	if (ctx.cr6.eq) goto loc_82341B04;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82341B24:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82341c34
	if (!ctx.cr6.eq) goto loc_82341C34;
	// lwz r3,288(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 288);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,660(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r4,656(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341bc4
	if (!ctx.cr6.eq) goto loc_82341BC4;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,192(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 192);
	// lwz r3,23372(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 23372);
	// bl 0x8233e7e0
	ctx.lr = 0x82341B84;
	sub_8233E7E0(ctx, base);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lwz r6,128(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82341bb0
	if (ctx.cr6.eq) goto loc_82341BB0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82341BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82341BB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,192(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// lwz r3,23372(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 23372);
	// bl 0x8233e820
	ctx.lr = 0x82341BC0;
	sub_8233E820(ctx, base);
	// b 0x82341c30
	goto loc_82341C30;
loc_82341BC4:
	// cmpwi cr6,r30,36
	ctx.cr6.compare<int32_t>(r30.s32, 36, ctx.xer);
	// bne cr6,0x82341c30
	if (!ctx.cr6.eq) goto loc_82341C30;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x82341c30
	goto loc_82341C30;
loc_82341BD4:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82341c34
	if (!ctx.cr6.eq) goto loc_82341C34;
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82341c08
	if (!ctx.cr6.eq) goto loc_82341C08;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82344be0
	ctx.lr = 0x82341BFC;
	sub_82344BE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341c30
	if (!ctx.cr6.eq) goto loc_82341C30;
loc_82341C08:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239e9f8
	ctx.lr = 0x82341C18;
	sub_8239E9F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341c30
	if (!ctx.cr6.eq) goto loc_82341C30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239f860
	ctx.lr = 0x82341C2C;
	sub_8239F860(ctx, base);
loc_82341C2C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82341C30:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82341C34:
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// subfic r10,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r30.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r27,520(r11)
	REX_STORE_U32(ctx.r11.u32 + 520, r27.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,216(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 216);
	// stw r30,664(r4)
	REX_STORE_U32(ctx.r4.u32 + 664, r30.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r6,220(r9)
	REX_STORE_U32(ctx.r9.u32 + 220, ctx.r6.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,152(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82341c90
	if (ctx.cr6.eq) goto loc_82341C90;
	// lwz r9,220(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r9,220(r10)
	REX_STORE_U32(ctx.r10.u32 + 220, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82341C90:
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341cac
	if (ctx.cr6.eq) goto loc_82341CAC;
	// lwz r9,220(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,220(r10)
	REX_STORE_U32(ctx.r10.u32 + 220, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82341CAC:
	// stb r27,329(r28)
	REX_STORE_U8(r28.u32 + 329, r27.u8);
	// lwz r10,216(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// lbz r9,652(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 652);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82341cf0
	if (ctx.cr6.eq) goto loc_82341CF0;
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82341cf0
	if (ctx.cr6.eq) goto loc_82341CF0;
	// lwz r10,608(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 608);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,184(r11)
	REX_STORE_U32(ctx.r11.u32 + 184, ctx.r10.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,216(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r8,592(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 592);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82341CEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82341CF0:
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// lbz r8,328(r28)
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + 328);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82341d0c
	if (ctx.cr6.eq) goto loc_82341D0C;
	// stb r26,330(r28)
	REX_STORE_U8(r28.u32 + 330, r26.u8);
loc_82341D0C:
	// lwz r3,324(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 324);
	// bl 0x8233e7e0
	ctx.lr = 0x82341D14;
	sub_8233E7E0(ctx, base);
	// lwz r3,324(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 324);
	// addi r30,r28,332
	r30.s64 = r28.s64 + 332;
	// lwz r31,332(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 332);
	// bl 0x8233e820
	ctx.lr = 0x82341D24;
	sub_8233E820(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82341d5c
	if (ctx.cr6.eq) goto loc_82341D5C;
loc_82341D2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341D38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341d60
	if (!ctx.cr6.eq) goto loc_82341D60;
	// lwz r3,324(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 324);
	// bl 0x8233e7e0
	ctx.lr = 0x82341D48;
	sub_8233E7E0(ctx, base);
	// lwz r3,324(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 324);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8233e820
	ctx.lr = 0x82341D54;
	sub_8233E820(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82341d2c
	if (!ctx.cr6.eq) goto loc_82341D2C;
loc_82341D5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82341D60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8235CFB8) {
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
	// bl 0x826a1cb0
	ctx.lr = 0x8235CFC0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2ca8
	ctx.lr = 0x8235CFC8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8235d28c
	if (ctx.cr6.eq) goto loc_8235D28C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r3,236
	r29.s64 = ctx.r3.s64 + 236;
	// lfs f30,9000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9000);
	f30.f64 = double(temp.f32);
	// lfs f29,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f29.f64 = double(temp.f32);
	// lfs f31,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_8235D000:
	// lwz r9,144(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 144);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// lwz r28,56(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 56);
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// addi r30,r31,148
	r30.s64 = r31.s64 + 148;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// addic. r10,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r10.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8235d0a0
	if (!ctx.cr0.gt) goto loc_8235D0A0;
	// lhz r10,146(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 146);
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235D044:
	// lfs f8,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f5,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f1,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f8,f3,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f1,f10
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fsubs f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// fmuls f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f7,f5,f2
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmuls f28,f3,f6
	f28.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmsubs f6,f5,f6,f1
	ctx.f6.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, -ctx.f1.f64)));
	// fmsubs f5,f3,f4,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f3.f64, ctx.f4.f64, -ctx.f7.f64)));
	// fmsubs f4,f8,f2,f28
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f2.f64, -f28.f64)));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// bdnz 0x8235d044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235D044;
loc_8235D0A0:
	// fmuls f11,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f10.f64)));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// ble cr6,0x8235d0d0
	if (!ctx.cr6.gt) goto loc_8235D0D0;
	// fdivs f11,f29,f11
	ctx.f11.f64 = double(float(f29.f64 / ctx.f11.f64));
	// rlwinm r11,r9,0,15,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// b 0x8235d0d4
	goto loc_8235D0D4;
loc_8235D0D0:
	// oris r11,r9,2
	ctx.r11.u64 = ctx.r9.u64 | 131072;
loc_8235D0D4:
	// stfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f11,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f7,f11,f13,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmadds f6,f10,f12,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f6,120(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// bl 0x823a8748
	ctx.lr = 0x8235D10C;
	sub_823A8748(ctx, base);
	// lfs f5,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lwz r9,144(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 144);
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f4,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// ble cr6,0x8235d1f0
	if (!ctx.cr6.gt) goto loc_8235D1F0;
	// addi r11,r30,20
	ctx.r11.s64 = r30.s64 + 20;
loc_8235D148:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8235d15c
	if (!ctx.cr6.gt) goto loc_8235D15C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235D15C:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8235d174
	if (!ctx.cr6.lt) goto loc_8235D174;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235D174:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8235d18c
	if (ctx.cr6.gt) goto loc_8235D18C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235D18C:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8235d1a4
	if (ctx.cr6.lt) goto loc_8235D1A4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235D1A4:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8235d1bc
	if (ctx.cr6.gt) goto loc_8235D1BC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235D1BC:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8235d1d4
	if (ctx.cr6.lt) goto loc_8235D1D4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235D1D4:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r8,144(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235d148
	if (ctx.cr6.lt) goto loc_8235D148;
loc_8235D1F0:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8235d214
	if (ctx.cr6.gt) goto loc_8235D214;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235D214:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bgt cr6,0x8235d22c
	if (ctx.cr6.gt) goto loc_8235D22C;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
loc_8235D22C:
	// fmuls f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r9,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fadds f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fsubs f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bne cr6,0x8235d280
	if (!ctx.cr6.eq) goto loc_8235D280;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a8d28
	ctx.lr = 0x8235D280;
	sub_823A8D28(ctx, base);
loc_8235D280:
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8235d000
	if (!ctx.cr6.eq) goto loc_8235D000;
loc_8235D28C:
	// addi r4,r26,60
	ctx.r4.s64 = r26.s64 + 60;
	// addi r3,r26,236
	ctx.r3.s64 = r26.s64 + 236;
	// bl 0x823a7e38
	ctx.lr = 0x8235D298;
	sub_823A7E38(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8235c970
	ctx.lr = 0x8235D2A0;
	sub_8235C970(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x826a2cf4
	ctx.lr = 0x8235D2B0;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8237DB68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8237dbe8
	if (ctx.cr6.lt) goto loc_8237DBE8;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bge cr6,0x8237dbe8
	if (!ctx.cr6.lt) goto loc_8237DBE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8237dbe8
	if (ctx.cr6.lt) goto loc_8237DBE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8237dbe8
	if (ctx.cr6.gt) goto loc_8237DBE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,396
	ctx.r10.s64 = ctx.r3.s64 + 396;
loc_8237DBA4:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8237dbbc
	if (ctx.cr6.eq) goto loc_8237DBBC;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8237dbd4
	if (ctx.cr6.eq) goto loc_8237DBD4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8237DBBC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,704
	ctx.r10.s64 = ctx.r10.s64 + 704;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x8237dba4
	if (ctx.cr6.lt) goto loc_8237DBA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8237DBD4:
	// mulli r11,r11,704
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(704));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,1056(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 1056, temp.u32);
	// blr 
	return;
loc_8237DBE8:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823846F8) {
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
	ctx.lr = 0x82384700;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823c86b8
	ctx.lr = 0x8238470C;
	sub_823C86B8(ctx, base);
	// lwz r3,1056(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1056);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82384724
	if (ctx.cr6.eq) goto loc_82384724;
	// bl 0x82358490
	ctx.lr = 0x82384720;
	sub_82358490(ctx, base);
	// stw r28,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, r28.u32);
loc_82384724:
	// lwz r3,15996(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15996);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82384748
	if (ctx.cr6.eq) goto loc_82384748;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82384744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,15996(r31)
	REX_STORE_U32(r31.u32 + 15996, r28.u32);
loc_82384748:
	// lwz r3,16000(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16000);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238476c
	if (ctx.cr6.eq) goto loc_8238476C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82384768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,16000(r31)
	REX_STORE_U32(r31.u32 + 16000, r28.u32);
loc_8238476C:
	// lwz r3,524(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82384790
	if (ctx.cr6.eq) goto loc_82384790;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238478C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,524(r31)
	REX_STORE_U32(r31.u32 + 524, r28.u32);
loc_82384790:
	// lwz r10,1064(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1064);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// addi r27,r11,19376
	r27.s64 = ctx.r11.s64 + 19376;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384818
	if (ctx.cr6.eq) goto loc_82384818;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823847f8
	if (!ctx.cr6.gt) goto loc_823847F8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_823847BC:
	// lwz r11,1064(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1064);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823847e4
	if (ctx.cr6.eq) goto loc_823847E4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823847E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823847E4:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823847bc
	if (ctx.cr6.lt) goto loc_823847BC;
loc_823847F8:
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,1064(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1064);
	// li r6,6180
	ctx.r6.s64 = 6180;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384814;
	sub_82330D00(ctx, base);
	// stw r28,1064(r31)
	REX_STORE_U32(r31.u32 + 1064, r28.u32);
loc_82384818:
	// lwz r11,2204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823848bc
	if (ctx.cr6.eq) goto loc_823848BC;
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238489c
	if (!ctx.cr6.gt) goto loc_8238489C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82384838:
	// lwz r11,2204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82384888
	if (ctx.cr6.eq) goto loc_82384888;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82384888
	if (ctx.cr6.eq) goto loc_82384888;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82384874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,2204(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// lwzx r7,r30,r8
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + ctx.r8.u32);
	// stw r28,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r28.u32);
	// lwz r6,2204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// stwx r28,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, r28.u32);
loc_82384888:
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82384838
	if (ctx.cr6.lt) goto loc_82384838;
loc_8238489C:
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,2204(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 2204);
	// li r6,6196
	ctx.r6.s64 = 6196;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823848B8;
	sub_82330D00(ctx, base);
	// stw r28,2204(r31)
	REX_STORE_U32(r31.u32 + 2204, r28.u32);
loc_823848BC:
	// lwz r4,1428(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1428);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823848e4
	if (ctx.cr6.eq) goto loc_823848E4;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6202
	ctx.r6.s64 = 6202;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823848E0;
	sub_82330D00(ctx, base);
	// stw r28,1428(r31)
	REX_STORE_U32(r31.u32 + 1428, r28.u32);
loc_823848E4:
	// lwz r4,1052(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1052);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238490c
	if (ctx.cr6.eq) goto loc_8238490C;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6208
	ctx.r6.s64 = 6208;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384908;
	sub_82330D00(ctx, base);
	// stw r28,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, r28.u32);
loc_8238490C:
	// lwz r4,1060(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82384934
	if (ctx.cr6.eq) goto loc_82384934;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6214
	ctx.r6.s64 = 6214;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384930;
	sub_82330D00(ctx, base);
	// stw r28,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, r28.u32);
loc_82384934:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823849c0
	if (ctx.cr6.eq) goto loc_823849C0;
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1416);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823849a0
	if (!ctx.cr6.gt) goto loc_823849A0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82384954:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238498c
	if (ctx.cr6.eq) goto loc_8238498C;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6224
	ctx.r6.s64 = 6224;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384980;
	sub_82330D00(ctx, base);
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
loc_8238498C:
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1416);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82384954
	if (ctx.cr6.lt) goto loc_82384954;
loc_823849A0:
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,6229
	ctx.r6.s64 = 6229;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823849BC;
	sub_82330D00(ctx, base);
	// stw r28,520(r31)
	REX_STORE_U32(r31.u32 + 520, r28.u32);
loc_823849C0:
	// addi r30,r31,15540
	r30.s64 = r31.s64 + 15540;
	// li r29,50
	r29.s64 = 50;
loc_823849C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82384a0c
	if (ctx.cr6.eq) goto loc_82384A0C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823849F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r6,6239
	ctx.r6.s64 = 6239;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384A0C;
	sub_82330D00(ctx, base);
loc_82384A0C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x823849c8
	if (!ctx.cr0.eq) goto loc_823849C8;
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82384a68
	if (!ctx.cr6.gt) goto loc_82384A68;
	// addi r30,r31,792
	r30.s64 = r31.s64 + 792;
loc_82384A2C:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82384a54
	if (ctx.cr6.eq) goto loc_82384A54;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6247
	ctx.r6.s64 = 6247;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384A50;
	sub_82330D00(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
loc_82384A54:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82384a2c
	if (ctx.cr6.lt) goto loc_82384A2C;
loc_82384A68:
	// lwz r4,528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82384a90
	if (ctx.cr6.eq) goto loc_82384A90;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6254
	ctx.r6.s64 = 6254;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384A8C;
	sub_82330D00(ctx, base);
	// stw r28,528(r31)
	REX_STORE_U32(r31.u32 + 528, r28.u32);
loc_82384A90:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82384ab8
	if (ctx.cr6.eq) goto loc_82384AB8;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6260
	ctx.r6.s64 = 6260;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82384AB4;
	sub_82330D00(ctx, base);
	// stw r28,64(r31)
	REX_STORE_U32(r31.u32 + 64, r28.u32);
loc_82384AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823A3EAC) {
	REX_FUNC_PROLOGUE();
	PPCRegister r17{};
	PPCRegister r26{};
	// lwz r17,16148(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16148);
	// lwz r17,16092(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16092);
	// lwz r17,16100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16100);
	// lwz r17,16108(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16108);
	// lwz r17,16116(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16116);
	// lwz r17,16116(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16116);
	// lwz r17,16148(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16148);
	// lwz r17,16148(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16148);
	// lwz r17,16148(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16148);
	// lwz r17,16148(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16148);
	// lwz r17,16148(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16148);
	// lwz r17,16148(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 16148);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x823a3ef8
	goto loc_823A3EF8;
loc_823A3EF8:
	// rldicl r11,r11,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0x7FFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r11,r11,0,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// b 0x823a3fa4
	goto loc_823A3FA4;
loc_823A3FA4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A9560) {
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
	// li r6,19216
	ctx.r6.s64 = 19216;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x823A9584;
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

DEFINE_REX_FUNC(sub_823AAA48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// beq cr6,0x823aaa64
	if (ctx.cr6.eq) goto loc_823AAA64;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_823AAA64:
	// stw r8,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r8.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aaa98
	if (ctx.cr6.eq) goto loc_823AAA98;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aaa98
	if (ctx.cr6.eq) goto loc_823AAA98;
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// beq cr6,0x823aaa94
	if (ctx.cr6.eq) goto loc_823AAA94;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_823AAA94:
	// stw r8,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r8.u32);
loc_823AAA98:
	// lwz r11,768(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aaabc
	if (ctx.cr6.eq) goto loc_823AAABC;
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// beq cr6,0x823aaab8
	if (ctx.cr6.eq) goto loc_823AAAB8;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_823AAAB8:
	// stw r8,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r8.u32);
loc_823AAABC:
	// lwz r11,772(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aaae0
	if (ctx.cr6.eq) goto loc_823AAAE0;
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// beq cr6,0x823aaadc
	if (ctx.cr6.eq) goto loc_823AAADC;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_823AAADC:
	// stw r8,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r8.u32);
loc_823AAAE0:
	// lwz r11,780(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aab04
	if (ctx.cr6.eq) goto loc_823AAB04;
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ori r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 2;
	// beq cr6,0x823aab00
	if (ctx.cr6.eq) goto loc_823AAB00;
	// rlwinm r8,r9,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_823AAB00:
	// stw r8,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r8.u32);
loc_823AAB04:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aab28
	if (ctx.cr6.eq) goto loc_823AAB28;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// beq cr6,0x823aab24
	if (ctx.cr6.eq) goto loc_823AAB24;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_823AAB24:
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
loc_823AAB28:
	// b 0x823d1908
	sub_823D1908(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823B2140) {
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
	ctx.lr = 0x823B2148;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca4
	ctx.lr = 0x823B2150;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,468(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// stw r3,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// stw r6,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// addis r27,r31,1
	r27.s64 = r31.s64 + 65536;
	// stw r4,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// stw r5,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r5.u32);
	// addis r25,r31,1
	r25.s64 = r31.s64 + 65536;
	// addi r28,r28,-27456
	r28.s64 = r28.s64 + -27456;
	// addi r27,r27,-28480
	r27.s64 = r27.s64 + -28480;
	// addi r26,r26,-29504
	r26.s64 = r26.s64 + -29504;
	// addi r25,r25,-30528
	r25.s64 = r25.s64 + -30528;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// addis r24,r31,1
	r24.s64 = r31.s64 + 65536;
	// addis r23,r31,1
	r23.s64 = r31.s64 + 65536;
	// addis r22,r31,1
	r22.s64 = r31.s64 + 65536;
	// addis r21,r31,1
	r21.s64 = r31.s64 + 65536;
	// addis r20,r31,1
	r20.s64 = r31.s64 + 65536;
	// addis r19,r31,1
	r19.s64 = r31.s64 + 65536;
	// addis r18,r31,1
	r18.s64 = r31.s64 + 65536;
	// addis r17,r31,1
	r17.s64 = r31.s64 + 65536;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r24,r24,-18236
	r24.s64 = r24.s64 + -18236;
	// addi r23,r23,-17212
	r23.s64 = r23.s64 + -17212;
	// addi r22,r22,-16188
	r22.s64 = r22.s64 + -16188;
	// addi r21,r21,-15164
	r21.s64 = r21.s64 + -15164;
	// addi r20,r20,-14140
	r20.s64 = r20.s64 + -14140;
	// addi r19,r19,-13116
	r19.s64 = r19.s64 + -13116;
	// addi r18,r18,-12092
	r18.s64 = r18.s64 + -12092;
	// addi r17,r17,-11068
	r17.s64 = r17.s64 + -11068;
	// bl 0x823d59f8
	ctx.lr = 0x823B21F4;
	sub_823D59F8(ctx, base);
	// addis r16,r31,1
	r16.s64 = r31.s64 + 65536;
	// addis r15,r31,1
	r15.s64 = r31.s64 + 65536;
	// addis r14,r31,1
	r14.s64 = r31.s64 + 65536;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r16,r16,-23360
	r16.s64 = r16.s64 + -23360;
	// addi r11,r11,-26432
	ctx.r11.s64 = ctx.r11.s64 + -26432;
	// addi r15,r15,-24384
	r15.s64 = r15.s64 + -24384;
	// addi r14,r14,-25408
	r14.s64 = r14.s64 + -25408;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// addi r10,r31,10256
	ctx.r10.s64 = r31.s64 + 10256;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d59f8
	ctx.lr = 0x823B223C;
	sub_823D59F8(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,460(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r10,r31,30768
	ctx.r10.s64 = r31.s64 + 30768;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f31,25700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 25700);
	f31.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B2274;
	sub_823D5580(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r29,r31,30780
	r29.s64 = r31.s64 + 30780;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// lfs f30,25704(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 25704);
	f30.f64 = double(temp.f32);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x823d5580
	ctx.lr = 0x823B22A4;
	sub_823D5580(ctx, base);
	// addi r10,r31,30768
	ctx.r10.s64 = r31.s64 + 30768;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B22C8;
	sub_823D5580(ctx, base);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,256
	ctx.r8.s64 = 256;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823d5580
	ctx.lr = 0x823B22EC;
	sub_823D5580(ctx, base);
	// addis r16,r31,1
	r16.s64 = r31.s64 + 65536;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r16,r16,-22336
	r16.s64 = r16.s64 + -22336;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B2308;
	sub_823D6768(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// lfs f31,32276(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32276);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B2320;
	sub_823D6990(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B2334;
	sub_823D6768(ctx, base);
	// addis r25,r31,1
	r25.s64 = r31.s64 + 65536;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r25,r25,-21312
	r25.s64 = r25.s64 + -21312;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B2350;
	sub_823D6768(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B2360;
	sub_823D6990(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B2374;
	sub_823D6768(ctx, base);
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r26,r26,-20288
	r26.s64 = r26.s64 + -20288;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B2390;
	sub_823D6768(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B23A0;
	sub_823D6990(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B23B4;
	sub_823D6768(ctx, base);
	// addis r27,r31,1
	r27.s64 = r31.s64 + 65536;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r27,r27,-19264
	r27.s64 = r27.s64 + -19264;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B23D0;
	sub_823D6768(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6990
	ctx.lr = 0x823B23E0;
	sub_823D6990(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x823d6768
	ctx.lr = 0x823B23F4;
	sub_823D6768(ctx, base);
	// lwz r29,428(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r28,420(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// addi r10,r31,20512
	ctx.r10.s64 = r31.s64 + 20512;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823d5f10
	ctx.lr = 0x823B2420;
	sub_823D5F10(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lbz r3,439(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 439);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,20000(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20000);
	f31.f64 = double(temp.f32);
	// beq cr6,0x823b24bc
	if (ctx.cr6.eq) goto loc_823B24BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
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
	// addi r6,r6,-30600
	ctx.r6.s64 = ctx.r6.s64 + -30600;
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
	ctx.lr = 0x823B2488;
	sub_823D4D10(ctx, base);
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r10,256
	ctx.r10.s64 = 256;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = f30.f64;
	// addi r5,r5,-30564
	ctx.r5.s64 = ctx.r5.s64 + -30564;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d4d10
	ctx.lr = 0x823B24BC;
	sub_823D4D10(ctx, base);
loc_823B24BC:
	// lwz r30,388(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// addi r6,r31,30792
	ctx.r6.s64 = r31.s64 + 30792;
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r3,324(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823d6c50
	ctx.lr = 0x823B24D4;
	sub_823D6C50(ctx, base);
	// lwz r27,396(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r6,r31,31828
	ctx.r6.s64 = r31.s64 + 31828;
	// lwz r3,332(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x823d6c50
	ctx.lr = 0x823B24EC;
	sub_823D6C50(ctx, base);
	// lwz r26,404(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// lwz r3,340(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r6,r6,-32672
	ctx.r6.s64 = ctx.r6.s64 + -32672;
	// bl 0x823d6c50
	ctx.lr = 0x823B2508;
	sub_823D6C50(ctx, base);
	// lwz r25,412(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// lwz r3,348(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r6,r6,-31636
	ctx.r6.s64 = ctx.r6.s64 + -31636;
	// bl 0x823d6c50
	ctx.lr = 0x823B2524;
	sub_823D6C50(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6b18
	ctx.lr = 0x823B2534;
	sub_823D6B18(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6b18
	ctx.lr = 0x823B2544;
	sub_823D6B18(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6b18
	ctx.lr = 0x823B2554;
	sub_823D6B18(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6b18
	ctx.lr = 0x823B2564;
	sub_823D6B18(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6b18
	ctx.lr = 0x823B2574;
	sub_823D6B18(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823d6b18
	ctx.lr = 0x823B2584;
	sub_823D6B18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cf0
	ctx.lr = 0x823B2594;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_823CEA30) {
	REX_FUNC_PROLOGUE();
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CEE98) {
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
	ctx.lr = 0x823CEEA0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// bl 0x823cea38
	ctx.lr = 0x823CEEBC;
	sub_823CEA38(ctx, base);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x823cf3e4
	if (ctx.cr6.lt) goto loc_823CF3E4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ceee4
	if (!ctx.cr6.eq) goto loc_823CEEE4;
	// li r3,-138
	ctx.r3.s64 = -138;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cdc
	return;
loc_823CEEE4:
	// cmpdi cr6,r19,0
	ctx.cr6.compare<int64_t>(r19.s64, 0, ctx.xer);
	// blt cr6,0x823cf3e4
	if (ctx.cr6.lt) goto loc_823CF3E4;
	// cmpd cr6,r19,r20
	ctx.cr6.compare<int64_t>(r19.s64, r20.s64, ctx.xer);
	// bgt cr6,0x823cf3e4
	if (ctx.cr6.gt) goto loc_823CF3E4;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addic. r23,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r23.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt 0x823cef2c
	if (ctx.cr0.lt) goto loc_823CEF2C;
	// lwz r10,68(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 68);
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_823CEF10:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// subf r20,r10,r20
	r20.u64 = r20.u64 - ctx.r10.u64;
	// cmpd cr6,r19,r20
	ctx.cr6.compare<int64_t>(r19.s64, r20.s64, ctx.xer);
	// bge cr6,0x823cef2c
	if (!ctx.cr6.lt) goto loc_823CEF2C;
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bge 0x823cef10
	if (!ctx.cr0.lt) goto loc_823CEF10;
loc_823CEF2C:
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// rlwinm r9,r23,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r23,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,68(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 68);
	// li r17,-1
	r17.s64 = -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r28,0(r11)
	r28.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r27,8(r11)
	r27.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r26,0(r10)
	r26.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// mr r22,r28
	r22.u64 = r28.u64;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpd cr6,r28,r27
	ctx.cr6.compare<int64_t>(r28.s64, r27.s64, ctx.xer);
	// subf r11,r20,r26
	ctx.r11.u64 = r26.u64 - r20.u64;
	// add r21,r10,r26
	r21.u64 = ctx.r10.u64 + r26.u64;
	// add r25,r11,r19
	r25.u64 = ctx.r11.u64 + r19.u64;
	// bge cr6,0x823cf1ac
	if (!ctx.cr6.lt) goto loc_823CF1AC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r24,r11,44100
	r24.u64 = ctx.r11.u64 | 44100;
loc_823CEF78:
	// subf r11,r28,r27
	ctx.r11.u64 = r27.u64 - r28.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// cmpdi cr6,r11,8500
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 8500, ctx.xer);
	// bge cr6,0x823cef90
	if (!ctx.cr6.lt) goto loc_823CEF90;
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x823cefec
	goto loc_823CEFEC;
loc_823CEF90:
	// subf r11,r26,r21
	ctx.r11.u64 = r21.u64 - r26.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// subf r10,r26,r25
	ctx.r10.u64 = r25.u64 - r26.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fctidz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r30,r11,-8500
	r30.s64 = ctx.r11.s64 + -8500;
	// cmpd cr6,r30,r28
	ctx.cr6.compare<int64_t>(r30.s64, r28.s64, ctx.xer);
	// bgt cr6,0x823cefec
	if (ctx.cr6.gt) goto loc_823CEFEC;
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
loc_823CEFEC:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cf038
	if (ctx.cr6.eq) goto loc_823CF038;
	// lwz r11,684(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf030
	if (ctx.cr6.eq) goto loc_823CF030;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x823CF014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823cf030
	if (ctx.cr6.eq) goto loc_823CF030;
	// std r30,8(r29)
	REX_STORE_U64(r29.u32 + 8, r30.u64);
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// bl 0x823e1128
	ctx.lr = 0x823CF028;
	sub_823E1128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823cf03c
	goto loc_823CF03C;
loc_823CF030:
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x823cf03c
	goto loc_823CF03C;
loc_823CF038:
	// li r11,-129
	ctx.r11.s64 = -129;
loc_823CF03C:
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(r31.s64, 0, ctx.xer);
	// bne cr6,0x823cf3b4
	if (!ctx.cr6.eq) goto loc_823CF3B4;
loc_823CF048:
	// ld r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r6,r11,r27
	ctx.r6.u64 = r27.u64 - ctx.r11.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823cd610
	ctx.lr = 0x823CF060;
	sub_823CD610(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,-128
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -128, ctx.xer);
	// beq cr6,0x823cf3b4
	if (ctx.cr6.eq) goto loc_823CF3B4;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x823cf0f8
	if (!ctx.cr6.lt) goto loc_823CF0F8;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// cmpd cr6,r30,r11
	ctx.cr6.compare<int64_t>(r30.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x823cf1ac
	if (!ctx.cr6.gt) goto loc_823CF1AC;
	// cmpdi cr6,r30,0
	ctx.cr6.compare<int64_t>(r30.s64, 0, ctx.xer);
	// beq cr6,0x823cf3b4
	if (ctx.cr6.eq) goto loc_823CF3B4;
	// addi r30,r30,-8500
	r30.s64 = r30.s64 + -8500;
	// cmpd cr6,r30,r28
	ctx.cr6.compare<int64_t>(r30.s64, r28.s64, ctx.xer);
	// bgt cr6,0x823cf098
	if (ctx.cr6.gt) goto loc_823CF098;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_823CF098:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823cf0ec
	if (ctx.cr6.eq) goto loc_823CF0EC;
	// lwz r11,684(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf0e0
	if (ctx.cr6.eq) goto loc_823CF0E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x823CF0C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823cf0e0
	if (ctx.cr6.eq) goto loc_823CF0E0;
	// std r30,8(r29)
	REX_STORE_U64(r29.u32 + 8, r30.u64);
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// bl 0x823e1128
	ctx.lr = 0x823CF0D4;
	sub_823E1128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// b 0x823cf188
	goto loc_823CF188;
loc_823CF0E0:
	// li r11,-128
	ctx.r11.s64 = -128;
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// b 0x823cf188
	goto loc_823CF188;
loc_823CF0EC:
	// li r11,-129
	ctx.r11.s64 = -129;
	// extsw r31,r11
	r31.s64 = ctx.r11.s32;
	// b 0x823cf188
	goto loc_823CF188;
loc_823CF0F8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823e0758
	ctx.lr = 0x823CF100;
	sub_823E0758(ctx, base);
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823cf190
	if (!ctx.cr6.eq) goto loc_823CF190;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823e06f8
	ctx.lr = 0x823CF11C;
	sub_823E06F8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x823cf190
	if (ctx.cr6.eq) goto loc_823CF190;
	// cmpd cr6,r3,r25
	ctx.cr6.compare<int64_t>(ctx.r3.s64, r25.s64, ctx.xer);
	// bge cr6,0x823cf14c
	if (!ctx.cr6.lt) goto loc_823CF14C;
	// subf r11,r3,r25
	ctx.r11.u64 = r25.u64 - ctx.r3.u64;
	// ld r28,8(r29)
	r28.u64 = REX_LOAD_U64(r29.u32 + 8);
	// mr r22,r31
	r22.u64 = r31.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpd cr6,r11,r24
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r24.s64, ctx.xer);
	// bgt cr6,0x823cf1a4
	if (ctx.cr6.gt) goto loc_823CF1A4;
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x823cf190
	goto loc_823CF190;
loc_823CF14C:
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// cmpd cr6,r30,r11
	ctx.cr6.compare<int64_t>(r30.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x823cf1ac
	if (!ctx.cr6.gt) goto loc_823CF1AC;
	// ld r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 8);
	// cmpd cr6,r27,r10
	ctx.cr6.compare<int64_t>(r27.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x823cf19c
	if (!ctx.cr6.eq) goto loc_823CF19C;
	// addi r30,r30,-8500
	r30.s64 = r30.s64 + -8500;
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmpd cr6,r30,r28
	ctx.cr6.compare<int64_t>(r30.s64, r28.s64, ctx.xer);
	// bgt cr6,0x823cf178
	if (ctx.cr6.gt) goto loc_823CF178;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_823CF178:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd590
	ctx.lr = 0x823CF184;
	sub_823CD590(ctx, base);
	// extsw r31,r3
	r31.s64 = ctx.r3.s32;
loc_823CF188:
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(r31.s64, 0, ctx.xer);
	// bne cr6,0x823cf3b4
	if (!ctx.cr6.eq) goto loc_823CF3B4;
loc_823CF190:
	// cmpd cr6,r28,r27
	ctx.cr6.compare<int64_t>(r28.s64, r27.s64, ctx.xer);
	// blt cr6,0x823cf048
	if (ctx.cr6.lt) goto loc_823CF048;
	// b 0x823cf1ac
	goto loc_823CF1AC;
loc_823CF19C:
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_823CF1A4:
	// cmpd cr6,r28,r27
	ctx.cr6.compare<int64_t>(r28.s64, r27.s64, ctx.xer);
	// blt cr6,0x823cef78
	if (ctx.cr6.lt) goto loc_823CEF78;
loc_823CF1AC:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd590
	ctx.lr = 0x823CF1B8;
	sub_823CD590(ctx, base);
	// extsw r31,r3
	r31.s64 = ctx.r3.s32;
	// std r17,80(r29)
	REX_STORE_U64(r29.u32 + 80, r17.u64);
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(r31.s64, 0, ctx.xer);
	// bne cr6,0x823cf3b4
	if (!ctx.cr6.eq) goto loc_823CF3B4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823cd610
	ctx.lr = 0x823CF1DC;
	sub_823CD610(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x823cf3b4
	if (ctx.cr6.lt) goto loc_823CF3B4;
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823cf220
	if (ctx.cr6.eq) goto loc_823CF220;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823ce490
	ctx.lr = 0x823CF200;
	sub_823CE490(ctx, base);
	// lwz r9,64(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 64);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,96(r29)
	REX_STORE_U32(r29.u32 + 96, r23.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,88(r29)
	REX_STORE_U32(r29.u32 + 88, ctx.r10.u32);
	// stw r8,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r8.u32);
	// b 0x823cf228
	goto loc_823CF228;
loc_823CF220:
	// addi r3,r29,472
	ctx.r3.s64 = r29.s64 + 472;
	// bl 0x823e2138
	ctx.lr = 0x823CF228;
	sub_823E2138(ctx, base);
loc_823CF228:
	// addi r31,r29,112
	r31.s64 = r29.s64 + 112;
	// lwz r4,92(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e11c0
	ctx.lr = 0x823CF238;
	sub_823E11C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823e0cb0
	ctx.lr = 0x823CF248;
	sub_823E0CB0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1368
	ctx.lr = 0x823CF254;
	sub_823E1368(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x823cf298
	if (ctx.cr6.eq) goto loc_823CF298;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
loc_823CF264:
	// blt cr6,0x823cf33c
	if (ctx.cr6.lt) goto loc_823CF33C;
	// ld r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x823cf344
	if (!ctx.cr6.eq) goto loc_823CF344;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1340
	ctx.lr = 0x823CF280;
	sub_823E1340(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1368
	ctx.lr = 0x823CF28C;
	sub_823E1368(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x823cf264
	if (!ctx.cr6.eq) goto loc_823CF264;
loc_823CF298:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd590
	ctx.lr = 0x823CF2A4;
	sub_823CD590(ctx, base);
	// extsw r31,r3
	r31.s64 = ctx.r3.s32;
	// cmpdi cr6,r31,0
	ctx.cr6.compare<int64_t>(r31.s64, 0, ctx.xer);
	// blt cr6,0x823cf3b4
	if (ctx.cr6.lt) goto loc_823CF3B4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823cd6f0
	ctx.lr = 0x823CF2C0;
	sub_823CD6F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// blt cr6,0x823cf3b4
	if (ctx.cr6.lt) goto loc_823CF3B4;
loc_823CF2CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823e0758
	ctx.lr = 0x823CF2D4;
	sub_823E0758(ctx, base);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 92);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823cf300
	if (!ctx.cr6.eq) goto loc_823CF300;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823e06f8
	ctx.lr = 0x823CF2E8;
	sub_823E06F8(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// bgt cr6,0x823cf324
	if (ctx.cr6.gt) goto loc_823CF324;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823e06c8
	ctx.lr = 0x823CF2F8;
	sub_823E06C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823cf324
	if (ctx.cr6.eq) goto loc_823CF324;
loc_823CF300:
	// std r31,8(r29)
	REX_STORE_U64(r29.u32 + 8, r31.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823cd6f0
	ctx.lr = 0x823CF314;
	sub_823CD6F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x823cf2cc
	if (!ctx.cr6.lt) goto loc_823CF2CC;
	// b 0x823cf3b4
	goto loc_823CF3B4;
loc_823CF324:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823cead8
	ctx.lr = 0x823CF334;
	sub_823CEAD8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cdc
	return;
loc_823CF33C:
	// li r31,-136
	r31.s64 = -136;
	// b 0x823cf3b4
	goto loc_823CF3B4;
loc_823CF344:
	// lwz r10,96(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lwz r9,68(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 68);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// std r6,80(r29)
	REX_STORE_U64(r29.u32 + 80, ctx.r6.u64);
	// cmpdi cr6,r6,0
	ctx.cr6.compare<int64_t>(ctx.r6.s64, 0, ctx.xer);
	// bge cr6,0x823cf36c
	if (!ctx.cr6.lt) goto loc_823CF36C;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,80(r29)
	REX_STORE_U64(r29.u32 + 80, ctx.r11.u64);
loc_823CF36C:
	// ld r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 80);
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// std r11,80(r29)
	REX_STORE_U64(r29.u32 + 80, ctx.r11.u64);
	// cmpd cr6,r11,r19
	ctx.cr6.compare<int64_t>(ctx.r11.s64, r19.s64, ctx.xer);
	// bgt cr6,0x823cf3b0
	if (ctx.cr6.gt) goto loc_823CF3B0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cea38
	ctx.lr = 0x823CF38C;
	sub_823CEA38(ctx, base);
	// cmpd cr6,r19,r3
	ctx.cr6.compare<int64_t>(r19.s64, ctx.r3.s64, ctx.xer);
	// bgt cr6,0x823cf3b0
	if (ctx.cr6.gt) goto loc_823CF3B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 100, temp.u32);
	// stfs f0,104(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 104, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cdc
	return;
loc_823CF3B0:
	// li r31,-129
	r31.s64 = -129;
loc_823CF3B4:
	// std r17,80(r29)
	REX_STORE_U64(r29.u32 + 80, r17.u64);
	// addi r4,r29,472
	ctx.r4.s64 = r29.s64 + 472;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823e1ef8
	ctx.lr = 0x823CF3C4;
	sub_823E1EF8(ctx, base);
	// addi r4,r29,576
	ctx.r4.s64 = r29.s64 + 576;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823e1a90
	ctx.lr = 0x823CF3D0;
	sub_823E1A90(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// extsw r3,r31
	ctx.r3.s64 = r31.s32;
	// stw r11,88(r29)
	REX_STORE_U32(r29.u32 + 88, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cdc
	return;
loc_823CF3E4:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_823EAF58) {
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
	ctx.lr = 0x823EAF60;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,1812
	ctx.r5.s64 = 1812;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82393af8
	ctx.lr = 0x823EAF80;
	sub_82393AF8(ctx, base);
	// lwz r25,28(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb170
	if (ctx.cr6.eq) goto loc_823EB170;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EAF9C;
	sub_823E2DA8(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EAFAC;
	sub_823E2DA8(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EAFBC;
	sub_823E2DA8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r11,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EAFD0;
	sub_823E2DA8(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,12(r26)
	REX_STORE_U32(r26.u32 + 12, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EAFE4;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,16(r26)
	REX_STORE_U32(r26.u32 + 16, ctx.r3.u32);
	// blt cr6,0x823eb154
	if (ctx.cr6.lt) goto loc_823EB154;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823eb088
	if (!ctx.cr6.gt) goto loc_823EB088;
	// addi r30,r26,20
	r30.s64 = r26.s64 + 20;
loc_823EB004:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EB010;
	sub_823E2DA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EB020;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823eb154
	if (ctx.cr6.lt) goto loc_823EB154;
	// beq cr6,0x823eb048
	if (ctx.cr6.eq) goto loc_823EB048;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EB038;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823eb154
	if (ctx.cr6.lt) goto loc_823EB154;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// or r31,r11,r31
	r31.u64 = ctx.r11.u64 | r31.u64;
loc_823EB048:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eb070
	if (ctx.cr6.eq) goto loc_823EB070;
loc_823EB05C:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823eb05c
	if (!ctx.cr6.eq) goto loc_823EB05C;
loc_823EB070:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r27,r10,r27
	r27.u64 = ctx.r10.u64 + r27.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823eb004
	if (ctx.cr6.lt) goto loc_823EB004;
loc_823EB088:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823eb0bc
	if (!ctx.cr6.gt) goto loc_823EB0BC;
	// addi r30,r26,272
	r30.s64 = r26.s64 + 272;
loc_823EB098:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2da8
	ctx.lr = 0x823EB0A4;
	sub_823E2DA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823eb154
	if (ctx.cr6.lt) goto loc_823EB154;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(r31.s32, r27.s32, ctx.xer);
	// blt cr6,0x823eb098
	if (ctx.cr6.lt) goto loc_823EB098;
loc_823EB0BC:
	// lwz r7,16(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r8,24(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823eb154
	if (!ctx.cr6.lt) goto loc_823EB154;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x823eb110
	if (!ctx.cr6.gt) goto loc_823EB110;
	// addi r11,r26,276
	ctx.r11.s64 = r26.s64 + 276;
loc_823EB0DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823eb154
	if (!ctx.cr6.lt) goto loc_823EB154;
	// addi r10,r10,455
	ctx.r10.s64 = ctx.r10.s64 + 455;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + r25.u32);
	// lwz r4,12(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823eb154
	if (ctx.cr6.eq) goto loc_823EB154;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// blt cr6,0x823eb0dc
	if (ctx.cr6.lt) goto loc_823EB0DC;
loc_823EB110:
	// addi r10,r7,455
	ctx.r10.s64 = ctx.r7.s64 + 455;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// ble cr6,0x823eb148
	if (!ctx.cr6.gt) goto loc_823EB148;
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
loc_823EB138:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823eb154
	if (ctx.cr6.gt) goto loc_823EB154;
	// bdnz 0x823eb138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB138;
loc_823EB148:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_823EB154:
	// li r5,1812
	ctx.r5.s64 = 1812;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EB164;
	sub_823EF5F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EB170;
	sub_82393BF0(ctx, base);
loc_823EB170:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823F4BF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823F4C00;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x823f4c68
	if (ctx.cr6.eq) goto loc_823F4C68;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823f4c58
	if (ctx.cr6.gt) goto loc_823F4C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stb r5,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823F4C58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x823f4cc0
	goto loc_823F4CC0;
loc_823F4C68:
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823f4cb4
	if (ctx.cr6.gt) goto loc_823F4CB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r9,255
	ctx.r9.s64 = 255;
	// srawi r10,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 8;
	// srawi r8,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	ctx.r8.s64 = r29.s32 >> 8;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r10,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r10.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r6,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r8,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stb r29,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r29.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_823F4CB4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r28,5
	r28.s64 = 5;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
loc_823F4CC0:
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// subf r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bge cr6,0x823f4cdc
	if (!ctx.cr6.lt) goto loc_823F4CDC;
	// li r30,0
	r30.s64 = 0;
loc_823F4CDC:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bge cr6,0x823f4ce8
	if (!ctx.cr6.lt) goto loc_823F4CE8;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823F4CE8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x823F4CF4;
	sub_826A1E70(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x823f4d58
	if (ctx.cr6.eq) goto loc_823F4D58;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r30,r11,r10
	r30.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bge cr6,0x823f4d28
	if (!ctx.cr6.lt) goto loc_823F4D28;
	// li r30,0
	r30.s64 = 0;
loc_823F4D28:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// bge cr6,0x823f4d34
	if (!ctx.cr6.lt) goto loc_823F4D34;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_823F4D34:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x823F4D40;
	sub_826A2E60(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_823F4D58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823FCE10) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82404718
	ctx.lr = 0x823FCE34;
	sub_82404718(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404730
	ctx.lr = 0x823FCE44;
	sub_82404730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823fce74
	if (!ctx.cr0.lt) goto loc_823FCE74;
loc_823FCE4C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82404890
	ctx.lr = 0x823FCE58;
	sub_82404890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
loc_823FCE74:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823fcd40
	ctx.lr = 0x823FCE84;
	sub_823FCD40(ctx, base);
	// b 0x823fce4c
	goto loc_823FCE4C;
}

DEFINE_REX_FUNC(sub_82400558) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824005C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824005E8;
	sub_823F02B8(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82400600
	if (!ctx.cr0.eq) goto loc_82400600;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82400608
	goto loc_82400608;
loc_82400600:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82400608:
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

DEFINE_REX_FUNC(sub_82403168) {
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
	ctx.lr = 0x82403170;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// blt cr6,0x82403390
	if (ctx.cr6.lt) goto loc_82403390;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82403390
	if (!ctx.cr6.eq) goto loc_82403390;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,51
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 51, ctx.xer);
	// bne cr6,0x824031a4
	if (!ctx.cr6.eq) goto loc_824031A4;
	// mr r21,r22
	r21.u64 = r22.u64;
	// b 0x824031bc
	goto loc_824031BC;
loc_824031A4:
	// cmplwi cr6,r11,80
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 80, ctx.xer);
	// bne cr6,0x82403390
	if (!ctx.cr6.eq) goto loc_82403390;
	// lbz r11,1(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x82403390
	if (!ctx.cr6.eq) goto loc_82403390;
	// li r21,0
	r21.s64 = 0;
loc_824031BC:
	// addic. r28,r5,-2
	ctx.xer.ca = ctx.r5.u32 > 1;
	r28.s64 = ctx.r5.s64 + -2;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r4,2
	r27.s64 = ctx.r4.s64 + 2;
	// li r23,0
	r23.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r24,255
	r24.s64 = 255;
	// beq 0x82403390
	if (ctx.cr0.eq) goto loc_82403390;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824031DC:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x824031ec
	if (!ctx.cr6.eq) goto loc_824031EC;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(r23.u32, 3, ctx.xer);
	// beq cr6,0x824033a0
	if (ctx.cr6.eq) goto loc_824033A0;
loc_824031EC:
	// lbz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 0);
	// bl 0x826a0860
	ctx.lr = 0x824031F4;
	sub_826A0860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82403228
	if (!ctx.cr0.eq) goto loc_82403228;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// bne cr6,0x82403234
	if (!ctx.cr6.eq) goto loc_82403234;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82403228
	if (ctx.cr6.eq) goto loc_82403228;
loc_82403210:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82403228
	if (ctx.cr6.eq) goto loc_82403228;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bne 0x82403210
	if (!ctx.cr0.eq) goto loc_82403210;
loc_82403228:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// b 0x82403388
	goto loc_82403388;
loc_82403234:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8240327c
	if (ctx.cr6.eq) goto loc_8240327C;
loc_82403240:
	// lbz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 0);
	// bl 0x826a0860
	ctx.lr = 0x82403248;
	sub_826A0860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8240327c
	if (!ctx.cr0.eq) goto loc_8240327C;
	// lbz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U8(r27.u32 + 0);
	// bl 0x826a0820
	ctx.lr = 0x82403258;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82403390
	if (ctx.cr0.eq) goto loc_82403390;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// mulli r10,r31,10
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(10));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r31,r11,-48
	r31.s64 = ctx.r11.s64 + -48;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bne 0x82403240
	if (!ctx.cr0.eq) goto loc_82403240;
loc_8240327C:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// blt cr6,0x82403378
	if (ctx.cr6.lt) goto loc_82403378;
	// beq cr6,0x82403318
	if (ctx.cr6.eq) goto loc_82403318;
	// cmplwi cr6,r23,3
	ctx.cr6.compare<uint32_t>(r23.u32, 3, ctx.xer);
	// blt cr6,0x82403310
	if (ctx.cr6.lt) goto loc_82403310;
	// beq cr6,0x824032ec
	if (ctx.cr6.eq) goto loc_824032EC;
	// cmplwi cr6,r23,5
	ctx.cr6.compare<uint32_t>(r23.u32, 5, ctx.xer);
	// blt cr6,0x824032cc
	if (ctx.cr6.lt) goto loc_824032CC;
	// bne cr6,0x82403384
	if (!ctx.cr6.eq) goto loc_82403384;
	// mulli r11,r31,255
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(255));
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// divwu r11,r11,r24
	ctx.r11.u64 = uint32_t(r24.u32 ? ctx.r11.u32 / r24.u32 : 0);
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x8240344c
	if (ctx.cr6.eq) goto loc_8240344C;
	// li r23,2
	r23.s64 = 2;
	// b 0x82403384
	goto loc_82403384;
loc_824032CC:
	// mulli r11,r31,255
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(255));
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// divwu r11,r11,r24
	ctx.r11.u64 = uint32_t(r24.u32 ? ctx.r11.u32 / r24.u32 : 0);
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82403384
	goto loc_82403384;
loc_824032EC:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bge cr6,0x82403390
	if (!ctx.cr6.lt) goto loc_82403390;
	// mulli r11,r31,255
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(255));
	// divwu r11,r11,r24
	ctx.r11.u64 = uint32_t(r24.u32 ? ctx.r11.u32 / r24.u32 : 0);
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwimi r10,r11,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x82403384
	goto loc_82403384;
loc_82403310:
	// mr r24,r31
	r24.u64 = r31.u64;
	// b 0x8240337c
	goto loc_8240337C;
loc_82403318:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82403390
	if (ctx.cr6.eq) goto loc_82403390;
	// mullw r11,r31,r25
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(r25.s32);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82403334;
	sub_823F02B8(ctx, base);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82403454
	if (ctx.cr0.eq) goto loc_82403454;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// stw r25,12(r26)
	REX_STORE_U32(r26.u32 + 12, r25.u32);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,16(r26)
	REX_STORE_U32(r26.u32 + 16, r31.u32);
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// stw r22,56(r26)
	REX_STORE_U32(r26.u32 + 56, r22.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,48(r26)
	REX_STORE_U32(r26.u32 + 48, ctx.r10.u32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r9,52(r26)
	REX_STORE_U32(r26.u32 + 52, ctx.r9.u32);
	// add r30,r30,r3
	r30.u64 = r30.u64 + ctx.r3.u64;
	// stw r22,20(r26)
	REX_STORE_U32(r26.u32 + 20, r22.u32);
	// b 0x82403384
	goto loc_82403384;
loc_82403378:
	// mr r25,r31
	r25.u64 = r31.u64;
loc_8240337C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82403390
	if (ctx.cr6.eq) goto loc_82403390;
loc_82403384:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_82403388:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824031dc
	if (!ctx.cr6.eq) goto loc_824031DC;
loc_82403390:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82403398:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_824033A0:
	// cmplwi cr6,r24,255
	ctx.cr6.compare<uint32_t>(r24.u32, 255, ctx.xer);
	// bgt cr6,0x82403390
	if (ctx.cr6.gt) goto loc_82403390;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x824033c4
	if (!ctx.cr6.gt) goto loc_824033C4;
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x824033c4
	if (!ctx.cr6.eq) goto loc_824033C4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
loc_824033C4:
	// addic. r10,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	ctx.r10.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// beq 0x82403430
	if (ctx.cr0.eq) goto loc_82403430;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
loc_824033D4:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bge cr6,0x82403430
	if (!ctx.cr6.lt) goto loc_82403430;
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// lbz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// addic. r10,r10,-3
	ctx.xer.ca = ctx.r10.u32 > 2;
	ctx.r10.s64 = ctx.r10.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzu r9,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// mulli r6,r6,255
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(255));
	// mulli r9,r9,255
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(255));
	// divwu r9,r9,r24
	ctx.r9.u64 = uint32_t(r24.u32 ? ctx.r9.u32 / r24.u32 : 0);
	// divwu r6,r6,r24
	ctx.r6.u64 = uint32_t(r24.u32 ? ctx.r6.u32 / r24.u32 : 0);
	// rlwimi r7,r9,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// mulli r9,r8,255
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(255));
	// or r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 | ctx.r6.u64;
	// divwu r9,r9,r24
	ctx.r9.u64 = uint32_t(r24.u32 ? ctx.r9.u32 / r24.u32 : 0);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// twllei r24,0
	if (r24.s32 == 0 || r24.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x824033d4
	if (!ctx.cr0.eq) goto loc_824033D4;
loc_82403430:
	// subf r11,r29,r30
	ctx.r11.u64 = r30.u64 - r29.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82403398
	goto loc_82403398;
loc_8240344C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82403398
	goto loc_82403398;
loc_82403454:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82403398
	goto loc_82403398;
}

DEFINE_REX_FUNC(sub_82412248) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82412250;
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
	// bl 0x82408ef8
	ctx.lr = 0x82412268;
	sub_82408EF8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r10,20280
	ctx.r10.s64 = ctx.r10.s64 + 20280;
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
	// bl 0x823f02b8
	ctx.lr = 0x824122C4;
	sub_823F02B8(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824122d4
	if (!ctx.cr0.eq) goto loc_824122D4;
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
loc_824122D4:
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
	// beq 0x82412314
	if (ctx.cr0.eq) goto loc_82412314;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82412304
	if (ctx.cr6.eq) goto loc_82412304;
	// addis r11,r11,-504
	ctx.r11.s64 = ctx.r11.s64 + -33030144;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82412314
	if (ctx.cr0.eq) goto loc_82412314;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82412320
	if (!ctx.cr6.eq) goto loc_82412320;
loc_82412304:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// b 0x82412320
	goto loc_82412320;
loc_82412314:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
loc_82412320:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82417110) {
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
	ctx.lr = 0x82417118;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82417134;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r24,0
	r24.s64 = 0;
	// beq 0x8241715c
	if (ctx.cr0.eq) goto loc_8241715C;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r24,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// stw r24,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r24.u32);
	// b 0x82417160
	goto loc_82417160;
loc_8241715C:
	// mr r23,r24
	r23.u64 = r24.u64;
loc_82417160:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8241743c
	if (ctx.cr6.eq) goto loc_8241743C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82417350
	if (ctx.cr6.eq) goto loc_82417350;
	// lwz r3,632(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 632);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82417350
	if (!ctx.cr6.lt) goto loc_82417350;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// bne cr6,0x82417350
	if (!ctx.cr6.eq) goto loc_82417350;
	// addi r28,r30,640
	r28.s64 = r30.s64 + 640;
	// lwz r4,672(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 672);
	// addi r26,r23,4
	r26.s64 = r23.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// bl 0x8241b778
	ctx.lr = 0x824171AC;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8241746c
	if (ctx.cr0.lt) goto loc_8241746C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r11,28264
	r27.s64 = ctx.r11.s64 + 28264;
	// addi r25,r10,23860
	r25.s64 = ctx.r10.s64 + 23860;
loc_824171C4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,672(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,632(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x824171D4;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8241746c
	if (ctx.cr0.lt) goto loc_8241746C;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r7,9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 9, ctx.xer);
	// bne cr6,0x82417318
	if (!ctx.cr6.eq) goto loc_82417318;
	// lwz r8,0(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82417250
	if (ctx.cr6.eq) goto loc_82417250;
	// lwz r7,648(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 648);
loc_824171F8:
	// lwz r10,24(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82417200:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x82417224
	if (ctx.cr0.eq) goto loc_82417224;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82417200
	if (ctx.cr6.eq) goto loc_82417200;
loc_82417224:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241723c
	if (ctx.cr0.eq) goto loc_8241723C;
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x824171f8
	if (!ctx.cr6.eq) goto loc_824171F8;
	// b 0x82417250
	goto loc_82417250;
loc_8241723C:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,1511
	ctx.r5.s64 = 1511;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82417250;
	sub_8241A4F0(ctx, base);
loc_82417250:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x82417258;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82417270
	if (ctx.cr0.eq) goto loc_82417270;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82444d78
	ctx.lr = 0x82417268;
	sub_82444D78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82417274
	goto loc_82417274;
loc_82417270:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82417274:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8241743c
	if (ctx.cr6.eq) goto loc_8241743C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,672(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,632(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 632);
	// addi r29,r11,12
	r29.s64 = ctx.r11.s64 + 12;
	// bl 0x8241b778
	ctx.lr = 0x82417294;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8241746c
	if (ctx.cr0.lt) goto loc_8241746C;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82417318
	if (!ctx.cr6.eq) goto loc_82417318;
	// addi r8,r30,648
	ctx.r8.s64 = r30.s64 + 648;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_824172B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x824172d8
	if (ctx.cr0.eq) goto loc_824172D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824172b4
	if (ctx.cr6.eq) goto loc_824172B4;
loc_824172D8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824171c4
	if (ctx.cr0.eq) goto loc_824171C4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r11,r11,23452
	ctx.r11.s64 = ctx.r11.s64 + 23452;
loc_824172EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82417310
	if (ctx.cr0.eq) goto loc_82417310;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824172ec
	if (ctx.cr6.eq) goto loc_824172EC;
loc_82417310:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82417350
	if (ctx.cr0.eq) goto loc_82417350;
loc_82417318:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// beq cr6,0x8241732c
	if (ctx.cr6.eq) goto loc_8241732C;
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// bne cr6,0x82417330
	if (!ctx.cr6.eq) goto loc_82417330;
loc_8241732C:
	// stw r29,76(r30)
	REX_STORE_U32(r30.u32 + 76, r29.u32);
loc_82417330:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8241a9d8
	ctx.lr = 0x82417340;
	sub_8241A9D8(ctx, base);
	// lis r31,-32768
	r31.s64 = -2147483648;
	// stw r29,80(r30)
	REX_STORE_U32(r30.u32 + 80, r29.u32);
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x8241746c
	goto loc_8241746C;
loc_82417350:
	// addi r28,r23,8
	r28.s64 = r23.s64 + 8;
loc_82417354:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r29,r30,640
	r29.s64 = r30.s64 + 640;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824173ac
	if (ctx.cr6.eq) goto loc_824173AC;
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,640(r30)
	REX_STORE_U64(r30.u32 + 640, ctx.r10.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,648(r30)
	REX_STORE_U64(r30.u32 + 648, ctx.r10.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,656(r30)
	REX_STORE_U64(r30.u32 + 656, ctx.r10.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,664(r30)
	REX_STORE_U64(r30.u32 + 664, ctx.r10.u64);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// stw r24,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r24.u32);
	// lwz r11,632(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 632);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,656(r30)
	REX_STORE_U32(r30.u32 + 656, ctx.r10.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,660(r30)
	REX_STORE_U32(r30.u32 + 660, ctx.r11.u32);
	// b 0x824173c4
	goto loc_824173C4;
loc_824173AC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,672(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,632(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x824173BC;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8241746c
	if (ctx.cr0.lt) goto loc_8241746C;
loc_824173C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82417448
	if (ctx.cr6.eq) goto loc_82417448;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82417448
	if (ctx.cr6.eq) goto loc_82417448;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82444750
	ctx.lr = 0x824173E0;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824173f8
	if (ctx.cr0.eq) goto loc_824173F8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82444d78
	ctx.lr = 0x824173F0;
	sub_82444D78(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824173fc
	goto loc_824173FC;
loc_824173F8:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_824173FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8241743c
	if (ctx.cr6.eq) goto loc_8241743C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,668(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 668);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82444608
	ctx.lr = 0x82417414;
	sub_82444608(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8241743c
	if (ctx.cr0.eq) goto loc_8241743C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,668(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 668);
	// lwz r4,664(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 664);
	// bl 0x826a1e70
	ctx.lr = 0x8241742C;
	sub_826A1E70(ctx, base);
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// b 0x82417354
	goto loc_82417354;
loc_8241743C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8241746c
	goto loc_8241746C;
loc_82417448:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82416cf0
	ctx.lr = 0x8241745C;
	sub_82416CF0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8241746c
	if (ctx.cr0.lt) goto loc_8241746C;
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_8241746C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82417480
	if (ctx.cr6.eq) goto loc_82417480;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82415a50
	ctx.lr = 0x82417480;
	sub_82415A50(ctx, base);
loc_82417480:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8243EEE8) {
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
	ctx.lr = 0x8243EEF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,121
	ctx.r10.s64 = 121;
	// lwz r30,420(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 420);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r30.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r28.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8243EF30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r27,97
	r27.s64 = 97;
loc_8243EF34:
	// cmpwi cr6,r30,192
	ctx.cr6.compare<int32_t>(r30.s32, 192, ctx.xer);
	// bge cr6,0x8243ef44
	if (!ctx.cr6.lt) goto loc_8243EF44;
loc_8243EF3C:
	// li r31,2
	r31.s64 = 2;
	// b 0x8243efb0
	goto loc_8243EFB0;
loc_8243EF44:
	// cmpwi cr6,r30,208
	ctx.cr6.compare<int32_t>(r30.s32, 208, ctx.xer);
	// blt cr6,0x8243efac
	if (ctx.cr6.lt) goto loc_8243EFAC;
	// cmpwi cr6,r30,215
	ctx.cr6.compare<int32_t>(r30.s32, 215, ctx.xer);
	// bgt cr6,0x8243efac
	if (ctx.cr6.gt) goto loc_8243EFAC;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8243efac
	if (ctx.cr6.eq) goto loc_8243EFAC;
	// addi r11,r28,2
	ctx.r11.s64 = r28.s64 + 2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8243efac
	if (ctx.cr6.eq) goto loc_8243EFAC;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8243ef3c
	if (ctx.cr6.eq) goto loc_8243EF3C;
	// addi r11,r28,-2
	ctx.r11.s64 = r28.s64 + -2;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8243ef3c
	if (ctx.cr6.eq) goto loc_8243EF3C;
	// li r31,1
	r31.s64 = 1;
	// b 0x8243efb0
	goto loc_8243EFB0;
loc_8243EFAC:
	// li r31,3
	r31.s64 = 3;
loc_8243EFB0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r27.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r30,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r30.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r31,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r31.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8243EFE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// beq cr6,0x8243f028
	if (ctx.cr6.eq) goto loc_8243F028;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// beq cr6,0x8243f004
	if (ctx.cr6.eq) goto loc_8243F004;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// bne cr6,0x8243ef34
	if (!ctx.cr6.eq) goto loc_8243EF34;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8243F004:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8243e890
	ctx.lr = 0x8243F00C;
	sub_8243E890(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8243f01c
	if (ctx.cr6.eq) goto loc_8243F01C;
	// lwz r30,420(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 420);
	// b 0x8243ef34
	goto loc_8243EF34;
loc_8243F01C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8243F028:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,420(r29)
	REX_STORE_U32(r29.u32 + 420, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824447B0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-8116
	ctx.r10.s64 = ctx.r10.s64 + -8116;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82444B50) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82444b84
	if (ctx.cr6.eq) goto loc_82444B84;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82444b8c
	if (ctx.cr6.eq) goto loc_82444B8C;
loc_82444B84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82444c1c
	goto loc_82444C1C;
loc_82444B8C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82444b84
	if (!ctx.cr6.eq) goto loc_82444B84;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82444b84
	if (!ctx.cr6.eq) goto loc_82444B84;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444bd0
	if (ctx.cr6.eq) goto loc_82444BD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82444bdc
	goto loc_82444BDC;
loc_82444BD0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82444BDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82444b84
	if (ctx.cr6.eq) goto loc_82444B84;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444c08
	if (ctx.cr6.eq) goto loc_82444C08;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82444c14
	goto loc_82444C14;
loc_82444C08:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82444C14:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82444C1C:
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

DEFINE_REX_FUNC(sub_82447F40) {
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
	// beq cr6,0x82448030
	if (ctx.cr6.eq) goto loc_82448030;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82448030
	if (!ctx.cr6.eq) goto loc_82448030;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82448030
	if (!ctx.cr6.eq) goto loc_82448030;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82447fa8
	if (ctx.cr6.eq) goto loc_82447FA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447FA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82447fb4
	goto loc_82447FB4;
loc_82447FA8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82447FB4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82448030
	if (ctx.cr6.eq) goto loc_82448030;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82447fe0
	if (ctx.cr6.eq) goto loc_82447FE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82447fec
	goto loc_82447FEC;
loc_82447FE0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82447FEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82448030
	if (ctx.cr6.eq) goto loc_82448030;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82448018
	if (ctx.cr6.eq) goto loc_82448018;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448014;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82448024
	goto loc_82448024;
loc_82448018:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82448024:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82448034
	if (!ctx.cr6.eq) goto loc_82448034;
loc_82448030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82448034:
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

DEFINE_REX_FUNC(sub_82453250) {
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
	ctx.lr = 0x82453258;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,1032
	ctx.r11.s64 = ctx.r3.s64 + 1032;
	// li r25,0
	r25.s64 = 0;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r26,-1
	r26.s64 = -1;
	// addi r24,r3,32
	r24.s64 = ctx.r3.s64 + 32;
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// stw r24,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r24.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// sth r25,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, r25.u16);
	// addi r27,r11,-6680
	r27.s64 = ctx.r11.s64 + -6680;
	// addi r23,r10,23844
	r23.s64 = ctx.r10.s64 + 23844;
loc_8245329C:
	// addi r11,r27,400
	ctx.r11.s64 = r27.s64 + 400;
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824533a0
	if (!ctx.cr0.eq) goto loc_824533A0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x824532d4
	if (!ctx.cr6.lt) goto loc_824532D4;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3032);
	// bl 0x82450110
	ctx.lr = 0x824532C4;
	sub_82450110(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824532d4
	if (!ctx.cr0.lt) goto loc_824532D4;
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_824532D4:
	// addi r11,r27,880
	ctx.r11.s64 = r27.s64 + 880;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82453360
	if (ctx.cr0.eq) goto loc_82453360;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82453360
	if (ctx.cr0.lt) goto loc_82453360;
	// cmpwi cr6,r11,917
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 917, ctx.xer);
	// bgt cr6,0x82453360
	if (ctx.cr6.gt) goto loc_82453360;
	// addi r8,r27,3584
	ctx.r8.s64 = r27.s64 + 3584;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82453360
	if (!ctx.cr6.eq) goto loc_82453360;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82453a0c
	if (!ctx.cr6.lt) goto loc_82453A0C;
	// addi r9,r27,1744
	ctx.r9.s64 = r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// ble cr6,0x8245329c
	if (!ctx.cr6.gt) goto loc_8245329C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8245329c
	goto loc_8245329C;
loc_82453360:
	// addi r11,r27,1264
	ctx.r11.s64 = r27.s64 + 1264;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82453938
	if (ctx.cr0.eq) goto loc_82453938;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82453938
	if (ctx.cr0.lt) goto loc_82453938;
	// cmpwi cr6,r11,917
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 917, ctx.xer);
	// bgt cr6,0x82453938
	if (ctx.cr6.gt) goto loc_82453938;
	// addi r9,r27,3584
	ctx.r9.s64 = r27.s64 + 3584;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r11,r9
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82453938
	if (!ctx.cr6.eq) goto loc_82453938;
	// addi r10,r27,1744
	ctx.r10.s64 = r27.s64 + 1744;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
loc_824533A0:
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r9,r27,200
	ctx.r9.s64 = r27.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// lhax r29,r30,r9
	r29.s64 = int16_t(REX_LOAD_U16(r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x82453820
	if (ctx.cr6.gt) goto loc_82453820;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,1616
	ctx.r12.s64 = ctx.r12.s64 + 1616;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32187
	ctx.r12.s64 = -2109407232;
	// addi r12,r12,13300
	ctx.r12.s64 = ctx.r12.s64 + 13300;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_824533F4;
	case 1:
		goto loc_824533FC;
	case 2:
		goto loc_82453408;
	case 3:
		goto loc_82453414;
	case 4:
		goto loc_82453420;
	case 5:
		goto loc_8245342C;
	case 6:
		goto loc_82453438;
	case 7:
		goto loc_82453444;
	case 8:
		goto loc_8245344C;
	case 9:
		goto loc_82453458;
	case 10:
		goto loc_82453464;
	case 11:
		goto loc_82453470;
	case 12:
		goto loc_8245347C;
	case 13:
		goto loc_82453488;
	case 14:
		goto loc_82453494;
	case 15:
		goto loc_824534A0;
	case 16:
		goto loc_824534AC;
	case 17:
		goto loc_824534B8;
	case 18:
		goto loc_824534C4;
	case 19:
		goto loc_824534D0;
	case 20:
		goto loc_824534DC;
	case 21:
		goto loc_824534E8;
	case 22:
		goto loc_824534F4;
	case 23:
		goto loc_82453500;
	case 24:
		goto loc_8245350C;
	case 25:
		goto loc_82453518;
	case 26:
		goto loc_82453524;
	case 27:
		goto loc_82453530;
	case 28:
		goto loc_8245353C;
	case 29:
		goto loc_82453548;
	case 30:
		goto loc_82453554;
	case 31:
		goto loc_82453560;
	case 32:
		goto loc_8245356C;
	case 33:
		goto loc_82453578;
	case 34:
		goto loc_82453584;
	case 35:
		goto loc_82453590;
	case 36:
		goto loc_8245359C;
	case 37:
		goto loc_824535A8;
	case 38:
		goto loc_824535B4;
	case 39:
		goto loc_824535C0;
	case 40:
		goto loc_824535CC;
	case 41:
		goto loc_824535D8;
	case 42:
		goto loc_824535E4;
	case 43:
		goto loc_824535F0;
	case 44:
		goto loc_824535FC;
	case 45:
		goto loc_82453608;
	case 46:
		goto loc_82453614;
	case 47:
		goto loc_82453620;
	case 48:
		goto loc_8245362C;
	case 49:
		goto loc_82453638;
	case 50:
		goto loc_82453644;
	case 51:
		goto loc_82453650;
	case 52:
		goto loc_8245365C;
	case 53:
		goto loc_82453668;
	case 54:
		goto loc_82453674;
	case 55:
		goto loc_82453680;
	case 56:
		goto loc_8245368C;
	case 57:
		goto loc_82453698;
	case 58:
		goto loc_824536A4;
	case 59:
		goto loc_824536B0;
	case 60:
		goto loc_824536BC;
	case 61:
		goto loc_824536C8;
	case 62:
		goto loc_824536D4;
	case 63:
		goto loc_824536E0;
	case 64:
		goto loc_824536EC;
	case 65:
		goto loc_824536F4;
	case 66:
		goto loc_824536FC;
	case 67:
		goto loc_82453708;
	case 68:
		goto loc_82453714;
	case 69:
		goto loc_82453720;
	case 70:
		goto loc_8245372C;
	case 71:
		goto loc_82453738;
	case 72:
		goto loc_82453744;
	case 73:
		goto loc_82453750;
	case 74:
		goto loc_8245375C;
	case 75:
		goto loc_82453768;
	case 76:
		goto loc_82453770;
	case 77:
		goto loc_82453778;
	case 78:
		goto loc_82453780;
	case 79:
		goto loc_82453788;
	case 80:
		goto loc_82453790;
	case 81:
		goto loc_82453798;
	case 82:
		goto loc_824537A0;
	case 83:
		goto loc_824537A8;
	case 84:
		goto loc_824537B0;
	case 85:
		goto loc_824537B8;
	case 86:
		goto loc_824537C0;
	case 87:
		goto loc_824537C8;
	case 88:
		goto loc_824537D0;
	case 89:
		goto loc_824537D0;
	case 90:
		goto loc_824537D8;
	case 91:
		goto loc_824537E0;
	case 92:
		goto loc_824537E8;
	case 93:
		goto loc_824537F0;
	case 94:
		goto loc_824537F8;
	case 95:
		goto loc_82453800;
	case 96:
		goto loc_82453808;
	case 97:
		goto loc_82453810;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824533F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82453814
	goto loc_82453814;
loc_824533FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82453818
	goto loc_82453818;
loc_82453408:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82453818
	goto loc_82453818;
loc_82453414:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82453818
	goto loc_82453818;
loc_82453420:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82453818
	goto loc_82453818;
loc_8245342C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82453818
	goto loc_82453818;
loc_82453438:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82453818
	goto loc_82453818;
loc_82453444:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82453814
	goto loc_82453814;
loc_8245344C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82453818
	goto loc_82453818;
loc_82453458:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x82453818
	goto loc_82453818;
loc_82453464:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82453818
	goto loc_82453818;
loc_82453470:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82453818
	goto loc_82453818;
loc_8245347C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x82453818
	goto loc_82453818;
loc_82453488:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82453818
	goto loc_82453818;
loc_82453494:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x82453818
	goto loc_82453818;
loc_824534A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x82453818
	goto loc_82453818;
loc_824534AC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82453818
	goto loc_82453818;
loc_824534B8:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x82453818
	goto loc_82453818;
loc_824534C4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x82453818
	goto loc_82453818;
loc_824534D0:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x82453818
	goto loc_82453818;
loc_824534DC:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82453818
	goto loc_82453818;
loc_824534E8:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82453818
	goto loc_82453818;
loc_824534F4:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x82453818
	goto loc_82453818;
loc_82453500:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x82453818
	goto loc_82453818;
loc_8245350C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x82453818
	goto loc_82453818;
loc_82453518:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x82453818
	goto loc_82453818;
loc_82453524:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x82453818
	goto loc_82453818;
loc_82453530:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x82453818
	goto loc_82453818;
loc_8245353C:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x82453818
	goto loc_82453818;
loc_82453548:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x82453818
	goto loc_82453818;
loc_82453554:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x82453818
	goto loc_82453818;
loc_82453560:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x82453818
	goto loc_82453818;
loc_8245356C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x82453818
	goto loc_82453818;
loc_82453578:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x82453818
	goto loc_82453818;
loc_82453584:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x82453818
	goto loc_82453818;
loc_82453590:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x82453818
	goto loc_82453818;
loc_8245359C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x82453818
	goto loc_82453818;
loc_824535A8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x82453818
	goto loc_82453818;
loc_824535B4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82453818
	goto loc_82453818;
loc_824535C0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82453818
	goto loc_82453818;
loc_824535CC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x82453818
	goto loc_82453818;
loc_824535D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x82453818
	goto loc_82453818;
loc_824535E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x82453818
	goto loc_82453818;
loc_824535F0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x82453818
	goto loc_82453818;
loc_824535FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x82453818
	goto loc_82453818;
loc_82453608:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x82453818
	goto loc_82453818;
loc_82453614:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x82453818
	goto loc_82453818;
loc_82453620:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x82453818
	goto loc_82453818;
loc_8245362C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x82453818
	goto loc_82453818;
loc_82453638:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x82453818
	goto loc_82453818;
loc_82453644:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x82453818
	goto loc_82453818;
loc_82453650:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x82453818
	goto loc_82453818;
loc_8245365C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x82453818
	goto loc_82453818;
loc_82453668:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x82453818
	goto loc_82453818;
loc_82453674:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x82453818
	goto loc_82453818;
loc_82453680:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x82453818
	goto loc_82453818;
loc_8245368C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x82453818
	goto loc_82453818;
loc_82453698:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x82453818
	goto loc_82453818;
loc_824536A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82453818
	goto loc_82453818;
loc_824536B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x82453818
	goto loc_82453818;
loc_824536BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x82453818
	goto loc_82453818;
loc_824536C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,63
	ctx.r4.s64 = 63;
	// b 0x82453818
	goto loc_82453818;
loc_824536D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x82453818
	goto loc_82453818;
loc_824536E0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,65
	ctx.r4.s64 = 65;
	// b 0x82453818
	goto loc_82453818;
loc_824536EC:
	// li r4,66
	ctx.r4.s64 = 66;
	// b 0x82453814
	goto loc_82453814;
loc_824536F4:
	// li r4,67
	ctx.r4.s64 = 67;
	// b 0x82453814
	goto loc_82453814;
loc_824536FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,68
	ctx.r4.s64 = 68;
	// b 0x82453818
	goto loc_82453818;
loc_82453708:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,69
	ctx.r4.s64 = 69;
	// b 0x82453818
	goto loc_82453818;
loc_82453714:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,70
	ctx.r4.s64 = 70;
	// b 0x82453818
	goto loc_82453818;
loc_82453720:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,71
	ctx.r4.s64 = 71;
	// b 0x82453818
	goto loc_82453818;
loc_8245372C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x82453818
	goto loc_82453818;
loc_82453738:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// b 0x82453818
	goto loc_82453818;
loc_82453744:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,74
	ctx.r4.s64 = 74;
	// b 0x82453818
	goto loc_82453818;
loc_82453750:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// b 0x82453818
	goto loc_82453818;
loc_8245375C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// b 0x82453818
	goto loc_82453818;
loc_82453768:
	// li r4,77
	ctx.r4.s64 = 77;
	// b 0x82453814
	goto loc_82453814;
loc_82453770:
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x82453814
	goto loc_82453814;
loc_82453778:
	// li r4,79
	ctx.r4.s64 = 79;
	// b 0x82453814
	goto loc_82453814;
loc_82453780:
	// li r4,80
	ctx.r4.s64 = 80;
	// b 0x82453814
	goto loc_82453814;
loc_82453788:
	// li r4,81
	ctx.r4.s64 = 81;
	// b 0x82453814
	goto loc_82453814;
loc_82453790:
	// li r4,82
	ctx.r4.s64 = 82;
	// b 0x82453814
	goto loc_82453814;
loc_82453798:
	// li r4,83
	ctx.r4.s64 = 83;
	// b 0x82453814
	goto loc_82453814;
loc_824537A0:
	// li r4,84
	ctx.r4.s64 = 84;
	// b 0x82453814
	goto loc_82453814;
loc_824537A8:
	// li r4,85
	ctx.r4.s64 = 85;
	// b 0x82453814
	goto loc_82453814;
loc_824537B0:
	// li r4,87
	ctx.r4.s64 = 87;
	// b 0x82453814
	goto loc_82453814;
loc_824537B8:
	// li r4,89
	ctx.r4.s64 = 89;
	// b 0x82453814
	goto loc_82453814;
loc_824537C0:
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x82453814
	goto loc_82453814;
loc_824537C8:
	// li r4,86
	ctx.r4.s64 = 86;
	// b 0x82453814
	goto loc_82453814;
loc_824537D0:
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x82453814
	goto loc_82453814;
loc_824537D8:
	// li r4,92
	ctx.r4.s64 = 92;
	// b 0x82453814
	goto loc_82453814;
loc_824537E0:
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x82453814
	goto loc_82453814;
loc_824537E8:
	// li r4,94
	ctx.r4.s64 = 94;
	// b 0x82453814
	goto loc_82453814;
loc_824537F0:
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x82453814
	goto loc_82453814;
loc_824537F8:
	// li r4,96
	ctx.r4.s64 = 96;
	// b 0x82453814
	goto loc_82453814;
loc_82453800:
	// li r4,97
	ctx.r4.s64 = 97;
	// b 0x82453814
	goto loc_82453814;
loc_82453808:
	// li r4,98
	ctx.r4.s64 = 98;
	// b 0x82453814
	goto loc_82453814;
loc_82453810:
	// li r4,99
	ctx.r4.s64 = 99;
loc_82453814:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82453818:
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3032);
	// bl 0x82452938
	ctx.lr = 0x82453820;
	sub_82452938(ctx, base);
loc_82453820:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r28,r9
	ctx.r10.u64 = ctx.r9.u64 - r28.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lhax r10,r30,r27
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + r27.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824538b8
	if (!ctx.cr0.eq) goto loc_824538B8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x824538b8
	if (!ctx.cr6.eq) goto loc_824538B8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,25
	ctx.r10.s64 = 25;
	// li r30,25
	r30.s64 = 25;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x824538a4
	if (!ctx.cr6.lt) goto loc_824538A4;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3032);
	// bl 0x82450110
	ctx.lr = 0x82453894;
	sub_82450110(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824538a4
	if (!ctx.cr0.lt) goto loc_824538A4;
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
loc_824538A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8245329c
	if (!ctx.cr6.eq) goto loc_8245329C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82453a20
	goto loc_82453A20;
loc_824538B8:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,1648
	ctx.r10.s64 = r27.s64 + 1648;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824538fc
	if (ctx.cr0.eq) goto loc_824538FC;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x824538fc
	if (ctx.cr0.lt) goto loc_824538FC;
	// cmpwi cr6,r10,917
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 917, ctx.xer);
	// bgt cr6,0x824538fc
	if (ctx.cr6.gt) goto loc_824538FC;
	// addi r8,r27,3584
	ctx.r8.s64 = r27.s64 + 3584;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x824538fc
	if (!ctx.cr6.eq) goto loc_824538FC;
	// addi r11,r27,1744
	ctx.r11.s64 = r27.s64 + 1744;
	// lhax r30,r10,r11
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x82453904
	goto loc_82453904;
loc_824538FC:
	// addi r11,r27,784
	ctx.r11.s64 = r27.s64 + 784;
	// lhax r30,r9,r11
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32));
loc_82453904:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82453a0c
	if (!ctx.cr6.lt) goto loc_82453A0C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
loc_82453924:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8245329c
	goto loc_8245329C;
loc_82453938:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8245395c
	if (!ctx.cr6.eq) goto loc_8245395C;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8244be60
	ctx.lr = 0x82453950;
	sub_8244BE60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8245395C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x824539f8
	if (!ctx.cr6.lt) goto loc_824539F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82453970:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r27,880
	ctx.r10.s64 = r27.s64 + 880;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824539b0
	if (ctx.cr0.eq) goto loc_824539B0;
	// addic. r10,r10,256
	ctx.xer.ca = ctx.r10.u32 > 4294967039;
	ctx.r10.s64 = ctx.r10.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x824539b0
	if (ctx.cr0.lt) goto loc_824539B0;
	// cmpwi cr6,r10,917
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 917, ctx.xer);
	// bgt cr6,0x824539b0
	if (ctx.cr6.gt) goto loc_824539B0;
	// addi r9,r27,3584
	ctx.r9.s64 = r27.s64 + 3584;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x824539d0
	if (ctx.cr6.eq) goto loc_824539D0;
loc_824539B0:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// ble cr6,0x82453a1c
	if (!ctx.cr6.gt) goto loc_82453A1C;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// b 0x82453970
	goto loc_82453970;
loc_824539D0:
	// addi r9,r31,1030
	ctx.r9.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82453a0c
	if (!ctx.cr6.lt) goto loc_82453A0C;
	// addi r9,r27,1744
	ctx.r9.s64 = r27.s64 + 1744;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// b 0x82453924
	goto loc_82453924;
loc_824539F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82453a1c
	if (ctx.cr6.eq) goto loc_82453A1C;
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x8245329c
	goto loc_8245329C;
loc_82453A0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24292
	ctx.r4.s64 = ctx.r11.s64 + 24292;
	// bl 0x8244be60
	ctx.lr = 0x82453A1C;
	sub_8244BE60(ctx, base);
loc_82453A1C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82453A20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82485C88) {
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
	ctx.lr = 0x82485C90;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82481098
	ctx.lr = 0x82485C9C;
	sub_82481098(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r23,0
	r23.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485cfc
	if (!ctx.cr6.gt) goto loc_82485CFC;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82485CB8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stw r23,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r23.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82485ce8
	if (!ctx.cr0.eq) goto loc_82485CE8;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
loc_82485CE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82485cb8
	if (ctx.cr6.lt) goto loc_82485CB8;
loc_82485CFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485d3c
	if (!ctx.cr6.gt) goto loc_82485D3C;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82485D10:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r23,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, r23.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, r23.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82485d10
	if (ctx.cr6.lt) goto loc_82485D10;
loc_82485D3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481098
	ctx.lr = 0x82485D44;
	sub_82481098(ctx, base);
	// lwz r24,12(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq 0x82485e4c
	if (ctx.cr0.eq) goto loc_82485E4C;
	// rlwinm r26,r24,2,0,29
	r26.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82485D58:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r26,r26,-4
	r26.s64 = r26.s64 + -4;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// lwzx r4,r26,r11
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82485e44
	if (ctx.cr0.eq) goto loc_82485E44;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82485da0
	if (ctx.cr6.lt) goto loc_82485DA0;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82485da0
	if (ctx.cr6.gt) goto loc_82485DA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247fea8
	ctx.lr = 0x82485D9C;
	sub_8247FEA8(ctx, base);
	// b 0x82485dbc
	goto loc_82485DBC;
loc_82485DA0:
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82485db8
	if (!ctx.cr6.eq) goto loc_82485DB8;
	// bl 0x8247a5d0
	ctx.lr = 0x82485DB4;
	sub_8247A5D0(ctx, base);
	// b 0x82485dbc
	goto loc_82485DBC;
loc_82485DB8:
	// bl 0x82480408
	ctx.lr = 0x82485DBC;
	sub_82480408(ctx, base);
loc_82485DBC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82485ff4
	if (ctx.cr0.lt) goto loc_82485FF4;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// bge cr6,0x82485e00
	if (!ctx.cr6.lt) goto loc_82485E00;
	// rlwinm r29,r27,2,0,29
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82485DD8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// bl 0x82480628
	ctx.lr = 0x82485DE8;
	sub_82480628(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82485ff4
	if (ctx.cr0.lt) goto loc_82485FF4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// blt cr6,0x82485dd8
	if (ctx.cr6.lt) goto loc_82485DD8;
loc_82485E00:
	// subf r11,r27,r30
	ctx.r11.u64 = r30.u64 - r27.u64;
	// rlwinm. r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82485e44
	if (ctx.cr0.eq) goto loc_82485E44;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82485E18:
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,-4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r7,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r7.u32);
	// bdnz 0x82485e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82485E18;
loc_82485E44:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x82485d58
	if (!ctx.cr6.eq) goto loc_82485D58;
loc_82485E4C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - r24.u64;
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82485eac
	if (ctx.cr0.eq) goto loc_82485EAC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82485E68:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// bdnz 0x82485e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82485E68;
loc_82485EAC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82485ed0
	if (ctx.cr6.eq) goto loc_82485ED0;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82485EBC:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// bdnz 0x82485ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82485EBC;
loc_82485ED0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x82485ED8;
	sub_8247D160(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82485ee8
	if (ctx.cr0.eq) goto loc_82485EE8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82485ff4
	if (ctx.cr6.lt) goto loc_82485FF4;
loc_82485EE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485f28
	if (!ctx.cr6.gt) goto loc_82485F28;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82485EFC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82485f14
	if (!ctx.cr0.eq) goto loc_82485F14;
	// stw r23,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r23.u32);
loc_82485F14:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82485efc
	if (ctx.cr6.lt) goto loc_82485EFC;
loc_82485F28:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485ff0
	if (!ctx.cr6.gt) goto loc_82485FF0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_82485F3C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82485fdc
	if (ctx.cr0.eq) goto loc_82485FDC;
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82485fdc
	if (ctx.cr6.eq) goto loc_82485FDC;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82485fdc
	if (!ctx.cr0.eq) goto loc_82485FDC;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82485fd0
	if (ctx.cr6.eq) goto loc_82485FD0;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82485F9C:
	// lwz r5,16(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r5,r10,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// stw r11,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r3.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82485f9c
	if (ctx.cr6.lt) goto loc_82485F9C;
loc_82485FD0:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r8)
	REX_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
loc_82485FDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82485f3c
	if (ctx.cr6.lt) goto loc_82485F3C;
loc_82485FF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82485FF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824AB320) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x824ab374
	if (ctx.cr6.eq) goto loc_824AB374;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824ab3c4
	goto loc_824AB3C4;
loc_824AB374:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r5,r9,-1096
	ctx.r5.s64 = ctx.r9.s64 + -1096;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245f158
	ctx.lr = 0x824AB39C;
	sub_8245F158(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x824ab3c4
	if (!ctx.cr0.eq) goto loc_824AB3C4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_824AB3C4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AE360) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824AE368;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi. r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824ae3c8
	if (!ctx.cr0.eq) goto loc_824AE3C8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824ae398
	if (!ctx.cr6.lt) goto loc_824AE398;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824ae3e8
	goto loc_824AE3E8;
loc_824AE398:
	// bl 0x82477a88
	ctx.lr = 0x824AE39C;
	sub_82477A88(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824ae3b0
	if (!ctx.cr0.eq) goto loc_824AE3B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824ae3e8
	goto loc_824AE3E8;
loc_824AE3B0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824AE3C4;
	sub_826A1E70(ctx, base);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_824AE3C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r29.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_824AE3E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824B2768) {
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
	ctx.lr = 0x824B2770;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,796(r1)
	REX_STORE_U32(ctx.r1.u32 + 796, ctx.r4.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r5,804(r1)
	REX_STORE_U32(ctx.r1.u32 + 804, ctx.r5.u32);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// li r20,0
	r20.s64 = 0;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// mr r19,r20
	r19.u64 = r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x824B27A8;
	sub_826A2E60(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// std r20,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r20.u64);
	// std r20,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r20.u64);
	// std r20,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r20.u64);
	// bl 0x826a2e60
	ctx.lr = 0x824B27C8;
	sub_826A2E60(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,416
	ctx.r8.s64 = ctx.r1.s64 + 416;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// li r17,-1
	r17.s64 = -1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// std r20,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r20.u64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// std r20,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r20.u64);
	// std r20,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r20.u64);
	// std r20,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r20.u64);
	// std r20,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r20.u64);
	// std r20,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r20.u64);
	// std r20,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r20.u64);
	// std r20,16(r8)
	REX_STORE_U64(ctx.r8.u32 + 16, r20.u64);
	// std r20,16(r7)
	REX_STORE_U64(ctx.r7.u32 + 16, r20.u64);
	// ble cr6,0x824b2840
	if (!ctx.cr6.gt) goto loc_824B2840;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_824B2810:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824b282c
	if (!ctx.cr6.eq) goto loc_824B282C;
	// stw r17,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r17.u32);
loc_824B282C:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b2810
	if (ctx.cr6.lt) goto loc_824B2810;
loc_824B2840:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// li r18,1
	r18.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b2e14
	if (ctx.cr6.eq) goto loc_824B2E14;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// mr r21,r20
	r21.u64 = r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824b2e14
	if (ctx.cr6.eq) goto loc_824B2E14;
	// mr r23,r20
	r23.u64 = r20.u64;
loc_824B2864:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b2e00
	if (ctx.cr6.eq) goto loc_824B2E00;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b2e00
	if (ctx.cr0.eq) goto loc_824B2E00;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2e00
	if (ctx.cr6.eq) goto loc_824B2E00;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2bfc
	if (ctx.cr6.eq) goto loc_824B2BFC;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2bfc
	if (ctx.cr6.eq) goto loc_824B2BFC;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2bfc
	if (ctx.cr6.eq) goto loc_824B2BFC;
	// lis r10,29408
	ctx.r10.s64 = 1927282688;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2bfc
	if (ctx.cr6.eq) goto loc_824B2BFC;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2bfc
	if (ctx.cr6.eq) goto loc_824B2BFC;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2bfc
	if (ctx.cr6.eq) goto loc_824B2BFC;
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b2bfc
	if (ctx.cr6.eq) goto loc_824B2BFC;
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b2954
	if (ctx.cr6.eq) goto loc_824B2954;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_824B2904:
	// lwz r3,16(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x824b2928
	if (!ctx.cr6.eq) goto loc_824B2928;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// b 0x824b292c
	goto loc_824B292C;
loc_824B2928:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
loc_824B292C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b2904
	if (ctx.cr6.lt) goto loc_824B2904;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824b2954
	if (ctx.cr6.eq) goto loc_824B2954;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824b2e00
	if (ctx.cr6.eq) goto loc_824B2E00;
	// li r5,4808
	ctx.r5.s64 = 4808;
	// b 0x824b30b8
	goto loc_824B30B8;
loc_824B2954:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// addi r22,r21,1
	r22.s64 = r21.s64 + 1;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r23,r4
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824b1570
	ctx.lr = 0x824B2980;
	sub_824B1570(ctx, base);
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824b1570
	ctx.lr = 0x824B29AC;
	sub_824B1570(ctx, base);
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824B29B0:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x824b1410
	ctx.lr = 0x824B29CC;
	sub_824B1410(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824b1410
	ctx.lr = 0x824B29E4;
	sub_824B1410(ctx, base);
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x824b29b0
	if (!ctx.cr6.eq) goto loc_824B29B0;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824b2a34
	if (!ctx.cr6.eq) goto loc_824B2A34;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r10
	r29.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_824B2A34:
	// mr r25,r20
	r25.u64 = r20.u64;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_824B2A3C:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// lwz r5,564(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824b2000
	ctx.lr = 0x824B2A60;
	sub_824B2000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b3a5c
	if (ctx.cr0.lt) goto loc_824B3A5C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x824b2ac4
	if (ctx.cr6.eq) goto loc_824B2AC4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824b2ab4
	if (ctx.cr6.eq) goto loc_824B2AB4;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_824B2A7C:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// ble cr6,0x824b2aa4
	if (!ctx.cr6.gt) goto loc_824B2AA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x824b2a7c
	if (ctx.cr6.lt) goto loc_824B2A7C;
	// b 0x824b2aa8
	goto loc_824B2AA8;
loc_824B2AA4:
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_824B2AA8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824b2ad4
	if (!ctx.cr6.eq) goto loc_824B2AD4;
	// b 0x824b2ac4
	goto loc_824B2AC4;
loc_824B2AB4:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// ble cr6,0x824b2ae0
	if (!ctx.cr6.gt) goto loc_824B2AE0;
loc_824B2AC4:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r30,24
	ctx.cr6.compare<uint32_t>(r30.u32, 24, ctx.xer);
	// blt cr6,0x824b2a3c
	if (ctx.cr6.lt) goto loc_824B2A3C;
loc_824B2AD4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824b2ae0
	if (ctx.cr6.eq) goto loc_824B2AE0;
	// stw r27,16(r29)
	REX_STORE_U32(r29.u32 + 16, r27.u32);
loc_824B2AE0:
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(r25.u32, 6, ctx.xer);
	// beq cr6,0x824b3064
	if (ctx.cr6.eq) goto loc_824B3064;
	// mr r24,r20
	r24.u64 = r20.u64;
	// mr r26,r20
	r26.u64 = r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824b2bdc
	if (ctx.cr6.eq) goto loc_824B2BDC;
	// mr r19,r25
	r19.u64 = r25.u64;
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// rlwinm r27,r25,2,0,29
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,288
	r30.s64 = ctx.r1.s64 + 288;
loc_824B2B08:
	// lwz r14,0(r30)
	r14.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r10,r14,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r25,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r25.u32);
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// bl 0x824af5a0
	ctx.lr = 0x824B2B38;
	sub_824AF5A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824af5a0
	ctx.lr = 0x824B2B54;
	sub_824AF5A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// ble cr6,0x824b2b60
	if (!ctx.cr6.gt) goto loc_824B2B60;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_824B2B60:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b2b80
	if (ctx.cr6.lt) goto loc_824B2B80;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824b2b80
	if (!ctx.cr6.eq) goto loc_824B2B80;
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// stwx r18,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r18.u32);
loc_824B2B80:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b2b94
	if (ctx.cr6.eq) goto loc_824B2B94;
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// stwx r18,r27,r10
	REX_STORE_U32(r27.u32 + ctx.r10.u32, r18.u32);
loc_824B2B94:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x824b2ba4
	if (!ctx.cr6.eq) goto loc_824B2BA4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b2ba8
	if (ctx.cr6.eq) goto loc_824B2BA8;
loc_824B2BA4:
	// mr r29,r17
	r29.u64 = r17.u64;
loc_824B2BA8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// ble cr6,0x824b2bb4
	if (!ctx.cr6.gt) goto loc_824B2BB4;
	// mr r24,r29
	r24.u64 = r29.u64;
loc_824B2BB4:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r29.u32);
	// stwx r3,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// bne 0x824b2b08
	if (!ctx.cr0.eq) goto loc_824B2B08;
loc_824B2BDC:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r24,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r24.u32);
	// stwx r26,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r26.u32);
	// bl 0x824b1728
	ctx.lr = 0x824B2BF8;
	sub_824B1728(ctx, base);
	// b 0x824b2e00
	goto loc_824B2E00;
loc_824B2BFC:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824b1570
	ctx.lr = 0x824B2C34;
	sub_824B1570(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824B2C38:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x824b1410
	ctx.lr = 0x824B2C54;
	sub_824B1410(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824b1410
	ctx.lr = 0x824B2C6C;
	sub_824B1410(ctx, base);
	// lwz r24,96(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// bne cr6,0x824b2c38
	if (!ctx.cr6.eq) goto loc_824B2C38;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r28,r20
	r28.u64 = r20.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b2d70
	if (!ctx.cr6.gt) goto loc_824B2D70;
	// mr r19,r21
	r19.u64 = r21.u64;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addi r27,r21,1
	r27.s64 = r21.s64 + 1;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_824B2CA0:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r21,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r21.u32);
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwzx r11,r23,r4
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r4.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x824af5a0
	ctx.lr = 0x824B2CE4;
	sub_824AF5A0(ctx, base);
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r7,r11,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x824af5a0
	ctx.lr = 0x824B2D10;
	sub_824AF5A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// ble cr6,0x824b2d1c
	if (!ctx.cr6.gt) goto loc_824B2D1C;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_824B2D1C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b2d2c
	if (ctx.cr6.eq) goto loc_824B2D2C;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_824B2D2C:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// ble cr6,0x824b2d38
	if (!ctx.cr6.gt) goto loc_824B2D38;
	// mr r25,r29
	r25.u64 = r29.u64;
loc_824B2D38:
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 560);
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r29,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r29.u32);
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824b2ca0
	if (ctx.cr6.lt) goto loc_824B2CA0;
loc_824B2D70:
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r25.u32);
	// stwx r26,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r26.u32);
	// beq cr6,0x824b2df4
	if (ctx.cr6.eq) goto loc_824B2DF4;
	// mr r19,r21
	r19.u64 = r21.u64;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addi r30,r1,288
	r30.s64 = ctx.r1.s64 + 288;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_824B2D9C:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r21,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r21.u32);
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824af5a0
	ctx.lr = 0x824B2DC8;
	sub_824AF5A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// ble cr6,0x824b2dd4
	if (!ctx.cr6.gt) goto loc_824B2DD4;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_824B2DD4:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne 0x824b2d9c
	if (!ctx.cr0.eq) goto loc_824B2D9C;
loc_824B2DF4:
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
loc_824B2E00:
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplw cr6,r21,r6
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824b2864
	if (ctx.cr6.lt) goto loc_824B2864;
loc_824B2E14:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b3a28
	if (ctx.cr6.eq) goto loc_824B3A28;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r14,r20
	r14.u64 = r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824b3a28
	if (ctx.cr6.eq) goto loc_824B3A28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
loc_824B2E38:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// rlwinm r15,r14,2,0,29
	r15.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r15
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b3a14
	if (ctx.cr6.eq) goto loc_824B3A14;
	// rotlwi r23,r10,0
	r23.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824b3a14
	if (ctx.cr0.eq) goto loc_824B3A14;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3a14
	if (ctx.cr6.eq) goto loc_824B3A14;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29408
	ctx.r10.s64 = 1927282688;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29232
	ctx.r10.s64 = 1915748352;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29264
	ctx.r10.s64 = 1917845504;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29280
	ctx.r10.s64 = 1918894080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29296
	ctx.r10.s64 = 1919942656;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29312
	ctx.r10.s64 = 1920991232;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29344
	ctx.r10.s64 = 1923088384;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29328
	ctx.r10.s64 = 1922039808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29360
	ctx.r10.s64 = 1924136960;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3860
	if (ctx.cr6.eq) goto loc_824B3860;
	// lis r10,29216
	ctx.r10.s64 = 1914699776;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3a14
	if (ctx.cr6.eq) goto loc_824B3A14;
	// lis r10,29248
	ctx.r10.s64 = 1916796928;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b3a14
	if (ctx.cr6.eq) goto loc_824B3A14;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// bne cr6,0x824b3020
	if (!ctx.cr6.eq) goto loc_824B3020;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r27,r20
	r27.u64 = r20.u64;
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r11,r10,12
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFFF;
	// divwu. r28,r8,r11
	r28.u64 = uint32_t(ctx.r11.u32 ? ctx.r8.u32 / ctx.r11.u32 : 0);
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x824b3020
	if (ctx.cr0.eq) goto loc_824B3020;
	// lwz r30,8(r23)
	r30.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_824B2F78:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r3
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// beq cr6,0x824b2fe0
	if (ctx.cr6.eq) goto loc_824B2FE0;
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_824B2F98:
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwz r26,4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r26.u32, ctx.xer);
	// bne cr6,0x824b2fd0
	if (!ctx.cr6.eq) goto loc_824B2FD0;
	// lwz r26,8(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r25,8(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// bne cr6,0x824b2fd0
	if (!ctx.cr6.eq) goto loc_824B2FD0;
	// lwz r26,12(r7)
	r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824b2fe0
	if (ctx.cr6.eq) goto loc_824B2FE0;
loc_824B2FD0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b2f98
	if (ctx.cr6.lt) goto loc_824B2F98;
loc_824B2FE0:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824b3008
	if (!ctx.cr6.eq) goto loc_824B3008;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b3008
	if (!ctx.cr6.eq) goto loc_824B3008;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x824b3008
	if (ctx.cr6.lt) goto loc_824B3008;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_824B3008:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// blt cr6,0x824b2f78
	if (ctx.cr6.lt) goto loc_824B2F78;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(r27.u32, 2, ctx.xer);
	// bgt cr6,0x824b3a68
	if (ctx.cr6.gt) goto loc_824B3A68;
loc_824B3020:
	// lwz r9,12(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824b30d8
	if (ctx.cr6.eq) goto loc_824B30D8;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_824B3040:
	// lwz r4,16(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x824b3090
	if (!ctx.cr6.eq) goto loc_824B3090;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x824b3094
	goto loc_824B3094;
loc_824B3064:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne cr6,0x824b30cc
	if (!ctx.cr6.eq) goto loc_824B30CC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne cr6,0x824b30cc
	if (!ctx.cr6.eq) goto loc_824B30CC;
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r5,4521
	ctx.r5.s64 = 4521;
	// addi r6,r10,1188
	ctx.r6.s64 = ctx.r10.s64 + 1188;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x824b30c4
	goto loc_824B30C4;
loc_824B3090:
	// li r7,1
	ctx.r7.s64 = 1;
loc_824B3094:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824b3040
	if (ctx.cr6.lt) goto loc_824B3040;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824b30d8
	if (ctx.cr6.eq) goto loc_824B30D8;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824b3a14
	if (ctx.cr6.eq) goto loc_824B3A14;
	// li r5,4809
	ctx.r5.s64 = 4809;
loc_824B30B8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,1276
	ctx.r6.s64 = ctx.r11.s64 + 1276;
loc_824B30C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x824B30CC;
	sub_82489C30(ctx, base);
loc_824B30CC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824b3a5c
	goto loc_824B3A5C;
loc_824B30D8:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// addi r17,r14,1
	r17.s64 = r14.s64 + 1;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r4,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r15.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824b1570
	ctx.lr = 0x824B3104;
	sub_824B1570(ctx, base);
	// lwz r16,96(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824B3108:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r16
	r30.u64 = r16.u64;
	// bl 0x824b1410
	ctx.lr = 0x824B3124;
	sub_824B1410(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824b1410
	ctx.lr = 0x824B313C;
	sub_824B1410(ctx, base);
	// lwz r16,96(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(r30.u32, r16.u32, ctx.xer);
	// bne cr6,0x824b3108
	if (!ctx.cr6.eq) goto loc_824B3108;
	// lhz r26,202(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 202);
	// li r28,-1
	r28.s64 = -1;
	// mr r27,r28
	r27.u64 = r28.u64;
	// cmplwi cr6,r26,258
	ctx.cr6.compare<uint32_t>(r26.u32, 258, ctx.xer);
	// beq cr6,0x824b3164
	if (ctx.cr6.eq) goto loc_824B3164;
	// cmplwi cr6,r26,259
	ctx.cr6.compare<uint32_t>(r26.u32, 259, ctx.xer);
	// bne cr6,0x824b31c4
	if (!ctx.cr6.eq) goto loc_824B31C4;
loc_824B3164:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b31c4
	if (!ctx.cr6.eq) goto loc_824B31C4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b31a8
	if (!ctx.cr6.eq) goto loc_824B31A8;
	// lwz r27,12(r8)
	r27.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_824B31A8:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b31c4
	if (!ctx.cr6.eq) goto loc_824B31C4;
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_824B31C4:
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824b3284
	if (ctx.cr6.eq) goto loc_824B3284;
	// lwz r3,552(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r30,r16
	r30.u64 = r16.u64;
loc_824B31DC:
	// cmplw cr6,r17,r3
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x824b3270
	if (!ctx.cr6.lt) goto loc_824B3270;
	// subf r9,r17,r3
	ctx.r9.u64 = ctx.r3.u64 - r17.u64;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824B31F8:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824b3268
	if (ctx.cr6.eq) goto loc_824B3268;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,28912
	ctx.r9.s64 = 1894776832;
	// rlwinm r8,r11,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b3268
	if (!ctx.cr6.eq) goto loc_824B3268;
	// clrlwi. r6,r11,12
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// beq 0x824b3268
	if (ctx.cr0.eq) goto loc_824B3268;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_824B3230:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824b3254
	if (ctx.cr6.eq) goto loc_824B3254;
	// lwz r25,20(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r25.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824b3258
	if (!ctx.cr6.eq) goto loc_824B3258;
loc_824B3254:
	// li r29,1
	r29.s64 = 1;
loc_824B3258:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824b3230
	if (ctx.cr6.lt) goto loc_824B3230;
loc_824B3268:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x824b31f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B31F8;
loc_824B3270:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x824b31dc
	if (!ctx.cr0.eq) goto loc_824B31DC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x824b3294
	if (!ctx.cr6.eq) goto loc_824B3294;
loc_824B3284:
	// lwz r11,1104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1104);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b3298
	if (!ctx.cr6.eq) goto loc_824B3298;
loc_824B3294:
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
loc_824B3298:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r7,r11,r15
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824b332c
	if (!ctx.cr6.eq) goto loc_824B332C;
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824b332c
	if (ctx.cr6.eq) goto loc_824B332C;
	// cmplwi cr6,r16,1
	ctx.cr6.compare<uint32_t>(r16.u32, 1, ctx.xer);
	// bne cr6,0x824b332c
	if (!ctx.cr6.eq) goto loc_824B332C;
	// lwz r11,480(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824b332c
	if (!ctx.cr6.eq) goto loc_824B332C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824b332c
	if (ctx.cr6.eq) goto loc_824B332C;
	// li r18,1
	r18.s64 = 1;
	// addi r10,r1,220
	ctx.r10.s64 = ctx.r1.s64 + 220;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
loc_824B32F8:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r14.u32, ctx.xer);
	// ble cr6,0x824b3310
	if (!ctx.cr6.gt) goto loc_824B3310;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r14
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r14.u32, ctx.xer);
	// ble cr6,0x824b3324
	if (!ctx.cr6.gt) goto loc_824B3324;
loc_824B3310:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// blt cr6,0x824b32f8
	if (ctx.cr6.lt) goto loc_824B32F8;
loc_824B3324:
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// bne cr6,0x824b3374
	if (!ctx.cr6.eq) goto loc_824B3374;
loc_824B332C:
	// addic r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// subfe r18,r11,r8
	temp.u8 = (~ctx.r11.u32 + ctx.r8.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	r18.u64 = ~ctx.r11.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// bge cr6,0x824b3374
	if (!ctx.cr6.lt) goto loc_824B3374;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824B3348:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// bgt cr6,0x824b3364
	if (ctx.cr6.gt) goto loc_824B3364;
	// cmplw cr6,r18,r27
	ctx.cr6.compare<uint32_t>(r18.u32, r27.u32, ctx.xer);
	// beq cr6,0x824b3364
	if (ctx.cr6.eq) goto loc_824B3364;
	// cmplw cr6,r18,r28
	ctx.cr6.compare<uint32_t>(r18.u32, r28.u32, ctx.xer);
	// bne cr6,0x824b3374
	if (!ctx.cr6.eq) goto loc_824B3374;
loc_824B3364:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// blt cr6,0x824b3348
	if (ctx.cr6.lt) goto loc_824B3348;
loc_824B3374:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824b3390
	if (ctx.cr6.eq) goto loc_824B3390;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x824b3390
	if (!ctx.cr6.eq) goto loc_824B3390;
	// lwz r11,1104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b3a94
	if (!ctx.cr6.eq) goto loc_824B3A94;
loc_824B3390:
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(r18.u32, 6, ctx.xer);
	// beq cr6,0x824b3ab4
	if (ctx.cr6.eq) goto loc_824B3AB4;
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824b37bc
	if (!ctx.cr6.eq) goto loc_824B37BC;
	// cmplwi cr6,r26,260
	ctx.cr6.compare<uint32_t>(r26.u32, 260, ctx.xer);
	// bge cr6,0x824b37bc
	if (!ctx.cr6.lt) goto loc_824B37BC;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824b37bc
	if (!ctx.cr6.eq) goto loc_824B37BC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r4,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r15.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x824b1790
	ctx.lr = 0x824B33F0;
	sub_824B1790(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b3408
	if (ctx.cr6.eq) goto loc_824B3408;
	// li r19,4
	r19.s64 = 4;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r19.u32);
	// b 0x824b340c
	goto loc_824B340C;
loc_824B3408:
	// lwz r19,108(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_824B340C:
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(r19.u32, 4, ctx.xer);
	// bge cr6,0x824b3420
	if (!ctx.cr6.lt) goto loc_824B3420;
	// li r19,3
	r19.s64 = 3;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r19.u32);
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(r19.u32, 4, ctx.xer);
loc_824B3420:
	// ble cr6,0x824b342c
	if (!ctx.cr6.gt) goto loc_824B342C;
	// li r19,4
	r19.s64 = 4;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r19.u32);
loc_824B342C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824B3434;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824b3448
	if (ctx.cr0.eq) goto loc_824B3448;
	// bl 0x824773d0
	ctx.lr = 0x824B3440;
	sub_824773D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x824b344c
	goto loc_824B344C;
loc_824B3448:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_824B344C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824b3ad4
	if (ctx.cr6.eq) goto loc_824B3AD4;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82477b60
	ctx.lr = 0x824B3474;
	sub_82477B60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b3a5c
	if (ctx.cr0.lt) goto loc_824B3A5C;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r11,r15
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// bl 0x82477420
	ctx.lr = 0x824B348C;
	sub_82477420(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b3a5c
	if (ctx.cr0.lt) goto loc_824B3A5C;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x824B34B0;
	sub_826A1E70(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r21,12(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r21,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824B34CC;
	sub_826A1E70(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r27,r11,r15
	REX_STORE_U32(ctx.r11.u32 + r15.u32, r27.u32);
	// bl 0x824785e8
	ctx.lr = 0x824B34E0;
	sub_824785E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b3a5c
	if (ctx.cr0.lt) goto loc_824B3A5C;
	// li r26,0
	r26.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824b3740
	if (ctx.cr6.eq) goto loc_824B3740;
	// addi r22,r1,160
	r22.s64 = ctx.r1.s64 + 160;
loc_824B34FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r25,0
	r25.s64 = 0;
	// lwz r23,0(r22)
	r23.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b3730
	if (!ctx.cr6.gt) goto loc_824B3730;
	// li r24,0
	r24.s64 = 0;
loc_824B3514:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(r25.u32, r23.u32, ctx.xer);
	// lwzx r28,r24,r11
	r28.u64 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	// beq cr6,0x824b3530
	if (ctx.cr6.eq) goto loc_824B3530;
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 56);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x824b371c
	if (!ctx.cr6.eq) goto loc_824B371C;
loc_824B3530:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824b35b4
	if (ctx.cr6.eq) goto loc_824B35B4;
	// li r30,0
	r30.s64 = 0;
loc_824B3540:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x824B3558;
	sub_82478758(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824b3ad4
	if (ctx.cr6.eq) goto loc_824B3AD4;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,72(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 72);
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(r29.u32, r19.u32, ctx.xer);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r10,84(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 84);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,88(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 88);
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blt cr6,0x824b3540
	if (ctx.cr6.lt) goto loc_824B3540;
loc_824B35B4:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824b3718
	if (!ctx.cr6.lt) goto loc_824B3718;
	// rlwinm r29,r17,2,0,29
	r29.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
loc_824B35C8:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824b3704
	if (ctx.cr6.eq) goto loc_824B3704;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b3704
	if (ctx.cr6.eq) goto loc_824B3704;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r5,r11,12
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFF;
	// divwu. r11,r10,r5
	ctx.r11.u64 = uint32_t(ctx.r5.u32 ? ctx.r10.u32 / ctx.r5.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x824b3704
	if (ctx.cr0.eq) goto loc_824B3704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_824B3604:
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x824b3660
	if (ctx.cr6.lt) goto loc_824B3660;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b36f4
	if (ctx.cr6.eq) goto loc_824B36F4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824B3620:
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// bne cr6,0x824b3650
	if (!ctx.cr6.eq) goto loc_824B3650;
	// lwz r28,16(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, ctx.xer);
	// lwzx r28,r28,r9
	r28.u64 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// ble cr6,0x824b3650
	if (!ctx.cr6.gt) goto loc_824B3650;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
loc_824B3650:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824b3620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B3620;
	// b 0x824b36f4
	goto loc_824B36F4;
loc_824B3660:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x824b36a4
	if (!ctx.cr6.eq) goto loc_824B36A4;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, ctx.xer);
	// bne cr6,0x824b36f4
	if (!ctx.cr6.eq) goto loc_824B36F4;
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r19,4
	ctx.cr6.compare<uint32_t>(r19.u32, 4, ctx.xer);
	// bne cr6,0x824b368c
	if (!ctx.cr6.eq) goto loc_824B368C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x824b3690
	goto loc_824B3690;
loc_824B368C:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_824B3690:
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, ctx.xer);
	// ble cr6,0x824b36f4
	if (!ctx.cr6.gt) goto loc_824B36F4;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// b 0x824b36f4
	goto loc_824B36F4;
loc_824B36A4:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b36f4
	if (ctx.cr6.eq) goto loc_824B36F4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824B36B8:
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// bne cr6,0x824b36e8
	if (!ctx.cr6.eq) goto loc_824B36E8;
	// lwz r28,16(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, ctx.xer);
	// lwzx r28,r28,r9
	r28.u64 = REX_LOAD_U32(r28.u32 + ctx.r9.u32);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// ble cr6,0x824b36e8
	if (!ctx.cr6.gt) goto loc_824B36E8;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
loc_824B36E8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x824b36b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B36B8;
loc_824B36F4:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// bne 0x824b3604
	if (!ctx.cr0.eq) goto loc_824B3604;
loc_824B3704:
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b35c8
	if (ctx.cr6.lt) goto loc_824B35C8;
loc_824B3718:
	// li r30,1
	r30.s64 = 1;
loc_824B371C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b3514
	if (ctx.cr6.lt) goto loc_824B3514;
loc_824B3730:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(r20.u32, r21.u32, ctx.xer);
	// blt cr6,0x824b34fc
	if (ctx.cr6.lt) goto loc_824B34FC;
loc_824B3740:
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bge cr6,0x824b3758
	if (!ctx.cr6.lt) goto loc_824B3758;
	// stwx r26,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r26.u32);
loc_824B3758:
	// rlwinm r11,r18,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bge cr6,0x824b3770
	if (!ctx.cr6.lt) goto loc_824B3770;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
loc_824B3770:
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bge cr6,0x824b3784
	if (!ctx.cr6.lt) goto loc_824B3784;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
loc_824B3784:
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bge cr6,0x824b3798
	if (!ctx.cr6.lt) goto loc_824B3798;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
loc_824B3798:
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bge cr6,0x824b37ac
	if (!ctx.cr6.lt) goto loc_824B37AC;
	// stwx r26,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r26.u32);
loc_824B37AC:
	// lwz r19,104(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r20,0
	r20.s64 = 0;
	// bne cr6,0x824b3a14
	if (!ctx.cr6.eq) goto loc_824B3A14;
loc_824B37BC:
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x824b37d8
	if (!ctx.cr6.eq) goto loc_824B37D8;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r20.u32);
	// b 0x824b3a14
	goto loc_824B3A14;
loc_824B37D8:
	// rlwinm r27,r18,2,0,29
	r27.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,480
	r30.s64 = ctx.r1.s64 + 480;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_824B37E4:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r18,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r18.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// bl 0x824af5a0
	ctx.lr = 0x824B3810;
	sub_824AF5A0(ctx, base);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// ble cr6,0x824b381c
	if (!ctx.cr6.gt) goto loc_824B381C;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_824B381C:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne 0x824b37e4
	if (!ctx.cr0.eq) goto loc_824B37E4;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// bge cr6,0x824b3854
	if (!ctx.cr6.lt) goto loc_824B3854;
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
loc_824B3854:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b1728
	ctx.lr = 0x824B385C;
	sub_824B1728(ctx, base);
	// b 0x824b3a14
	goto loc_824B3A14;
loc_824B3860:
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r24,r20
	r24.u64 = r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824b39fc
	if (!ctx.cr6.gt) goto loc_824B39FC;
	// addi r27,r14,1
	r27.s64 = r14.s64 + 1;
	// mr r25,r20
	r25.u64 = r20.u64;
loc_824B387C:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r9,260
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 260, ctx.xer);
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x824b38a8
	if (!ctx.cr6.eq) goto loc_824B38A8;
	// mr r19,r14
	r19.u64 = r14.u64;
	// stw r14,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r14.u32);
	// b 0x824b38b4
	goto loc_824B38B4;
loc_824B38A8:
	// addi r11,r14,2
	ctx.r11.s64 = r14.s64 + 2;
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
loc_824B38B4:
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// lwzx r11,r4,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r15.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// bl 0x824af5a0
	ctx.lr = 0x824B38DC;
	sub_824AF5A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// ble cr6,0x824b38ec
	if (!ctx.cr6.gt) goto loc_824B38EC;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_824B38EC:
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// rlwinm r28,r19,2,0,29
	r28.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + r28.u64;
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwzx r30,r4,r15
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + r15.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r11,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x824b1570
	ctx.lr = 0x824B3930;
	sub_824B1570(ctx, base);
	// lwz r29,96(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824B3934:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r5,548(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 548);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r4,560(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x824b1410
	ctx.lr = 0x824B3950;
	sub_824B1410(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 552);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// bl 0x824b1410
	ctx.lr = 0x824B3968;
	sub_824B1410(ctx, base);
	// lwz r29,96(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x824b3934
	if (!ctx.cr6.eq) goto loc_824B3934;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824b39d8
	if (ctx.cr6.eq) goto loc_824B39D8;
	// addi r30,r1,288
	r30.s64 = ctx.r1.s64 + 288;
loc_824B3980:
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r19,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r19.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// bl 0x824af5a0
	ctx.lr = 0x824B39AC;
	sub_824AF5A0(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// ble cr6,0x824b39b8
	if (!ctx.cr6.gt) goto loc_824B39B8;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_824B39B8:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// bne 0x824b3980
	if (!ctx.cr0.eq) goto loc_824B3980;
loc_824B39D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b1728
	ctx.lr = 0x824B39E0;
	sub_824B1728(ctx, base);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lwzx r23,r11,r15
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824b387c
	if (ctx.cr6.lt) goto loc_824B387C;
loc_824B39FC:
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bge cr6,0x824b3a14
	if (!ctx.cr6.lt) goto loc_824B3A14;
	// stwx r26,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r26.u32);
loc_824B3A14:
	// lwz r6,552(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r6
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824b2e38
	if (ctx.cr6.lt) goto loc_824B2E38;
	// lwz r15,796(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
loc_824B3A28:
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b3a58
	if (ctx.cr6.eq) goto loc_824B3A58;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// bne cr6,0x824b3a58
	if (!ctx.cr6.eq) goto loc_824B3A58;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne cr6,0x824b3a58
	if (!ctx.cr6.eq) goto loc_824B3A58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b2690
	ctx.lr = 0x824B3A50;
	sub_824B2690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824b3a5c
	if (ctx.cr0.lt) goto loc_824B3A5C;
loc_824B3A58:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_824B3A5C:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
loc_824B3A68:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b30cc
	if (!ctx.cr6.eq) goto loc_824B30CC;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b30cc
	if (!ctx.cr6.eq) goto loc_824B30CC;
	// lwz r4,60(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 60);
loc_824B3A84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,4521
	ctx.r5.s64 = 4521;
	// addi r6,r11,1188
	ctx.r6.s64 = ctx.r11.s64 + 1188;
	// b 0x824b30c4
	goto loc_824B30C4;
loc_824B3A94:
	// lwz r11,796(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b30cc
	if (!ctx.cr6.eq) goto loc_824B30CC;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824b30cc
	if (!ctx.cr6.eq) goto loc_824B30CC;
loc_824B3AAC:
	// lwz r4,60(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 60);
	// b 0x824b3a84
	goto loc_824B3A84;
loc_824B3AB4:
	// cmplwi cr6,r26,260
	ctx.cr6.compare<uint32_t>(r26.u32, 260, ctx.xer);
	// bne cr6,0x824b3aac
	if (!ctx.cr6.eq) goto loc_824B3AAC;
	// lwz r11,804(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824b3aac
	if (ctx.cr6.eq) goto loc_824B3AAC;
	// cmplwi cr6,r26,260
	ctx.cr6.compare<uint32_t>(r26.u32, 260, ctx.xer);
	// beq cr6,0x824b30cc
	if (ctx.cr6.eq) goto loc_824B30CC;
	// b 0x824b3aac
	goto loc_824B3AAC;
loc_824B3AD4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824b3a5c
	goto loc_824B3A5C;
}

DEFINE_REX_FUNC(sub_82552930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82552938;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552a64
	if (!ctx.cr0.eq) goto loc_82552A64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82552a64
	if (ctx.cr0.eq) goto loc_82552A64;
loc_82552958:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82552a4c
	if (!ctx.cr6.eq) goto loc_82552A4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82551458
	ctx.lr = 0x8255297C;
	sub_82551458(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825529ac
	if (ctx.cr0.eq) goto loc_825529AC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825529a0
	if (ctx.cr0.eq) goto loc_825529A0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// b 0x825529b4
	goto loc_825529B4;
loc_825529A0:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// b 0x825529b4
	goto loc_825529B4;
loc_825529AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
loc_825529B4:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82552a44
	goto loc_82552A44;
loc_825529C8:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r9,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x825529ec
	if (ctx.cr0.eq) goto loc_825529EC;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r9,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r9,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r9,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
loc_825529EC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82552a04
	if (!ctx.cr0.eq) goto loc_82552A04;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825529c8
	if (!ctx.cr6.eq) goto loc_825529C8;
loc_82552A04:
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82552a4c
	if (ctx.cr6.eq) goto loc_82552A4C;
	// addi r9,r31,24
	ctx.r9.s64 = r31.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82552a34
	if (ctx.cr6.eq) goto loc_82552A34;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552a34
	if (!ctx.cr0.eq) goto loc_82552A34;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82552a3c
	goto loc_82552A3C;
loc_82552A34:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82552A3C:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82552a4c
	if (!ctx.cr0.eq) goto loc_82552A4C;
loc_82552A44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825529c8
	if (!ctx.cr6.eq) goto loc_825529C8;
loc_82552A4C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552a64
	if (!ctx.cr0.eq) goto loc_82552A64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82552958
	if (!ctx.cr6.eq) goto loc_82552958;
loc_82552A64:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// beq 0x82552af0
	if (ctx.cr0.eq) goto loc_82552AF0;
	// lwz r9,28(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// beq 0x82552acc
	if (ctx.cr0.eq) goto loc_82552ACC;
	// lwz r9,36(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// b 0x82552b10
	goto loc_82552B10;
loc_82552ACC:
	// lwz r9,28(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// b 0x82552b10
	goto loc_82552B10;
loc_82552AF0:
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_82552B10:
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// b 0x82552bc8
	goto loc_82552BC8;
loc_82552B18:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm. r8,r11,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82552b2c
	if (ctx.cr0.eq) goto loc_82552B2C;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82552B2C:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552b44
	if (!ctx.cr0.eq) goto loc_82552B44;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82552b18
	if (!ctx.cr6.eq) goto loc_82552B18;
loc_82552B44:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82552bd0
	if (ctx.cr6.eq) goto loc_82552BD0;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82552bac
	if (ctx.cr6.eq) goto loc_82552BAC;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82552bac
	if (!ctx.cr0.eq) goto loc_82552BAC;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82552bc0
	goto loc_82552BC0;
loc_82552BAC:
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
loc_82552BC0:
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82552bd0
	if (!ctx.cr0.eq) goto loc_82552BD0;
loc_82552BC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82552b18
	if (!ctx.cr6.eq) goto loc_82552B18;
loc_82552BD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8257E830) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e874
	if (ctx.cr6.eq) goto loc_8257E874;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e874
	if (ctx.cr6.eq) goto loc_8257E874;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257e874
	if (ctx.cr6.eq) goto loc_8257E874;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8257e874
	if (!ctx.cr6.eq) goto loc_8257E874;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x8257e874
	if (!ctx.cr6.eq) goto loc_8257E874;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_8257E874:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8257EF60) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8257ef84
	if (!ctx.cr6.eq) goto loc_8257EF84;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824e4368
	ctx.lr = 0x8257EF84;
	sub_824E4368(ctx, base);
loc_8257EF84:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257efdc
	if (!ctx.cr6.eq) goto loc_8257EFDC;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257efa4
	if (ctx.cr6.eq) goto loc_8257EFA4;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// bl 0x824e4368
	ctx.lr = 0x8257EFA4;
	sub_824E4368(ctx, base);
loc_8257EFA4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8257ed30
	ctx.lr = 0x8257EFB0;
	sub_8257ED30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257efc4
	if (!ctx.cr0.eq) goto loc_8257EFC4;
	// li r4,3583
	ctx.r4.s64 = 3583;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e4368
	ctx.lr = 0x8257EFC4;
	sub_824E4368(ctx, base);
loc_8257EFC4:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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
loc_8257EFDC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8257EFE4;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_8257FDD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x824ff930
	ctx.lr = 0x8257FDF4;
	sub_824FF930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82446f70
	ctx.lr = 0x8257FE00;
	sub_82446F70(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,12
	ctx.r11.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82580A28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82580A30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r8,r11,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x825bb860
	ctx.lr = 0x82580A58;
	sub_825BB860(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82580A64;
	sub_8250AD28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82580A80;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825826F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82582700;
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
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82582728;
	sub_825BB860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82582738;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582744;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq cr6,0x82582768
	if (ctx.cr6.eq) goto loc_82582768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82582764;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582768:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582770;
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

DEFINE_REX_FUNC(sub_82585768) {
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
	// std r4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82584ed0
	ctx.lr = 0x82585784;
	sub_82584ED0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8250a620
	ctx.lr = 0x82585790;
	sub_8250A620(ctx, base);
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

DEFINE_REX_FUNC(sub_82586738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82586740;
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
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586768;
	sub_825BB860(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82586778;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586784;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586794;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825867A0;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8258B548) {
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
	// bl 0x826a1c88
	ctx.lr = 0x8258B550;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mullw r16,r11,r9
	r16.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x8258b598
	if (ctx.cr6.eq) goto loc_8258B598;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(r16.u32, 4, ctx.xer);
	// beq cr6,0x8258b5d4
	if (ctx.cr6.eq) goto loc_8258B5D4;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x8258B598;
	sub_824E4368(ctx, base);
loc_8258B598:
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(r16.u32, 4, ctx.xer);
	// ble cr6,0x8258b5d4
	if (!ctx.cr6.gt) goto loc_8258B5D4;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8258b5c0
	if (ctx.cr6.eq) goto loc_8258B5C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5896
	ctx.r5.s64 = ctx.r11.s64 + 5896;
	// b 0x8258b5c8
	goto loc_8258B5C8;
loc_8258B5C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r11,5888
	ctx.r5.s64 = ctx.r11.s64 + 5888;
loc_8258B5C8:
	// li r4,4532
	ctx.r4.s64 = 4532;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B5D4;
	sub_824E4368(ctx, base);
loc_8258B5D4:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x8258b604
	if (!ctx.cr6.eq) goto loc_8258B604;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258b5f8
	if (ctx.cr6.eq) goto loc_8258B5F8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8258b618
	if (ctx.cr6.eq) goto loc_8258B618;
loc_8258B5F8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B604;
	sub_824E4368(ctx, base);
loc_8258B604:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258b904
	if (ctx.cr6.eq) goto loc_8258B904;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8258b904
	if (!ctx.cr6.eq) goto loc_8258B904;
loc_8258B618:
	// lwz r28,8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8258b8f8
	if (ctx.cr6.eq) goto loc_8258B8F8;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258b8f8
	if (!ctx.cr6.eq) goto loc_8258B8F8;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x8258b654
	if (!ctx.cr6.eq) goto loc_8258B654;
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8258b67c
	if (!ctx.cr6.eq) goto loc_8258B67C;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8258b67c
	goto loc_8258B67C;
loc_8258B654:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258b8ec
	if (ctx.cr6.eq) goto loc_8258B8EC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8258b8ec
	if (!ctx.cr6.eq) goto loc_8258B8EC;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// ble cr6,0x8258b67c
	if (!ctx.cr6.gt) goto loc_8258B67C;
	// li r30,4
	r30.s64 = 4;
loc_8258B67C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82580110
	ctx.lr = 0x8258B684;
	sub_82580110(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258b698
	if (ctx.cr6.eq) goto loc_8258B698;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B698;
	sub_824E4368(ctx, base);
loc_8258B698:
	// addi r21,r30,1
	r21.s64 = r30.s64 + 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8258b6b0
	if (!ctx.cr6.eq) goto loc_8258B6B0;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
	// b 0x8258b6c8
	goto loc_8258B6C8;
loc_8258B6B0:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x8258b6c8
	if (!ctx.cr6.eq) goto loc_8258B6C8;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// ble cr6,0x8258b6c8
	if (!ctx.cr6.gt) goto loc_8258B6C8;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
loc_8258B6C8:
	// clrlwi. r20,r27,24
	r20.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x8258b6d4
	if (ctx.cr0.eq) goto loc_8258B6D4;
	// add r21,r21,r31
	r21.u64 = r21.u64 + r31.u64;
loc_8258B6D4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82580110
	ctx.lr = 0x8258B6E0;
	sub_82580110(ctx, base);
	// cmplw cr6,r21,r3
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8258b6f4
	if (ctx.cr6.eq) goto loc_8258B6F4;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B6F4;
	sub_824E4368(ctx, base);
loc_8258B6F4:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8255db50
	ctx.lr = 0x8258B700;
	sub_8255DB50(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82584600
	ctx.lr = 0x8258B70C;
	sub_82584600(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82553828
	ctx.lr = 0x8258B714;
	sub_82553828(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82585070
	ctx.lr = 0x8258B730;
	sub_82585070(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// bne cr6,0x8258b784
	if (!ctx.cr6.eq) goto loc_8258B784;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82585070
	ctx.lr = 0x8258B760;
	sub_82585070(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82585070
	ctx.lr = 0x8258B77C;
	sub_82585070(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8258b7b0
	goto loc_8258B7B0;
loc_8258B784:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x8258b7b0
	if (!ctx.cr6.eq) goto loc_8258B7B0;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(r19.s32, 1, ctx.xer);
	// ble cr6,0x8258b7b0
	if (!ctx.cr6.gt) goto loc_8258B7B0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82553828
	ctx.lr = 0x8258B7A0;
	sub_82553828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258B7AC;
	sub_82584ED0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_8258B7B0:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8258b808
	if (ctx.cr6.eq) goto loc_8258B808;
	// addi r11,r31,2
	ctx.r11.s64 = r31.s64 + 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251f360
	ctx.lr = 0x8258B7D0;
	sub_8251F360(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// beq cr6,0x8258b808
	if (ctx.cr6.eq) goto loc_8258B808;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_8258B7E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82553828
	ctx.lr = 0x8258B7F0;
	sub_82553828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82584ed0
	ctx.lr = 0x8258B7FC;
	sub_82584ED0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// bne 0x8258b7e8
	if (!ctx.cr0.eq) goto loc_8258B7E8;
loc_8258B808:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82587e70
	ctx.lr = 0x8258B834;
	sub_82587E70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8258b890
	if (ctx.cr6.eq) goto loc_8258B890;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8258b864
	if (ctx.cr6.eq) goto loc_8258B864;
	// addi r30,r24,4
	r30.s64 = r24.s64 + 4;
loc_8258B84C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8250ad28
	ctx.lr = 0x8258B858;
	sub_8250AD28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// bne 0x8258b84c
	if (!ctx.cr0.eq) goto loc_8258B84C;
loc_8258B864:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8258B87C;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// stwx r24,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r24.u32);
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,40(r26)
	REX_STORE_U32(r26.u32 + 40, ctx.r11.u32);
loc_8258B890:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8258b8a8
	if (ctx.cr6.eq) goto loc_8258B8A8;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825844b0
	ctx.lr = 0x8258B8A8;
	sub_825844B0(ctx, base);
loc_8258B8A8:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8258b8e4
	if (ctx.cr6.eq) goto loc_8258B8E4;
loc_8258B8B4:
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r31,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// rlwinm r11,r11,0,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82589840
	ctx.lr = 0x8258B8D8;
	sub_82589840(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(r31.u32, r16.u32, ctx.xer);
	// blt cr6,0x8258b8b4
	if (ctx.cr6.lt) goto loc_8258B8B4;
loc_8258B8E4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd8
	return;
loc_8258B8EC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B8F8;
	sub_824E4368(ctx, base);
loc_8258B8F8:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B904;
	sub_824E4368(ctx, base);
loc_8258B904:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258B910;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825B3338) {
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
	// lwz r3,2736(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2736);
	// bl 0x825d79a0
	ctx.lr = 0x825B3354;
	sub_825D79A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,1488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825B3388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_825B3798) {
	REX_FUNC_PROLOGUE();
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bne cr6,0x825b37d0
	if (!ctx.cr6.eq) goto loc_825B37D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_825B37D0:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_825B3F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825B3F50;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-19872
	r31.s64 = ctx.r11.s64 + -19872;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825b3fc4
	if (ctx.cr6.eq) goto loc_825B3FC4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8269d1a8
	ctx.lr = 0x825B3F80;
	sub_8269D1A8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r29,0
	r29.s64 = 0;
	// stbx r29,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, r29.u8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b3fc4
	if (ctx.cr0.eq) goto loc_825B3FC4;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x825b3fc4
	if (!ctx.cr6.eq) goto loc_825B3FC4;
	// lbz r11,1368(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1368);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825b3fc4
	if (ctx.cr0.eq) goto loc_825B3FC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-4244
	ctx.r3.s64 = ctx.r11.s64 + -4244;
	// bl 0x824eabc0
	ctx.lr = 0x825B3FBC;
	sub_824EABC0(ctx, base);
	// stw r3,1372(r30)
	REX_STORE_U32(r30.u32 + 1372, ctx.r3.u32);
	// stb r29,1368(r30)
	REX_STORE_U8(r30.u32 + 1368, r29.u8);
loc_825B3FC4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B6EA8) {
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
	ctx.lr = 0x825B6EB0;
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
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,22852
	r26.s64 = ctx.r11.s64 + 22852;
	// addi r25,r10,-2432
	r25.s64 = ctx.r10.s64 + -2432;
	// bne cr6,0x825b6f00
	if (!ctx.cr6.eq) goto loc_825B6F00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,1091
	ctx.r7.s64 = 1091;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6F00;
	sub_824EA978(ctx, base);
loc_825B6F00:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x825b6f10
	if (!ctx.cr6.eq) goto loc_825B6F10;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x825b6f38
	goto loc_825B6F38;
loc_825B6F10:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(r24.s32, 1, ctx.xer);
	// beq cr6,0x825b6f34
	if (ctx.cr6.eq) goto loc_825B6F34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,-25788
	ctx.r5.s64 = ctx.r11.s64 + -25788;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6F34;
	sub_824EA978(ctx, base);
loc_825B6F34:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_825B6F38:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f0ca0
	ctx.lr = 0x825B6F4C;
	sub_824F0CA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825B82E0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8300
	if (ctx.cr0.eq) goto loc_825B8300;
	// bl 0x825b78d0
	ctx.lr = 0x825B8300;
	sub_825B78D0(ctx, base);
loc_825B8300:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8318
	if (ctx.cr0.eq) goto loc_825B8318;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f2,-3744(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// bl 0x826a1860
	ctx.lr = 0x825B8314;
	sub_826A1860(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_825B8318:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b8334
	if (ctx.cr0.eq) goto loc_825B8334;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lfs f1,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
loc_825B8334:
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

DEFINE_REX_FUNC(sub_825BAD20) {
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
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r7,r11,-28824
	ctx.r7.s64 = ctx.r11.s64 + -28824;
	// li r8,20
	ctx.r8.s64 = 20;
	// bl 0x825baba0
	ctx.lr = 0x825BAD54;
	sub_825BABA0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x825bad7c
	if (!ctx.cr6.eq) goto loc_825BAD7C;
	// lbz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x825bad7c
	if (!ctx.cr0.eq) goto loc_825BAD7C;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825BAD7C:
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

DEFINE_REX_FUNC(sub_825BD558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825BD560;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// std r6,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x825BD588;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825BD598;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD5A4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82584ed0
	ctx.lr = 0x825BD5B4;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD5C0;
	sub_8250AD28(ctx, base);
	// lwz r9,44(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// rlwimi r8,r9,14,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// stw r8,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825C2BF8) {
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
	ctx.lr = 0x825C2C00;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,28(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// bl 0x824f7678
	ctx.lr = 0x825C2C28;
	sub_824F7678(ctx, base);
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r26,1
	ctx.r10.u64 = r26.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f7678
	ctx.lr = 0x825C2C50;
	sub_824F7678(ctx, base);
	// addi r24,r3,4
	r24.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = r24.u64 | 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r25
	r29.u64 = r25.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r17,1
	r17.s64 = 1;
	// li r21,0
	r21.s64 = 0;
loc_825C2C74:
	// lwz r22,0(r29)
	r22.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_825C2C78:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x825c2e60
	if (ctx.cr6.eq) goto loc_825C2E60;
	// lwz r28,12(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 12);
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(r28.u32, r23.u32, ctx.xer);
	// bne cr6,0x825c2d2c
	if (!ctx.cr6.eq) goto loc_825C2D2C;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bne cr6,0x825c2c9c
	if (!ctx.cr6.eq) goto loc_825C2C9C;
	// clrlwi. r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c2e50
	if (ctx.cr0.eq) goto loc_825C2E50;
loc_825C2C9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r17,0
	r17.s64 = 0;
	// bl 0x82559fb0
	ctx.lr = 0x825C2CA8;
	sub_82559FB0(ctx, base);
loc_825C2CA8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c2eec
	if (!ctx.cr0.eq) goto loc_825C2EEC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c2eec
	if (ctx.cr0.eq) goto loc_825C2EEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
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
	// lwzx r29,r10,r4
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x825c2d1c
	if (!ctx.cr0.eq) goto loc_825C2D1C;
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
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824e4308
	ctx.lr = 0x825C2D1C;
	sub_824E4308(ctx, base);
loc_825C2D1C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// b 0x825c2ca8
	goto loc_825C2CA8;
loc_825C2D2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82524638
	ctx.lr = 0x825C2D34;
	sub_82524638(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c2e50
	if (ctx.cr0.eq) goto loc_825C2E50;
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// bne cr6,0x825c2e50
	if (!ctx.cr6.eq) goto loc_825C2E50;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c2d60
	if (ctx.cr0.eq) goto loc_825C2D60;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8252dc68
	ctx.lr = 0x825C2D5C;
	sub_8252DC68(ctx, base);
	// b 0x825c2d8c
	goto loc_825C2D8C;
loc_825C2D60:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_825C2D64:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c2e58
	if (!ctx.cr0.eq) goto loc_825C2E58;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c2e58
	if (ctx.cr0.eq) goto loc_825C2E58;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x825c2d64
	if (!ctx.cr6.eq) goto loc_825C2D64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825C2D8C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825c2e50
	if (ctx.cr0.eq) goto loc_825C2E50;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c2e50
	if (!ctx.cr0.eq) goto loc_825C2E50;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c2dd8
	if (!ctx.cr0.eq) goto loc_825C2DD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c2dd8
	if (ctx.cr0.eq) goto loc_825C2DD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c2de4
	if (!ctx.cr6.gt) goto loc_825C2DE4;
loc_825C2DD8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C2DE4;
	sub_8251FE00(ctx, base);
loc_825C2DE4:
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
	// stwx r28,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r28.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c2e2c
	if (!ctx.cr0.eq) goto loc_825C2E2C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825c2e2c
	if (ctx.cr0.eq) goto loc_825C2E2C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825c2e38
	if (!ctx.cr6.gt) goto loc_825C2E38;
loc_825C2E2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251fe00
	ctx.lr = 0x825C2E38;
	sub_8251FE00(ctx, base);
loc_825C2E38:
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
	// stwx r28,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r28.u32);
loc_825C2E50:
	// lwz r22,4(r22)
	r22.u64 = REX_LOAD_U32(r22.u32 + 4);
	// b 0x825c2c78
	goto loc_825C2C78;
loc_825C2E58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825c2d8c
	goto loc_825C2D8C;
loc_825C2E60:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825c2ca8
	if (!ctx.cr0.eq) goto loc_825C2CA8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c2ca8
	if (ctx.cr0.eq) goto loc_825C2CA8;
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
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r4
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x825c2ed4
	if (!ctx.cr0.eq) goto loc_825C2ED4;
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
	ctx.lr = 0x825C2ED4;
	sub_824E4308(ctx, base);
loc_825C2ED4:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmplwi cr6,r21,10000
	ctx.cr6.compare<uint32_t>(r21.u32, 10000, ctx.xer);
	// ble cr6,0x825c2c74
	if (!ctx.cr6.gt) goto loc_825C2C74;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x825C2EEC;
	sub_824E4368(ctx, base);
loc_825C2EEC:
	// lwz r10,976(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 976);
	// addi r11,r27,972
	ctx.r11.s64 = r27.s64 + 972;
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(r30.u32, 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r30,976(r27)
	REX_STORE_U32(r27.u32 + 976, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r31,976(r27)
	REX_STORE_U32(r27.u32 + 976, r31.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825D3308) {
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
	ctx.lr = 0x825D3310;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d3350
	if (!ctx.cr6.eq) goto loc_825D3350;
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
	// li r7,1991
	ctx.r7.s64 = 1991;
	// bl 0x824ea978
	ctx.lr = 0x825D3350;
	sub_824EA978(ctx, base);
loc_825D3350:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D3360;
	sub_824F05F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D3374;
	sub_824F05F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825d33e4
	if (!ctx.cr0.eq) goto loc_825D33E4;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// bne cr6,0x825d33e4
	if (!ctx.cr6.eq) goto loc_825D33E4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d33a0
	if (ctx.cr6.eq) goto loc_825D33A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D33A0;
	sub_824F0950(ctx, base);
loc_825D33A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d33dc
	if (ctx.cr6.eq) goto loc_825D33DC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d33dc
	if (ctx.cr6.eq) goto loc_825D33DC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// bctrl 
	ctx.lr = 0x825D33DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D33DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d3440
	goto loc_825D3440;
loc_825D33E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d3400
	if (ctx.cr6.eq) goto loc_825D3400;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D3400;
	sub_824F0950(ctx, base);
loc_825D3400:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d343c
	if (ctx.cr6.eq) goto loc_825D343C;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d343c
	if (ctx.cr6.eq) goto loc_825D343C;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// addi r4,r10,5728
	ctx.r4.s64 = ctx.r10.s64 + 5728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,45
	ctx.r6.s64 = 45;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,180(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// bctrl 
	ctx.lr = 0x825D343C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D343C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D3440:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825D6DF0) {
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
	// bne cr6,0x825d6e2c
	if (!ctx.cr6.eq) goto loc_825D6E2C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,6320
	ctx.r6.s64 = ctx.r11.s64 + 6320;
	// addi r5,r10,6312
	ctx.r5.s64 = ctx.r10.s64 + 6312;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,109
	ctx.r7.s64 = 109;
	// bl 0x824ea978
	ctx.lr = 0x825D6E2C;
	sub_824EA978(ctx, base);
loc_825D6E2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d6cd8
	ctx.lr = 0x825D6E34;
	sub_825D6CD8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x825a2758
	ctx.lr = 0x825D6E3C;
	sub_825A2758(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D6E50;
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

DEFINE_REX_FUNC(sub_825D9EB0) {
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
	ctx.lr = 0x825D9EB8;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825d8158
	ctx.lr = 0x825D9ECC;
	sub_825D8158(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfs f30,3704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	f30.f64 = double(temp.f32);
	// addi r29,r30,1096
	r29.s64 = r30.s64 + 1096;
	// lfs f31,3716(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3716);
	f31.f64 = double(temp.f32);
	// li r28,16
	r28.s64 = 16;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r11,r11,19324
	ctx.r11.s64 = ctx.r11.s64 + 19324;
	// addi r9,r9,10516
	ctx.r9.s64 = ctx.r9.s64 + 10516;
	// addi r7,r7,10492
	ctx.r7.s64 = ctx.r7.s64 + 10492;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r16,0
	r16.s64 = 0;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r17,1
	r17.s64 = 1;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r15,r10,10184
	r15.s64 = ctx.r10.s64 + 10184;
	// addi r23,r8,22852
	r23.s64 = ctx.r8.s64 + 22852;
	// addi r22,r6,9792
	r22.s64 = ctx.r6.s64 + 9792;
loc_825D9F34:
	// lwz r20,0(r29)
	r20.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x825da528
	if (ctx.cr6.eq) goto loc_825DA528;
	// lwz r11,32(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 32);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x825da528
	if (!ctx.cr6.eq) goto loc_825DA528;
	// lwz r25,36(r20)
	r25.u64 = REX_LOAD_U32(r20.u32 + 36);
	// li r27,0
	r27.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// mr r18,r17
	r18.u64 = r17.u64;
	// lwz r19,4(r25)
	r19.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_825D9F60:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825d9f74
	if (!ctx.cr6.gt) goto loc_825D9F74;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825d9f80
	goto loc_825D9F80;
loc_825D9F74:
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 8);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// lwzx r27,r10,r21
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r21.u32);
loc_825D9F80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825da4d8
	if (ctx.cr0.eq) goto loc_825DA4D8;
	// lwz r11,228(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825da4cc
	if (ctx.cr0.eq) goto loc_825DA4CC;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mr r26,r17
	r26.u64 = r17.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825da4cc
	if (ctx.cr6.lt) goto loc_825DA4CC;
	// addi r24,r27,32
	r24.s64 = r27.s64 + 32;
loc_825D9FA8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825da4b4
	if (!ctx.cr6.eq) goto loc_825DA4B4;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r28,12(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 12);
	// lwz r3,1488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825D9FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x825d6470
	ctx.lr = 0x825D9FEC;
	sub_825D6470(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825da1d4
	if (!ctx.cr6.eq) goto loc_825DA1D4;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x825da18c
	if (!ctx.cr6.eq) goto loc_825DA18C;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DA008;
	sub_825F9AD0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825DA028;
	sub_825E7538(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825f9f38
	ctx.lr = 0x825DA03C;
	sub_825F9F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825f9f38
	ctx.lr = 0x825DA04C;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA06C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA08C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r17,159(r31)
	REX_STORE_U8(r31.u32 + 159, r17.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DA09C;
	sub_825D82D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825DA0A8;
	sub_825FCB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DA0B0;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825da0d0
	if (!ctx.cr0.eq) goto loc_825DA0D0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2501
	ctx.r7.s64 = 2501;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA0D0;
	sub_824EA978(ctx, base);
loc_825DA0D0:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DA0DC;
	sub_825F9AD0(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DA0EC;
	sub_825F9F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825faab8
	ctx.lr = 0x825DA10C;
	sub_825FAAB8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA12C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA14C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DA158;
	sub_825D82D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825DA164;
	sub_825FCB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DA16C;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825da18c
	if (!ctx.cr0.eq) goto loc_825DA18C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2511
	ctx.r7.s64 = 2511;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA18C;
	sub_824EA978(ctx, base);
loc_825DA18C:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DA19C;
	sub_825F9F38(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DA1A8;
	sub_825D82D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DA1B0;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825da4b4
	if (!ctx.cr0.eq) goto loc_825DA4B4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2516
	ctx.r7.s64 = 2516;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA1D0;
	sub_824EA978(ctx, base);
	// b 0x825da4b4
	goto loc_825DA4B4;
loc_825DA1D4:
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,1488(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA1EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x825d6300
	ctx.lr = 0x825DA208;
	sub_825D6300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825da4b4
	if (!ctx.cr0.eq) goto loc_825DA4B4;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DA21C;
	sub_825F9AD0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 172);
	// bl 0x825e7538
	ctx.lr = 0x825DA23C;
	sub_825E7538(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825f9f38
	ctx.lr = 0x825DA250;
	sub_825F9F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825f9f38
	ctx.lr = 0x825DA260;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA2A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r17,159(r31)
	REX_STORE_U8(r31.u32 + 159, r17.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DA2B0;
	sub_825D82D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825DA2BC;
	sub_825FCB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DA2C4;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825da2e4
	if (!ctx.cr0.eq) goto loc_825DA2E4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2536
	ctx.r7.s64 = 2536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA2E4;
	sub_824EA978(ctx, base);
loc_825DA2E4:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DA2F0;
	sub_825F9AD0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DA300;
	sub_825F9F38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DA350;
	sub_825F9F38(ctx, base);
	// lwz r14,12(r30)
	r14.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,1488(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// bl 0x825d6600
	ctx.lr = 0x825DA384;
	sub_825D6600(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825da394
	if (!ctx.cr6.eq) goto loc_825DA394;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825da3d4
	goto loc_825DA3D4;
loc_825DA394:
	// lwz r14,12(r30)
	r14.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,1488(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA3AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,15992
	ctx.r6.s64 = ctx.r11.s64 + 15992;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// bl 0x825d6790
	ctx.lr = 0x825DA3C8;
	sub_825D6790(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x825da414
	if (!ctx.cr6.eq) goto loc_825DA414;
	// li r6,2
	ctx.r6.s64 = 2;
loc_825DA3D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA3F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825DA410;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825da42c
	goto loc_825DA42C;
loc_825DA414:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2565
	ctx.r7.s64 = 2565;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA42C;
	sub_824EA978(ctx, base);
loc_825DA42C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DA438;
	sub_825D82D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 164);
	// bl 0x825fcb18
	ctx.lr = 0x825DA444;
	sub_825FCB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DA44C;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825da46c
	if (!ctx.cr0.eq) goto loc_825DA46C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2570
	ctx.r7.s64 = 2570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA46C;
	sub_824EA978(ctx, base);
loc_825DA46C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f9f38
	ctx.lr = 0x825DA47C;
	sub_825F9F38(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DA488;
	sub_825D82D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DA490;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825da4b0
	if (!ctx.cr0.eq) goto loc_825DA4B0;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r7,2575
	ctx.r7.s64 = 2575;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA4B0;
	sub_824EA978(ctx, base);
loc_825DA4B0:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_825DA4B4:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825d9fa8
	if (!ctx.cr6.gt) goto loc_825D9FA8;
	// lwz r28,96(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_825DA4CC:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// b 0x825d9f60
	goto loc_825D9F60;
loc_825DA4D8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x825da528
	if (ctx.cr6.eq) goto loc_825DA528;
	// rlwinm r31,r19,2,0,29
	r31.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
loc_825DA4E4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// addi r19,r19,-1
	r19.s64 = r19.s64 + -1;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825da504
	if (!ctx.cr6.lt) goto loc_825DA504;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// b 0x825da514
	goto loc_825DA514;
loc_825DA504:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825f7718
	ctx.lr = 0x825DA510;
	sub_825F7718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825DA514:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x825f8510
	ctx.lr = 0x825DA520;
	sub_825F8510(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x825da4e4
	if (!ctx.cr6.eq) goto loc_825DA4E4;
loc_825DA528:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bne 0x825d9f34
	if (!ctx.cr0.eq) goto loc_825D9F34;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82607B90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607B98;
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
	// bl 0x825b33a0
	ctx.lr = 0x82607BB8;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82607bdc
	if (ctx.cr0.eq) goto loc_82607BDC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f9230
	ctx.lr = 0x82607BD8;
	sub_825F9230(ctx, base);
	// b 0x82607be0
	goto loc_82607BE0;
loc_82607BDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607BE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8260AAD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8260aae8
	if (ctx.cr0.eq) goto loc_8260AAE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r3,r11,34952
	ctx.r3.u64 = ctx.r11.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
loc_8260AAE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260AD58) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8260ada4
	if (ctx.cr6.eq) goto loc_8260ADA4;
	// li r30,0
	r30.s64 = 0;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
loc_8260AD84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822f5d50
	ctx.lr = 0x8260AD90;
	sub_822F5D50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8260ad84
	if (!ctx.cr0.lt) goto loc_8260AD84;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822f5d48
	ctx.lr = 0x8260ADA0;
	sub_822F5D48(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8260ADA4:
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

DEFINE_REX_FUNC(sub_8260C4E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260C4E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8260c56c
	if (ctx.cr6.eq) goto loc_8260C56C;
	// bl 0x823eea88
	ctx.lr = 0x8260C500;
	sub_823EEA88(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8260c56c
	if (ctx.cr6.eq) goto loc_8260C56C;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r30,r31,116
	r30.s64 = r31.s64 + 116;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 560);
	// b 0x8260c53c
	goto loc_8260C53C;
loc_8260C52C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x8260c544
	if (ctx.cr6.eq) goto loc_8260C544;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8260C53C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8260c52c
	if (!ctx.cr6.eq) goto loc_8260C52C;
loc_8260C544:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260c558
	if (ctx.cr6.eq) goto loc_8260C558;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,536
	ctx.r3.s64 = r31.s64 + 536;
	// bl 0x82625870
	ctx.lr = 0x8260C558;
	sub_82625870(ctx, base);
loc_8260C558:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C56C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8260C56C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260F1F0) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260F218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8260f238
	if (ctx.cr6.eq) goto loc_8260F238;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_8260F238:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260F250;
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

DEFINE_REX_FUNC(sub_82611B80) {
	REX_FUNC_PROLOGUE();
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// addi r10,r3,368
	ctx.r10.s64 = ctx.r3.s64 + 368;
	// b 0x82611ba8
	goto loc_82611BA8;
loc_82611B8C:
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
loc_82611BA8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82611b8c
	if (!ctx.cr6.eq) goto loc_82611B8C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,408
	ctx.r11.s64 = ctx.r3.s64 + 408;
	// stw r9,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,432(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// b 0x82611be4
	goto loc_82611BE4;
loc_82611BC8:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
loc_82611BE4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82611bc8
	if (!ctx.cr6.eq) goto loc_82611BC8;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826141D8) {
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
	// bl 0x82613290
	ctx.lr = 0x826141F8;
	sub_82613290(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x82613290
	ctx.lr = 0x82614200;
	sub_82613290(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82615D10) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261c150
	sub_8261C150(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615F98) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x8261c288
	sub_8261C288(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82615FD8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82615cf8
	sub_82615CF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82616168) {
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
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82617020) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82617054
	if (ctx.cr6.eq) goto loc_82617054;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x826170b0
	goto loc_826170B0;
loc_82617054:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a2e60
	ctx.lr = 0x8261706C;
	sub_826A2E60(ctx, base);
	// lis r11,-32159
	ctx.r11.s64 = -2107572224;
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r11,r11,25512
	ctx.r11.s64 = ctx.r11.s64 + 25512;
	// addi r10,r10,7168
	ctx.r10.s64 = ctx.r10.s64 + 7168;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f5b58
	ctx.lr = 0x826170A0;
	sub_822F5B58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x826170b0
	if (ctx.cr0.lt) goto loc_826170B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_826170B0:
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

DEFINE_REX_FUNC(sub_8261B918) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261B920;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8261b98c
	if (ctx.cr6.eq) goto loc_8261B98C;
loc_8261B93C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261b9d0
	if (ctx.cr6.lt) goto loc_8261B9D0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8261b95c
	if (ctx.cr6.eq) goto loc_8261B95C;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261b960
	goto loc_8261B960;
loc_8261B95C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261B960:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B97C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8261b93c
	if (!ctx.cr6.eq) goto loc_8261B93C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261b9d0
	if (ctx.cr6.lt) goto loc_8261B9D0;
loc_8261B98C:
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261b9b0
	if (ctx.cr6.eq) goto loc_8261B9B0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261B9B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8261B9B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8261b9d0
	if (ctx.cr6.lt) goto loc_8261B9D0;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261b9d0
	if (ctx.cr6.eq) goto loc_8261B9D0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8261b0b8
	ctx.lr = 0x8261B9D0;
	sub_8261B0B8(ctx, base);
loc_8261B9D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82625B68) {
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
	ctx.lr = 0x82625B70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,40
	r30.s64 = ctx.r3.s64 + 40;
	// li r29,13
	r29.s64 = 13;
loc_82625B80:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82625bb4
	if (ctx.cr6.eq) goto loc_82625BB4;
	// addi r28,r30,-40
	r28.s64 = r30.s64 + -40;
loc_82625B90:
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x8260c0a0
	ctx.lr = 0x82625B98;
	sub_8260C0A0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82641840
	ctx.lr = 0x82625BA0;
	sub_82641840(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82625BA8;
	sub_8264C3D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82625b90
	if (!ctx.cr6.eq) goto loc_82625B90;
loc_82625BB4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x82625b80
	if (!ctx.cr0.eq) goto loc_82625B80;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 532);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82625bd8
	if (ctx.cr6.eq) goto loc_82625BD8;
	// bl 0x8264c3d0
	ctx.lr = 0x82625BD4;
	sub_8264C3D0(ctx, base);
	// stw r30,532(r31)
	REX_STORE_U32(r31.u32 + 532, r30.u32);
loc_82625BD8:
	// lwz r3,544(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82625bec
	if (ctx.cr6.eq) goto loc_82625BEC;
	// bl 0x8264c3d0
	ctx.lr = 0x82625BE8;
	sub_8264C3D0(ctx, base);
	// stw r30,544(r31)
	REX_STORE_U32(r31.u32 + 544, r30.u32);
loc_82625BEC:
	// addi r31,r31,528
	r31.s64 = r31.s64 + 528;
	// li r30,12
	r30.s64 = 12;
loc_82625BF4:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260f8f8
	ctx.lr = 0x82625C00;
	sub_8260F8F8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82625bf4
	if (!ctx.cr0.lt) goto loc_82625BF4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82628250) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826286C8) {
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
	ctx.lr = 0x826286D0;
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
	// bl 0x826277b8
	ctx.lr = 0x826286EC;
	sub_826277B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82628710
	if (ctx.cr0.eq) goto loc_82628710;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262870C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8262877c
	goto loc_8262877C;
loc_82628710:
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
	ctx.lr = 0x8262872C;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82628740
	if (!ctx.cr0.eq) goto loc_82628740;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x8262877c
	goto loc_8262877C;
loc_82628740:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
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
	// bl 0x82628898
	ctx.lr = 0x8262876C;
	sub_82628898(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x8262877c
	if (!ctx.cr0.lt) goto loc_8262877C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8262877C;
	sub_8264C3D0(ctx, base);
loc_8262877C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82632CD8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x82632CE0;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lwz r26,24(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r11,16
	r28.s64 = ctx.r11.s64 + 16;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f13,f1
	ctx.f13.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lwz r23,4(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lwz r22,28(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r31,36(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f30,15504(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15504);
	f30.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// rlwinm r24,r7,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f29,f1,f10
	f29.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// beq cr6,0x82632da8
	if (ctx.cr6.eq) goto loc_82632DA8;
	// lhz r11,2(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 2);
	// lhz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 0);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * f30.f64));
	// stfs f6,4(r28)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// fmuls f7,f9,f30
	ctx.f7.f64 = double(float(ctx.f9.f64 * f30.f64));
	// stfs f7,0(r28)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_82632DA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// bge cr6,0x82632e30
	if (!ctx.cr6.lt) goto loc_82632E30;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_82632DBC:
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bge cr6,0x82632e2c
	if (!ctx.cr6.lt) goto loc_82632E2C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// lfs f13,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r8,r28
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f7,f9,f0,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f6,f8,f0,f13
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82632e24
	if (ctx.cr6.lt) goto loc_82632E24;
loc_82632E14:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82632e14
	if (!ctx.cr6.lt) goto loc_82632E14;
loc_82632E24:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// blt cr6,0x82632dbc
	if (ctx.cr6.lt) goto loc_82632DBC;
loc_82632E2C:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82632E30:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82632f28
	if (ctx.cr6.eq) goto loc_82632F28;
	// subf r10,r30,r22
	ctx.r10.u64 = r22.u64 - r30.u64;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// ble cr6,0x82632f64
	if (!ctx.cr6.gt) goto loc_82632F64;
loc_82632E50:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// lhz r7,-2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhzx r5,r8,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + r27.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// extsw r5,r4
	ctx.r5.s64 = ctx.r4.s32;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// subf r3,r9,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r9.u64;
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmadds f12,f2,f0,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f13,f5,f0,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f4.f64)));
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fmuls f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x82632f18
	if (ctx.cr6.lt) goto loc_82632F18;
loc_82632F08:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82632f08
	if (!ctx.cr6.lt) goto loc_82632F08;
loc_82632F18:
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82632e50
	if (!ctx.cr6.eq) goto loc_82632E50;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82632F28:
	// subf r11,r30,r22
	ctx.r11.u64 = r22.u64 - r30.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82632f64
	if (!ctx.cr6.gt) goto loc_82632F64;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// rlwinm r29,r11,0,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + r23.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// bl 0x82632a20
	ctx.lr = 0x82632F58;
	sub_82632A20(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
loc_82632F64:
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// bge cr6,0x82633044
	if (!ctx.cr6.lt) goto loc_82633044;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
loc_82632F74:
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// add r31,r24,r31
	r31.u64 = r24.u64 + r31.u64;
	// lhzx r4,r8,r27
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + r27.u32);
	// lhz r7,-2(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r6,2(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// subf r8,r5,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r5.u64;
	// subf r3,r9,r4
	ctx.r3.u64 = ctx.r4.u64 - ctx.r9.u64;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// std r6,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmadds f1,f5,f0,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f13,f4,f0,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f2.f64)));
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fmuls f12,f1,f30
	ctx.f12.f64 = double(float(ctx.f1.f64 * f30.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfsu f11,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x8263303c
	if (ctx.cr6.lt) goto loc_8263303C;
loc_8263302C:
	// fsubs f0,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f31.f64));
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8263302c
	if (!ctx.cr6.lt) goto loc_8263302C;
loc_8263303C:
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(r30.u32, r22.u32, ctx.xer);
	// blt cr6,0x82632f74
	if (ctx.cr6.lt) goto loc_82632F74;
loc_82633044:
	// addi r11,r26,-2
	ctx.r11.s64 = r26.s64 + -2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82633054
	if (!ctx.cr6.lt) goto loc_82633054;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82633054:
	// subf r10,r26,r31
	ctx.r10.u64 = r31.u64 - r26.u64;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r8,r26
	ctx.r8.s64 = static_cast<int64_t>(-r26.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// stw r9,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r9.u32);
	// stw r10,36(r25)
	REX_STORE_U32(r25.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82633124
	if (!ctx.cr6.lt) goto loc_82633124;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x826330e8
	if (ctx.cr6.lt) goto loc_826330E8;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r26,2
	ctx.r7.s64 = r26.s64 + 2;
	// addi r6,r26,3
	ctx.r6.s64 = r26.s64 + 3;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
loc_826330AC:
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r28
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// lfsx f12,r3,r28
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x826330ac
	if (ctx.cr6.lt) goto loc_826330AC;
loc_826330E8:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82633124
	if (!ctx.cr6.lt) goto loc_82633124;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + r26.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82633118:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82633118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82633118;
loc_82633124:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82633200
	if (ctx.cr6.lt) goto loc_82633200;
	// subfic r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r8,r28
	ctx.r10.u64 = ctx.r8.u64 + r28.u64;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r26,2
	ctx.r7.s64 = r26.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r26,3
	ctx.r6.s64 = r26.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + r27.u64;
loc_82633164:
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lhzx r5,r5,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + r27.u32);
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// std r4,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lhzx r5,r3,r27
	ctx.r5.u64 = REX_LOAD_U16(ctx.r3.u32 + r27.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * f30.f64));
	// std r4,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * f30.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f2,f30
	ctx.f13.f64 = double(float(ctx.f2.f64 * f30.f64));
	// fmuls f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f5.f64 * f30.f64));
	// stfs f1,12(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82633164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82633164;
loc_82633200:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82633250
	if (!ctx.cr6.lt) goto loc_82633250;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8263322C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// std r8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8263322c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8263322C;
loc_82633250:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82654800) {
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
	ctx.lr = 0x82654808;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// stb r24,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r24.u8);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ld r28,16(r11)
	r28.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// beq 0x82654890
	if (ctx.cr0.eq) goto loc_82654890;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x82654868
	goto loc_82654868;
loc_82654860:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
loc_82654868:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82654860
	if (!ctx.cr0.eq) goto loc_82654860;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82654874:
	// lwz r9,396(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x826548a4
	if (ctx.cr0.eq) goto loc_826548A4;
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82654874
	if (!ctx.cr6.eq) goto loc_82654874;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82654890:
	// li r30,1
	r30.s64 = 1;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// bne cr6,0x826548ac
	if (!ctx.cr6.eq) goto loc_826548AC;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x826548c8
	goto loc_826548C8;
loc_826548A4:
	// ld r28,16(r10)
	r28.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// b 0x82654890
	goto loc_82654890;
loc_826548AC:
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// rldicr r9,r28,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r28.u64, 0) & 0xFFFF000000000000;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x826548c8
	if (ctx.cr6.eq) goto loc_826548C8;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_826548C8:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_826548CC:
	// addi r10,r31,95
	ctx.r10.s64 = r31.s64 + 95;
	// rlwinm r29,r10,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r26
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82654a28
	if (ctx.cr6.eq) goto loc_82654A28;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82654a28
	if (ctx.cr6.eq) goto loc_82654A28;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(r28.u64, 0, ctx.xer);
	// beq cr6,0x82654990
	if (ctx.cr6.eq) goto loc_82654990;
	// lwz r11,396(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82654944
	if (ctx.cr0.eq) goto loc_82654944;
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// b 0x8265490c
	goto loc_8265490C;
loc_82654904:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
loc_8265490C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82654904
	if (!ctx.cr0.eq) goto loc_82654904;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82654918:
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8265493c
	if (ctx.cr0.eq) goto loc_8265493C;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82654918
	if (!ctx.cr6.eq) goto loc_82654918;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1307
	ctx.r3.u64 = ctx.r3.u64 | 1307;
	// b 0x82654b50
	goto loc_82654B50;
loc_8265493C:
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82654948
	goto loc_82654948;
loc_82654944:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82654948:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826b4890
	ctx.lr = 0x82654954;
	sub_826B4890(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265498c
	if (ctx.cr0.eq) goto loc_8265498C;
	// cmplwi cr6,r3,1245
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1245, ctx.xer);
	// bne cr6,0x82654ae4
	if (!ctx.cr6.eq) goto loc_82654AE4;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82654988
	if (ctx.cr6.eq) goto loc_82654988;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82654988
	if (ctx.cr6.eq) goto loc_82654988;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// b 0x8265499c
	goto loc_8265499C;
loc_82654988:
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
loc_8265498C:
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
loc_82654990:
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826549b0
	if (ctx.cr6.eq) goto loc_826549B0;
loc_8265499C:
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// slw r8,r30,r31
	ctx.r8.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// b 0x826549b4
	goto loc_826549B4;
loc_826549B0:
	// mr r27,r30
	r27.u64 = r30.u64;
loc_826549B4:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(r31.u32, 255, ctx.xer);
	// bne cr6,0x826549c4
	if (!ctx.cr6.eq) goto loc_826549C4;
	// li r10,15
	ctx.r10.s64 = 15;
	// b 0x826549cc
	goto loc_826549CC;
loc_826549C4:
	// slw r10,r30,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_826549CC:
	// lbz r8,392(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 392);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r8,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82654a50
	if (ctx.cr6.eq) goto loc_82654A50;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82654a00
	if (!ctx.cr0.eq) goto loc_82654A00;
	// lwzx r25,r29,r26
	r25.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
loc_82654A00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 392);
	// slw r9,r30,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// beq cr6,0x82654a18
	if (ctx.cr6.eq) goto loc_82654A18;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x82654a1c
	goto loc_82654A1C;
loc_82654A18:
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
loc_82654A1C:
	// stb r10,392(r11)
	REX_STORE_U8(ctx.r11.u32 + 392, ctx.r10.u8);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// b 0x82654a50
	goto loc_82654A50;
loc_82654A28:
	// lbz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 392);
	// slw r9,r30,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stb r10,392(r11)
	REX_STORE_U8(ctx.r11.u32 + 392, ctx.r10.u8);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwzx r10,r29,r26
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// or r27,r10,r27
	r27.u64 = ctx.r10.u64 | r27.u64;
loc_82654A50:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x826548cc
	if (ctx.cr6.lt) goto loc_826548CC;
	// cntlzw r10,r27
	ctx.r10.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// lwz r9,396(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwimi r9,r10,17,14,14
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x20000) | (ctx.r9.u64 & 0xFFFFFFFFFFFDFFFF);
	// stw r9,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// beq cr6,0x82654b4c
	if (ctx.cr6.eq) goto loc_82654B4C;
	// addi r11,r1,284
	ctx.r11.s64 = ctx.r1.s64 + 284;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r24,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// li r8,143
	ctx.r8.s64 = 143;
	// stw r30,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r24,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r24.u32);
	// stw r24,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r24.u32);
	// sth r24,160(r1)
	REX_STORE_U16(ctx.r1.u32 + 160, r24.u16);
	// stb r8,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r8.u8);
	// bl 0x82652bb8
	ctx.lr = 0x82654AD0;
	sub_82652BB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82654b50
	if (ctx.cr0.lt) goto loc_82654B50;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x82654b00
	goto loc_82654B00;
loc_82654AE4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82654b50
	if (!ctx.cr6.gt) goto loc_82654B50;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82654b50
	goto loc_82654B50;
loc_82654AF8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
loc_82654B00:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82654af8
	if (!ctx.cr0.eq) goto loc_82654AF8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stw r11,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_82654B14:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// bne cr6,0x82654b14
	if (!ctx.cr6.eq) goto loc_82654B14;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82653a98
	ctx.lr = 0x82654B44;
	sub_82653A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82654b50
	if (ctx.cr0.lt) goto loc_82654B50;
loc_82654B4C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82654B50:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8266AA28) {
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
	ctx.lr = 0x8266AA30;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,19
	ctx.r3.s64 = 19;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// bl 0x82675ee0
	ctx.lr = 0x8266AA58;
	sub_82675EE0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8266aa6c
	if (!ctx.cr0.eq) goto loc_8266AA6C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8266ad4c
	goto loc_8266AD4C;
loc_8266AA6C:
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// stw r11,69(r29)
	REX_STORE_U32(r29.u32 + 69, ctx.r11.u32);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// stw r11,73(r29)
	REX_STORE_U32(r29.u32 + 73, ctx.r11.u32);
	// lhz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 68);
	// sth r11,77(r29)
	REX_STORE_U16(r29.u32 + 77, ctx.r11.u16);
	// lhz r11,70(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 70);
	// sth r22,81(r29)
	REX_STORE_U16(r29.u32 + 81, r22.u16);
	// sth r11,79(r29)
	REX_STORE_U16(r29.u32 + 79, ctx.r11.u16);
	// lwz r11,92(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266aaf0
	if (ctx.cr6.eq) goto loc_8266AAF0;
loc_8266AA9C:
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
	// bne 0x8266aa9c
	if (!ctx.cr0.eq) goto loc_8266AA9C;
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r8,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r8.u32);
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
loc_8266AAF0:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// li r23,0
	r23.s64 = 0;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8266ad08
	if (ctx.cr6.eq) goto loc_8266AD08;
	// addi r21,r11,-4
	r21.s64 = ctx.r11.s64 + -4;
loc_8266AB08:
	// lwzu r31,4(r21)
	ea = 4 + r21.u32;
	r31.u64 = REX_LOAD_U32(ea);
	r21.u32 = ea;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8266ad68
	if (ctx.cr6.eq) goto loc_8266AD68;
	// lwz r11,60(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 60);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8266ad68
	if (ctx.cr6.eq) goto loc_8266AD68;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x8266ad68
	if (ctx.cr6.eq) goto loc_8266AD68;
	// lwz r11,240(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 240);
	// addi r10,r25,240
	ctx.r10.s64 = r25.s64 + 240;
	// b 0x8266ab4c
	goto loc_8266AB4C;
loc_8266AB38:
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// beq cr6,0x8266ab60
	if (ctx.cr6.eq) goto loc_8266AB60;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8266AB4C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8266ab5c
	if (ctx.cr6.eq) goto loc_8266AB5C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8266ab38
	if (!ctx.cr0.eq) goto loc_8266AB38;
loc_8266AB5C:
	// li r30,0
	r30.s64 = 0;
loc_8266AB60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8266ad68
	if (ctx.cr6.eq) goto loc_8266AD68;
	// addi r27,r26,200
	r27.s64 = r26.s64 + 200;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82670660
	ctx.lr = 0x8266AB78;
	sub_82670660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266ad68
	if (!ctx.cr0.eq) goto loc_8266AD68;
	// addi r28,r30,188
	r28.s64 = r30.s64 + 188;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82670660
	ctx.lr = 0x8266AB90;
	sub_82670660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266ad68
	if (!ctx.cr0.eq) goto loc_8266AD68;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8266abc4
	if (ctx.cr6.eq) goto loc_8266ABC4;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8266ABA8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// beq cr6,0x8266ad68
	if (ctx.cr6.eq) goto loc_8266AD68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// blt cr6,0x8266aba8
	if (ctx.cr6.lt) goto loc_8266ABA8;
loc_8266ABC4:
	// lwz r11,236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8266acb0
	if (!ctx.cr6.eq) goto loc_8266ACB0;
	// lwz r11,348(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 348);
	// lwz r10,352(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 352);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8266acb0
	if (!ctx.cr6.lt) goto loc_8266ACB0;
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266acb0
	if (ctx.cr6.eq) goto loc_8266ACB0;
	// lwz r11,292(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 292);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266ac08
	if (!ctx.cr0.eq) goto loc_8266AC08;
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// li r7,1155
	ctx.r7.s64 = 1155;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266ac0c
	if (ctx.cr0.eq) goto loc_8266AC0C;
loc_8266AC08:
	// li r7,131
	ctx.r7.s64 = 131;
loc_8266AC0C:
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// lwz r6,32(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826711d8
	ctx.lr = 0x8266AC20;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826715f0
	ctx.lr = 0x8266AC3C;
	sub_826715F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826706a8
	ctx.lr = 0x8266AC48;
	sub_826706A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266ad70
	if (!ctx.cr0.eq) goto loc_8266AD70;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826706a8
	ctx.lr = 0x8266AC5C;
	sub_826706A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8266ac70
	if (!ctx.cr0.eq) goto loc_8266AC70;
	// lwz r11,180(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r30)
	REX_STORE_U32(r30.u32 + 180, ctx.r11.u32);
loc_8266AC70:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8266ad58
	if (!ctx.cr6.eq) goto loc_8266AD58;
	// lwz r11,352(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 352);
	// lwz r10,428(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// stw r11,352(r25)
	REX_STORE_U32(r25.u32 + 352, ctx.r11.u32);
	// stw r10,428(r25)
	REX_STORE_U32(r25.u32 + 428, ctx.r10.u32);
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266acfc
	if (!ctx.cr0.eq) goto loc_8266ACFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82671558
	ctx.lr = 0x8266ACAC;
	sub_82671558(ctx, base);
	// b 0x8266acf4
	goto loc_8266ACF4;
loc_8266ACB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826706a8
	ctx.lr = 0x8266ACBC;
	sub_826706A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8266ad70
	if (!ctx.cr0.eq) goto loc_8266AD70;
	// lwz r11,236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 236);
	// lis r7,-32646
	ctx.r7.s64 = -2139488256;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266acdc
	if (ctx.cr6.eq) goto loc_8266ACDC;
	// ori r7,r7,4120
	ctx.r7.u64 = ctx.r7.u64 | 4120;
	// b 0x8266ace0
	goto loc_8266ACE0;
loc_8266ACDC:
	// ori r7,r7,4101
	ctx.r7.u64 = ctx.r7.u64 | 4101;
loc_8266ACE0:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8266a4a0
	ctx.lr = 0x8266ACF4;
	sub_8266A4A0(ctx, base);
loc_8266ACF4:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8266ad70
	if (ctx.cr0.lt) goto loc_8266AD70;
loc_8266ACFC:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(r23.u32, r19.u32, ctx.xer);
	// blt cr6,0x8266ab08
	if (ctx.cr6.lt) goto loc_8266AB08;
loc_8266AD08:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
loc_8266AD0C:
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
	// bne 0x8266ad0c
	if (!ctx.cr0.eq) goto loc_8266AD0C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266ad48
	if (!ctx.cr6.eq) goto loc_8266AD48;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266AD48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8266AD48:
	// li r31,0
	r31.s64 = 0;
loc_8266AD4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1ce4
	return;
loc_8266AD58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826707c0
	ctx.lr = 0x8266AD64;
	sub_826707C0(ctx, base);
	// b 0x8266ad70
	goto loc_8266AD70;
loc_8266AD68:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4106
	r31.u64 = r31.u64 | 4106;
loc_8266AD70:
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
loc_8266AD74:
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
	// bne 0x8266ad74
	if (!ctx.cr0.eq) goto loc_8266AD74;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8266ad4c
	if (!ctx.cr6.eq) goto loc_8266AD4C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266ADB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266ad4c
	goto loc_8266AD4C;
}

DEFINE_REX_FUNC(sub_8267F310) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267F318;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267F32C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,1188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1188);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r10,1188(r31)
	REX_STORE_U32(r31.u32 + 1188, ctx.r10.u32);
	// lwz r30,1048(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1048);
	// stw r11,1048(r31)
	REX_STORE_U32(r31.u32 + 1048, ctx.r11.u32);
	// beq cr6,0x8267f380
	if (ctx.cr6.eq) goto loc_8267F380;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8267f38c
	if (!ctx.cr6.lt) goto loc_8267F38C;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8267f38c
	if (ctx.cr6.eq) goto loc_8267F38C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// stb r11,1185(r31)
	REX_STORE_U8(r31.u32 + 1185, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r11,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, ctx.r11.u8);
	// bl 0x826797d8
	ctx.lr = 0x8267F380;
	sub_826797D8(ctx, base);
loc_8267F380:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267F388;
	sub_82676D18(ctx, base);
	// b 0x8267f3f4
	goto loc_8267F3F4;
loc_8267F38C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lbz r3,2(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// bl 0x82680a30
	ctx.lr = 0x8267F398;
	sub_82680A30(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8267f3e8
	if (!ctx.cr6.gt) goto loc_8267F3E8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8267f380
	if (ctx.cr6.eq) goto loc_8267F380;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8267f3d8
	if (ctx.cr6.eq) goto loc_8267F3D8;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x8267f380
	if (ctx.cr6.eq) goto loc_8267F380;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8267f3d0
	if (ctx.cr6.eq) goto loc_8267F3D0;
	// bl 0x8267bce8
	ctx.lr = 0x8267F3CC;
	sub_8267BCE8(ctx, base);
	// b 0x8267f3f4
	goto loc_8267F3F4;
loc_8267F3D0:
	// bl 0x82678fa8
	ctx.lr = 0x8267F3D4;
	sub_82678FA8(ctx, base);
	// b 0x8267f3f4
	goto loc_8267F3F4;
loc_8267F3D8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82679038
	ctx.lr = 0x8267F3E4;
	sub_82679038(ctx, base);
	// b 0x8267f3f4
	goto loc_8267F3F4;
loc_8267F3E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82678f50
	ctx.lr = 0x8267F3F4;
	sub_82678F50(ctx, base);
loc_8267F3F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267cae0
	ctx.lr = 0x8267F3FC;
	sub_8267CAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267F404;
	sub_82676D18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82683B80) {
	REX_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// b 0x826836c8
	sub_826836C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82684528) {
	REX_FUNC_PROLOGUE();
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r3)
	REX_STORE_U32(ctx.r3.u32 + 200, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826848A0) {
	REX_FUNC_PROLOGUE();
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826848f4
	if (ctx.cr0.eq) goto loc_826848F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826848fc
	goto loc_826848FC;
loc_826848F4:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_826848FC:
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82686AA0) {
	REX_FUNC_PROLOGUE();
	// lhz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsh. r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82686aec
	if (!ctx.cr0.gt) goto loc_82686AEC;
	// lhz r9,38(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 38);
	// rlwinm. r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82686adc
	if (!ctx.cr0.eq) goto loc_82686ADC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r4,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r4.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// sth r10,38(r3)
	REX_STORE_U16(ctx.r3.u32 + 38, ctx.r10.u16);
	// b 0x82686b14
	goto loc_82686B14;
loc_82686ADC:
	// lhz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// extsh. r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge 0x82686af4
	if (!ctx.cr0.lt) goto loc_82686AF4;
loc_82686AEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82686AF4:
	// lhz r8,34(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// extsh. r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// ble 0x82686b18
	if (!ctx.cr0.gt) goto loc_82686B18;
loc_82686B14:
	// sth r4,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r4.u16);
loc_82686B18:
	// rlwinm r10,r9,29,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268AB68) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x823ef5f0
	ctx.lr = 0x8268AB98;
	sub_823EF5F0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8268e9f0
	ctx.lr = 0x8268ABA8;
	sub_8268E9F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8268abc8
	if (!ctx.cr0.lt) goto loc_8268ABC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8268ABC8:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// addi r11,r30,44
	ctx.r11.s64 = r30.s64 + 44;
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268abe4
	if (ctx.cr6.eq) goto loc_8268ABE4;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8268abe8
	goto loc_8268ABE8;
loc_8268ABE4:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8268ABE8:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
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

DEFINE_REX_FUNC(sub_8268F028) {
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
	ctx.lr = 0x8268F030;
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
	// bl 0x823f02b8
	ctx.lr = 0x8268F050;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8268f07c
	if (!ctx.cr0.eq) goto loc_8268F07C;
loc_8268F058:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// bl 0x8268ef40
	ctx.lr = 0x8268F068;
	sub_8268EF40(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_8268F06C:
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8268F07C:
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823f02b8
	ctx.lr = 0x8268F090;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq 0x8268f058
	if (ctx.cr0.eq) goto loc_8268F058;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8268f06c
	if (ctx.cr6.eq) goto loc_8268F06C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8268F0AC:
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
	// beq cr6,0x8268f0d4
	if (ctx.cr6.eq) goto loc_8268F0D4;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x8268f0d8
	goto loc_8268F0D8;
loc_8268F0D4:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8268F0D8:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bdnz 0x8268f0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268F0AC;
	// b 0x8268f06c
	goto loc_8268F06C;
}

DEFINE_REX_FUNC(sub_826955C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f1,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// blt cr6,0x8269561c
	if (ctx.cr6.lt) goto loc_8269561C;
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_826955E0:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f1.f64)));
	// lfsu f13,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// lfsu f12,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// lfsu f11,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// lfsu f10,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f10.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// lfsu f9,4(r3)
	ea = 4 + ctx.r3.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r3.u32 = ea;
	// lfsu f8,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f0,f11,f10,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f1,f9,f8,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f0.f64)));
	// bdnz 0x826955e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826955E0;
loc_8269561C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8269562C:
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f1.f64)));
	// bdnz 0x8269562c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269562C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82699ED8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82699EE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// li r10,997
	ctx.r10.s64 = 997;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82699f68
	if (ctx.cr6.eq) goto loc_82699F68;
	// lis r4,28769
	ctx.r4.s64 = 1885405184;
	// li r3,40
	ctx.r3.s64 = 40;
	// ori r4,r4,29520
	ctx.r4.u64 = ctx.r4.u64 | 29520;
	// bl 0x827942d4
	ctx.lr = 0x82699F1C;
	__imp__ExAllocatePoolWithTag(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82699f5c
	if (ctx.cr0.eq) goto loc_82699F5C;
	// lwz r3,256(r13)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// bl 0x827942c4
	ctx.lr = 0x82699F2C;
	__imp__ObReferenceObject(ctx, base);
	// lis r11,-32150
	ctx.r11.s64 = -2106982400;
	// lwz r4,256(r13)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// lis r5,-32150
	ctx.r5.s64 = -2106982400;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-25304
	ctx.r7.s64 = ctx.r11.s64 + -25304;
	// addi r6,r10,-25416
	ctx.r6.s64 = ctx.r10.s64 + -25416;
	// addi r5,r5,-25312
	ctx.r5.s64 = ctx.r5.s64 + -25312;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827942b4
	ctx.lr = 0x82699F58;
	__imp__KeInitializeApc(ctx, base);
	// b 0x82699f9c
	goto loc_82699F9C;
loc_82699F5C:
	// lis r30,-16384
	r30.s64 = -1073741824;
	// ori r30,r30,23
	r30.u64 = r30.u64 | 23;
	// b 0x82699f9c
	goto loc_82699F9C;
loc_82699F68:
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82699f9c
	if (ctx.cr6.eq) goto loc_82699F9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2204(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 2204);
	// bl 0x82793994
	ctx.lr = 0x82699F84;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82699f98
	if (ctx.cr0.lt) goto loc_82699F98;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// b 0x82699f9c
	goto loc_82699F9C;
loc_82699F98:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_82699F9C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8269D278) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,24736
	ctx.r11.s64 = ctx.r11.s64 + 24736;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8269d2b4
	if (!ctx.cr6.gt) goto loc_8269D2B4;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r4.u64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(ctx.f0.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x8269d2d0
	goto loc_8269D2D0;
loc_8269D2B4:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8269d2d0
	if (!ctx.cr6.eq) goto loc_8269D2D0;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8269D2D0:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfd f11,72(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f11.f64);
	// lfd f12,120(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f11.f64);
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f12.f64);
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f10.f64);
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f9.f64);
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f8.f64);
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f7.f64);
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fmadd f0,f12,f0,f6
	ctx.f0.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f6.f64);
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// bne cr6,0x8269d350
	if (!ctx.cr6.eq) goto loc_8269D350;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfdx f13,r10,r11
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
loc_8269D350:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// lfdx f12,r10,r11
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fsel f1,f1,f13,f0
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_19) {
	REX_FUNC_PROLOGUE();
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
	// stfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A3990) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826A3998;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823ee280
	ctx.lr = 0x826A39A0;
	sub_823EE280(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,26352(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 26352);
	// bl 0x82793ef4
	ctx.lr = 0x826A39B0;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826a3a40
	if (!ctx.cr0.eq) goto loc_826A3A40;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26352(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 26352);
	// bl 0x82793f04
	ctx.lr = 0x826A39C4;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a3a50
	if (ctx.cr0.eq) goto loc_826A3A50;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826a2b40
	ctx.lr = 0x826A39D8;
	sub_826A2B40(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lwz r3,26352(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 26352);
	// beq 0x826a3a34
	if (ctx.cr0.eq) goto loc_826A3A34;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82793f04
	ctx.lr = 0x826A39EC;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826a3a24
	if (ctx.cr0.eq) goto loc_826A3A24;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x823eea88
	ctx.lr = 0x826A3A14;
	sub_823EEA88(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x826a3a50
	goto loc_826A3A50;
loc_826A3A24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d770
	ctx.lr = 0x826A3A2C;
	sub_8269D770(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x826a3a50
	goto loc_826A3A50;
loc_826A3A34:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82793f04
	ctx.lr = 0x826A3A3C;
	__imp__KeTlsSetValue(ctx, base);
	// b 0x826a3a50
	goto loc_826A3A50;
loc_826A3A40:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_826A3A50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0188
	ctx.lr = 0x826A3A58;
	sub_823F0188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(__restvmx_68) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B8B50) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x826B8B94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BA988) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// b 0x823f02b8
	sub_823F02B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826BABC0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_826BB5E8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x826bb61c
	if (ctx.cr6.eq) goto loc_826BB61C;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x826bb61c
	if (!ctx.cr6.eq) goto loc_826BB61C;
	// ld r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 56);
	// stw r8,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r7,88(r3)
	REX_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826BB61C:
	// ld r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// std r10,88(r11)
	REX_STORE_U64(ctx.r11.u32 + 88, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BE3C0) {
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
	ctx.lr = 0x826BE3C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826be40c
	if (!ctx.cr6.eq) goto loc_826BE40C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826BE40C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BE428;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x826c6cf0
	ctx.lr = 0x826BE440;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826BE458;
	sub_826C6CF0(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826be470
	if (ctx.cr6.eq) goto loc_826BE470;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
loc_826BE470:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826be494
	if (!ctx.cr6.eq) goto loc_826BE494;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be018
	ctx.lr = 0x826BE48C;
	sub_826BE018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
loc_826BE494:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826BE4A4;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826be4f8
	if (ctx.cr6.eq) goto loc_826BE4F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826be4f8
	if (ctx.cr6.eq) goto loc_826BE4F8;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x826be4f8
	if (ctx.cr6.eq) goto loc_826BE4F8;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x826be4f8
	if (ctx.cr6.eq) goto loc_826BE4F8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826be650
	if (ctx.cr6.gt) goto loc_826BE650;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826be508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BE508;
	// bdzf 4*cr6+eq,0x826be4f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BE4F8;
	// bne cr6,0x826be528
	if (!ctx.cr6.eq) goto loc_826BE528;
loc_826BE4F8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826BE508:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r27,1
	r27.s64 = 1;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r27.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, r30.u8);
	// b 0x826be59c
	goto loc_826BE59C;
loc_826BE528:
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// lbz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// bl 0x826c6cf0
	ctx.lr = 0x826BE540;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r27,1
	r27.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, r27.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,20(r8)
	REX_STORE_U8(ctx.r8.u32 + 20, r30.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r28,20(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,20(r7)
	REX_STORE_U8(ctx.r7.u32 + 20, r29.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, r29.u32);
	// bl 0x826bc9e0
	ctx.lr = 0x826BE590;
	sub_826BC9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_826BE59C:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x826be650
	if (ctx.cr6.gt) goto loc_826BE650;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826be4f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BE4F8;
	// bdzf 4*cr6+eq,0x826be5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BE5E0;
	// bne cr6,0x826be4f8
	if (!ctx.cr6.eq) goto loc_826BE4F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r27.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r28,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826BE5E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc9e0
	ctx.lr = 0x826BE5EC;
	sub_826BC9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826be018
	ctx.lr = 0x826BE608;
	sub_826BE018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826c6cf0
	ctx.lr = 0x826BE620;
	sub_826C6CF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826be658
	if (ctx.cr6.lt) goto loc_826BE658;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r29.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,20(r9)
	REX_STORE_U8(ctx.r9.u32 + 20, r29.u8);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826BE650:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_826BE658:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826D7438) {
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
	ctx.lr = 0x826D7440;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r24,28(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r22,r4,-24
	r22.s64 = ctx.r4.s64 + -24;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// sth r30,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// bctrl 
	ctx.lr = 0x826D7480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lhz r10,54(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826d74b4
	if (!ctx.cr6.gt) goto loc_826D74B4;
loc_826D74A0:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,12
	r31.u64 = r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
loc_826D74B4:
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(r22.u32, 2, ctx.xer);
	// blt cr6,0x826d74a0
	if (ctx.cr6.lt) goto loc_826D74A0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D74D4;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// lhz r28,80(r1)
	r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r27,2
	r27.s64 = 2;
	// mr r21,r28
	r21.u64 = r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x826d7540
	if (!ctx.cr6.eq) goto loc_826D7540;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r11,r22
	ctx.r10.u64 = r22.u64 - ctx.r11.u64;
	// addic. r30,r10,-2
	ctx.xer.ca = ctx.r10.u32 > 1;
	r30.s64 = ctx.r10.s64 + -2;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d7838
	if (ctx.cr0.eq) goto loc_826D7838;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D751C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// ld r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U64(r24.u32 + 8);
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
loc_826D7540:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c6880
	ctx.lr = 0x826D7554;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// add r9,r21,r11
	ctx.r9.u64 = r21.u64 + ctx.r11.u64;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r7,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, ctx.r7.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// sth r28,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, r28.u16);
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bl 0x826c6880
	ctx.lr = 0x826D75A8;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a2e60
	ctx.lr = 0x826D75C8;
	sub_826A2E60(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r20,r30
	r20.u64 = r30.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r26,4(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// beq cr6,0x826d77e4
	if (ctx.cr6.eq) goto loc_826D77E4;
loc_826D75DC:
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// cmplw cr6,r27,r22
	ctx.cr6.compare<uint32_t>(r27.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d74a0
	if (ctx.cr6.gt) goto loc_826D74A0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7600;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// addi r30,r26,6
	r30.s64 = r26.s64 + 6;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7628;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// addi r28,r26,4
	r28.s64 = r26.s64 + 4;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7650;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3b98
	ctx.lr = 0x826D7674;
	sub_826D3B98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// addi r25,r26,8
	r25.s64 = r26.s64 + 8;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d3d18
	ctx.lr = 0x826D769C;
	sub_826D3D18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// lhz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d7758
	if (ctx.cr6.eq) goto loc_826D7758;
	// addi r30,r26,12
	r30.s64 = r26.s64 + 12;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D76C8;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826D76E4;
	sub_826A2E60(ctx, base);
	// lhz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 0);
	// add r29,r27,r5
	r29.u64 = r27.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d74a0
	if (ctx.cr6.gt) goto loc_826D74A0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D770C;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 76);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826d7758
	if (ctx.cr6.eq) goto loc_826D7758;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826d7758
	if (!ctx.cr6.gt) goto loc_826D7758;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_826D7744:
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
	// bdnz 0x826d7744
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826D7744;
loc_826D7758:
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826d77cc
	if (ctx.cr6.eq) goto loc_826D77CC;
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// lwz r3,224(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x826c6880
	ctx.lr = 0x826D7778;
	sub_826C6880(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x826D7794;
	sub_826A2E60(ctx, base);
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// add r29,r27,r5
	r29.u64 = r27.u64 + ctx.r5.u64;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(r29.u32, r22.u32, ctx.xer);
	// bgt cr6,0x826d74a0
	if (ctx.cr6.gt) goto loc_826D74A0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826d4230
	ctx.lr = 0x826D77BC;
	sub_826D4230(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_826D77CC:
	// clrlwi r11,r20,16
	ctx.r11.u64 = r20.u32 & 0xFFFF;
	// addi r26,r26,20
	r26.s64 = r26.s64 + 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r20,r11,16
	r20.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(r20.u32, r21.u32, ctx.xer);
	// blt cr6,0x826d75dc
	if (ctx.cr6.lt) goto loc_826D75DC;
loc_826D77E4:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lhz r10,54(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 54);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,54(r11)
	REX_STORE_U16(ctx.r11.u32 + 54, ctx.r9.u16);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r22
	ctx.r6.u64 = r22.u64 - ctx.r7.u64;
	// subf. r30,r27,r6
	r30.u64 = ctx.r6.u64 - r27.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826d7838
	if (ctx.cr0.eq) goto loc_826D7838;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D781C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d7838
	if (ctx.cr6.lt) goto loc_826D7838;
	// ld r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U64(r24.u32 + 8);
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,8(r24)
	REX_STORE_U64(r24.u32 + 8, ctx.r11.u64);
loc_826D7838:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_826F1C30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,588(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32145
	ctx.r10.s64 = -2106654720;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,6960
	ctx.r8.s64 = ctx.r10.s64 + 6960;
	// stw r9,516(r3)
	REX_STORE_U32(ctx.r3.u32 + 516, ctx.r9.u32);
	// stw r8,484(r11)
	REX_STORE_U32(ctx.r11.u32 + 484, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F27E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r3,12668(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12668);
	// li r7,16
	ctx.r7.s64 = 16;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

DEFINE_REX_FUNC(sub_826F3758) {
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
	ctx.lr = 0x826F3760;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r21,0
	r21.s64 = 0;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,28(r4)
	r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r22,36(r4)
	r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// add r20,r10,r11
	r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826f3974
	if (!ctx.cr6.gt) goto loc_826F3974;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// subf r18,r5,r6
	r18.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_826F3790:
	// lwzx r10,r18,r19
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + r19.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826f37ac
	if (!ctx.cr6.eq) goto loc_826F37AC;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x826f395c
	goto loc_826F395C;
loc_826F37AC:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	r25.s64 = ctx.r11.s32 >> 1;
	// li r24,0
	r24.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// blt cr6,0x826f385c
	if (ctx.cr6.lt) goto loc_826F385C;
	// addi r27,r25,-1
	r27.s64 = r25.s64 + -1;
	// addi r10,r20,-2
	ctx.r10.s64 = r20.s64 + -2;
	// addi r11,r23,2
	ctx.r11.s64 = r23.s64 + 2;
	// subf r26,r23,r20
	r26.u64 = r20.u64 - r23.u64;
loc_826F37DC:
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r17,r6
	r17.s64 = ctx.r6.s16;
	// lhz r6,-2(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r15,r8
	r15.s64 = ctx.r8.s16;
	// lhzx r31,r26,r11
	r31.u64 = REX_LOAD_U16(r26.u32 + ctx.r11.u32);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// lhz r16,2(r11)
	r16.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lhz r14,4(r11)
	r14.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// stw r8,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// extsh r16,r16
	r16.s64 = r16.s16;
	// lhzu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mullw r6,r31,r15
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(r15.s32);
	// lwz r31,-160(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// stw r8,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r8.u32);
	// mullw r30,r31,r30
	r30.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// lwz r31,-160(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// extsh r14,r14
	r14.s64 = r14.s16;
	// mullw r8,r16,r17
	ctx.r8.s64 = int64_t(r16.s32) * int64_t(r17.s32);
	// mullw r31,r14,r31
	r31.s64 = int64_t(r14.s32) * int64_t(r31.s32);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r29,r6,r29
	r29.u64 = ctx.r6.u64 + r29.u64;
	// add r28,r8,r28
	r28.u64 = ctx.r8.u64 + r28.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// blt cr6,0x826f37dc
	if (ctx.cr6.lt) goto loc_826F37DC;
loc_826F385C:
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r25.s32, ctx.xer);
	// bge cr6,0x826f389c
	if (!ctx.cr6.lt) goto loc_826F389C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + r20.u64;
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + r23.u64;
	// lhzx r8,r11,r23
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + r23.u32);
	// lhzx r6,r11,r20
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + r20.u32);
	// lhz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r24,r11,r10
	r24.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_826F389C:
	// add r11,r28,r29
	ctx.r11.u64 = r28.u64 + r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r21,2
	ctx.cr6.compare<int32_t>(r21.s32, 2, ctx.xer);
	// blt cr6,0x826f38f8
	if (ctx.cr6.lt) goto loc_826F38F8;
	// addi r28,r21,-1
	r28.s64 = r21.s64 + -1;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r10,r22,-2
	ctx.r10.s64 = r22.s64 + -2;
loc_826F38C4:
	// lhz r30,2(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r29,4(r9)
	r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsh r26,r30
	r26.s64 = r30.s16;
	// lwzu r30,8(r9)
	ea = 8 + ctx.r9.u32;
	r30.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// mullw r29,r26,r29
	r29.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// mullw r31,r31,r30
	r31.s64 = int64_t(r31.s32) * int64_t(r30.s32);
	// add r8,r29,r8
	ctx.r8.u64 = r29.u64 + ctx.r8.u64;
	// add r6,r31,r6
	ctx.r6.u64 = r31.u64 + ctx.r6.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// blt cr6,0x826f38c4
	if (ctx.cr6.lt) goto loc_826F38C4;
loc_826F38F8:
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bge cr6,0x826f391c
	if (!ctx.cr6.lt) goto loc_826F391C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r11,r10,r22
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + r22.u32);
	// lwzx r10,r9,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
loc_826F391C:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + r27.u64;
	// sraw r11,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// stwx r11,r18,r19
	REX_STORE_U32(r18.u32 + r19.u32, ctx.r11.u32);
	// beq cr6,0x826f394c
	if (ctx.cr6.eq) goto loc_826F394C;
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
loc_826F394C:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
loc_826F395C:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826f3790
	if (ctx.cr6.lt) goto loc_826F3790;
loc_826F3974:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827077D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,3720(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3720);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r5,3712(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3712);
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r9,224(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r11,3712(r3)
	REX_STORE_U32(ctx.r3.u32 + 3712, ctx.r11.u32);
	// stw r5,3720(r3)
	REX_STORE_U32(ctx.r3.u32 + 3720, ctx.r5.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,3744(r3)
	REX_STORE_U32(ctx.r3.u32 + 3744, ctx.r11.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,3748(r3)
	REX_STORE_U32(ctx.r3.u32 + 3748, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,3752(r3)
	REX_STORE_U32(ctx.r3.u32 + 3752, ctx.r7.u32);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r8,3744(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,3748(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// stw r6,3756(r3)
	REX_STORE_U32(ctx.r3.u32 + 3756, ctx.r6.u32);
	// lwz r6,3752(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,3760(r3)
	REX_STORE_U32(ctx.r3.u32 + 3760, ctx.r4.u32);
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r5,3764(r3)
	REX_STORE_U32(ctx.r3.u32 + 3764, ctx.r5.u32);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r31,3780(r3)
	REX_STORE_U32(ctx.r3.u32 + 3780, r31.u32);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r10,3824(r3)
	REX_STORE_U32(ctx.r3.u32 + 3824, ctx.r10.u32);
	// stw r8,3828(r3)
	REX_STORE_U32(ctx.r3.u32 + 3828, ctx.r8.u32);
	// stw r7,3832(r3)
	REX_STORE_U32(ctx.r3.u32 + 3832, ctx.r7.u32);
	// stw r11,14792(r3)
	REX_STORE_U32(ctx.r3.u32 + 14792, ctx.r11.u32);
	// stw r4,14796(r3)
	REX_STORE_U32(ctx.r3.u32 + 14796, ctx.r4.u32);
	// stw r6,14800(r3)
	REX_STORE_U32(ctx.r3.u32 + 14800, ctx.r6.u32);
	// beq cr6,0x827078c0
	if (ctx.cr6.eq) goto loc_827078C0;
	// lwz r11,3732(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3732);
	// lwz r10,3728(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3728);
	// stw r11,3728(r3)
	REX_STORE_U32(ctx.r3.u32 + 3728, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,3732(r3)
	REX_STORE_U32(ctx.r3.u32 + 3732, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827078a0
	if (ctx.cr6.eq) goto loc_827078A0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3800(r3)
	REX_STORE_U32(ctx.r3.u32 + 3800, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3804(r3)
	REX_STORE_U32(ctx.r3.u32 + 3804, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3808(r3)
	REX_STORE_U32(ctx.r3.u32 + 3808, ctx.r7.u32);
loc_827078A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827078c0
	if (ctx.cr6.eq) goto loc_827078C0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,3812(r3)
	REX_STORE_U32(ctx.r3.u32 + 3812, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,3816(r3)
	REX_STORE_U32(ctx.r3.u32 + 3816, ctx.r9.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,3820(r3)
	REX_STORE_U32(ctx.r3.u32 + 3820, ctx.r8.u32);
loc_827078C0:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82718BB8) {
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
	ctx.lr = 0x82718BC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22632);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,268(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82718be8
	if (!ctx.cr6.eq) goto loc_82718BE8;
	// bl 0x82706ca8
	ctx.lr = 0x82718BE0;
	sub_82706CA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82718BE8:
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
	// rldicl r25,r10,1,63
	r25.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82718c10
	if (!ctx.cr0.lt) goto loc_82718C10;
	// bl 0x82725e38
	ctx.lr = 0x82718C10;
	sub_82725E38(ctx, base);
loc_82718C10:
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r28,3
	r28.s64 = 3;
	// li r27,0
	r27.s64 = 0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82718c84
	if (!ctx.cr6.lt) goto loc_82718C84;
loc_82718C2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82718c84
	if (ctx.cr6.eq) goto loc_82718C84;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
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
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x82718c74
	if (!ctx.cr0.lt) goto loc_82718C74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82718C74;
	sub_82725E38(ctx, base);
loc_82718C74:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82718c2c
	if (ctx.cr6.gt) goto loc_82718C2C;
loc_82718C84:
	// subfic r11,r28,64
	ctx.xer.ca = r28.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r28.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
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
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r28,r11,r27
	r28.u64 = ctx.r11.u64 + r27.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x82718cbc
	if (!ctx.cr0.lt) goto loc_82718CBC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x82718CBC;
	sub_82725E38(ctx, base);
loc_82718CBC:
	// cmplwi cr6,r28,7
	ctx.cr6.compare<uint32_t>(r28.u32, 7, ctx.xer);
	// bgt cr6,0x8271905c
	if (ctx.cr6.gt) goto loc_8271905C;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82718cf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82718CF0;
	// bdzf 4*cr6+eq,0x82718d08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82718D08;
	// bdzf 4*cr6+eq,0x82718d5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82718D5C;
	// bdzf 4*cr6+eq,0x82718d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82718D78;
	// bdzf 4*cr6+eq,0x82718d94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82718D94;
	// bdzf 4*cr6+eq,0x82718ea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82718EA0;
	// bne cr6,0x82718fac
	if (!ctx.cr6.eq) goto loc_82718FAC;
	// li r26,0
	r26.s64 = 0;
	// b 0x82719060
	goto loc_82719060;
loc_82718CF0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r26,1
	r26.s64 = 1;
	// bl 0x82706380
	ctx.lr = 0x82718D04;
	sub_82706380(ctx, base);
	// b 0x82719060
	goto loc_82719060;
loc_82718D08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r26,2
	r26.s64 = 2;
	// bl 0x82706380
	ctx.lr = 0x82718D1C;
	sub_82706380(ctx, base);
loc_82718D1C:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8271909c
	if (!ctx.cr6.gt) goto loc_8271909C;
loc_82718D30:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82719048
	if (!ctx.cr6.gt) goto loc_82719048;
loc_82718D40:
	// add. r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8271901c
	if (ctx.cr0.eq) goto loc_8271901C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82718fc8
	if (!ctx.cr6.eq) goto loc_82718FC8;
	// lwz r10,-24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// b 0x82719020
	goto loc_82719020;
loc_82718D5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,3
	r26.s64 = 3;
	// bl 0x82706810
	ctx.lr = 0x82718D68;
	sub_82706810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82719060
	if (ctx.cr6.eq) goto loc_82719060;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82718D78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,4
	r26.s64 = 4;
	// bl 0x82706810
	ctx.lr = 0x82718D84;
	sub_82706810(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82718d1c
	if (ctx.cr6.eq) goto loc_82718D1C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82718D94:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r26,5
	r26.s64 = 5;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82719060
	if (!ctx.cr6.gt) goto loc_82719060;
loc_82718DA8:
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
	// bge 0x82718dd0
	if (!ctx.cr0.lt) goto loc_82718DD0;
	// bl 0x82725e38
	ctx.lr = 0x82718DD0;
	sub_82725E38(ctx, base);
loc_82718DD0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82718e48
	if (ctx.cr6.eq) goto loc_82718E48;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82718e8c
	if (!ctx.cr6.gt) goto loc_82718E8C;
loc_82718DE8:
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
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82718e10
	if (!ctx.cr0.lt) goto loc_82718E10;
	// bl 0x82725e38
	ctx.lr = 0x82718E10;
	sub_82725E38(ctx, base);
loc_82718E10:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r9.u32);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82718de8
	if (ctx.cr6.lt) goto loc_82718DE8;
	// b 0x82718e8c
	goto loc_82718E8C;
loc_82718E48:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82718e8c
	if (!ctx.cr6.gt) goto loc_82718E8C;
loc_82718E58:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r7.u32);
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82718e58
	if (ctx.cr6.lt) goto loc_82718E58;
loc_82718E8C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82718da8
	if (ctx.cr6.lt) goto loc_82718DA8;
	// b 0x82719060
	goto loc_82719060;
loc_82718EA0:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// li r26,6
	r26.s64 = 6;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82719060
	if (!ctx.cr6.gt) goto loc_82719060;
loc_82718EB4:
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
	// bge 0x82718edc
	if (!ctx.cr0.lt) goto loc_82718EDC;
	// bl 0x82725e38
	ctx.lr = 0x82718EDC;
	sub_82725E38(ctx, base);
loc_82718EDC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82718f54
	if (ctx.cr6.eq) goto loc_82718F54;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82718f98
	if (!ctx.cr6.gt) goto loc_82718F98;
loc_82718EF4:
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
	// rldicl r28,r10,1,63
	r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82718f1c
	if (!ctx.cr0.lt) goto loc_82718F1C;
	// bl 0x82725e38
	ctx.lr = 0x82718F1C;
	sub_82725E38(ctx, base);
loc_82718F1C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwimi r9,r28,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r9,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r9.u32);
	// lwz r8,140(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82718ef4
	if (ctx.cr6.lt) goto loc_82718EF4;
	// b 0x82718f98
	goto loc_82718F98;
loc_82718F54:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82718f98
	if (!ctx.cr6.gt) goto loc_82718F98;
loc_82718F64:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// clrlwi r7,r8,1
	ctx.r7.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// stwx r7,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r7.u32);
	// lwz r6,140(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82718f64
	if (ctx.cr6.lt) goto loc_82718F64;
loc_82718F98:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82718eb4
	if (ctx.cr6.lt) goto loc_82718EB4;
	// b 0x82719060
	goto loc_82719060;
loc_82718FAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,7
	r26.s64 = 7;
	// bl 0x82717df8
	ctx.lr = 0x82718FB8;
	sub_82717DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82719060
	if (ctx.cr6.eq) goto loc_82719060;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82718FC8:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82718ff0
	if (!ctx.cr6.eq) goto loc_82718FF0;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r9,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r5,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// b 0x82719020
	goto loc_82719020;
loc_82718FF0:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,-24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -24);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r5,r8,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82719020
	if (ctx.cr6.eq) goto loc_82719020;
loc_8271901C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82719020:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,31,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// xor r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// rlwimi r5,r9,0,1,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFF80000000);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82718d40
	if (ctx.cr6.lt) goto loc_82718D40;
loc_82719048:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82718d30
	if (ctx.cr6.lt) goto loc_82718D30;
	// b 0x8271909c
	goto loc_8271909C;
loc_8271905C:
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82719060:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x8271909c
	if (ctx.cr6.eq) goto loc_8271909C;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8271909c
	if (!ctx.cr6.gt) goto loc_8271909C;
	// addi r11,r29,-24
	ctx.r11.s64 = r29.s64 + -24;
loc_8271907C:
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// rlwimi r8,r9,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r7,144(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8271907c
	if (ctx.cr6.lt) goto loc_8271907C;
loc_8271909C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bne cr6,0x827190b4
	if (!ctx.cr6.eq) goto loc_827190B4;
	// stw r26,344(r31)
	REX_STORE_U32(r31.u32 + 344, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_827190B4:
	// cmpwi cr6,r24,5
	ctx.cr6.compare<int32_t>(r24.s32, 5, ctx.xer);
	// bne cr6,0x827190cc
	if (!ctx.cr6.eq) goto loc_827190CC;
	// stw r26,21868(r31)
	REX_STORE_U32(r31.u32 + 21868, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_827190CC:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// bne cr6,0x827190e4
	if (!ctx.cr6.eq) goto loc_827190E4;
	// stw r26,20932(r31)
	REX_STORE_U32(r31.u32 + 20932, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_827190E4:
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(r24.s32, 3, ctx.xer);
	// bne cr6,0x827190fc
	if (!ctx.cr6.eq) goto loc_827190FC;
	// stw r26,14836(r31)
	REX_STORE_U32(r31.u32 + 14836, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_827190FC:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// bne cr6,0x82719114
	if (!ctx.cr6.eq) goto loc_82719114;
	// stw r26,20916(r31)
	REX_STORE_U32(r31.u32 + 20916, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_82719114:
	// stw r26,348(r31)
	REX_STORE_U32(r31.u32 + 348, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_827435B8) {
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
	ctx.lr = 0x827435C0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r30,r3,r7
	r30.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r29,r30,r10
	r29.u64 = r30.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r11,30044(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30044);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// subf r22,r11,r30
	r22.u64 = r30.u64 - ctx.r11.u64;
	// subf r25,r11,r7
	r25.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r23,r25
	r23.u64 = r25.u64;
	// li r18,0
	r18.s64 = 0;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x82743630
	if (!ctx.cr6.eq) goto loc_82743630;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// addi r20,r10,1
	r20.s64 = ctx.r10.s64 + 1;
	// srawi r24,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r24.s64 = r31.s32 >> 1;
	// subf r3,r31,r3
	ctx.r3.u64 = ctx.r3.u64 - r31.u64;
	// subf r4,r31,r4
	ctx.r4.u64 = ctx.r4.u64 - r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82743630
	if (ctx.cr6.eq) goto loc_82743630;
	// subfic r18,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	r18.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
loc_82743630:
	// li r10,16
	ctx.r10.s64 = 16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82743704
	if (!ctx.cr6.lt) goto loc_82743704;
	// subf r6,r5,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r5.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r27,r25,r7
	r27.u64 = ctx.r7.u64 - r25.u64;
	// subf r5,r25,r22
	ctx.r5.u64 = r22.u64 - r25.u64;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// subf r28,r25,r30
	r28.u64 = r30.u64 - r25.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r6,r31,r26
	ctx.r6.u64 = r26.u64 - r31.u64;
	// subf r7,r31,r29
	ctx.r7.u64 = r29.u64 - r31.u64;
loc_82743660:
	// lbzx r19,r28,r23
	r19.u64 = REX_LOAD_U8(r28.u32 + r23.u32);
	// addi r17,r1,-160
	r17.s64 = ctx.r1.s64 + -160;
	// lbzux r29,r6,r31
	ea = ctx.r6.u32 + r31.u32;
	r29.u64 = REX_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// addi r16,r1,-208
	r16.s64 = ctx.r1.s64 + -208;
	// lbzux r30,r7,r31
	ea = ctx.r7.u32 + r31.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addi r26,r1,-176
	r26.s64 = ctx.r1.s64 + -176;
	// lbzx r15,r27,r23
	r15.u64 = REX_LOAD_U8(r27.u32 + r23.u32);
	// stw r19,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, r19.u32);
	// addi r19,r1,-176
	r19.s64 = ctx.r1.s64 + -176;
	// stw r29,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r29.u32);
	// lvx128 v11,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r16
	ea = (r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, r30.u32);
	// addi r30,r1,-192
	r30.s64 = ctx.r1.s64 + -192;
	// stw r15,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, r15.u32);
	// lvx128 v12,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v12,v12,3
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi8(char(0xC))));
	// lvx128 v9,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v13,v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_set1_epi8(char(0xC))));
	// vspltb v0,v10,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r29,r1,-208
	r29.s64 = ctx.r1.s64 + -208;
	// vspltb v11,v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_set1_epi8(char(0xC))));
	// addi r26,r1,-192
	r26.s64 = ctx.r1.s64 + -192;
	// addi r17,r1,-160
	r17.s64 = ctx.r1.s64 + -160;
	// stvx128 v12,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvx128 v13,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r17
	ea = (r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx v0,0,r21
	ea = r21.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r21,r10
	ea = r21.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// add r21,r21,r31
	r21.u64 = r21.u64 + r31.u64;
	// stvlx v13,0,r23
	ea = r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r23,r10
	ea = r23.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// add r23,r23,r31
	r23.u64 = r23.u64 + r31.u64;
	// stvlx v12,r5,r11
	ea = ctx.r5.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r30,r10
	ea = r30.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// stvlx v11,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x82743660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743660;
loc_82743704:
	// srawi r11,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	ctx.r11.s64 = r24.s32 >> 2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r24,r11,2,0,27
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFF0;
	// srawi r8,r24,2
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x3) != 0);
	ctx.r8.s64 = r24.s32 >> 2;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r19,r7,2,0,29
	r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82743884
	if (ctx.cr6.eq) goto loc_82743884;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x827437d0
	if (!ctx.cr6.eq) goto loc_827437D0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82743884
	if (!ctx.cr6.gt) goto loc_82743884;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// neg r8,r31
	ctx.r8.s64 = static_cast<int64_t>(-r31.u64);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r27,r31,1,0,30
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r8,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r3,r25
	r30.u64 = r25.u64 - ctx.r3.u64;
	// subf r29,r3,r4
	r29.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
loc_82743750:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x827437bc
	if (!ctx.cr6.gt) goto loc_827437BC;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// add r7,r29,r3
	ctx.r7.u64 = r29.u64 + ctx.r3.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r4,r25,r22
	ctx.r4.u64 = r22.u64 - r25.u64;
	// subf r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8274377C:
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + r30.u64;
	// lvx128 v63,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// lvx128 v62,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvlx128 v62,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v62,r11,r31
	ea = ctx.r11.u32 + r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v63,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v63,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x8274377c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274377C;
loc_827437BC:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r3,r27,r3
	ctx.r3.u64 = r27.u64 + ctx.r3.u64;
	// add r30,r26,r30
	r30.u64 = r26.u64 + r30.u64;
	// bne 0x82743750
	if (!ctx.cr0.eq) goto loc_82743750;
	// b 0x82743884
	goto loc_82743884;
loc_827437D0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82743884
	if (!ctx.cr6.gt) goto loc_82743884;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// rlwinm r27,r31,1,0,30
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r28,r3,r4
	r28.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_827437EC:
	// add r7,r28,r3
	ctx.r7.u64 = r28.u64 + ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + r31.u64;
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + r31.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82743860
	if (!ctx.cr6.gt) goto loc_82743860;
	// addi r30,r24,-1
	r30.s64 = r24.s64 + -1;
	// rlwinm r30,r30,28,4,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8274381C:
	// lvx128 v61,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// lvx128 v60,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvlx128 v61,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvlx128 v61,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvlx128 v60,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// stvlx128 v60,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x8274381c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8274381C;
loc_82743860:
	// ld r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ld r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// add r3,r27,r3
	ctx.r3.u64 = r27.u64 + ctx.r3.u64;
	// std r5,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r5.u64);
	// std r5,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r5.u64);
	// std r4,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r4.u64);
	// std r4,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// bne 0x827437ec
	if (!ctx.cr0.eq) goto loc_827437EC;
loc_82743884:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827439bc
	if (ctx.cr6.eq) goto loc_827439BC;
	// subf r28,r31,r21
	r28.u64 = r21.u64 - r31.u64;
	// subf r30,r31,r23
	r30.u64 = r23.u64 - r31.u64;
	// add r11,r20,r18
	ctx.r11.u64 = r20.u64 + r18.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82743928
	if (!ctx.cr6.eq) goto loc_82743928;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827439bc
	if (!ctx.cr6.gt) goto loc_827439BC;
	// subf r8,r30,r21
	ctx.r8.u64 = r21.u64 - r30.u64;
	// subf r7,r30,r23
	ctx.r7.u64 = r23.u64 - r30.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_827438B4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82743914
	if (!ctx.cr6.gt) goto loc_82743914;
	// addi r11,r24,-1
	ctx.r11.s64 = r24.s64 + -1;
	// subf r9,r30,r28
	ctx.r9.u64 = r28.u64 - r30.u64;
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_827438D8:
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvlx128 v59,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vor128 v56,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v55,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v54,v59,v55
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// stvlx128 v54,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvrx128 v54,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// stvlx128 v56,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v56,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v56.u8[i]);
	// bdnz 0x827438d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827438D8;
loc_82743914:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// bne 0x827438b4
	if (!ctx.cr0.eq) goto loc_827438B4;
	// b 0x826a1cd4
	return;
loc_82743928:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827439bc
	if (!ctx.cr6.gt) goto loc_827439BC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82743934:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8274399c
	if (!ctx.cr6.gt) goto loc_8274399C;
	// addi r6,r24,-1
	ctx.r6.s64 = r24.s64 + -1;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82743960:
	// lvrx128 v53,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvrx128 v51,r6,r9
	temp.u32 = ctx.r6.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v50,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v49,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vor128 v48,v49,v51
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// stvlx128 v50,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvrx128 v50,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// stvlx128 v48,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// bdnz 0x82743960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82743960;
loc_8274399C:
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r21,r21,r31
	r21.u64 = r21.u64 + r31.u64;
	// add r23,r23,r31
	r23.u64 = r23.u64 + r31.u64;
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// bne 0x82743934
	if (!ctx.cr0.eq) goto loc_82743934;
loc_827439BC:
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82761358) {
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
	ctx.lr = 0x82761360;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82761270
	ctx.lr = 0x82761388;
	sub_82761270(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82761270
	ctx.lr = 0x827613B0;
	sub_82761270(ctx, base);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82761270
	ctx.lr = 0x827613E4;
	sub_82761270(ctx, base);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r30,-8
	ctx.r4.s64 = r30.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82761270
	ctx.lr = 0x82761408;
	sub_82761270(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_827645A0) {
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
	ctx.lr = 0x827645A8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20984(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20984);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82764614
	if (ctx.cr6.eq) goto loc_82764614;
	// lwz r30,352(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// li r19,0
	r19.s64 = 0;
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x82752cf8
	ctx.lr = 0x8276460C;
	sub_82752CF8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
loc_82764614:
	// lwz r17,396(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r20,388(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// stw r21,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r17.u32);
	// stw r20,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// stw r17,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r17.u32);
	// beq cr6,0x8276465c
	if (ctx.cr6.eq) goto loc_8276465C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// addi r9,r11,732
	ctx.r9.s64 = ctx.r11.s64 + 732;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r10,r31
	r23.u64 = ctx.r10.u64 + r31.u64;
	// add r18,r11,r31
	r18.u64 = ctx.r11.u64 + r31.u64;
	// b 0x82764664
	goto loc_82764664;
loc_8276465C:
	// addi r18,r31,2904
	r18.s64 = r31.s64 + 2904;
	// addi r23,r31,2916
	r23.s64 = r31.s64 + 2916;
loc_82764664:
	// li r19,0
	r19.s64 = 0;
	// lwz r22,404(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82764670:
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,296(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 296);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2116(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2116);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769308
	ctx.lr = 0x82764688;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764934
	if (!ctx.cr6.eq) goto loc_82764934;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1936(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1936);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r27,r21,2,0,29
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r20,2
	ctx.r8.s64 = r20.s64 + 2;
	// rlwinm r26,r8,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r29.u32);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r29
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + r29.u32);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwzx r3,r6,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + r29.u32);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// srawi r8,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 31;
	// srawi r7,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// xor r6,r4,r8
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// xor r5,r3,r7
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// subf r8,r8,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r4,r7,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82764714
	if (!ctx.cr6.lt) goto loc_82764714;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82764718
	goto loc_82764718;
loc_82764714:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82764718:
	// lwz r11,1760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sth r7,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lwz r14,296(r31)
	r14.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r14.s32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82762810
	ctx.lr = 0x8276476C;
	sub_82762810(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764934
	if (!ctx.cr6.eq) goto loc_82764934;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// li r11,8
	ctx.r11.s64 = 8;
	// bne cr6,0x82764788
	if (!ctx.cr6.eq) goto loc_82764788;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
loc_82764788:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x82764670
	if (ctx.cr6.lt) goto loc_82764670;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769308
	ctx.lr = 0x827647B8;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764934
	if (!ctx.cr6.eq) goto loc_82764934;
	// addi r9,r17,4
	ctx.r9.s64 = r17.s64 + 4;
	// lwzx r11,r27,r29
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r29.u32);
	// lwzx r10,r26,r29
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + r29.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,1936(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1936);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lwzx r5,r8,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// lhz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r4,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r4.u64;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// srawi r3,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// xor r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 ^ ctx.r3.u64;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8276482c
	if (!ctx.cr6.lt) goto loc_8276482C;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82764830
	goto loc_82764830;
loc_8276482C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82764830:
	// lwz r7,1760(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// sth r7,0(r28)
	REX_STORE_U16(r28.u32 + 0, ctx.r7.u16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lwz r30,1760(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82762810
	ctx.lr = 0x82764888;
	sub_82762810(ctx, base);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764934
	if (!ctx.cr6.eq) goto loc_82764934;
	// li r6,119
	ctx.r6.s64 = 119;
	// lwz r7,300(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,2120(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 2120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r28,32
	r30.s64 = r28.s64 + 32;
	// bl 0x82769308
	ctx.lr = 0x827648B0;
	sub_82769308(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82764934
	if (!ctx.cr6.eq) goto loc_82764934;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r29,24
	ctx.r4.s64 = r29.s64 + 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827626a8
	ctx.lr = 0x827648D8;
	sub_827626A8(ctx, base);
	// lwz r11,1760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lhz r29,0(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// add r7,r29,r7
	ctx.r7.u64 = r29.u64 + ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,1760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1760);
	// lwz r30,300(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x82762810
	ctx.lr = 0x82764934;
	sub_82762810(ctx, base);
loc_82764934:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8277DBD0) {
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
	PPCVRegister v69{};
	PPCVRegister v72{};
	uint32_t ea{};
	// mr r12,r9
	ctx.r12.u64 = ctx.r9.u64;
	// lvx v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx v28,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// vspltish v29,-1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// rldicr r2,r7,32,31
	ctx.r2.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// vupkhsh v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16))));
	// li r6,80
	ctx.r6.s64 = 80;
	// vupklsh v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// lvx v9,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r2,r8,r2
	ctx.r2.u64 = ctx.r8.u64 + ctx.r2.u64;
	// lvx v18,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx v19,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r12
	ctx.r5.u64 = ctx.r12.u64;
	// li r12,64
	ctx.r12.s64 = 64;
	// lvx v1,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v2,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx v3,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v11,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16))));
	// lvx v5,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16))));
	// lvx v6,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16))));
	// lvx v4,r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkhsh v15,v5
	simde_mm_store_si128((simde__m128i*)v15.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vupkhsh v16,v6
	simde_mm_store_si128((simde__m128i*)v16.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16))));
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vupkhsh v14,v4
	simde_mm_store_si128((simde__m128i*)v14.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16))));
	// vcfsx v11,v11,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vcfsx v12,v12,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx v7,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfsx v13,v13,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vupklsh v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vcfsx v15,v15,0
	simde_mm_store_ps(v15.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v15.u32)));
	// vupkhsh v17,v7
	simde_mm_store_si128((simde__m128i*)v17.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16))));
	// vcfsx v14,v14,0
	simde_mm_store_ps(v14.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v14.u32)));
	// vupklsh v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vcfsx v16,v16,0
	simde_mm_store_ps(v16.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vupklsh v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vupklsh v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vcfsx v0,v0,0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// vupklsh v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vcfsx v17,v17,0
	simde_mm_store_ps(v17.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v17.u32)));
	// vupklsh v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vcfsx v1,v1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vupklsh v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, simde_mm_cvtepi16_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vcfsx v2,v2,0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vcfsx v3,v3,0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vspltish v30,0
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x0)));
	// vcfsx v4,v4,0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vcfsx v5,v5,0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vcfsx v6,v6,0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vcfsx v7,v7,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmulfp128 v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v12,v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v13,v13,v8
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v14,v14,v8
	simde_mm_store_ps(v14.f32, simde_mm_mul_ps(simde_mm_load_ps(v14.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v15,v15,v8
	simde_mm_store_ps(v15.f32, simde_mm_mul_ps(simde_mm_load_ps(v15.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v16,v16,v8
	simde_mm_store_ps(v16.f32, simde_mm_mul_ps(simde_mm_load_ps(v16.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v17,v17,v8
	simde_mm_store_ps(v17.f32, simde_mm_mul_ps(simde_mm_load_ps(v17.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v0,v8
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v1,v1,v8
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v2,v2,v8
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v3,v3,v8
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v4,v8
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v5,v5,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v6,v6,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v7,v7,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v10,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vctsxs v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vctsxs v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v13.f32)));
	// vctsxs v14,v14,0
	simde_mm_store_si128((simde__m128i*)v14.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v14.f32)));
	// vctsxs v15,v15,0
	simde_mm_store_si128((simde__m128i*)v15.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v15.f32)));
	// vctsxs v16,v16,0
	simde_mm_store_si128((simde__m128i*)v16.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v16.f32)));
	// vctsxs v3,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v3.f32)));
	// vspltish v31,4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x4)));
	// vctsxs v4,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v4.f32)));
	// vctsxs v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vctsxs v1,v1,0
	simde_mm_store_si128((simde__m128i*)ctx.v1.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v1.f32)));
	// vctsxs v17,v17,0
	simde_mm_store_si128((simde__m128i*)v17.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(v17.f32)));
	// vctsxs v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v7.f32)));
	// vctsxs v2,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v2.f32)));
	// vctsxs v5,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v5.f32)));
	// vctsxs v6,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v6.f32)));
	// vpkswss v23,v13,v3
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.s32), simde_mm_load_si128((simde__m128i*)ctx.v13.s32)));
	// vpkswss v24,v14,v4
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.s32), simde_mm_load_si128((simde__m128i*)v14.s32)));
	// vpkswss v20,v10,v0
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.s32), simde_mm_load_si128((simde__m128i*)ctx.v10.s32)));
	// vpkswss v21,v11,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.s32), simde_mm_load_si128((simde__m128i*)ctx.v11.s32)));
	// vsrah v13,v23,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v27,v17,v7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.s32), simde_mm_load_si128((simde__m128i*)v17.s32)));
	// vsrah v14,v24,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v22,v12,v2
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.s32), simde_mm_load_si128((simde__m128i*)ctx.v12.s32)));
	// vsrah v10,v20,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v25,v15,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.s32), simde_mm_load_si128((simde__m128i*)v15.s32)));
	// vsrah v11,v21,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkswss v26,v16,v6
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.s32), simde_mm_load_si128((simde__m128i*)v16.s32)));
	// vcmpequh v4,v30,v24
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v17,v27,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v12,v22,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v25,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v26,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0x1)));
	// vcmpequh v3,v30,v23
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsel v13,v18,v19,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v14,v18,v19,v14
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v10,v18,v19,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vcmpequh v0,v30,v20
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsel v11,v18,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vcmpequh v1,v30,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vcmpequh v7,v30,v27
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsel v17,v18,v19,v17
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vcmpequh v5,v30,v25
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vcmpequh v6,v30,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vcmpequh v2,v30,v22
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_cmpeq_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vsel v12,v18,v19,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v15,v18,v19,v15
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v16,v18,v19,v16
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)v19.u8))));
	// vsel v13,v13,v30,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v14,v14,v30,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v14.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v10,v10,v30,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v11,v11,v30,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v17,v17,v30,v7
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v17.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v12,v12,v30,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v15,v15,v30,v5
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v15.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vsel v16,v16,v30,v6
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)v16.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)v30.u8))));
	// vspltish v30,2
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x2)));
	// vaddshs v2,v24,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v8,v23,v13
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// vand v10,v10,v28
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)v28.u8)));
	// vaddshs v5,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vslh v24,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v20,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v4,v22,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vslh v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v7,v25,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vslh v25,v1,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v24
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v3,v26,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vslh v1,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v11,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v1,v1,v25
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubuhm v9,v24,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v10,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v26,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor128 v14,v69,v69
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_load_si128((simde__m128i*)v69.u8));
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v11,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor128 v15,v72,v72
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_load_si128((simde__m128i*)v72.u8));
	// vaddshs v1,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vslh v27,v5,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v12,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vslh v26,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v6,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vaddshs v5,v27,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v27,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v25
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubuhm v6,v6,v24
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v5,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v9,v12,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v8,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vslh v25,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v8,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsubuhm v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsubuhm v10,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v26,v12,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v11,v24
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vslh v24,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v26,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vslh v26,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v25,v4,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v26,v9,v26
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vsubuhm v24,v9,v24
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vaddshs v9,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsubuhm v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsubuhm v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v2,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vaddshs v5,v5,v24
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v6,v6,v26
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vslh v24,v4,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v2,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v2,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v4,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v24,v25
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v3,v3,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v26,v27
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubuhm v3,v24,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v4,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v8,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsubuhm v9,v9,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vaddshs v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsubuhm v1,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v25,v4,v10
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v30,v4,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v24,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v30,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v16,v24,v25
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsrah v31,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v17,v26,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrglh v21,v26,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghh v18,v28,v29
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglh v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrghh v19,v30,v31
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrglh v23,v30,v31
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrghw v24,v16,v17
	simde_mm_store_si128((simde__m128i*)v24.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vmrglw v25,v16,v17
	simde_mm_store_si128((simde__m128i*)v25.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v17.u32), simde_mm_load_si128((simde__m128i*)v16.u32)));
	// vmrghw v28,v18,v19
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vmrglw v29,v18,v19
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v19.u32), simde_mm_load_si128((simde__m128i*)v18.u32)));
	// vmrghw v26,v20,v21
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v21.u32), simde_mm_load_si128((simde__m128i*)v20.u32)));
	// vmrglw v27,v20,v21
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v21.u32), simde_mm_load_si128((simde__m128i*)v20.u32)));
	// vmrglw v31,v22,v23
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// vperm v5,v24,v28,v15
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vmrghw v30,v22,v23
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v22.u32)));
	// vperm v8,v25,v29,v15
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v6,v27,v31,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v3,v27,v31,v14
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vspltish v27,3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_set1_epi16(short(0x3)));
	// vperm v4,v25,v29,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vaddshs v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vspltish v25,1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_set1_epi16(short(0x1)));
	// vperm v7,v26,v30,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v15.u8)));
	// vperm v2,v26,v30,v14
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vslh v10,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm v1,v24,v28,v14
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v14.u8)));
	// vspltish v26,2
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x2)));
	// vslh v9,v13,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v17,8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_set1_epi16(short(0x8)));
	// vslh v20,v6,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v21,6
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_set1_epi16(short(0x6)));
	// vslh v18,v1,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v2,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vslh v29,v17,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v2,v2,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vsubuhm v11,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
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
	// vsubuhm v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v17,v6,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v5,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v6,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v9,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v10,v17
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vaddshs v5,v5,v19
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubuhm v11,v11,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
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
	// vaddshs v1,v1,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
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
	// vsubuhm v19,v19,v20
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v2,v2,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v4,v27
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v6,v6,v19
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubuhm v7,v2,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vsubuhm v2,v2,v17
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsrah v22,v13,v25
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v5,v5,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v6,v6,v23
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vsubuhm v2,v2,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubuhm v2,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// rldicl r3,r2,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r2.u64, 32) & 0xFFFFFFFF;
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// clrldi r2,r2,32
	ctx.r2.u64 = ctx.r2.u64 & 0xFFFFFFFF;
	// vadduhm v10,v10,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vaddshs v11,v11,v22
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubuhm v7,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vaddshs v1,v1,v2
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v24,v8,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v9,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v15,v7,v10
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v26,v1,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsubuhm v28,v9,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsrah v24,v24,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v29,v1,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v15,v15,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v30,v7,v10
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsrah v26,v26,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v24,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v31,v8,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vsrah v27,v27,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v15,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v28,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v29,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v26,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v30,v30,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v31,v21
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx v27,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v28,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v29,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v30,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v31,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx v14,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v24,v24,v14
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v15,v15,v14
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vpkshus v24,v24,v24
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v26,v26,v14
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// rldicr r5,r2,1,62
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r2.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// vaddshs v27,v27,v14
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// rldicr r7,r2,2,61
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r2.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// vaddshs v28,v28,v14
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// add r6,r5,r2
	ctx.r6.u64 = ctx.r5.u64 + ctx.r2.u64;
	// vpkshus v15,v15,v15
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v29,v29,v14
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vpkshus v26,v26,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vaddshs v30,v30,v14
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vpkshus v27,v27,v27
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vaddshs v31,v31,v14
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v28,v28,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v29,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// add r8,r7,r2
	ctx.r8.u64 = ctx.r7.u64 + ctx.r2.u64;
	// vpkshus v30,v30,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// add r9,r7,r5
	ctx.r9.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vpkshus v31,v31,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvewx v15,r2,r3
	ea = (ctx.r2.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v15.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stvewx v15,r2,r4
	ea = (ctx.r2.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v15.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r5,r3
	ea = (ctx.r5.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r5,r4
	ea = (ctx.r5.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

