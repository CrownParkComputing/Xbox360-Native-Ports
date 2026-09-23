#include "hydrothunder_funcs.64.h"

DEFINE_REX_FUNC(sub_82122FF0) {
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
	ctx.lr = 0x82122FF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1489
	ctx.r10.s64 = 97583104;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,29788
	ctx.r10.u64 = ctx.r10.u64 | 29788;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8212304c
	if (ctx.cr6.lt) goto loc_8212304C;
	// addi r31,r7,12
	r31.s64 = ctx.r7.s64 + 12;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82122800
	ctx.lr = 0x82123028;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82123038;
	sub_82120AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82123040;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x8212304C;
	sub_822F6020(ctx, base);
loc_8212304C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82123078
	if (!ctx.cr6.eq) goto loc_82123078;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x821230b0
	goto loc_821230B0;
loc_82123078:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212309c
	if (ctx.cr0.eq) goto loc_8212309C;
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821230b4
	if (!ctx.cr6.eq) goto loc_821230B4;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x821230b4
	goto loc_821230B4;
loc_8212309C:
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821230b4
	if (!ctx.cr6.eq) goto loc_821230B4;
loc_821230B0:
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r29.u32);
loc_821230B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// lbz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821231b4
	if (!ctx.cr0.eq) goto loc_821231B4;
	// li r27,0
	r27.s64 = 0;
loc_821230D0:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82123134
	if (!ctx.cr6.eq) goto loc_82123134;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82123144
	if (ctx.cr0.eq) goto loc_82123144;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212310c
	if (!ctx.cr6.eq) goto loc_8212310C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8212ac38
	ctx.lr = 0x8212310C;
	sub_8212AC38(ctx, base);
loc_8212310C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212aca0
	ctx.lr = 0x82123130;
	sub_8212ACA0(ctx, base);
	// b 0x821231a4
	goto loc_821231A4;
loc_82123134:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82123168
	if (!ctx.cr0.eq) goto loc_82123168;
loc_82123144:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r28,56(r10)
	REX_STORE_U8(ctx.r10.u32 + 56, r28.u8);
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x821231a4
	goto loc_821231A4;
loc_82123168:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82123180
	if (!ctx.cr6.eq) goto loc_82123180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8212aca0
	ctx.lr = 0x82123180;
	sub_8212ACA0(ctx, base);
loc_82123180:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8212ac38
	ctx.lr = 0x821231A4;
	sub_8212AC38(ctx, base);
loc_821231A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821230d0
	if (ctx.cr0.eq) goto loc_821230D0;
loc_821231B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r28,56(r11)
	REX_STORE_U8(ctx.r11.u32 + 56, r28.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82134BF8) {
	REX_FUNC_PROLOGUE();
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r9,r9,-12484
	ctx.r9.s64 = ctx.r9.s64 + -12484;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rldicr r3,r3,63,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r7,r5,10,19,21
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x1C00) | (ctx.r7.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r7,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// srd r4,r3,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r4.u8 & 0x7F));
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// std r7,24(r8)
	REX_STORE_U64(ctx.r8.u32 + 24, ctx.r7.u64);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwimi r8,r9,13,16,18
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xE000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213A408) {
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
	ctx.lr = 0x8213A410;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x823edb68
	ctx.lr = 0x8213A430;
	sub_823EDB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213a444
	if (ctx.cr0.eq) goto loc_8213A444;
loc_8213A438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213A43C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8213A444:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x8213A44C;
	sub_8269D6A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8213a438
	if (ctx.cr0.eq) goto loc_8213A438;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,6072(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213A478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, ctx.xer);
	// beq cr6,0x8213a490
	if (ctx.cr6.eq) goto loc_8213A490;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d770
	ctx.lr = 0x8213A48C;
	sub_8269D770(ctx, base);
	// b 0x8213a438
	goto loc_8213A438;
loc_8213A490:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823edb90
	ctx.lr = 0x8213A4B0;
	sub_823EDB90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213a4cc
	if (ctx.cr0.eq) goto loc_8213A4CC;
	// li r31,0
	r31.s64 = 0;
loc_8213A4BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269d770
	ctx.lr = 0x8213A4C4;
	sub_8269D770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8213a43c
	goto loc_8213A43C;
loc_8213A4CC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,1
	r31.s64 = 1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x8213a4bc
	goto loc_8213A4BC;
}

DEFINE_REX_FUNC(sub_8213FD60) {
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
	ctx.lr = 0x8213FD68;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r11,84(r1)
	REX_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// beq cr6,0x8213fe6c
	if (ctx.cr6.eq) goto loc_8213FE6C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r30,r11,-17288
	r30.s64 = ctx.r11.s64 + -17288;
	// addi r29,r10,-17316
	r29.s64 = ctx.r10.s64 + -17316;
	// addi r31,r9,-17344
	r31.s64 = ctx.r9.s64 + -17344;
	// addi r28,r8,-17252
	r28.s64 = ctx.r8.s64 + -17252;
loc_8213FDB0:
	// lwz r3,4(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213FDCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213fe6c
	if (ctx.cr0.eq) goto loc_8213FE6C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x8213FDE0;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213FDE4;
	sub_8215FA30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82125d00
	ctx.lr = 0x8213FDEC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne 0x8213fe00
	if (!ctx.cr0.eq) goto loc_8213FE00;
	// bl 0x8213fe80
	ctx.lr = 0x8213FDFC;
	sub_8213FE80(ctx, base);
	// b 0x8213fe60
	goto loc_8213FE60;
loc_8213FE00:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8213FE08;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213FE0C;
	sub_8215FA30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x8213FE14;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213fe30
	if (!ctx.cr0.eq) goto loc_8213FE30;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82140010
	ctx.lr = 0x8213FE2C;
	sub_82140010(ctx, base);
	// b 0x8213fe60
	goto loc_8213FE60;
loc_8213FE30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f670
	ctx.lr = 0x8213FE3C;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8213FE40;
	sub_8215FA30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x8213FE48;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213fe60
	if (!ctx.cr0.eq) goto loc_8213FE60;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821401d8
	ctx.lr = 0x8213FE60;
	sub_821401D8(ctx, base);
loc_8213FE60:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213fdb0
	if (!ctx.cr6.eq) goto loc_8213FDB0;
loc_8213FE6C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8215f0f0
	ctx.lr = 0x8213FE74;
	sub_8215F0F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82149400) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82149408;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r3,44
	r29.s64 = ctx.r3.s64 + 44;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82149440
	goto loc_82149440;
loc_82149420:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82148a30
	ctx.lr = 0x82149430;
	sub_82148A30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82149468
	if (!ctx.cr0.eq) goto loc_82149468;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82149440:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82149420
	if (!ctx.cr6.eq) goto loc_82149420;
	// li r3,268
	ctx.r3.s64 = 268;
	// bl 0x822f6280
	ctx.lr = 0x82149450;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82149484
	if (ctx.cr0.eq) goto loc_82149484;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82186c80
	ctx.lr = 0x82149460;
	sub_82186C80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82149488
	goto loc_82149488;
loc_82149468:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_8214947C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82149484:
	// li r28,0
	r28.s64 = 0;
loc_82149488:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x82149498;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821494f4
	if (ctx.cr0.eq) goto loc_821494F4;
	// addic. r10,r11,8
	ctx.xer.ca = ctx.r11.u32 > 4294967287;
	ctx.r10.s64 = ctx.r11.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// beq 0x821494b4
	if (ctx.cr0.eq) goto loc_821494B4;
	// stw r28,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r28.u32);
loc_821494B4:
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x821494d8
	if (!ctx.cr6.lt) goto loc_821494D8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821494D8;
	sub_822F6020(ctx, base);
loc_821494D8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8214947c
	goto loc_8214947C;
loc_821494F4:
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
	ctx.lr = 0x82149510;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82150D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82150D80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82150db4
	if (ctx.cr6.eq) goto loc_82150DB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-11652
	ctx.r4.s64 = ctx.r11.s64 + -11652;
	// addi r3,r10,-11616
	ctx.r3.s64 = ctx.r10.s64 + -11616;
	// li r5,69
	ctx.r5.s64 = 69;
	// bl 0x821231d0
	ctx.lr = 0x82150DB4;
	sub_821231D0(ctx, base);
loc_82150DB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82150e30
	if (!ctx.cr6.lt) goto loc_82150E30;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
loc_82150DCC:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822f6280
	ctx.lr = 0x82150DD4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82150de4
	if (ctx.cr0.eq) goto loc_82150DE4;
	// bl 0x821a1d00
	ctx.lr = 0x82150DE0;
	sub_821A1D00(ctx, base);
	// b 0x82150de8
	goto loc_82150DE8;
loc_82150DE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82150DE8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r29,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150e08
	if (ctx.cr6.eq) goto loc_82150E08;
	// stw r11,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r3,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// b 0x82150e10
	goto loc_82150E10;
loc_82150E08:
	// stw r29,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r29.u32);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82150E10:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82150dcc
	if (ctx.cr6.lt) goto loc_82150DCC;
loc_82150E30:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82150eac
	if (!ctx.cr6.gt) goto loc_82150EAC;
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
loc_82150E44:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82150e98
	if (ctx.cr6.eq) goto loc_82150E98;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82150e68
	if (!ctx.cr6.eq) goto loc_82150E68;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82150E68:
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82150e78
	if (ctx.cr6.eq) goto loc_82150E78;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
loc_82150E78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82150e84
	if (ctx.cr6.eq) goto loc_82150E84;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_82150E84:
	// stw r29,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, r29.u32);
	// stw r29,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r29.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82150E98:
	// bl 0x821357c8
	ctx.lr = 0x82150E9C;
	sub_821357C8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82150e44
	if (ctx.cr6.gt) goto loc_82150E44;
loc_82150EAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,257
	ctx.r10.s64 = 16842752;
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r9,r10,257
	ctx.r9.u64 = ctx.r10.u64 | 257;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// li r30,-1
	r30.s64 = -1;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r11,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8269ce98
	ctx.lr = 0x82150F50;
	sub_8269CE98(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82150f6c
	if (!ctx.cr6.gt) goto loc_82150F6C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82150F6C:
	// bl 0x822f6338
	ctx.lr = 0x82150F70;
	sub_822F6338(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82150fb8
	if (!ctx.cr6.gt) goto loc_82150FB8;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82150F8C:
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r7,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r7.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// blt cr6,0x82150f8c
	if (ctx.cr6.lt) goto loc_82150F8C;
loc_82150FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821619D8) {
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
	ctx.lr = 0x821619E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x821619F8;
	sub_821626C0(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x82161A04;
	sub_821626C0(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x82161A10;
	sub_821626C0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x82161A24;
	sub_821626C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r30,16
	r24.s64 = r30.s64 + 16;
	// mulli r29,r11,44
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(44));
	// lwz r28,4(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,16(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 16);
	// add r4,r28,r29
	ctx.r4.u64 = r28.u64 + r29.u64;
	// bl 0x82125c20
	ctx.lr = 0x82161A44;
	sub_82125C20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x82161A50;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82161A5C;
	sub_826A1E70(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821626c0
	ctx.lr = 0x82161A7C;
	sub_821626C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821626c0
	ctx.lr = 0x82161A88;
	sub_821626C0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mullw r29,r10,r9
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r28,r29
	ctx.r4.u64 = r28.u64 + r29.u64;
	// bl 0x82125c20
	ctx.lr = 0x82161ACC;
	sub_82125C20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x82161AD8;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82161AE4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82161AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// bl 0x82125c20
	ctx.lr = 0x82161B14;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r1,84
	r28.s64 = ctx.r1.s64 + 84;
	// bl 0x82125c98
	ctx.lr = 0x82161B24;
	sub_82125C98(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lbz r10,1(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 1);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// lbz r9,2(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 2);
	// lbz r8,3(r28)
	ctx.r8.u64 = REX_LOAD_U8(r28.u32 + 3);
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// stb r8,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82161bd0
	if (ctx.cr6.eq) goto loc_82161BD0;
loc_82161B64:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82161b84
	if (ctx.cr6.lt) goto loc_82161B84;
	// lwz r25,0(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82161b88
	goto loc_82161B88;
loc_82161B84:
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_82161B88:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// lwz r26,4(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r4,r26,r27
	ctx.r4.u64 = r26.u64 + r27.u64;
	// bl 0x82125c20
	ctx.lr = 0x82161B9C;
	sub_82125C20(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x82161BA8;
	sub_82125C98(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82161BB4;
	sub_826A1E70(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82161b64
	if (!ctx.cr6.eq) goto loc_82161B64;
loc_82161BD0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82161c14
	if (!ctx.cr6.gt) goto loc_82161C14;
	// addi r29,r30,40
	r29.s64 = r30.s64 + 40;
loc_82161BE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82162650
	ctx.lr = 0x82161BF0;
	sub_82162650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82162130
	ctx.lr = 0x82161BFC;
	sub_82162130(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82161be4
	if (ctx.cr6.lt) goto loc_82161BE4;
loc_82161C14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82175130) {
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
	ctx.lr = 0x82175138;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// li r25,0
	r25.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r25,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, r25.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82175170
	if (ctx.cr6.lt) goto loc_82175170;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x82175174
	goto loc_82175174;
loc_82175170:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82175174:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r25,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r25.u8);
	// stw r25,4(r30)
	REX_STORE_U32(r30.u32 + 4, r25.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r27,r11,26620
	r27.s64 = ctx.r11.s64 + 26620;
	// bne cr6,0x821751a0
	if (!ctx.cr6.eq) goto loc_821751A0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,26648
	ctx.r3.s64 = ctx.r11.s64 + 26648;
	// li r5,174
	ctx.r5.s64 = 174;
	// bl 0x821231d0
	ctx.lr = 0x821751A0;
	sub_821231D0(ctx, base);
loc_821751A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8217521c
	if (ctx.cr0.eq) goto loc_8217521C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r26,r11,26752
	r26.s64 = ctx.r11.s64 + 26752;
loc_821751B4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82170d90
	ctx.lr = 0x821751C0;
	sub_82170D90(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82175208
	if (ctx.cr0.eq) goto loc_82175208;
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821751e8
	if (ctx.cr6.lt) goto loc_821751E8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,187
	ctx.r5.s64 = 187;
	// bl 0x821231d0
	ctx.lr = 0x821751E8;
	sub_821231D0(ctx, base);
loc_821751E8:
	// sth r28,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r28.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821710b0
	ctx.lr = 0x821751F8;
	sub_821710B0(ctx, base);
	// lbzux r11,r31,r29
	ea = r31.u32 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821751b4
	if (!ctx.cr0.eq) goto loc_821751B4;
	// b 0x8217521c
	goto loc_8217521C;
loc_82175208:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,26708
	ctx.r3.s64 = ctx.r11.s64 + 26708;
	// li r5,180
	ctx.r5.s64 = 180;
	// bl 0x821231d0
	ctx.lr = 0x8217521C;
	sub_821231D0(ctx, base);
loc_8217521C:
	// sth r25,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r25.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821710b0
	ctx.lr = 0x8217522C;
	sub_821710B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 * ctx.f0.f64));
	// addi r27,r11,-19772
	r27.s64 = ctx.r11.s64 + -19772;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r28,92(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82175254:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217ca50
	ctx.lr = 0x8217526C;
	sub_8217CA50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821752a8
	if (ctx.cr6.eq) goto loc_821752A8;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821752a8
	if (!ctx.cr0.gt) goto loc_821752A8;
	// addi r30,r31,-2
	r30.s64 = r31.s64 + -2;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82175294:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lhzu r3,2(r30)
	ea = 2 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// bl 0x82170f90
	ctx.lr = 0x821752A0;
	sub_82170F90(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82175294
	if (!ctx.cr0.eq) goto loc_82175294;
loc_821752A8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x821752bc
	if (ctx.cr6.eq) goto loc_821752BC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82121928
	ctx.lr = 0x821752BC;
	sub_82121928(ctx, base);
loc_821752BC:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82175254
	if (!ctx.cr6.eq) goto loc_82175254;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82180DA0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,-15320(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15320);
	// bl 0x82120600
	ctx.lr = 0x82180DCC;
	sub_82120600(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82180DE8;
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
	ctx.lr = 0x82180DFC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82186288) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821862bc
	if (!ctx.cr6.eq) goto loc_821862BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82186424
	goto loc_82186424;
loc_821862BC:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subfic r10,r10,6
	ctx.xer.ca = ctx.r10.u32 <= 6;
	ctx.r10.u64 = static_cast<uint64_t>(6) - ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq 0x821863f0
	if (ctx.cr0.eq) goto loc_821863F0;
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r10.u32);
	// stw r30,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82186330:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x82185978
	ctx.lr = 0x82186364;
	sub_82185978(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82186388
	if (!ctx.cr6.eq) goto loc_82186388;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8218638c
	if (ctx.cr6.eq) goto loc_8218638C;
loc_82186388:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8218638C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821863c8
	if (!ctx.cr0.eq) goto loc_821863C8;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821863b8
	if (!ctx.cr6.eq) goto loc_821863B8;
	// lfs f0,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821863bc
	if (ctx.cr6.eq) goto loc_821863BC;
loc_821863B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821863BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x821863cc
	if (ctx.cr0.eq) goto loc_821863CC;
loc_821863C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821863CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821863e0
	if (ctx.cr0.eq) goto loc_821863E0;
	// lwz r30,16(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82186330
	if (!ctx.cr6.eq) goto loc_82186330;
loc_821863E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x82186424
	if (!ctx.cr6.eq) goto loc_82186424;
	// b 0x82186420
	goto loc_82186420;
loc_821863F0:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_82186420:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82186424:
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

DEFINE_REX_FUNC(sub_82191B68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f13.f64)));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f13.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191BC4;
	sub_82191980(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lfs f11,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f12.f64)));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f13,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191C48;
	sub_82191980(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// lfs f11,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f31,f10
	ctx.f10.f64 = double(float(f31.f64 * ctx.f10.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191CAC;
	sub_82191980(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// lfs f7,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fadds f0,f7,f8
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191D10;
	sub_82191980(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,80
	ctx.r11.s64 = r31.s64 + 80;
	// lfs f11,92(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// lfs f12,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f31,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f11.f64)));
	// lfs f0,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f0.f64)));
	// lfs f13,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191DA4;
	sub_82191980(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// lfs f11,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191E08;
	sub_82191980(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,128
	ctx.r11.s64 = r31.s64 + 128;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191E6C;
	sub_82191980(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,56
	ctx.r4.s64 = r30.s64 + 56;
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,144
	ctx.r11.s64 = r31.s64 + 144;
	// lfs f11,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191ED0;
	sub_82191980(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r30,60
	ctx.r4.s64 = r30.s64 + 60;
	// lfs f13,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,160
	ctx.r11.s64 = r31.s64 + 160;
	// lfs f11,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f7,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// fadds f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// bl 0x82191980
	ctx.lr = 0x82191F34;
	sub_82191980(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,176
	ctx.r11.s64 = r31.s64 + 176;
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f11,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f10,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f9,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f8,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f7,188(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// fadds f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// fadds f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f0,196(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,192(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f12.f64)));
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f13,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,204(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,208(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f10,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f0.f64)));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 200, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lfs f0,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f11.f64)));
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BC178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BC180;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821BC190;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-19048
	ctx.r11.s64 = ctx.r11.s64 + -19048;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BC1A4;
	sub_822F6280(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc1c8
	if (ctx.cr0.eq) goto loc_821BC1C8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BC1C0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bc1cc
	goto loc_821BC1CC;
loc_821BC1C8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821BC1CC:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BC1D8;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BC1E0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bc254
	if (ctx.cr0.eq) goto loc_821BC254;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19204
	ctx.r4.s64 = ctx.r11.s64 + -19204;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC204;
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
	ctx.lr = 0x821BC218;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bc244
	if (ctx.cr0.eq) goto loc_821BC244;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-16160
	ctx.r10.s64 = ctx.r10.s64 + -16160;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bc248
	goto loc_821BC248;
loc_821BC244:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BC248:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bc258
	goto loc_821BC258;
loc_821BC254:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BC258:
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
	ctx.lr = 0x821BC270;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BC278;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821bc2b0
	if (ctx.cr0.eq) goto loc_821BC2B0;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC2A4;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bc2b4
	goto loc_821BC2B4;
loc_821BC2B0:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BC2B4:
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
	ctx.lr = 0x821BC2CC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BC2D4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bc304
	if (ctx.cr0.eq) goto loc_821BC304;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BC2F8;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bc308
	goto loc_821BC308;
loc_821BC304:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BC308:
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
	ctx.lr = 0x821BC320;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821C6DE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C6DE8;
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-16656
	ctx.r4.s64 = ctx.r11.s64 + -16656;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82125d00
	ctx.lr = 0x821C6E08;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c6e5c
	if (!ctx.cr0.eq) goto loc_821C6E5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-17132
	ctx.r4.s64 = ctx.r11.s64 + -17132;
	// bl 0x82120600
	ctx.lr = 0x821C6E20;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x821dd040
	ctx.lr = 0x821C6E2C;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r10.u32);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C6E54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x821c6ebc
	goto loc_821C6EBC;
loc_821C6E5C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-16644
	ctx.r4.s64 = ctx.r11.s64 + -16644;
	// bl 0x82125d00
	ctx.lr = 0x821C6E6C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c6ecc
	if (!ctx.cr0.eq) goto loc_821C6ECC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-17120
	ctx.r4.s64 = ctx.r11.s64 + -17120;
	// bl 0x82120600
	ctx.lr = 0x821C6E84;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bl 0x821dd040
	ctx.lr = 0x821C6E90;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r10,896(r1)
	REX_STORE_U32(ctx.r1.u32 + 896, ctx.r10.u32);
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C6EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
loc_821C6EBC:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x821C6EC8;
	sub_82120AC0(ctx, base);
	// b 0x821c7284
	goto loc_821C7284;
loc_821C6ECC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-16632
	ctx.r4.s64 = ctx.r11.s64 + -16632;
	// bl 0x82125d00
	ctx.lr = 0x821C6EDC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c7024
	if (!ctx.cr0.eq) goto loc_821C7024;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,-16616
	ctx.r4.s64 = ctx.r10.s64 + -16616;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8215f338
	ctx.lr = 0x821C6F00;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821c6f24
	if (!ctx.cr6.eq) goto loc_821C6F24;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821c6f2c
	if (ctx.cr6.lt) goto loc_821C6F2C;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x821c6f2c
	goto loc_821C6F2C;
loc_821C6F24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
loc_821C6F2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C6F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c7284
	if (!ctx.cr0.eq) goto loc_821C7284;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r9,r1,344
	ctx.r9.s64 = ctx.r1.s64 + 344;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C6F64:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821c6f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C6F64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821C6F80;
	sub_821884B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,-16604
	ctx.r4.s64 = ctx.r10.s64 + -16604;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8215f338
	ctx.lr = 0x821C6FA4;
	sub_8215F338(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82166f38
	ctx.lr = 0x821C6FAC;
	sub_82166F38(ctx, base);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbd18
	ctx.lr = 0x821C6FBC;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822fbfc0
	ctx.lr = 0x821C7018;
	sub_822FBFC0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822fbe20
	ctx.lr = 0x821C7020;
	sub_822FBE20(ctx, base);
	// b 0x821c7284
	goto loc_821C7284;
loc_821C7024:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-16600
	ctx.r4.s64 = ctx.r11.s64 + -16600;
	// bl 0x82125d00
	ctx.lr = 0x821C7034;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c71a8
	if (!ctx.cr0.eq) goto loc_821C71A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-16580
	ctx.r4.s64 = ctx.r11.s64 + -16580;
	// bl 0x8215f338
	ctx.lr = 0x821C704C;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821c7070
	if (!ctx.cr6.eq) goto loc_821C7070;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821c7078
	if (ctx.cr6.lt) goto loc_821C7078;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x821c7078
	goto loc_821C7078;
loc_821C7070:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
loc_821C7078:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// bl 0x82150fc0
	ctx.lr = 0x821C7088;
	sub_82150FC0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821c7284
	if (ctx.cr0.eq) goto loc_821C7284;
	// lwz r3,6184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6184);
	// bl 0x82151118
	ctx.lr = 0x821C7098;
	sub_82151118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c7284
	if (ctx.cr0.eq) goto loc_821C7284;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r9,r1,280
	ctx.r9.s64 = ctx.r1.s64 + 280;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C70B4:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821c70b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C70B4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821C70D0;
	sub_821884B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,-16604
	ctx.r4.s64 = ctx.r10.s64 + -16604;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
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
	// bl 0x8215f338
	ctx.lr = 0x821C7100;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82166f38
	ctx.lr = 0x821C7108;
	sub_82166F38(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-16572
	ctx.r4.s64 = ctx.r11.s64 + -16572;
	// bl 0x8215f338
	ctx.lr = 0x821C7118;
	sub_8215F338(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82166f38
	ctx.lr = 0x821C7120;
	sub_82166F38(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82126320
	ctx.lr = 0x821C7128;
	sub_82126320(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821262a8
	ctx.lr = 0x821C7134;
	sub_821262A8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x823fbf60
	ctx.lr = 0x821C715C;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C716C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c716c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C716C;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C7190;
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
	ctx.lr = 0x821C71A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821c7284
	goto loc_821C7284;
loc_821C71A8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17920
	ctx.r4.s64 = ctx.r11.s64 + -17920;
	// bl 0x82125d00
	ctx.lr = 0x821C71B8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c71cc
	if (!ctx.cr0.eq) goto loc_821C71CC;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x821914c8
	ctx.lr = 0x821C71C8;
	sub_821914C8(ctx, base);
	// b 0x821c7284
	goto loc_821C7284;
loc_821C71CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17912
	ctx.r4.s64 = ctx.r11.s64 + -17912;
	// bl 0x82125d00
	ctx.lr = 0x821C71DC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c71f0
	if (!ctx.cr0.eq) goto loc_821C71F0;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x82191520
	ctx.lr = 0x821C71EC;
	sub_82191520(ctx, base);
	// b 0x821c7284
	goto loc_821C7284;
loc_821C71F0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-16568
	ctx.r4.s64 = ctx.r11.s64 + -16568;
	// bl 0x82125d00
	ctx.lr = 0x821C7200;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821c7284
	if (!ctx.cr0.eq) goto loc_821C7284;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-16616
	ctx.r4.s64 = ctx.r11.s64 + -16616;
	// bl 0x8215f338
	ctx.lr = 0x821C7218;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821C721C;
	sub_8215FA30(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c7284
	if (ctx.cr6.eq) goto loc_821C7284;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821c7244
	if (ctx.cr6.lt) goto loc_821C7244;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_821C7244:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821C7248:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c7248
	if (!ctx.cr6.eq) goto loc_821C7248;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x821C7274;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// bl 0x8216bc98
	ctx.lr = 0x821C7284;
	sub_8216BC98(ctx, base);
loc_821C7284:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E9880) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E9888;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,15456
	ctx.r11.s64 = ctx.r11.s64 + 15456;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x821357c8
	ctx.lr = 0x821E98A8;
	sub_821357C8(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e98cc
	if (ctx.cr6.eq) goto loc_821E98CC;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E98CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E98CC:
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e98ec
	if (ctx.cr6.eq) goto loc_821E98EC;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E98EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E98EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821E98F4;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e9904
	if (ctx.cr0.eq) goto loc_821E9904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821E9904;
	sub_8269CE98(ctx, base);
loc_821E9904:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821ED160) {
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
	ctx.lr = 0x821ED168;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r5,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// addi r4,r10,-17296
	ctx.r4.s64 = ctx.r10.s64 + -17296;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// divw r10,r11,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r11.s32 / ctx.r7.s32 : 0);
	// stw r10,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x8215f338
	ctx.lr = 0x821ED1C8;
	sub_8215F338(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// bl 0x8215fba8
	ctx.lr = 0x821ED1D0;
	sub_8215FBA8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,15852
	ctx.r4.s64 = ctx.r11.s64 + 15852;
	// bl 0x8215f338
	ctx.lr = 0x821ED1E0;
	sub_8215F338(ctx, base);
	// bl 0x821d71b8
	ctx.lr = 0x821ED1E4;
	sub_821D71B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// beq 0x821ed6c8
	if (ctx.cr0.eq) goto loc_821ED6C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,10812
	ctx.r4.s64 = ctx.r11.s64 + 10812;
	// bl 0x8215f338
	ctx.lr = 0x821ED200;
	sub_8215F338(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// addi r5,r5,23092
	ctx.r5.s64 = ctx.r5.s64 + 23092;
	// addi r4,r4,23088
	ctx.r4.s64 = ctx.r4.s64 + 23088;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r22,r11,-17228
	r22.s64 = ctx.r11.s64 + -17228;
	// addi r21,r10,11060
	r21.s64 = ctx.r10.s64 + 11060;
	// addi r20,r9,11048
	r20.s64 = ctx.r9.s64 + 11048;
	// addi r19,r8,16048
	r19.s64 = ctx.r8.s64 + 16048;
	// addi r18,r7,16036
	r18.s64 = ctx.r7.s64 + 16036;
	// addi r17,r6,11040
	r17.s64 = ctx.r6.s64 + 11040;
loc_821ED250:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821ed274
	if (!ctx.cr6.eq) goto loc_821ED274;
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x821ed278
	goto loc_821ED278;
loc_821ED274:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ED278:
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821ed434
	if (!ctx.cr6.lt) goto loc_821ED434;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x821ED288;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ed29c
	if (ctx.cr0.eq) goto loc_821ED29C;
	// bl 0x821edf98
	ctx.lr = 0x821ED294;
	sub_821EDF98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x821ed2a0
	goto loc_821ED2A0;
loc_821ED29C:
	// li r31,0
	r31.s64 = 0;
loc_821ED2A0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821ED2AC;
	sub_8215F1B0(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED2B8;
	sub_8215F338(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x8215fba8
	ctx.lr = 0x821ED2C0;
	sub_8215FBA8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// bl 0x8215f338
	ctx.lr = 0x821ED2D0;
	sub_8215F338(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fb00
	ctx.lr = 0x821ED2D8;
	sub_8215FB00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r28,r31,48
	r28.s64 = r31.s64 + 48;
	// bl 0x8215f338
	ctx.lr = 0x821ED2E8;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215fb00
	ctx.lr = 0x821ED2F0;
	sub_8215FB00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r27,r31,56
	r27.s64 = r31.s64 + 56;
	// bl 0x8215f338
	ctx.lr = 0x821ED300;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215fb00
	ctx.lr = 0x821ED308;
	sub_8215FB00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED314;
	sub_8215F338(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// bl 0x8215fb00
	ctx.lr = 0x821ED31C;
	sub_8215FB00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r26,r31,64
	r26.s64 = r31.s64 + 64;
	// bl 0x8215f338
	ctx.lr = 0x821ED32C;
	sub_8215F338(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED338;
	sub_8215F338(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82166f38
	ctx.lr = 0x821ED340;
	sub_82166F38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed35c
	if (ctx.cr0.eq) goto loc_821ED35C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x821ED354;
	sub_8215F338(ctx, base);
	// addi r4,r26,16
	ctx.r4.s64 = r26.s64 + 16;
	// bl 0x82166f38
	ctx.lr = 0x821ED35C;
	sub_82166F38(ctx, base);
loc_821ED35C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r25,r30,44
	r25.s64 = r30.s64 + 44;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r26,44(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r24,4(r26)
	r24.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821ED384;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ed418
	if (ctx.cr0.eq) goto loc_821ED418;
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// beq 0x821ed3a0
	if (ctx.cr0.eq) goto loc_821ED3A0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_821ED3A0:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821ed40c
	if (ctx.cr6.lt) goto loc_821ED40C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r24,300(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// stw r3,4(r26)
	REX_STORE_U32(r26.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 100);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r25,308(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x821ed250
	goto loc_821ED250;
loc_821ED40C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821ED418;
	sub_822F6020(ctx, base);
loc_821ED418:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x821ED434;
	sub_82120018(ctx, base);
loc_821ED434:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,10852
	ctx.r4.s64 = ctx.r11.s64 + 10852;
	// bl 0x8215f338
	ctx.lr = 0x821ED444;
	sub_8215F338(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125bc8
	ctx.lr = 0x821ED454;
	sub_82125BC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r26,r11,-17324
	r26.s64 = ctx.r11.s64 + -17324;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED468;
	sub_8215F338(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82167240
	ctx.lr = 0x821ED470;
	sub_82167240(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ed484
	if (!ctx.cr0.eq) goto loc_821ED484;
loc_821ED478:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_821ED47C:
	// bl 0x8269d1b8
	ctx.lr = 0x821ED480;
	sub_8269D1B8(ctx, base);
	// b 0x821ed6c8
	goto loc_821ED6C8;
loc_821ED484:
	// lwz r31,108(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// srawi r11,r31,2
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r11.s64 = r31.s32 >> 2;
	// addze. r29,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r29.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble 0x821ed4cc
	if (!ctx.cr0.gt) goto loc_821ED4CC;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_821ED4A0:
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,5(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r9,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r7,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ed4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ED4A0;
loc_821ED4CC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,10860
	ctx.r4.s64 = ctx.r11.s64 + 10860;
	// bl 0x8215f338
	ctx.lr = 0x821ED4DC;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821ED4E0;
	sub_8215F990(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821ed4f4
	if (ctx.cr6.eq) goto loc_821ED4F4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x821ed47c
	goto loc_821ED47C;
loc_821ED4F4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821ed518
	if (!ctx.cr6.gt) goto loc_821ED518;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
loc_821ED504:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 96);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ed504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ED504;
loc_821ED518:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x82125c20
	ctx.lr = 0x821ED528;
	sub_82125C20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
	// bl 0x82125c98
	ctx.lr = 0x821ED538;
	sub_82125C98(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subf r4,r31,r29
	ctx.r4.u64 = r29.u64 - r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82125c98
	ctx.lr = 0x821ED548;
	sub_82125C98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821ED554;
	sub_826A1E70(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x821ED55C;
	sub_8269D1B8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r27,r11,10820
	r27.s64 = ctx.r11.s64 + 10820;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED570;
	sub_8215F338(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125bc8
	ctx.lr = 0x821ED580;
	sub_82125BC8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED58C;
	sub_8215F338(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82167240
	ctx.lr = 0x821ED594;
	sub_82167240(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed478
	if (ctx.cr0.eq) goto loc_821ED478;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,40(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125c98
	ctx.lr = 0x821ED5AC;
	sub_82125C98(ctx, base);
	// lwz r31,108(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821edb90
	ctx.lr = 0x821ED5BC;
	sub_821EDB90(ctx, base);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(r31.u32, 1);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// divw r9,r31,r10
	ctx.r9.u64 = uint32_t((ctx.r10.s32 && !(r31.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? r31.s32 / ctx.r10.s32 : 0);
	// andc r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r9,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r9.u32);
	// mullw r11,r9,r14
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r14.s32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x82125c20
	ctx.lr = 0x821ED5F4;
	sub_82125C20(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82125c98
	ctx.lr = 0x821ED600;
	sub_82125C98(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// lwz r10,4(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r14.s32);
	// subf r4,r11,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82125c98
	ctx.lr = 0x821ED61C;
	sub_82125C98(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r5,r11,r14
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(r14.s32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826a2e60
	ctx.lr = 0x821ED630;
	sub_826A2E60(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 104);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821ed674
	if (!ctx.cr6.gt) goto loc_821ED674;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_821ED648:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821ED654;
	sub_826A1E70(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r10,104(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 104);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r31,r31,r14
	r31.u64 = r31.u64 + r14.u64;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r28,r5,r28
	r28.u64 = ctx.r5.u64 + r28.u64;
	// blt cr6,0x821ed648
	if (ctx.cr6.lt) goto loc_821ED648;
loc_821ED674:
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8269d1b8
	ctx.lr = 0x821ED67C;
	sub_8269D1B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED688;
	sub_8215F338(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8215f338
	ctx.lr = 0x821ED690;
	sub_8215F338(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// bl 0x82166f38
	ctx.lr = 0x821ED698;
	sub_82166F38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ed6c8
	if (ctx.cr0.eq) goto loc_821ED6C8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8215f338
	ctx.lr = 0x821ED6AC;
	sub_8215F338(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8215f338
	ctx.lr = 0x821ED6B4;
	sub_8215F338(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// bl 0x82166f38
	ctx.lr = 0x821ED6BC;
	sub_82166F38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x821ed6cc
	if (!ctx.cr0.eq) goto loc_821ED6CC;
loc_821ED6C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821ED6CC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_822154E8) {
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
	ctx.lr = 0x822154F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r4,124
	r31.s64 = ctx.r4.s64 + 124;
	// addi r30,r11,17388
	r30.s64 = ctx.r11.s64 + 17388;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x82215514;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bne 0x82215544
	if (!ctx.cr0.eq) goto loc_82215544;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82120c08
	ctx.lr = 0x82215530;
	sub_82120C08(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,180
	ctx.r3.s64 = r28.s64 + 180;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// b 0x822155d8
	goto loc_822155D8;
loc_82215544:
	// bl 0x82125d00
	ctx.lr = 0x82215548;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822155b4
	if (!ctx.cr0.eq) goto loc_822155B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r28,180
	r30.s64 = r28.s64 + 180;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x82215564;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bne 0x82215580
	if (!ctx.cr0.eq) goto loc_82215580;
loc_82215578:
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x822155d8
	goto loc_822155D8;
loc_82215580:
	// bl 0x82125d00
	ctx.lr = 0x82215584;
	sub_82125D00(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// beq 0x82215578
	if (ctx.cr0.eq) goto loc_82215578;
	// bl 0x82125d00
	ctx.lr = 0x8221559C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822155dc
	if (!ctx.cr0.eq) goto loc_822155DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// b 0x822155d4
	goto loc_822155D4;
loc_822155B4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82125d00
	ctx.lr = 0x822155C4;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822155dc
	if (!ctx.cr0.eq) goto loc_822155DC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
loc_822155D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822155D8:
	// bl 0x82120c08
	ctx.lr = 0x822155DC;
	sub_82120C08(ctx, base);
loc_822155DC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,16492
	r30.s64 = ctx.r11.s64 + 16492;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x822155F8;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f670
	ctx.lr = 0x82215604;
	sub_8215F670(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82215618
	if (ctx.cr6.lt) goto loc_82215618;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8221561c
	goto loc_8221561C;
loc_82215618:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_8221561C:
	// bl 0x8215fbf8
	ctx.lr = 0x82215620;
	sub_8215FBF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r31,r28,180
	r31.s64 = r28.s64 + 180;
	// bl 0x8215f670
	ctx.lr = 0x82215630;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f670
	ctx.lr = 0x8221563C;
	sub_8215F670(ctx, base);
	// lwz r11,200(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 200);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82215650
	if (ctx.cr6.lt) goto loc_82215650;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82215654
	goto loc_82215654;
loc_82215650:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82215654:
	// bl 0x8215fbf8
	ctx.lr = 0x82215658;
	sub_8215FBF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822166e8
	ctx.lr = 0x82215660;
	sub_822166E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82225AC8) {
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
	ctx.lr = 0x82225AD0;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// bl 0x82178268
	ctx.lr = 0x82225AE8;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,15048
	ctx.r9.s64 = ctx.r11.s64 + 15048;
	// addi r10,r10,-24392
	ctx.r10.s64 = ctx.r10.s64 + -24392;
	// addi r25,r30,140
	r25.s64 = r30.s64 + 140;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,-22312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -22312);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f13,120(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 120, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stfs f13,124(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 124, temp.u32);
	// addi r29,r30,120
	r29.s64 = r30.s64 + 120;
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 128, temp.u32);
	// addi r27,r30,128
	r27.s64 = r30.s64 + 128;
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 132, temp.u32);
	// addi r26,r30,136
	r26.s64 = r30.s64 + 136;
	// stfs f0,136(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 136, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82225B38;
	sub_82120AC0(ctx, base);
	// addi r24,r30,168
	r24.s64 = r30.s64 + 168;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82225B4C;
	sub_82120AC0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,204(r30)
	REX_STORE_U32(r30.u32 + 204, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82225B5C;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82225b8c
	if (ctx.cr0.eq) goto loc_82225B8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x82225B74;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x821d13f8
	ctx.lr = 0x82225B88;
	sub_821D13F8(ctx, base);
	// b 0x82225b90
	goto loc_82225B90;
loc_82225B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225B90:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82225BA4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225bc0
	if (ctx.cr0.eq) goto loc_82225BC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82225BC0;
	sub_82120AC0(ctx, base);
loc_82225BC0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82225BC8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82225bf8
	if (ctx.cr0.eq) goto loc_82225BF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82120600
	ctx.lr = 0x82225BE0;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x82225BF4;
	sub_82196BA8(ctx, base);
	// b 0x82225bfc
	goto loc_82225BFC;
loc_82225BF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225BFC:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82225C0C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225c28
	if (ctx.cr0.eq) goto loc_82225C28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82225C28;
	sub_82120AC0(ctx, base);
loc_82225C28:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82225C30;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82225c60
	if (ctx.cr0.eq) goto loc_82225C60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82120600
	ctx.lr = 0x82225C48;
	sub_82120600(ctx, base);
	// addi r5,r30,132
	ctx.r5.s64 = r30.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82225C5C;
	sub_82196BA8(ctx, base);
	// b 0x82225c64
	goto loc_82225C64;
loc_82225C60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225C64:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82225C74;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225c90
	if (ctx.cr0.eq) goto loc_82225C90;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82225C90;
	sub_82120AC0(ctx, base);
loc_82225C90:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82225C98;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82225cc8
	if (ctx.cr0.eq) goto loc_82225CC8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82120600
	ctx.lr = 0x82225CB0;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x82225CC4;
	sub_82196BA8(ctx, base);
	// b 0x82225ccc
	goto loc_82225CCC;
loc_82225CC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225CCC:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82225CDC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225cf8
	if (ctx.cr0.eq) goto loc_82225CF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82225CF8;
	sub_82120AC0(ctx, base);
loc_82225CF8:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82225D00;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82225d30
	if (ctx.cr0.eq) goto loc_82225D30;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-24428
	ctx.r4.s64 = ctx.r11.s64 + -24428;
	// bl 0x82120600
	ctx.lr = 0x82225D18;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x8219e000
	ctx.lr = 0x82225D2C;
	sub_8219E000(ctx, base);
	// b 0x82225d34
	goto loc_82225D34;
loc_82225D30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225D34:
	// stw r3,196(r30)
	REX_STORE_U32(r30.u32 + 196, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82225D48;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225d64
	if (ctx.cr0.eq) goto loc_82225D64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82225D64;
	sub_82120AC0(ctx, base);
loc_82225D64:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82225D6C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82225d9c
	if (ctx.cr0.eq) goto loc_82225D9C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-24408
	ctx.r4.s64 = ctx.r11.s64 + -24408;
	// bl 0x82120600
	ctx.lr = 0x82225D84;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x8219e000
	ctx.lr = 0x82225D98;
	sub_8219E000(ctx, base);
	// b 0x82225da0
	goto loc_82225DA0;
loc_82225D9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225DA0:
	// stw r3,200(r30)
	REX_STORE_U32(r30.u32 + 200, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82225DB4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225dcc
	if (ctx.cr0.eq) goto loc_82225DCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x82225DCC;
	sub_82120AC0(ctx, base);
loc_82225DCC:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82225DD4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225df4
	if (ctx.cr0.eq) goto loc_82225DF4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x82225DEC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82225df8
	goto loc_82225DF8;
loc_82225DF4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82225DF8:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r29,r30,96
	r29.s64 = r30.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x82225E08;
	sub_821D3988(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x82225E10;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82225e7c
	if (ctx.cr0.eq) goto loc_82225E7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x822f6280
	ctx.lr = 0x82225E40;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225e6c
	if (ctx.cr0.eq) goto loc_82225E6C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,23176
	ctx.r10.s64 = ctx.r10.s64 + 23176;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82225e70
	goto loc_82225E70;
loc_82225E6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225E70:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82225e80
	goto loc_82225E80;
loc_82225E7C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82225E80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x82225E88;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x82225E90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225ea8
	if (ctx.cr0.eq) goto loc_82225EA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82226170
	ctx.lr = 0x82225EA0;
	sub_82226170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82225eac
	goto loc_82225EAC;
loc_82225EA8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82225EAC:
	// stw r4,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821d3988
	ctx.lr = 0x82225EB8;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82225EC0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82225f40
	if (ctx.cr0.eq) goto loc_82225F40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8216b9a8
	ctx.lr = 0x82225ED8;
	sub_8216B9A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19344
	ctx.r4.s64 = ctx.r11.s64 + -19344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82225EF0;
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
	ctx.lr = 0x82225F04;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82225f30
	if (ctx.cr0.eq) goto loc_82225F30;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,24856
	ctx.r10.s64 = ctx.r10.s64 + 24856;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82225f34
	goto loc_82225F34;
loc_82225F30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82225F34:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82225f44
	goto loc_82225F44;
loc_82225F40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82225F44:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82225F5C;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82243AC8) {
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
	ctx.lr = 0x82243AD0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82243b74
	if (ctx.cr6.eq) goto loc_82243B74;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82243b74
	if (ctx.cr6.eq) goto loc_82243B74;
	// subfic r26,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	r26.u64 = static_cast<uint64_t>(4) - ctx.r3.u64;
loc_82243AF4:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82243448
	ctx.lr = 0x82243B08;
	sub_82243448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82243b38
	if (ctx.cr0.eq) goto loc_82243B38;
	// add r11,r26,r31
	ctx.r11.u64 = r26.u64 + r31.u64;
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
	ctx.lr = 0x82243B30;
	sub_8269CC20(ctx, base);
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x82243b68
	goto loc_82243B68;
loc_82243B38:
	// lwz r4,-4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + -4);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// b 0x82243b54
	goto loc_82243B54;
loc_82243B44:
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
loc_82243B54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82243448
	ctx.lr = 0x82243B5C;
	sub_82243448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82243b44
	if (!ctx.cr0.eq) goto loc_82243B44;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
loc_82243B68:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bne cr6,0x82243af4
	if (!ctx.cr6.eq) goto loc_82243AF4;
loc_82243B74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82247B00) {
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
	// bl 0x82247b50
	ctx.lr = 0x82247B20;
	sub_82247B50(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247b30
	if (ctx.cr0.eq) goto loc_82247B30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82247B30;
	sub_8269CE98(ctx, base);
loc_82247B30:
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

DEFINE_REX_FUNC(sub_8224BB10) {
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
	ctx.lr = 0x8224BB18;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224bb38
	if (ctx.cr0.eq) goto loc_8224BB38;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,700(r3)
	REX_STORE_U8(ctx.r3.u32 + 700, ctx.r11.u8);
	// b 0x8224be84
	goto loc_8224BE84;
loc_8224BB38:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lwz r30,6048(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 6048);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x8224BB5C;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-12728
	r28.s64 = ctx.r11.s64 + -12728;
	// beq 0x8224bb84
	if (ctx.cr0.eq) goto loc_8224BB84;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x8224bb88
	goto loc_8224BB88;
loc_8224BB84:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8224BB88:
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
	ctx.lr = 0x8224BBA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-12408
	ctx.r11.s64 = ctx.r11.s64 + -12408;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,6048(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x8224BBC0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224bbe0
	if (ctx.cr0.eq) goto loc_8224BBE0;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x8224bbe4
	goto loc_8224BBE4;
loc_8224BBE0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8224BBE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BC00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x821914c8
	ctx.lr = 0x8224BC08;
	sub_821914C8(ctx, base);
	// lwz r30,136(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lbz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8224bc28
	if (!ctx.cr0.eq) goto loc_8224BC28;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6188(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6188);
	// bl 0x82151768
	ctx.lr = 0x8224BC28;
	sub_82151768(ctx, base);
loc_8224BC28:
	// li r29,1
	r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,52(r30)
	REX_STORE_U8(r30.u32 + 52, r29.u8);
	// bl 0x8224c660
	ctx.lr = 0x8224BC38;
	sub_8224C660(ctx, base);
	// lwz r30,472(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 472);
	// addi r11,r30,168
	ctx.r11.s64 = r30.s64 + 168;
	// lwz r10,188(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 188);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224bc50
	if (ctx.cr6.lt) goto loc_8224BC50;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224BC50:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,280
	ctx.r3.s64 = r30.s64 + 280;
	// bl 0x821ea0e0
	ctx.lr = 0x8224BC5C;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224bc6c
	if (ctx.cr0.eq) goto loc_8224BC6C;
	// lwz r3,284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 284);
	// bl 0x822fbe20
	ctx.lr = 0x8224BC6C;
	sub_822FBE20(ctx, base);
loc_8224BC6C:
	// lwz r10,272(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 272);
	// addi r11,r30,252
	ctx.r11.s64 = r30.s64 + 252;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224bc80
	if (ctx.cr6.lt) goto loc_8224BC80;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224BC80:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,304
	ctx.r3.s64 = r30.s64 + 304;
	// bl 0x821ea0e0
	ctx.lr = 0x8224BC8C;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224bc9c
	if (ctx.cr0.eq) goto loc_8224BC9C;
	// lwz r3,308(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 308);
	// bl 0x822fbe20
	ctx.lr = 0x8224BC9C;
	sub_822FBE20(ctx, base);
loc_8224BC9C:
	// lwz r30,476(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 476);
	// addi r11,r30,72
	ctx.r11.s64 = r30.s64 + 72;
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224bcb4
	if (ctx.cr6.lt) goto loc_8224BCB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224BCB4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,212
	ctx.r3.s64 = r30.s64 + 212;
	// bl 0x821ea0e0
	ctx.lr = 0x8224BCC0;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224bcd0
	if (ctx.cr0.eq) goto loc_8224BCD0;
	// lwz r3,216(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 216);
	// bl 0x822fbe20
	ctx.lr = 0x8224BCD0;
	sub_822FBE20(ctx, base);
loc_8224BCD0:
	// lbz r11,741(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 741);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8224bdf8
	if (ctx.cr0.eq) goto loc_8224BDF8;
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
	ctx.lr = 0x8224BCF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224bd20
	if (ctx.cr0.eq) goto loc_8224BD20;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BD10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224bd20
	if (!ctx.cr0.eq) goto loc_8224BD20;
	// stb r27,742(r31)
	REX_STORE_U8(r31.u32 + 742, r27.u8);
	// b 0x8224bd24
	goto loc_8224BD24;
loc_8224BD20:
	// stb r29,742(r31)
	REX_STORE_U8(r31.u32 + 742, r29.u8);
loc_8224BD24:
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x822f6280
	ctx.lr = 0x8224BD2C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8224bd8c
	if (ctx.cr0.eq) goto loc_8224BD8C;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224bd50
	if (ctx.cr6.lt) goto loc_8224BD50;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224BD50:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82162af8
	ctx.lr = 0x8224BD5C;
	sub_82162AF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lbz r7,742(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 742);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f2,700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8217f8a0
	ctx.lr = 0x8224BD84;
	sub_8217F8A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8224bd90
	goto loc_8224BD90;
loc_8224BD8C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8224BD90:
	// stw r4,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x8224BD9C;
	sub_821D3988(ctx, base);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8224bdc0
	if (ctx.cr6.lt) goto loc_8224BDC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8224BDC0:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82121610
	ctx.lr = 0x8224BDD0;
	sub_82121610(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,76
	ctx.r3.s64 = ctx.r11.s64 + 76;
	// bl 0x82120b20
	ctx.lr = 0x8224BDE8;
	sub_82120B20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8224BDF8;
	sub_82120AC0(ctx, base);
loc_8224BDF8:
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BE0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// addi r4,r11,-23520
	ctx.r4.s64 = ctx.r11.s64 + -23520;
	// bl 0x82125d00
	ctx.lr = 0x8224BE1C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224be84
	if (!ctx.cr0.eq) goto loc_8224BE84;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r10,r10,-14184
	ctx.r10.s64 = ctx.r10.s64 + -14184;
	// lwz r30,6052(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6052);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x8224BE44;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8224be6c
	if (ctx.cr0.eq) goto loc_8224BE6C;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r10,-13900
	ctx.r10.s64 = ctx.r10.s64 + -13900;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// b 0x8224be70
	goto loc_8224BE70;
loc_8224BE6C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8224BE70:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224BE84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8224BE84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82263570) {
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
	ctx.lr = 0x82263578;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263598;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822635b8
	if (!ctx.cr0.eq) goto loc_822635B8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-9400
	ctx.r4.s64 = ctx.r11.s64 + -9400;
	// addi r3,r10,-7496
	ctx.r3.s64 = ctx.r10.s64 + -7496;
	// li r5,4831
	ctx.r5.s64 = 4831;
	// bl 0x821231d0
	ctx.lr = 0x822635B8;
	sub_821231D0(ctx, base);
loc_822635B8:
	// li r31,0
	r31.s64 = 0;
	// lwz r7,272(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 272);
	// mr r25,r31
	r25.u64 = r31.u64;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r24,r31
	r24.u64 = r31.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82263874
	if (!ctx.cr6.gt) goto loc_82263874;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r21,r22,192
	r21.s64 = r22.s64 + 192;
	// addi r23,r22,1536
	r23.s64 = r22.s64 + 1536;
	// addi r20,r11,24544
	r20.s64 = ctx.r11.s64 + 24544;
loc_822635F0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8228c340
	ctx.lr = 0x822635FC;
	sub_8228C340(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// std r31,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82263624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120600
	ctx.lr = 0x82263630;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8228c718
	ctx.lr = 0x8226363C;
	sub_8228C718(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82263654
	if (ctx.cr0.eq) goto loc_82263654;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8228c8e0
	ctx.lr = 0x8226364C;
	sub_8228C8E0(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x82263658
	goto loc_82263658;
loc_82263654:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82263658:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x82263668;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82263684
	if (ctx.cr0.eq) goto loc_82263684;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f670
	ctx.lr = 0x8226367C;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x82263680;
	sub_8215F990(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82263684:
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplw cr6,r25,r29
	ctx.cr6.compare<uint32_t>(r25.u32, r29.u32, ctx.xer);
	// beq cr6,0x82263840
	if (ctx.cr6.eq) goto loc_82263840;
loc_82263694:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// std r31,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r31.u64);
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822636B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120600
	ctx.lr = 0x822636C0;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8228c718
	ctx.lr = 0x822636CC;
	sub_8228C718(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822636dc
	if (ctx.cr0.eq) goto loc_822636DC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8228c8e0
	ctx.lr = 0x822636DC;
	sub_8228C8E0(ctx, base);
loc_822636DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x822636EC;
	sub_82120AC0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f670
	ctx.lr = 0x822636F8;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822636FC;
	sub_8215F990(ctx, base);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8226371c
	if (ctx.cr6.gt) goto loc_8226371C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8215f0f0
	ctx.lr = 0x8226370C;
	sub_8215F0F0(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82263694
	if (!ctx.cr6.eq) goto loc_82263694;
	// b 0x82263840
	goto loc_82263840;
loc_8226371C:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r10,r25,r30
	ctx.r10.u64 = r30.u64 - r25.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r30.s64 = ctx.r10.s32 >> 2;
	// bne cr6,0x82263740
	if (!ctx.cr6.eq) goto loc_82263740;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8212a8c0
	ctx.lr = 0x82263738;
	sub_8212A8C0(ctx, base);
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82263740:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8226374c
	if (ctx.cr6.eq) goto loc_8226374C;
	// stw r26,0(r29)
	REX_STORE_U32(r29.u32 + 0, r26.u32);
loc_8226374C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + r25.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82263834
	if (ctx.cr6.eq) goto loc_82263834;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82263834
	if (ctx.cr6.eq) goto loc_82263834;
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// subf r10,r6,r29
	ctx.r10.u64 = r29.u64 - ctx.r6.u64;
	// srawi. r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// beq 0x822637b8
	if (ctx.cr0.eq) goto loc_822637B8;
loc_8226378C:
	// divw r5,r10,r11
	ctx.r5.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// subf. r9,r5,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// andc r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// twlgei r5,-1
	if (ctx.r5.s32 == -1 || ctx.r5.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bne 0x8226378c
	if (!ctx.cr0.eq) goto loc_8226378C;
loc_822637B8:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82263834
	if (!ctx.cr6.lt) goto loc_82263834;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82263834
	if (!ctx.cr6.gt) goto loc_82263834;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_822637D4:
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x822637e8
	if (!ctx.cr6.eq) goto loc_822637E8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_822637E8:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r11,r29
	ctx.r9.u64 = r29.u64 - ctx.r11.u64;
	// lwz r30,0(r7)
	r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r3,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// bge cr6,0x82263814
	if (!ctx.cr6.lt) goto loc_82263814;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// b 0x82263820
	goto loc_82263820;
loc_82263814:
	// subf r11,r9,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82263820:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822637e8
	if (!ctx.cr6.eq) goto loc_822637E8;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// bgt 0x822637d4
	if (ctx.cr0.gt) goto loc_822637D4;
loc_82263834:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8215f0f0
	ctx.lr = 0x82263840;
	sub_8215F0F0(ctx, base);
loc_82263840:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226385c
	if (!ctx.cr0.eq) goto loc_8226385C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82264568
	ctx.lr = 0x82263854;
	sub_82264568(ctx, base);
	// lwz r29,100(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8226385C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f0f0
	ctx.lr = 0x82263864;
	sub_8215F0F0(ctx, base);
	// lwz r7,272(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 272);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822635f0
	if (ctx.cr6.lt) goto loc_822635F0;
loc_82263874:
	// subf r11,r25,r29
	ctx.r11.u64 = r29.u64 - r25.u64;
	// srawi. r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r30.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x822638a0
	if (!ctx.cr0.gt) goto loc_822638A0;
	// addi r29,r25,-4
	r29.s64 = r25.s64 + -4;
loc_82263884:
	// lwzu r11,4(r29)
	ea = 4 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// bl 0x8227d768
	ctx.lr = 0x82263894;
	sub_8227D768(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// blt cr6,0x82263884
	if (ctx.cr6.lt) goto loc_82263884;
loc_822638A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822638b0
	if (ctx.cr6.eq) goto loc_822638B0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822638B0;
	sub_8269CE98(ctx, base);
loc_822638B0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8227B9D8) {
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
	ctx.lr = 0x8227B9E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,296(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227bc00
	if (ctx.cr6.eq) goto loc_8227BC00;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8227ba04
	if (!ctx.cr6.eq) goto loc_8227BA04;
	// bl 0x8228dd10
	ctx.lr = 0x8227BA04;
	sub_8228DD10(ctx, base);
loc_8227BA04:
	// lwz r31,296(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 296);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227bb94
	if (!ctx.cr6.eq) goto loc_8227BB94;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BA34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8227bb64
	if (!ctx.cr0.gt) goto loc_8227BB64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// addi r25,r11,-25252
	r25.s64 = ctx.r11.s64 + -25252;
	// addi r24,r10,-25320
	r24.s64 = ctx.r10.s64 + -25320;
loc_8227BA50:
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BA68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BA80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bb44
	if (ctx.cr0.eq) goto loc_8227BB44;
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6192(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 6192);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bb44
	if (ctx.cr0.eq) goto loc_8227BB44;
	// lwz r31,296(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 296);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8227baec
	if (ctx.cr6.gt) goto loc_8227BAEC;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x8227bb20
	goto loc_8227BB20;
loc_8227BAEC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8227bb08
	if (ctx.cr6.gt) goto loc_8227BB08;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x8227BB08;
	sub_821231D0(ctx, base);
loc_8227BB08:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r29,304
	ctx.r3.s64 = r29.s64 + 304;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x8215efb0
	ctx.lr = 0x8227BB1C;
	sub_8215EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8227BB20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bb44
	if (ctx.cr0.eq) goto loc_8227BB44;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r5,r29,304
	ctx.r5.s64 = r29.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BB44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227BB44:
	// lwz r3,6284(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6284);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8227ba50
	if (ctx.cr6.lt) goto loc_8227BA50;
loc_8227BB64:
	// lwz r3,296(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227bb84
	if (ctx.cr6.eq) goto loc_8227BB84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BB84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227BB84:
	// stw r23,296(r29)
	REX_STORE_U32(r29.u32 + 296, r23.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227bc10
	ctx.lr = 0x8227BB90;
	sub_8227BC10(ctx, base);
	// b 0x8227bc08
	goto loc_8227BC08;
loc_8227BB94:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfd f13,160(r29)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r29.u32 + 160);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfd f0,1112(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1112);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8227bc08
	if (!ctx.cr6.gt) goto loc_8227BC08;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8227bbd8
	if (!ctx.cr6.eq) goto loc_8227BBD8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BBD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,4(r31)
	REX_STORE_U32(r31.u32 + 4, r23.u32);
loc_8227BBD8:
	// lwz r3,296(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227bbf8
	if (ctx.cr6.eq) goto loc_8227BBF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227BBF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8227BBF8:
	// stw r23,296(r29)
	REX_STORE_U32(r29.u32 + 296, r23.u32);
	// b 0x8227bc08
	goto loc_8227BC08;
loc_8227BC00:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227c020
	ctx.lr = 0x8227BC08;
	sub_8227C020(ctx, base);
loc_8227BC08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8228A468) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8228A470;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
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
	// bl 0x821b2d80
	ctx.lr = 0x8228A48C;
	sub_821B2D80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,3
	r29.s64 = 3;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228A4B4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-26948
	ctx.r5.s64 = ctx.r11.s64 + -26948;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228A4CC;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,15
	ctx.r6.s64 = 15;
	// addi r5,r11,3220
	ctx.r5.s64 = ctx.r11.s64 + 3220;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228A4E4;
	sub_8216B6A8(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// slw r11,r30,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r30.u32 << (r28.u8 & 0x3F));
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8228A504;
	sub_8216B6A8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228a514
	if (ctx.cr6.eq) goto loc_8228A514;
	// stb r30,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, r30.u8);
loc_8228A514:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8228A524;
	sub_8216BC98(ctx, base);
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8228CFD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8228CFE0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8228c648
	ctx.lr = 0x8228D004;
	sub_8228C648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228d01c
	if (ctx.cr0.eq) goto loc_8228D01C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8228D01C:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x8228c648
	ctx.lr = 0x8228D02C;
	sub_8228C648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228d044
	if (ctx.cr0.eq) goto loc_8228D044;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8228D044:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8228c648
	ctx.lr = 0x8228D054;
	sub_8228C648(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228d06c
	if (ctx.cr0.eq) goto loc_8228D06C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8228D06C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82290C28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82290c5c
	if (ctx.cr6.eq) goto loc_82290C5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82290c5c
	if (ctx.cr6.lt) goto loc_82290C5C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x82290c60
	if (ctx.cr6.lt) goto loc_82290C60;
loc_82290C5C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82290C60:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// beq 0x82290c8c
	if (ctx.cr0.eq) goto loc_82290C8C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_82290C8C:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r3,-4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
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
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82295890) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x822958c0
	if (!ctx.cr6.eq) goto loc_822958C0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
loc_822958C0:
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822958D4;
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

DEFINE_REX_FUNC(sub_8229A298) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cbc
	ctx.lr = 0x8229A2A0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2ca4
	ctx.lr = 0x8229A2A8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8229a180
	ctx.lr = 0x8229A2C0;
	sub_8229A180(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fneg f28,f27
	f28.u64 = f27.u64 ^ 0x8000000000000000;
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f31.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f30.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f29,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
	// fmadds f0,f12,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, ctx.f0.f64)));
	// fmadds f13,f11,f31,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, ctx.f13.f64)));
	// fmadds f0,f10,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f0.f64)));
	// fmadds f13,f9,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f29.f64, ctx.f13.f64)));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x8229a3e4
	if (ctx.cr6.lt) goto loc_8229A3E4;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, f27.f64);
	// bgt cr6,0x8229a3e4
	if (ctx.cr6.gt) goto loc_8229A3E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f27,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f27.f64 = double(temp.f32);
loc_8229A324:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229A344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f10,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f30
	ctx.f5.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fmuls f3,f9,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmuls f4,f10,f29
	ctx.f4.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fmsubs f9,f9,f29,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f29.f64, -ctx.f5.f64)));
	// fmsubs f10,f10,f30,f3
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, -ctx.f3.f64)));
	// fmsubs f11,f31,f11,f4
	ctx.f11.f64 = double(float(std::fma(f31.f64, ctx.f11.f64, -ctx.f4.f64)));
	// fmuls f5,f9,f9
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f11,f11,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f5.f64)));
	// fmadds f5,f10,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f5.f64)));
	// fsqrts f5,f5
	ctx.f5.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f5,f27,f5
	ctx.f5.f64 = double(float(f27.f64 / ctx.f5.f64));
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f13,f9,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f11,f7,f10,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f8.f64)));
	// fmadds f0,f10,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f12,f6,f9,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f11.f64)));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// blt cr6,0x8229a3e4
	if (ctx.cr6.lt) goto loc_8229A3E4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// blt cr6,0x8229a324
	if (ctx.cr6.lt) goto loc_8229A324;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8229a3e8
	goto loc_8229A3E8;
loc_8229A3E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8229A3E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x826a2cf0
	ctx.lr = 0x8229A3F4;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822A6880) {
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
	// lwz r3,304(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,6584
	ctx.r11.s64 = ctx.r11.s64 + 6584;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A68B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a68e8
	if (ctx.cr6.eq) goto loc_822A68E8;
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
	ctx.lr = 0x822A68E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822A68E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a65f8
	ctx.lr = 0x822A68F0;
	sub_822A65F8(ctx, base);
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

DEFINE_REX_FUNC(sub_822AB7B8) {
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
	// bl 0x822ab808
	ctx.lr = 0x822AB7D8;
	sub_822AB808(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ab7e8
	if (ctx.cr0.eq) goto loc_822AB7E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822AB7E8;
	sub_8269CE98(ctx, base);
loc_822AB7E8:
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

DEFINE_REX_FUNC(sub_822AE250) {
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
	ctx.lr = 0x822AE258;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x822ae284
	if (!ctx.cr6.gt) goto loc_822AE284;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
loc_822AE284:
	// lwz r8,12(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 12);
	// li r20,0
	r20.s64 = 0;
	// lwz r10,12(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 12);
	// rlwinm r11,r8,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lwz r25,12(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r7,44(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 44);
	// or r28,r11,r10
	r28.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r6,r25,-1
	ctx.r6.s64 = r25.s64 + -1;
	// rlwinm r11,r28,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFFFF8000;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// srawi r9,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 10;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// rlwinm r9,r11,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// and r24,r11,r6
	r24.u64 = ctx.r11.u64 & ctx.r6.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822ae350
	if (ctx.cr6.eq) goto loc_822AE350;
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 16);
loc_822AE2F0:
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822ae31c
	if (!ctx.cr6.eq) goto loc_822AE31C;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq cr6,0x822ae320
	if (ctx.cr6.eq) goto loc_822AE320;
loc_822AE31C:
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
loc_822AE320:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822ae33c
	if (!ctx.cr0.eq) goto loc_822AE33C;
	// lwz r9,64(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 64);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822ae2f0
	if (!ctx.cr6.eq) goto loc_822AE2F0;
loc_822AE33C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822ae350
	if (ctx.cr6.eq) goto loc_822AE350;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ae53c
	if (!ctx.cr0.eq) goto loc_822AE53C;
loc_822AE350:
	// lwz r26,8(r30)
	r26.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r21,r26
	r21.u64 = r26.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822ae440
	if (!ctx.cr6.eq) goto loc_822AE440;
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// rlwinm r27,r26,1,0,30
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x822ae378
	if (!ctx.cr0.eq) goto loc_822AE378;
	// li r27,1
	r27.s64 = 1;
loc_822AE378:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bge cr6,0x822ae440
	if (!ctx.cr6.lt) goto loc_822AE440;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x822ae398
	if (ctx.cr6.eq) goto loc_822AE398;
	// rlwinm r3,r27,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x822AE390;
	sub_822C1A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822ae39c
	goto loc_822AE39C;
loc_822AE398:
	// mr r29,r20
	r29.u64 = r20.u64;
loc_822AE39C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822ae3f0
	if (!ctx.cr6.gt) goto loc_822AE3F0;
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subfic r8,r29,-8
	ctx.xer.ca = r29.u32 <= 4294967288;
	ctx.r8.u64 = static_cast<uint64_t>(-8) - r29.u64;
loc_822AE3B4:
	// addic. r10,r11,-8
	ctx.xer.ca = ctx.r11.u32 > 7;
	ctx.r10.s64 = ctx.r11.s64 + -8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822ae3e8
	if (ctx.cr0.eq) goto loc_822AE3E8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822AE3E8:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822ae3b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AE3B4;
loc_822AE3F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ae430
	if (ctx.cr6.eq) goto loc_822AE430;
	// lbz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822ae42c
	if (ctx.cr0.eq) goto loc_822AE42C;
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
	ctx.lr = 0x822AE42C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AE42C:
	// stw r20,12(r31)
	REX_STORE_U32(r31.u32 + 12, r20.u32);
loc_822AE430:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_822AE440:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r26,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ae480
	if (ctx.cr6.eq) goto loc_822AE480;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AE480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AE480:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822ae4d4
	if (!ctx.cr6.lt) goto loc_822AE4D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822adf60
	ctx.lr = 0x822AE494;
	sub_822ADF60(ctx, base);
	// rlwinm r11,r28,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFFFF8000;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// srawi r10,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// and r24,r11,r9
	r24.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_822AE4D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ae510
	if (ctx.cr6.eq) goto loc_822AE510;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// lwz r10,12(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822ae4f8
	if (!ctx.cr6.lt) goto loc_822AE4F8;
	// stw r23,0(r29)
	REX_STORE_U32(r29.u32 + 0, r23.u32);
	// stw r22,4(r29)
	REX_STORE_U32(r29.u32 + 4, r22.u32);
	// b 0x822ae500
	goto loc_822AE500;
loc_822AE4F8:
	// stw r22,0(r29)
	REX_STORE_U32(r29.u32 + 0, r22.u32);
	// stw r23,4(r29)
	REX_STORE_U32(r29.u32 + 4, r23.u32);
loc_822AE500:
	// stw r20,8(r29)
	REX_STORE_U32(r29.u32 + 8, r20.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r20,12(r29)
	REX_STORE_U32(r29.u32 + 12, r20.u32);
	// b 0x822ae514
	goto loc_822AE514;
loc_822AE510:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_822AE514:
	// stw r20,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r20.u32);
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r20,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r20.u32);
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,44(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r9,64(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stwx r21,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r21.u32);
loc_822AE53C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822C3260) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
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

DEFINE_REX_FUNC(sub_822C38E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4380) {
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
	// rlwimi r8,r5,22,5,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x7C00000) | (ctx.r8.u64 & 0xFFFFFFFFF83FFFFF);
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

DEFINE_REX_FUNC(sub_822C6298) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822c63d4
	if (!ctx.cr6.eq) goto loc_822C63D4;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822c62d8
	if (!ctx.cr6.gt) goto loc_822C62D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822C62D8;
	sub_822D5B28(ctx, base);
loc_822C62D8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// li r9,14
	ctx.r9.s64 = 14;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// li r7,256
	ctx.r7.s64 = 256;
	// ori r8,r8,15104
	ctx.r8.u64 = ctx.r8.u64 | 15104;
	// lis r6,-16368
	ctx.r6.s64 = -1072693248;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// ori r10,r6,11008
	ctx.r10.u64 = ctx.r6.u64 | 11008;
	// li r6,15
	ctx.r6.s64 = 15;
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r4,r4,14892
	ctx.r4.s64 = ctx.r4.s64 + 14892;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x822C6344;
	sub_826A1E70(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r6,r6,13824
	ctx.r6.u64 = ctx.r6.u64 | 13824;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// ori r5,r5,129
	ctx.r5.u64 = ctx.r5.u64 | 129;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
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
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_822C63D4:
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

DEFINE_REX_FUNC(sub_822D0160) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,12824
	ctx.r4.s64 = ctx.r3.s64 + 12824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x826a1e70
	ctx.lr = 0x822D0184;
	sub_826A1E70(ctx, base);
	// lwz r11,12852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12852);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,12856(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12856);
	// lwz r8,12860(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12860);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12864(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12864);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,15044(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 15044);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x822c4898
	ctx.lr = 0x822D01B8;
	sub_822C4898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cf418
	ctx.lr = 0x822D01C4;
	sub_822CF418(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r6,15040(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15040);
	// addi r11,r11,19520
	ctx.r11.s64 = ctx.r11.s64 + 19520;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,16592
	ctx.r4.s64 = ctx.r10.s64 + 16592;
	// li r10,0
	ctx.r10.s64 = 0;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c71d8
	ctx.lr = 0x822D0204;
	sub_822C71D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D020C;
	sub_822D5B28(ctx, base);
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
	ctx.lr = 0x822D022C;
	sub_822C1F80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822c44e8
	ctx.lr = 0x822D0238;
	sub_822C44E8(ctx, base);
	// addi r5,r31,13852
	ctx.r5.s64 = r31.s64 + 13852;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,15040(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15040);
	// bl 0x822cf950
	ctx.lr = 0x822D0248;
	sub_822CF950(ctx, base);
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

DEFINE_REX_FUNC(sub_822D8E60) {
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
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r30,13744(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 13744);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d4ea8
	ctx.lr = 0x822D8E88;
	sub_822D4EA8(ctx, base);
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d8ea0
	if (ctx.cr0.eq) goto loc_822D8EA0;
	// lwz r8,16940(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16940);
	// b 0x822d8ef8
	goto loc_822D8EF8;
loc_822D8EA0:
	// rlwinm r11,r8,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// stw r8,13744(r31)
	REX_STORE_U32(r31.u32 + 13744, ctx.r8.u32);
	// clrlwi r10,r8,3
	ctx.r10.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// bne cr6,0x822d8ed8
	if (!ctx.cr6.eq) goto loc_822D8ED8;
	// lwz r11,13728(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13728);
	// stw r3,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r3.u32);
	// b 0x822d8ef0
	goto loc_822D8EF0;
loc_822D8ED8:
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lwz r11,13748(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13748);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_822D8EF0:
	// addi r4,r3,136
	ctx.r4.s64 = ctx.r3.s64 + 136;
	// bl 0x822daf40
	ctx.lr = 0x822D8EF8;
	sub_822DAF40(ctx, base);
loc_822D8EF8:
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// addi r11,r8,136
	ctx.r11.s64 = ctx.r8.s64 + 136;
	// stw r3,13748(r31)
	REX_STORE_U32(r31.u32 + 13748, ctx.r3.u32);
	// stw r11,13752(r31)
	REX_STORE_U32(r31.u32 + 13752, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822DE6F8) {
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
	ctx.lr = 0x822DE700;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822de88c
	if (!ctx.cr0.eq) goto loc_822DE88C;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x823f02b8
	ctx.lr = 0x822DE720;
	sub_823F02B8(ctx, base);
	// stw r3,11976(r30)
	REX_STORE_U32(r30.u32 + 11976, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822de734
	if (!ctx.cr0.eq) goto loc_822DE734;
loc_822DE72C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822de890
	goto loc_822DE890;
loc_822DE734:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,24192(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24192);
	// li r26,0
	r26.s64 = 0;
	// lis r23,256
	r23.s64 = 16777216;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r26,11016(r30)
	REX_STORE_U32(r30.u32 + 11016, r26.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822DE754:
	// slw r11,r23,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r9.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822de764
	if (ctx.cr0.eq) goto loc_822DE764;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_822DE764:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x822de754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DE754;
	// lwz r11,15108(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15108);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lwz r7,15112(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 15112);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,11032(r30)
	REX_STORE_U32(r30.u32 + 11032, ctx.r9.u32);
	// li r25,-1
	r25.s64 = -1;
	// stw r8,10988(r30)
	REX_STORE_U32(r30.u32 + 10988, ctx.r8.u32);
	// stw r26,10992(r30)
	REX_STORE_U32(r30.u32 + 10992, r26.u32);
	// stw r11,10952(r30)
	REX_STORE_U32(r30.u32 + 10952, ctx.r11.u32);
	// stw r7,10960(r30)
	REX_STORE_U32(r30.u32 + 10960, ctx.r7.u32);
	// beq 0x822de7a0
	if (ctx.cr0.eq) goto loc_822DE7A0;
	// li r25,2
	r25.s64 = 2;
	// stw r25,11324(r30)
	REX_STORE_U32(r30.u32 + 11324, r25.u32);
loc_822DE7A0:
	// mr r29,r26
	r29.u64 = r26.u64;
	// lis r27,32512
	r27.s64 = 2130706432;
	// addi r31,r30,11396
	r31.s64 = r30.s64 + 11396;
	// lis r24,-32256
	r24.s64 = -2113929216;
loc_822DE7B0:
	// lwz r11,24192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24192);
	// slw r10,r23,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822de870
	if (ctx.cr0.eq) goto loc_822DE870;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x822de7d0
	if (!ctx.cr6.lt) goto loc_822DE7D0;
	// mr r25,r29
	r25.u64 = r29.u64;
	// stw r29,11324(r30)
	REX_STORE_U32(r30.u32 + 11324, r29.u32);
loc_822DE7D0:
	// addis r11,r27,16640
	ctx.r11.s64 = r27.s64 + 1090519040;
	// stw r29,-64(r31)
	REX_STORE_U32(r31.u32 + -64, r29.u32);
	// addi r10,r30,10948
	ctx.r10.s64 = r30.s64 + 10948;
	// stw r27,-40(r31)
	REX_STORE_U32(r31.u32 + -40, r27.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r10,-68(r31)
	REX_STORE_U32(r31.u32 + -68, ctx.r10.u32);
	// addi r28,r31,-68
	r28.s64 = r31.s64 + -68;
	// stw r11,-44(r31)
	REX_STORE_U32(r31.u32 + -44, ctx.r11.u32);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stb r26,-8(r31)
	REX_STORE_U8(r31.u32 + -8, r26.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r26,-4(r31)
	REX_STORE_U32(r31.u32 + -4, r26.u32);
	// addi r4,r11,-7632
	ctx.r4.s64 = ctx.r11.s64 + -7632;
	// stw r31,0(r31)
	REX_STORE_U32(r31.u32 + 0, r31.u32);
	// addi r3,r31,-36
	ctx.r3.s64 = r31.s64 + -36;
	// stw r31,4(r31)
	REX_STORE_U32(r31.u32 + 4, r31.u32);
	// bl 0x82793e34
	ctx.lr = 0x822DE814;
	__imp__KeInitializeDpc(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stb r11,-33(r31)
	REX_STORE_U8(r31.u32 + -33, ctx.r11.u8);
	// addi r8,r31,12
	ctx.r8.s64 = r31.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r10,-8040
	ctx.r5.s64 = ctx.r10.s64 + -8040;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ef950
	ctx.lr = 0x822DE83C;
	sub_823EF950(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822de72c
	if (ctx.cr0.eq) goto loc_822DE72C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,2288(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 2288);
	// bl 0x82793994
	ctx.lr = 0x822DE854;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822de870
	if (ctx.cr0.lt) goto loc_822DE870;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793984
	ctx.lr = 0x822DE868;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x822DE870;
	__imp__ObDereferenceObject(ctx, base);
loc_822DE870:
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822de7b0
	if (ctx.cr6.lt) goto loc_822DE7B0;
loc_822DE88C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_822DE890:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822E7A50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822E7A58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r3,52
	ctx.r3.s64 = 52;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x822E7A70;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822e7aa0
	if (ctx.cr0.eq) goto loc_822E7AA0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,13764
	ctx.r4.s64 = ctx.r11.s64 + 13764;
	// bl 0x82120600
	ctx.lr = 0x822E7A88;
	sub_82120600(ctx, base);
	// addi r5,r29,20
	ctx.r5.s64 = r29.s64 + 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x822E7A9C;
	sub_82196BA8(ctx, base);
	// b 0x822e7aa4
	goto loc_822E7AA4;
loc_822E7AA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E7AA4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x822E7AB8;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7ad0
	if (ctx.cr0.eq) goto loc_822E7AD0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822E7AD0;
	sub_82120AC0(ctx, base);
loc_822E7AD0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822EBAF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x822EBB00;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bl 0x82178268
	ctx.lr = 0x822EBB18;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// addi r11,r11,14536
	ctx.r11.s64 = ctx.r11.s64 + 14536;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822EBB38;
	sub_82120AC0(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822EBB40;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ebb60
	if (ctx.cr0.eq) goto loc_822EBB60;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x822EBB58;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822ebb64
	goto loc_822EBB64;
loc_822EBB60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822EBB64:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x822EBB70;
	sub_821D3988(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822EBB78;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822ebbb4
	if (ctx.cr0.eq) goto loc_822EBBB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822EBBA0;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x822ebbb8
	goto loc_822EBBB8;
loc_822EBBB4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822EBBB8:
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
	ctx.lr = 0x822EBBD0;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822EBBD8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822ebc24
	if (ctx.cr0.eq) goto loc_822EBC24;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16560
	ctx.r4.s64 = ctx.r11.s64 + 16560;
	// bl 0x82120600
	ctx.lr = 0x822EBBF0;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x822EBC04;
	sub_821BF110(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,14472
	ctx.r11.s64 = ctx.r11.s64 + 14472;
	// addi r10,r10,-26856
	ctx.r10.s64 = ctx.r10.s64 + -26856;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r10.u32);
	// b 0x822ebc28
	goto loc_822EBC28;
loc_822EBC24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EBC28:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x822EBC38;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ebc50
	if (ctx.cr0.eq) goto loc_822EBC50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x822EBC50;
	sub_82120AC0(ctx, base);
loc_822EBC50:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822EBC58;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ebc84
	if (ctx.cr0.eq) goto loc_822EBC84;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-17240
	ctx.r10.s64 = ctx.r10.s64 + -17240;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ebc88
	goto loc_822EBC88;
loc_822EBC84:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822EBC88:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r5,r11,-27100
	ctx.r5.s64 = ctx.r11.s64 + -27100;
	// bl 0x8216be80
	ctx.lr = 0x822EBC98;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822F56A8) {
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
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_822F56C4:
	// ld r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// ld r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// cmpd cr6,r11,r7
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x822f56c4
	if (!ctx.cr6.eq) goto loc_822F56C4;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822f5740
	if (!ctx.cr6.eq) goto loc_822F5740;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f57e4
	if (ctx.cr6.eq) goto loc_822F57E4;
	// lwsync 
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rldicr r11,r10,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822F5710:
	// mfmsr r31
	std::atomic_thread_fence(std::memory_order_seq_cst);
	r31.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r6,0,r5
	ea = ctx.r5.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r9
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r9.s64, ctx.xer);
	// bne cr6,0x822f5734
	if (!ctx.cr6.eq) goto loc_822F5734;
	// stdcx. r11,0,r5
	ea = ctx.r5.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r11.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f5710
	if (!ctx.cr0.eq) goto loc_822F5710;
	// b 0x822f56c4
	goto loc_822F56C4;
loc_822F5734:
	// stdcx. r6,0,r5
	ea = ctx.r5.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// b 0x822f56c4
	goto loc_822F56C4;
loc_822F5740:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f56c4
	if (ctx.cr6.eq) goto loc_822F56C4;
	// ld r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822F5760:
	// mfmsr r30
	std::atomic_thread_fence(std::memory_order_seq_cst);
	r30.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r31,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	r31.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f5784
	if (!ctx.cr6.eq) goto loc_822F5784;
	// stdcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f5760
	if (!ctx.cr0.eq) goto loc_822F5760;
	// b 0x822f578c
	goto loc_822F578C;
loc_822F5784:
	// stdcx. r31,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(r31.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F578C:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f56c4
	if (!ctx.cr6.eq) goto loc_822F56C4;
	// std r7,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// rldicr r9,r6,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
loc_822F57A0:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_822F57C0:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f57ec
	if (!ctx.cr6.eq) goto loc_822F57EC;
	// stdcx. r4,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822f57c0
	if (!ctx.cr0.eq) goto loc_822F57C0;
	// b 0x822f57f4
	goto loc_822F57F4;
loc_822F57E4:
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x822f5858
	goto loc_822F5858;
loc_822F57EC:
	// stdcx. r7,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_822F57F4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x822f57a0
	if (!ctx.cr6.eq) goto loc_822F57A0;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5854
	if (ctx.cr6.eq) goto loc_822F5854;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_822F5810:
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
	// bne 0x822f5810
	if (!ctx.cr0.eq) goto loc_822F5810;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x822f5854
	if (ctx.cr6.gt) goto loc_822F5854;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823eebb0
	ctx.lr = 0x822F5848;
	sub_823EEBB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f5854
	if (!ctx.cr6.eq) goto loc_822F5854;
	// bl 0x823ee280
	ctx.lr = 0x822F5854;
	sub_823EE280(ctx, base);
loc_822F5854:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F5858:
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

DEFINE_REX_FUNC(sub_82301828) {
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
	ctx.lr = 0x82301830;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8230c310
	ctx.lr = 0x8230183C;
	sub_8230C310(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x8230ebe0
	ctx.lr = 0x8230185C;
	sub_8230EBE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,4384
	r27.s64 = ctx.r11.s64 + 4384;
	// beq cr6,0x82301894
	if (ctx.cr6.eq) goto loc_82301894;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,735
	ctx.r6.s64 = 735;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82301894;
	sub_82330D00(ctx, base);
loc_82301894:
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823018b8
	if (ctx.cr6.eq) goto loc_823018B8;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,741
	ctx.r6.s64 = 741;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823018B8;
	sub_82330D00(ctx, base);
loc_823018B8:
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823018dc
	if (ctx.cr6.eq) goto loc_823018DC;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,746
	ctx.r6.s64 = 746;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823018DC;
	sub_82330D00(ctx, base);
loc_823018DC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82301934
	if (ctx.cr6.eq) goto loc_82301934;
loc_823018F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// bl 0x8230dba0
	ctx.lr = 0x82301928;
	sub_8230DBA0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x823018f0
	if (!ctx.cr6.eq) goto loc_823018F0;
loc_82301934:
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// addi r29,r31,88
	r29.s64 = r31.s64 + 88;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x8230197c
	if (ctx.cr6.eq) goto loc_8230197C;
loc_82301944:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// bl 0x823108f8
	ctx.lr = 0x82301970;
	sub_823108F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82301944
	if (!ctx.cr6.eq) goto loc_82301944;
loc_8230197C:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301998
	if (ctx.cr6.eq) goto loc_82301998;
	// bl 0x82314300
	ctx.lr = 0x8230198C;
	sub_82314300(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// stw r28,24(r31)
	REX_STORE_U32(r31.u32 + 24, r28.u32);
loc_82301998:
	// bl 0x82318c80
	ctx.lr = 0x8230199C;
	sub_82318C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x82318e28
	ctx.lr = 0x823019A8;
	sub_82318E28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x823190b0
	ctx.lr = 0x823019B4;
	sub_823190B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x823193b0
	ctx.lr = 0x823019C0;
	sub_823193B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x82319978
	ctx.lr = 0x823019CC;
	sub_82319978(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x8231be90
	ctx.lr = 0x823019D8;
	sub_8231BE90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x8231a578
	ctx.lr = 0x823019E4;
	sub_8231A578(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// bl 0x82316640
	ctx.lr = 0x823019F0;
	sub_82316640(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82301a20
	if (ctx.cr0.eq) goto loc_82301A20;
	// bl 0x82316640
	ctx.lr = 0x823019FC;
	sub_82316640(ctx, base);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r6,782
	ctx.r6.s64 = 782;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82301A18;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82316630
	ctx.lr = 0x82301A20;
	sub_82316630(ctx, base);
loc_82301A20:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82301A34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82301a58
	if (ctx.cr6.eq) goto loc_82301A58;
	// bl 0x8232f1f8
	ctx.lr = 0x82301A4C;
	sub_8232F1F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82301b4c
	if (!ctx.cr0.eq) goto loc_82301B4C;
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_82301A58:
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82301a80
	if (ctx.cr6.eq) goto loc_82301A80;
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,801
	ctx.r6.s64 = 801;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82301A7C;
	sub_82330D00(ctx, base);
	// stw r28,68(r31)
	REX_STORE_U32(r31.u32 + 68, r28.u32);
loc_82301A80:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r29,r31,136
	r29.s64 = r31.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82301a98
	if (!ctx.cr6.eq) goto loc_82301A98;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82301A98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82301aa8
	if (!ctx.cr6.eq) goto loc_82301AA8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82301AA8:
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// beq cr6,0x82301af8
	if (ctx.cr6.eq) goto loc_82301AF8;
loc_82301AB0:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,812
	ctx.r6.s64 = 812;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r4.u32);
	// stw r4,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r4.u32);
	// stw r28,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r28.u32);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82301AEC;
	sub_82330D00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82301ab0
	if (!ctx.cr6.eq) goto loc_82301AB0;
loc_82301AF8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,819
	ctx.r6.s64 = 819;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// lwz r11,1012(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82301B3C;
	sub_82330D00(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,-10820(r10)
	REX_STORE_U32(ctx.r10.u32 + -10820, r28.u32);
loc_82301B4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82317418) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6132
	ctx.r11.s64 = ctx.r11.s64 + 6132;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82317444
	if (ctx.cr0.eq) goto loc_82317444;
	// bl 0x8269ce98
	ctx.lr = 0x82317444;
	sub_8269CE98(ctx, base);
loc_82317444:
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

DEFINE_REX_FUNC(sub_82319120) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82319BD0) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82319c04
	if (ctx.cr6.eq) goto loc_82319C04;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82331a00
	ctx.lr = 0x82319C04;
	sub_82331A00(ctx, base);
loc_82319C04:
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

DEFINE_REX_FUNC(sub_8231D270) {
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
	// lwz r3,156(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231d294
	if (ctx.cr6.eq) goto loc_8231D294;
	// bl 0x82350e10
	ctx.lr = 0x8231D294;
	sub_82350E10(ctx, base);
loc_8231D294:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r3,-32129
	ctx.r3.s64 = -2105606144;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r6,6740
	ctx.r5.s64 = ctx.r6.s64 + 6740;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// li r6,110
	ctx.r6.s64 = 110;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r8,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lwz r11,1012(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231D2E4;
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

DEFINE_REX_FUNC(sub_82320DD0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82321B50) {
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
	ctx.lr = 0x82321B58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,12(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r26,r3,12
	r26.s64 = ctx.r3.s64 + 12;
	// b 0x82321bfc
	goto loc_82321BFC;
loc_82321B68:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// bne cr6,0x82321b78
	if (!ctx.cr6.eq) goto loc_82321B78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82321B78:
	// lwz r29,52(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// addi r28,r11,52
	r28.s64 = ctx.r11.s64 + 52;
	// b 0x82321bf0
	goto loc_82321BF0;
loc_82321B84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// addi r3,r29,-4
	ctx.r3.s64 = r29.s64 + -4;
	// bne cr6,0x82321b94
	if (!ctx.cr6.eq) goto loc_82321B94;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82321B94:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82321be0
	if (!ctx.cr0.eq) goto loc_82321BE0;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82321be0
	if (!ctx.cr0.eq) goto loc_82321BE0;
	// lwz r31,128(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r30,r3,128
	r30.s64 = ctx.r3.s64 + 128;
	// b 0x82321bd4
	goto loc_82321BD4;
loc_82321BB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82321bc4
	if (!ctx.cr6.eq) goto loc_82321BC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82321BC4:
	// bl 0x82312e10
	ctx.lr = 0x82321BC8;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82321c08
	if (!ctx.cr0.eq) goto loc_82321C08;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82321BD4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82321bb4
	if (!ctx.cr6.eq) goto loc_82321BB4;
	// b 0x82321bec
	goto loc_82321BEC;
loc_82321BE0:
	// bl 0x82312e10
	ctx.lr = 0x82321BE4;
	sub_82312E10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82321c08
	if (!ctx.cr0.eq) goto loc_82321C08;
loc_82321BEC:
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82321BF0:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x82321b84
	if (!ctx.cr6.eq) goto loc_82321B84;
	// lwz r27,0(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_82321BFC:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// bne cr6,0x82321b68
	if (!ctx.cr6.eq) goto loc_82321B68;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82321C08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82329170) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823291A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823291c0
	if (!ctx.cr0.eq) goto loc_823291C0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823291C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823291C0:
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

DEFINE_REX_FUNC(sub_8232B890) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// b 0x8232b8c0
	goto loc_8232B8C0;
loc_8232B89C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8232b8ac
	if (!ctx.cr6.eq) goto loc_8232B8AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232B8AC:
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// and. r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8232B8C0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8232b89c
	if (!ctx.cr6.eq) goto loc_8232B89C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D0F8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x826a2d40
	ctx.lr = 0x8232D114;
	sub_826A2D40(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
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

DEFINE_REX_FUNC(sub_8232F490) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232F498;
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
	// bl 0x82332760
	ctx.lr = 0x8232F4B0;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f4cc
	if (!ctx.cr6.eq) goto loc_8232F4CC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82333bc8
	ctx.lr = 0x8232F4CC;
	sub_82333BC8(ctx, base);
loc_8232F4CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8232FD88) {
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
	// bl 0x8235ace0
	ctx.lr = 0x8232FDA4;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fdd0
	if (!ctx.cr6.eq) goto loc_8232FDD0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,284(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// bne cr6,0x8232fdc8
	if (!ctx.cr6.eq) goto loc_8232FDC8;
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8232FDC8:
	// stw r9,284(r11)
	REX_STORE_U32(ctx.r11.u32 + 284, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232FDD0:
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

DEFINE_REX_FUNC(sub_82334000) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82334010
	if (!ctx.cr6.eq) goto loc_82334010;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82334010:
	// lwz r11,1176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82334024
	if (!ctx.cr6.eq) goto loc_82334024;
	// li r3,81
	ctx.r3.s64 = 81;
	// blr 
	return;
loc_82334024:
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233405c
	if (ctx.cr6.eq) goto loc_8233405C;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// addi r9,r10,-25864
	ctx.r9.s64 = ctx.r10.s64 + -25864;
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r11,1176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x82334050
	if (!ctx.cr6.eq) goto loc_82334050;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334050:
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8233405C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233D058) {
	REX_FUNC_PROLOGUE();
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
	// b 0x8233cb78
	sub_8233CB78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233E2B0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ecc50
	ctx.lr = 0x8233E2CC;
	sub_823ECC50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233e314
	if (ctx.cr6.eq) goto loc_8233E314;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ecc18
	ctx.lr = 0x8233E2DC;
	sub_823ECC18(ctx, base);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ld r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ori r9,r10,16960
	ctx.r9.u64 = ctx.r10.u64 | 16960;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mulld r7,r8,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// rotldi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r6,r7,r11
	ctx.r6.s64 = (ctx.r11.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r11.s64 == -1)) ? ctx.r7.s64 / ctx.r11.s64 : 0;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// andc r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// tdlgei r4,-1
	if (ctx.r4.s64 == -1ll || ctx.r4.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// b 0x8233e31c
	goto loc_8233E31C;
loc_8233E314:
	// bl 0x823ef900
	ctx.lr = 0x8233E318;
	sub_823EF900(ctx, base);
	// mulli r11,r3,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(1000));
loc_8233E31C:
	// li r3,0
	ctx.r3.s64 = 0;
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
}

DEFINE_REX_FUNC(sub_8233F720) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8235ace0
	ctx.lr = 0x8233F744;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f784
	if (!ctx.cr6.eq) goto loc_8233F784;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233f76c
	if (ctx.cr6.eq) goto loc_8233F76C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8233f76c
	if (ctx.cr6.eq) goto loc_8233F76C;
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x8233f784
	goto loc_8233F784;
loc_8233F76C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233F784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233F784:
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

DEFINE_REX_FUNC(sub_82342B98) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82342ba8
	if (!ctx.cr6.eq) goto loc_82342BA8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82342BA8:
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82343450) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82343460
	if (!ctx.cr6.eq) goto loc_82343460;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82343460:
	// lwz r11,188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823457C0) {
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
	ctx.lr = 0x823457C8;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823457f0
	if (ctx.cr6.eq) goto loc_823457F0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
loc_823457E8:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// b 0x82345a38
	goto loc_82345A38;
loc_823457F0:
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 28);
	// li r7,14
	ctx.r7.s64 = 14;
	// lwz r6,72(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 72);
	// li r8,28
	ctx.r8.s64 = 28;
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bgt cr6,0x8234591c
	if (ctx.cr6.gt) goto loc_8234591C;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22560
	ctx.r12.s64 = ctx.r12.s64 + 22560;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82345888;
	case 1:
		goto loc_82345850;
	case 2:
		goto loc_82345858;
	case 3:
		goto loc_82345860;
	case 4:
		goto loc_82345868;
	case 5:
		goto loc_82345868;
	case 6:
		goto loc_82345888;
	case 7:
		goto loc_82345888;
	case 8:
		goto loc_82345888;
	case 9:
		goto loc_82345888;
	case 10:
		goto loc_82345888;
	case 11:
		goto loc_82345888;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82345850:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8234586c
	goto loc_8234586C;
loc_82345858:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8234586c
	goto loc_8234586C;
loc_82345860:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8234586c
	goto loc_8234586C;
loc_82345868:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8234586C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulld r4,r11,r10
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rldicl r3,r4,61,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mullw r27,r6,r11
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345920
	goto loc_82345920;
loc_82345888:
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22688
	ctx.r12.s64 = ctx.r12.s64 + 22688;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82345910;
	case 1:
		goto loc_8234591C;
	case 2:
		goto loc_8234591C;
	case 3:
		goto loc_8234591C;
	case 4:
		goto loc_8234591C;
	case 5:
		goto loc_8234591C;
	case 6:
		goto loc_823458D0;
	case 7:
		goto loc_823458E0;
	case 8:
		goto loc_823458F8;
	case 9:
		goto loc_82345908;
	case 10:
		goto loc_82345908;
	case 11:
		goto loc_82345908;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823458D0:
	// divwu r11,r4,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r4.u32 / ctx.r7.u32 : 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r27,r6,r11
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345920
	goto loc_82345920;
loc_823458E0:
	// rlwinm r11,r4,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r10,r4,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r27,r6,r11
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345920
	goto loc_82345920;
loc_823458F8:
	// divwu r11,r4,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r4.u32 / ctx.r8.u32 : 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r27,r6,r11
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345920
	goto loc_82345920;
loc_82345908:
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// b 0x82345920
	goto loc_82345920;
loc_82345910:
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r27,r6,r11
	r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345920
	goto loc_82345920;
loc_8234591C:
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82345920:
	// cmplwi cr6,r9,11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 11, ctx.xer);
	// bgt cr6,0x82345a34
	if (ctx.cr6.gt) goto loc_82345A34;
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22848
	ctx.r12.s64 = ctx.r12.s64 + 22848;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_823459A8;
	case 1:
		goto loc_82345970;
	case 2:
		goto loc_82345978;
	case 3:
		goto loc_82345980;
	case 4:
		goto loc_82345988;
	case 5:
		goto loc_82345988;
	case 6:
		goto loc_823459A8;
	case 7:
		goto loc_823459A8;
	case 8:
		goto loc_823459A8;
	case 9:
		goto loc_823459A8;
	case 10:
		goto loc_823459A8;
	case 11:
		goto loc_823459A8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82345970:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8234598c
	goto loc_8234598C;
loc_82345978:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8234598c
	goto loc_8234598C;
loc_82345980:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x8234598c
	goto loc_8234598C;
loc_82345988:
	// li r11,32
	ctx.r11.s64 = 32;
loc_8234598C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// rldicl r8,r9,61,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mullw r29,r6,r11
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345a38
	goto loc_82345A38;
loc_823459A8:
	// lis r12,-32204
	ctx.r12.s64 = -2110521344;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22976
	ctx.r12.s64 = ctx.r12.s64 + 22976;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82345A28;
	case 1:
		goto loc_82345A34;
	case 2:
		goto loc_82345A34;
	case 3:
		goto loc_82345A34;
	case 4:
		goto loc_82345A34;
	case 5:
		goto loc_82345A34;
	case 6:
		goto loc_823459F0;
	case 7:
		goto loc_82345A00;
	case 8:
		goto loc_82345A18;
	case 9:
		goto loc_823457E8;
	case 10:
		goto loc_823457E8;
	case 11:
		goto loc_823457E8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823459F0:
	// divwu r11,r5,r7
	ctx.r11.u64 = uint32_t(ctx.r7.u32 ? ctx.r5.u32 / ctx.r7.u32 : 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r29,r6,r11
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345a38
	goto loc_82345A38;
loc_82345A00:
	// rlwinm r11,r5,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r10,r5,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r29,r6,r11
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345a38
	goto loc_82345A38;
loc_82345A18:
	// divwu r11,r5,r8
	ctx.r11.u64 = uint32_t(ctx.r8.u32 ? ctx.r5.u32 / ctx.r8.u32 : 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r29,r6,r11
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345a38
	goto loc_82345A38;
loc_82345A28:
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r29,r6,r11
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// b 0x82345a38
	goto loc_82345A38;
loc_82345A34:
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82345A38:
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bne cr6,0x82345a4c
	if (!ctx.cr6.eq) goto loc_82345A4C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82345A4C:
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,200(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82345A60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345bb8
	if (!ctx.cr6.eq) goto loc_82345BB8;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// li r9,16384
	ctx.r9.s64 = 16384;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82345aac
	if (ctx.cr6.eq) goto loc_82345AAC;
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 68);
	// lwz r10,208(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82345ae0
	if (ctx.cr6.eq) goto loc_82345AE0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// divwu r9,r9,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw. r30,r9,r11
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82345acc
	if (!ctx.cr0.eq) goto loc_82345ACC;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// b 0x82345acc
	goto loc_82345ACC;
loc_82345AAC:
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82345ae0
	if (ctx.cr6.eq) goto loc_82345AE0;
	// divwu r10,r9,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw. r30,r10,r11
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82345acc
	if (!ctx.cr0.eq) goto loc_82345ACC;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82345ACC:
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// ble cr6,0x82345ae0
	if (!ctx.cr6.gt) goto loc_82345AE0;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d04
	return;
loc_82345AE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82345bb4
	if (ctx.cr6.eq) goto loc_82345BB4;
loc_82345AE8:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bgt cr6,0x82345af8
	if (ctx.cr6.gt) goto loc_82345AF8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_82345AF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r31,0
	r31.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82345B24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345bb8
	if (!ctx.cr6.eq) goto loc_82345BB8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82345b50
	if (ctx.cr6.eq) goto loc_82345B50;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82345b50
	if (ctx.cr6.eq) goto loc_82345B50;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x82345B4C;
	sub_823EF5F0(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82345B50:
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82345b80
	if (ctx.cr6.eq) goto loc_82345B80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82345b80
	if (ctx.cr6.eq) goto loc_82345B80;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x82345B74;
	sub_823EF5F0(ctx, base);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r31,r7,r31
	r31.u64 = ctx.r7.u64 + r31.u64;
loc_82345B80:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82345BA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345bb8
	if (!ctx.cr6.eq) goto loc_82345BB8;
	// subf. r29,r31,r29
	r29.u64 = r29.u64 - r31.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r27,r31,r27
	r27.u64 = r31.u64 + r27.u64;
	// bne 0x82345ae8
	if (!ctx.cr0.eq) goto loc_82345AE8;
loc_82345BB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82345BB8:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8235F2E8) {
	REX_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235F468) {
	REX_FUNC_PROLOGUE();
	// lwz r11,384(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f4b8
	if (ctx.cr6.eq) goto loc_8235F4B8;
	// lwz r10,400(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// lwz r9,280(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// lwz r8,36(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8235f498
	if (ctx.cr6.lt) goto loc_8235F498;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235f4a8
	if (ctx.cr6.eq) goto loc_8235F4A8;
loc_8235F498:
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235f4b8
	if (ctx.cr6.eq) goto loc_8235F4B8;
loc_8235F4A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_8235F4B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82361668) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82361710
	if (ctx.cr6.eq) goto loc_82361710;
	// li r9,1
	ctx.r9.s64 = 1;
	// lhz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 36);
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// addi r30,r9,-1
	r30.s64 = ctx.r9.s64 + -1;
	// and r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 & r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823616dc
	if (!ctx.cr6.eq) goto loc_823616DC;
	// mullw r11,r6,r11
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef2f8
	ctx.lr = 0x823616B8;
	sub_823EF2F8(ctx, base);
	// lhz r10,1908(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 1908);
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82361710
	if (ctx.cr6.eq) goto loc_82361710;
	// lhz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,1908(r31)
	REX_STORE_U16(r31.u32 + 1908, ctx.r11.u16);
	// bl 0x82361600
	ctx.lr = 0x823616D8;
	sub_82361600(ctx, base);
	// b 0x82361714
	goto loc_82361714;
loc_823616DC:
	// sth r10,1908(r31)
	REX_STORE_U16(r31.u32 + 1908, ctx.r10.u16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r9,1904(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1904);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f2,1900(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 1900);
	ctx.f2.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x823bc4e0
	ctx.lr = 0x82361710;
	sub_823BC4E0(ctx, base);
loc_82361710:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361714:
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

DEFINE_REX_FUNC(sub_82367968) {
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
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82367988
	if (!ctx.cr6.eq) goto loc_82367988;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367988:
	// addis r31,r11,1
	r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,-16056
	r31.s64 = r31.s64 + -16056;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823679c4
	if (ctx.cr6.eq) goto loc_823679C4;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,13920
	ctx.r5.s64 = ctx.r10.s64 + 13920;
	// li r6,825
	ctx.r6.s64 = 825;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823679BC;
	sub_82330D00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_823679C4:
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

DEFINE_REX_FUNC(sub_8236BC70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 408);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8236bddc
	if (!ctx.cr6.lt) goto loc_8236BDDC;
	// lwz r31,404(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 404);
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// blt cr6,0x8236bd2c
	if (ctx.cr6.lt) goto loc_8236BD2C;
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r9,r10,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// divw r30,r4,r8
	r30.u64 = uint32_t((ctx.r8.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r4.s32 / ctx.r8.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r4,r30,16
	ctx.xer.ca = r30.u32 <= 16;
	ctx.r4.u64 = static_cast<uint64_t>(16) - r30.u64;
	// andc r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x8236b4f8
	ctx.lr = 0x8236BCD8;
	sub_8236B4F8(ctx, base);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// lfs f0,436(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r7,r30
	ctx.r7.s64 = r30.s32;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmadds f3,f0,f6,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f5.f64)));
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f2,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f1.f64)));
	// b 0x8236bdec
	goto loc_8236BDEC;
loc_8236BD2C:
	// lwz r11,400(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236bd44
	if (ctx.cr6.lt) goto loc_8236BD44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8236bdec
	goto loc_8236BDEC;
loc_8236BD44:
	// lwz r31,396(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// blt cr6,0x8236bddc
	if (ctx.cr6.lt) goto loc_8236BDDC;
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r9,r10,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r10.u64;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// divw r30,r4,r8
	r30.u64 = uint32_t((ctx.r8.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r4.s32 / ctx.r8.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// andc r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x8236b4f8
	ctx.lr = 0x8236BD88;
	sub_8236B4F8(ctx, base);
	// extsw r8,r30
	ctx.r8.s64 = r30.s32;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lfs f0,432(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r9,r31
	ctx.r9.s64 = r31.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmadds f3,f0,f5,f6
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f6.f64)));
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f2,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f1.f64)));
	// b 0x8236bdec
	goto loc_8236BDEC;
loc_8236BDDC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,320(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8236BDEC:
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

DEFINE_REX_FUNC(sub_8237D908) {
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
	ctx.lr = 0x8237D910;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237d930
	if (ctx.cr6.eq) goto loc_8237D930;
	// bl 0x82358490
	ctx.lr = 0x8237D92C;
	sub_82358490(ctx, base);
	// stw r26,268(r31)
	REX_STORE_U32(r31.u32 + 268, r26.u32);
loc_8237D930:
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8237d954
	if (ctx.cr6.eq) goto loc_8237D954;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,264(r31)
	REX_STORE_U32(r31.u32 + 264, r26.u32);
loc_8237D954:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,19096
	r29.s64 = ctx.r11.s64 + 19096;
	// lwz r11,11720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237d9f0
	if (ctx.cr6.eq) goto loc_8237D9F0;
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r11,11720(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11720);
	// lwz r9,272(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8237d9e4
	if (!ctx.cr6.eq) goto loc_8237D9E4;
	// lwz r3,268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8237D9A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,11720(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 11720);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3434
	ctx.r6.s64 = 3434;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r9,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r26,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r26.u32);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// lwz r4,11720(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 11720);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237D9E4;
	sub_82330D00(ctx, base);
loc_8237D9E4:
	// stw r26,11720(r31)
	REX_STORE_U32(r31.u32 + 11720, r26.u32);
	// stw r26,11724(r31)
	REX_STORE_U32(r31.u32 + 11724, r26.u32);
	// stw r26,11728(r31)
	REX_STORE_U32(r31.u32 + 11728, r26.u32);
loc_8237D9F0:
	// lwz r11,11700(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11700);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8237da6c
	if (ctx.cr6.eq) goto loc_8237DA6C;
	// lwz r11,11676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11676);
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237da50
	if (!ctx.cr6.gt) goto loc_8237DA50;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8237DA10:
	// lwz r11,11700(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11700);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237da3c
	if (ctx.cr6.eq) goto loc_8237DA3C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3447
	ctx.r6.s64 = 3447;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237DA3C;
	sub_82330D00(ctx, base);
loc_8237DA3C:
	// lwz r11,11676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11676);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237da10
	if (ctx.cr6.lt) goto loc_8237DA10;
loc_8237DA50:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,11700(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 11700);
	// li r6,3450
	ctx.r6.s64 = 3450;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237DA6C;
	sub_82330D00(ctx, base);
loc_8237DA6C:
	// lwz r4,380(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 380);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237da94
	if (ctx.cr6.eq) goto loc_8237DA94;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3455
	ctx.r6.s64 = 3455;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237DA90;
	sub_82330D00(ctx, base);
	// stw r26,380(r31)
	REX_STORE_U32(r31.u32 + 380, r26.u32);
loc_8237DA94:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237dabc
	if (ctx.cr6.eq) goto loc_8237DABC;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3461
	ctx.r6.s64 = 3461;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237DAB8;
	sub_82330D00(ctx, base);
	// stw r26,380(r31)
	REX_STORE_U32(r31.u32 + 380, r26.u32);
loc_8237DABC:
	// lwz r4,272(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8237dae4
	if (ctx.cr6.eq) goto loc_8237DAE4;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3467
	ctx.r6.s64 = 3467;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8237DAE0;
	sub_82330D00(ctx, base);
	// stw r26,272(r31)
	REX_STORE_U32(r31.u32 + 272, r26.u32);
loc_8237DAE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82392940) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82392948;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r29,-32129
	r29.s64 = -2105606144;
	// li r28,0
	r28.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1012(r29)
	REX_STORE_U32(r29.u32 + 1012, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r28,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, r28.u32);
	// stw r28,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r28.u32);
	// stw r28,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82392984;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82392cdc
	if (!ctx.cr6.eq) goto loc_82392CDC;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82340718
	ctx.lr = 0x823929A4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82392cdc
	if (!ctx.cr6.eq) goto loc_82392CDC;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823929c4
	if (ctx.cr6.eq) goto loc_823929C4;
loc_823929B8:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
loc_823929C4:
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// bne cr6,0x82392cd8
	if (!ctx.cr6.eq) goto loc_82392CD8;
	// lbz r11,113(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi cr6,r11,76
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 76, ctx.xer);
	// bne cr6,0x82392cd8
	if (!ctx.cr6.eq) goto loc_82392CD8;
	// lbz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 114);
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// bne cr6,0x82392cd8
	if (!ctx.cr6.eq) goto loc_82392CD8;
	// lbz r11,115(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 115);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82392cd8
	if (!ctx.cr6.eq) goto loc_82392CD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82340e38
	ctx.lr = 0x82392A04;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82392cdc
	if (!ctx.cr6.eq) goto loc_82392CDC;
	// bl 0x823ca358
	ctx.lr = 0x82392A10;
	sub_823CA358(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// beq cr6,0x823929b8
	if (ctx.cr6.eq) goto loc_823929B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c9088
	ctx.lr = 0x82392A24;
	sub_823C9088(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823929b8
	if (ctx.cr6.eq) goto loc_823929B8;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// bl 0x823c90b0
	ctx.lr = 0x82392A38;
	sub_823C90B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823929b8
	if (ctx.cr6.eq) goto loc_823929B8;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// addi r30,r10,9672
	r30.s64 = ctx.r10.s64 + 9672;
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r10,r9,8904
	ctx.r10.s64 = ctx.r9.s64 + 8904;
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// addi r9,r8,9576
	ctx.r9.s64 = ctx.r8.s64 + 9576;
	// lis r3,-32199
	ctx.r3.s64 = -2110193664;
	// addi r8,r7,9472
	ctx.r8.s64 = ctx.r7.s64 + 9472;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// addi r7,r6,9376
	ctx.r7.s64 = ctx.r6.s64 + 9376;
	// addi r6,r5,9320
	ctx.r6.s64 = ctx.r5.s64 + 9320;
	// addi r11,r11,29544
	ctx.r11.s64 = ctx.r11.s64 + 29544;
	// addi r5,r3,8816
	ctx.r5.s64 = ctx.r3.s64 + 8816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x823ca788
	ctx.lr = 0x82392A98;
	sub_823CA788(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823929b8
	if (!ctx.cr6.eq) goto loc_823929B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r30,r10,19956
	r30.s64 = ctx.r10.s64 + 19956;
	// li r6,482
	ctx.r6.s64 = 482;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,296
	ctx.r4.s64 = 296;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82392AC4;
	sub_82330E40(ctx, base);
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82392adc
	if (!ctx.cr6.eq) goto loc_82392ADC;
loc_82392AD0:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
loc_82392ADC:
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,268(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 268);
	// bl 0x823cbee0
	ctx.lr = 0x82392AEC;
	sub_823CBEE0(ctx, base);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r4,r11,268
	ctx.r4.s64 = ctx.r11.s64 + 268;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82392B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82392cdc
	if (!ctx.cr6.eq) goto loc_82392CDC;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// lwz r11,256(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 256);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x82392cd8
	if (ctx.cr6.gt) goto loc_82392CD8;
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11068
	ctx.r12.s64 = ctx.r12.s64 + 11068;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82392B6C;
	case 1:
		goto loc_82392B6C;
	case 2:
		goto loc_82392B6C;
	case 3:
		goto loc_82392B6C;
	case 4:
		goto loc_82392B6C;
	case 5:
		goto loc_82392B6C;
	case 6:
		goto loc_82392B6C;
	case 7:
		goto loc_82392B6C;
	case 8:
		goto loc_82392B6C;
	case 9:
		goto loc_82392B6C;
	case 10:
		goto loc_82392B6C;
	case 11:
		goto loc_82392B6C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82392B6C:
	// lwz r10,260(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11144
	ctx.r12.s64 = ctx.r12.s64 + 11144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82392C18;
	case 1:
		goto loc_82392BB8;
	case 2:
		goto loc_82392BD0;
	case 3:
		goto loc_82392BE8;
	case 4:
		goto loc_82392C00;
	case 5:
		goto loc_82392C00;
	case 6:
		goto loc_82392C18;
	case 7:
		goto loc_82392C18;
	case 8:
		goto loc_82392C18;
	case 9:
		goto loc_82392C18;
	case 10:
		goto loc_82392C18;
	case 11:
		goto loc_82392C18;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82392BB8:
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r11,10,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u64, 10) & 0x1FFFFFFFFFFFFC00) | (ctx.r9.u64 & 0xE0000000000003FF);
	// stw r9,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r9.u32);
	// b 0x82392c88
	goto loc_82392C88;
loc_82392BD0:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r11,10,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u64, 10) & 0x1FFFFFFFFFFFFC00) | (ctx.r9.u64 & 0xE0000000000003FF);
	// stw r9,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r9.u32);
	// b 0x82392c88
	goto loc_82392C88;
loc_82392BE8:
	// li r11,24
	ctx.r11.s64 = 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r11,10,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u64, 10) & 0x1FFFFFFFFFFFFC00) | (ctx.r9.u64 & 0xE0000000000003FF);
	// stw r9,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r9.u32);
	// b 0x82392c88
	goto loc_82392C88;
loc_82392C00:
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// rldimi r9,r11,10,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u64, 10) & 0x1FFFFFFFFFFFFC00) | (ctx.r9.u64 & 0xE0000000000003FF);
	// stw r9,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r9.u32);
	// b 0x82392c88
	goto loc_82392C88;
loc_82392C18:
	// lis r12,-32199
	ctx.r12.s64 = -2110193664;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11312
	ctx.r12.s64 = ctx.r12.s64 + 11312;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82392C84;
	case 1:
		goto loc_82392CD8;
	case 2:
		goto loc_82392CD8;
	case 3:
		goto loc_82392CD8;
	case 4:
		goto loc_82392CD8;
	case 5:
		goto loc_82392CD8;
	case 6:
		goto loc_82392C60;
	case 7:
		goto loc_82392C6C;
	case 8:
		goto loc_82392C60;
	case 9:
		goto loc_82392C78;
	case 10:
		goto loc_82392C78;
	case 11:
		goto loc_82392C78;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82392C60:
	// li r11,4688
	ctx.r11.s64 = 4688;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// b 0x82392c88
	goto loc_82392C88;
loc_82392C6C:
	// li r11,4608
	ctx.r11.s64 = 4608;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// b 0x82392c88
	goto loc_82392C88;
loc_82392C78:
	// li r11,8192
	ctx.r11.s64 = 8192;
	// stw r11,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r11.u32);
	// b 0x82392c94
	goto loc_82392C94;
loc_82392C84:
	// stw r28,232(r31)
	REX_STORE_U32(r31.u32 + 232, r28.u32);
loc_82392C88:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r10.u32);
loc_82392C94:
	// lwz r4,232(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82392cc8
	if (ctx.cr6.eq) goto loc_82392CC8;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,530
	ctx.r6.s64 = 530;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82392CB8;
	sub_82330E40(ctx, base);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82392ad0
	if (ctx.cr6.eq) goto loc_82392AD0;
	// stw r3,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r3.u32);
loc_82392CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
loc_82392CD8:
	// li r3,25
	ctx.r3.s64 = 25;
loc_82392CDC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823AB690) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823AB698;
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823aba18
	if (ctx.cr6.gt) goto loc_823ABA18;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ab718
	if (ctx.cr6.eq) goto loc_823AB718;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,92(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r6,r7,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823ab6dc
	if (ctx.cr6.eq) goto loc_823AB6DC;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x823ab728
	goto loc_823AB728;
loc_823AB6DC:
	// lwz r11,92(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// rlwinm r7,r11,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ab6f4
	if (ctx.cr6.eq) goto loc_823AB6F4;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x823ab728
	goto loc_823AB728;
loc_823AB6F4:
	// rlwinm r7,r11,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823ab708
	if (ctx.cr6.eq) goto loc_823AB708;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x823ab728
	goto loc_823AB728;
loc_823AB708:
	// cmplwi cr6,r11,51
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 51, ctx.xer);
	// bne cr6,0x823ab728
	if (!ctx.cr6.eq) goto loc_823AB728;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x823ab728
	goto loc_823AB728;
loc_823AB718:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823aba24
	if (ctx.cr6.eq) goto loc_823ABA24;
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
loc_823AB728:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ab778
	if (ctx.cr6.eq) goto loc_823AB778;
	// lwz r11,32(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823ab778
	if (ctx.cr6.eq) goto loc_823AB778;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r8,22056(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 22056);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x823ab778
	if (!ctx.cr6.eq) goto loc_823AB778;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x823471e8
	ctx.lr = 0x823AB774;
	sub_823471E8(ctx, base);
	// b 0x823ab7a0
	goto loc_823AB7A0;
loc_823AB778:
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r6,22056(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 22056);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x823471e8
	ctx.lr = 0x823AB7A0;
	sub_823471E8(ctx, base);
loc_823AB7A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aba28
	if (!ctx.cr6.eq) goto loc_823ABA28;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ab818
	if (ctx.cr6.eq) goto loc_823AB818;
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,1200(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823ab818
	if (!ctx.cr6.gt) goto loc_823AB818;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
loc_823AB7DC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823ab804
	if (!ctx.cr6.gt) goto loc_823AB804;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r4,216
	ctx.r10.s64 = ctx.r4.s64 + 216;
loc_823AB7F0:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823ab7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AB7F0;
loc_823AB804:
	// lwz r11,1200(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1200);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ab7dc
	if (ctx.cr6.lt) goto loc_823AB7DC;
loc_823AB818:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,784(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 784);
	// bl 0x823a6560
	ctx.lr = 0x823AB824;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aba28
	if (!ctx.cr6.eq) goto loc_823ABA28;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_823AB834:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + ctx.r11.u64;
	// lwz r9,22464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 22464);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823ab8b8
	if (ctx.cr6.eq) goto loc_823AB8B8;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823AB864;
	sub_8235ADB0(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ab8b8
	if (ctx.cr6.eq) goto loc_823AB8B8;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,780(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab898
	if (ctx.cr6.eq) goto loc_823AB898;
	// lwz r10,396(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab898
	if (ctx.cr6.eq) goto loc_823AB898;
	// lwz r10,768(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ab8b8
	if (!ctx.cr6.eq) goto loc_823AB8B8;
loc_823AB898:
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ab8b8
	if (!ctx.cr6.eq) goto loc_823AB8B8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823a6560
	ctx.lr = 0x823AB8B0;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aba28
	if (!ctx.cr6.eq) goto loc_823ABA28;
loc_823AB8B8:
	// addi r31,r31,132
	r31.s64 = r31.s64 + 132;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r31,528
	ctx.cr6.compare<int32_t>(r31.s32, 528, ctx.xer);
	// blt cr6,0x823ab834
	if (ctx.cr6.lt) goto loc_823AB834;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,25000(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 25000);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ab948
	if (ctx.cr6.eq) goto loc_823AB948;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823AB8F4;
	sub_8235ADB0(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ab948
	if (ctx.cr6.eq) goto loc_823AB948;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,780(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab928
	if (ctx.cr6.eq) goto loc_823AB928;
	// lwz r10,396(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab928
	if (ctx.cr6.eq) goto loc_823AB928;
	// lwz r10,768(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ab948
	if (!ctx.cr6.eq) goto loc_823AB948;
loc_823AB928:
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ab948
	if (!ctx.cr6.eq) goto loc_823AB948;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823a6560
	ctx.lr = 0x823AB940;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aba28
	if (!ctx.cr6.eq) goto loc_823ABA28;
loc_823AB948:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823ab960
	if (!ctx.cr6.eq) goto loc_823AB960;
	// li r31,0
	r31.s64 = 0;
loc_823AB960:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823aba18
	if (ctx.cr6.eq) goto loc_823ABA18;
loc_823AB96C:
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823ab9f4
	if (!ctx.cr6.eq) goto loc_823AB9F4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ab9f4
	if (ctx.cr6.eq) goto loc_823AB9F4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823AB9A0;
	sub_8235ADB0(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ab9f4
	if (ctx.cr6.eq) goto loc_823AB9F4;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,780(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 780);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab9d4
	if (ctx.cr6.eq) goto loc_823AB9D4;
	// lwz r10,396(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ab9d4
	if (ctx.cr6.eq) goto loc_823AB9D4;
	// lwz r10,768(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823ab9f4
	if (!ctx.cr6.eq) goto loc_823AB9F4;
loc_823AB9D4:
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ab9f4
	if (!ctx.cr6.eq) goto loc_823AB9F4;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x823a6560
	ctx.lr = 0x823AB9EC;
	sub_823A6560(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823aba28
	if (!ctx.cr6.eq) goto loc_823ABA28;
loc_823AB9F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823aba08
	if (!ctx.cr6.eq) goto loc_823ABA08;
	// li r31,0
	r31.s64 = 0;
loc_823ABA08:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ab96c
	if (!ctx.cr6.eq) goto loc_823AB96C;
loc_823ABA18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x826a1d0c
	return;
loc_823ABA24:
	// li r3,36
	ctx.r3.s64 = 36;
loc_823ABA28:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823CCD88) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x823ccdec
	if (ctx.cr6.gt) goto loc_823CCDEC;
loc_823CCDB4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x823cce60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CCE60;
	// bdzf 4*cr6+eq,0x823cce08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CCE08;
	// bdzf 4*cr6+eq,0x823cce24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CCE24;
	// bdzf 4*cr6+eq,0x823cce1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CCE1C;
	// bdzf 4*cr6+eq,0x823ccdec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CCDEC;
	// bdzf 4*cr6+eq,0x823ccdec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823CCDEC;
	// bne cr6,0x823cce1c
	if (!ctx.cr6.eq) goto loc_823CCE1C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823caa08
	ctx.lr = 0x823CCDE4;
	sub_823CAA08(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cce4c
	if (!ctx.cr6.eq) goto loc_823CCE4C;
loc_823CCDEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CCDF0:
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
loc_823CCE08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cb1d0
	ctx.lr = 0x823CCE14;
	sub_823CB1D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cce4c
	if (!ctx.cr6.eq) goto loc_823CCE4C;
loc_823CCE1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ccdf0
	goto loc_823CCDF0;
loc_823CCE24:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cc908
	ctx.lr = 0x823CCE38;
	sub_823CC908(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ccdec
	if (ctx.cr6.eq) goto loc_823CCDEC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823cce1c
	if (!ctx.cr6.eq) goto loc_823CCE1C;
loc_823CCE4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x823ccdb4
	if (!ctx.cr6.gt) goto loc_823CCDB4;
	// b 0x823ccdec
	goto loc_823CCDEC;
loc_823CCE60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cac20
	ctx.lr = 0x823CCE6C;
	sub_823CAC20(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823ccdf0
	goto loc_823CCDF0;
}

DEFINE_REX_FUNC(sub_823CFD10) {
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
	ctx.lr = 0x823CFD18;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,448(r4)
	r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 448);
	// li r28,-1
	r28.s64 = -1;
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,72(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// ld r29,0(r11)
	r29.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x823cddc0
	ctx.lr = 0x823CFD44;
	sub_823CDDC0(ctx, base);
	// lwz r11,684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 684);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cfd94
	if (ctx.cr6.eq) goto loc_823CFD94;
	// lwz r10,692(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 692);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823cfd94
	if (ctx.cr6.eq) goto loc_823CFD94;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CFD74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,692(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 692);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CFD84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// std r10,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// b 0x823cfd9c
	goto loc_823CFD9C;
loc_823CFD94:
	// std r28,16(r31)
	REX_STORE_U64(r31.u32 + 16, r28.u64);
	// std r28,8(r31)
	REX_STORE_U64(r31.u32 + 8, r28.u64);
loc_823CFD9C:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// cmpdi cr6,r11,-1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, -1, ctx.xer);
	// bne cr6,0x823cfdb4
	if (!ctx.cr6.eq) goto loc_823CFDB4;
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823CFDB4:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x823cd8c8
	ctx.lr = 0x823CFDD4;
	sub_823CD8C8(ctx, base);
	// cmpdi cr6,r3,0
	ctx.cr6.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// bge cr6,0x823cfde8
	if (!ctx.cr6.lt) goto loc_823CFDE8;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823CFDE8:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r28,0
	r28.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// ld r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U64(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823cded8
	ctx.lr = 0x823CFE20;
	sub_823CDED8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823cfe34
	if (!ctx.cr6.lt) goto loc_823CFE34;
	// li r3,-128
	ctx.r3.s64 = -128;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
loc_823CFE34:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r28,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r28.u64);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// std r29,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r29.u64);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// std r26,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r26.u64);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// subf r6,r26,r7
	ctx.r6.u64 = ctx.r7.u64 - r26.u64;
	// std r6,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// bl 0x823cead8
	ctx.lr = 0x823CFE74;
	sub_823CEAD8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823D7400) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823e5f18
	sub_823E5F18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D7C58) {
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
	// li r5,101
	ctx.r5.s64 = 101;
	// addi r30,r11,-31680
	r30.s64 = ctx.r11.s64 + -31680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823311a8
	ctx.lr = 0x823D7C88;
	sub_823311A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,101
	ctx.r5.s64 = 101;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x823311a8
	ctx.lr = 0x823D7C98;
	sub_823311A8(ctx, base);
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

DEFINE_REX_FUNC(sub_823D9AE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,16(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bne cr6,0x823d9b14
	if (!ctx.cr6.eq) goto loc_823D9B14;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-5352(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -5352);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x823d9b74
	goto loc_823D9B74;
loc_823D9B14:
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfsx f9,r11,r5
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,32432(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f9,f9,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f10.f64)));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// fdivs f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// fmuls f1,f3,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
loc_823D9B74:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r8,2(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mullw r11,r10,r6
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_823D9BA4:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f8,f10,f13,f11
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f7,f10,f0,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f9.f64)));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lhz r7,2(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 2);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823d9ba4
	if (ctx.cr6.lt) goto loc_823D9BA4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E0A60) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823e0a74
	if (!ctx.cr6.lt) goto loc_823E0A74;
loc_823E0A6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_823E0A74:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823e0a6c
	if (ctx.cr6.gt) goto loc_823E0A6C;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E18C0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823E18EC;
	sub_823EF5F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,64(r30)
	REX_STORE_U32(r30.u32 + 64, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,76(r30)
	REX_STORE_U32(r30.u32 + 76, ctx.r11.u32);
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823E3110) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f0,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f9
	ctx.f1.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f2,f0,f10
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// bl 0x8269f778
	ctx.lr = 0x823E3164;
	sub_8269F778(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x826a2f00
	ctx.lr = 0x823E316C;
	sub_826A2F00(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_823E3184:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823e31a8
	if (!ctx.cr6.gt) goto loc_823E31A8;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823E319C:
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bdnz 0x823e319c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E319C;
loc_823E31A8:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x823e31c0
	if (ctx.cr6.gt) goto loc_823E31C0;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x823e31c8
	if (ctx.cr6.gt) goto loc_823E31C8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x823e3184
	goto loc_823E3184;
loc_823E31C0:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x823e3184
	goto loc_823E3184;
loc_823E31C8:
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

DEFINE_REX_FUNC(sub_823E8310) {
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
	// bl 0x823e9178
	ctx.lr = 0x823E8330;
	sub_823E9178(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823e83d0
	if (ctx.cr6.eq) goto loc_823E83D0;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// ble cr6,0x823e8378
	if (!ctx.cr6.gt) goto loc_823E8378;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r3,-16
	ctx.r10.s64 = ctx.r3.s64 + -16;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// srw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 >> (ctx.r11.u8 & 0x3F));
	// and r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 & r30.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x823e8380
	goto loc_823E8380;
loc_823E8378:
	// subfic r11,r3,16
	ctx.xer.ca = ctx.r3.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r3.u64;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
loc_823E8380:
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// slw r9,r10,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
loc_823E8388:
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r11,r10,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// srw r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// mullw r10,r7,r7
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// addi r6,r10,32767
	ctx.r6.s64 = ctx.r10.s64 + 32767;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,17,15,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bgt cr6,0x823e8388
	if (ctx.cr6.gt) goto loc_823E8388;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// subfc r7,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r7.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x823e83d8
	goto loc_823E83D8;
loc_823E83D0:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// slw r3,r11,r31
	ctx.r3.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
loc_823E83D8:
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

DEFINE_REX_FUNC(sub_823EB180) {
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
	ctx.lr = 0x823EB188;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x82393af8
	ctx.lr = 0x823EB1A4;
	sub_82393AF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r27,28(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bne cr6,0x823eb1cc
	if (!ctx.cr6.eq) goto loc_823EB1CC;
loc_823EB1C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_823EB1CC:
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,2844(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 2844);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r11,2844(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 2844);
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 16);
	// mulli r10,r9,44
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(44));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r21,0(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82393af8
	ctx.lr = 0x823EB208;
	sub_82393AF8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eb1c0
	if (ctx.cr6.eq) goto loc_823EB1C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823eb2fc
	if (!ctx.cr6.gt) goto loc_823EB2FC;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r25,20
	r26.s64 = r25.s64 + 20;
loc_823EB22C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eb2e4
	if (ctx.cr6.eq) goto loc_823EB2E4;
loc_823EB23C:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823eb23c
	if (!ctx.cr6.eq) goto loc_823EB23C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823eb2e4
	if (ctx.cr6.eq) goto loc_823EB2E4;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(r30.s32, r23.s32, ctx.xer);
	// ble cr6,0x823eb260
	if (!ctx.cr6.gt) goto loc_823EB260;
	// mr r23,r30
	r23.u64 = r30.u64;
loc_823EB260:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82393af8
	ctx.lr = 0x823EB270;
	sub_82393AF8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stwx r3,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r9,r28,r10
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823eb1c0
	if (ctx.cr6.eq) goto loc_823EB1C0;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823eb2e4
	if (!ctx.cr6.gt) goto loc_823EB2E4;
	// addi r11,r29,68
	ctx.r11.s64 = r29.s64 + 68;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
loc_823EB2A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// and r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 & ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823eb2d8
	if (ctx.cr6.eq) goto loc_823EB2D8;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwz r10,2844(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 2844);
	// mulli r11,r11,44
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(44));
	// lwzx r5,r28,r6
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + ctx.r6.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r4,r5,r8
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r4.u32);
loc_823EB2D8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// bdnz 0x823eb2a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB2A8;
loc_823EB2E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823eb22c
	if (ctx.cr6.lt) goto loc_823EB22C;
loc_823EB2FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// ble cr6,0x823eb320
	if (!ctx.cr6.gt) goto loc_823EB320;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_823EB314:
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bdnz 0x823eb314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB314;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_823EB320:
	// stw r23,8(r31)
	REX_STORE_U32(r31.u32 + 8, r23.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82393a88
	ctx.lr = 0x823EB334;
	sub_82393A88(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x823eb1c0
	if (ctx.cr6.eq) goto loc_823EB1C0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823eb414
	if (!ctx.cr6.gt) goto loc_823EB414;
	// rlwinm r26,r21,2,0,29
	r26.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
loc_823EB358:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r29,r27
	r29.u64 = r27.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// divw r30,r10,r9
	r30.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x82393a88
	ctx.lr = 0x823EB388;
	sub_82393A88(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stwx r3,r28,r6
	REX_STORE_U32(r28.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwzx r4,r28,r5
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823eb1c0
	if (ctx.cr6.eq) goto loc_823EB1C0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x823eb400
	if (!ctx.cr6.gt) goto loc_823EB400;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_823EB3B0:
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rotlwi r9,r29,1
	ctx.r9.u64 = __builtin_rotateleft32(r29.u32, 1);
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 1);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// divw r6,r29,r30
	ctx.r6.u64 = uint32_t((r30.s32 && !(r29.s32 == INT32_MIN && r30.s32 == -1)) ? r29.s32 / r30.s32 : 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lwzx r3,r28,r8
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r8.u32);
	// andc r10,r30,r5
	ctx.r10.u64 = r30.u64 & ~ctx.r5.u64;
	// mullw r9,r6,r30
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r30.s32);
	// stwx r6,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r6.u32);
	// andc r8,r7,r4
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// twllei r30,0
	if (r30.s32 == 0 || r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r30,r30,r7
	r30.u64 = uint32_t((ctx.r7.s32 && !(r30.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? r30.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// subf r29,r9,r29
	r29.u64 = r29.u64 - ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823eb3b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EB3B0;
loc_823EB400:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823eb358
	if (ctx.cr6.lt) goto loc_823EB358;
loc_823EB414:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_823FAB68) {
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
	ctx.lr = 0x823FAB70;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r14,11016(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r8,11956(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r26,r3,11956
	r26.s64 = ctx.r3.s64 + 11956;
	// lwz r10,11952(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r25,r3,11952
	r25.s64 = ctx.r3.s64 + 11952;
	// lwz r30,11012(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r24,r3,11012
	r24.s64 = ctx.r3.s64 + 11012;
	// addi r18,r3,3644
	r18.s64 = ctx.r3.s64 + 3644;
	// addi r17,r3,9020
	r17.s64 = ctx.r3.s64 + 9020;
	// addi r16,r3,24
	r16.s64 = ctx.r3.s64 + 24;
	// addi r15,r3,2072
	r15.s64 = ctx.r3.s64 + 2072;
	// addi r20,r3,2584
	r20.s64 = ctx.r3.s64 + 2584;
	// addi r19,r3,3256
	r19.s64 = ctx.r3.s64 + 3256;
	// addi r23,r3,3508
	r23.s64 = ctx.r3.s64 + 3508;
	// addi r22,r3,3636
	r22.s64 = ctx.r3.s64 + 3636;
	// addi r27,r3,12
	r27.s64 = ctx.r3.s64 + 12;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// bge cr6,0x823faf68
	if (!ctx.cr6.lt) goto loc_823FAF68;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r21,16
	r21.s64 = 16;
	// addi r9,r9,12928
	ctx.r9.s64 = ctx.r9.s64 + 12928;
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823FABD4:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r16
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r16.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x823fac14
	if (!ctx.cr0.lt) goto loc_823FAC14;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_823FABE8:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r18
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + r18.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x823fabe8
	if (ctx.cr0.lt) goto loc_823FABE8;
loc_823FAC14:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// bge cr6,0x823faf88
	if (!ctx.cr6.lt) goto loc_823FAF88;
	// lbzx r9,r7,r20
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r20.u32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fac5c
	if (ctx.cr0.gt) goto loc_823FAC5C;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FAC5C:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x823fac70
	if (!ctx.cr0.lt) goto loc_823FAC70;
	// stbx r6,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x823faf60
	goto loc_823FAF60;
loc_823FAC70:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x823fad00
	if (!ctx.cr6.eq) goto loc_823FAD00;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r15
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r15.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823facbc
	if (!ctx.cr0.lt) goto loc_823FACBC;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_823FAC90:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r17
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r17.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x823fac90
	if (ctx.cr0.lt) goto loc_823FAC90;
loc_823FACBC:
	// lbzx r7,r9,r19
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x823facfc
	if (ctx.cr0.gt) goto loc_823FACFC;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_823FACFC:
	// addi r5,r9,7
	ctx.r5.s64 = ctx.r9.s64 + 7;
loc_823FAD00:
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x823fae7c
	if (!ctx.cr6.gt) goto loc_823FAE7C;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,12004(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x823fadf4
	if (ctx.cr6.lt) goto loc_823FADF4;
	// addic. r7,r7,-3
	ctx.xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823fad84
	if (ctx.cr0.eq) goto loc_823FAD84;
	// lbz r9,12004(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subfic r7,r9,35
	ctx.xer.ca = ctx.r9.u32 <= 35;
	ctx.r7.u64 = static_cast<uint64_t>(35) - ctx.r9.u64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fad88
	if (ctx.cr0.gt) goto loc_823FAD88;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r31,0(r30)
	r31.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x823fad88
	goto loc_823FAD88;
loc_823FAD84:
	// li r7,0
	ctx.r7.s64 = 0;
loc_823FAD88:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r6,3014
	ctx.r7.s64 = ctx.r6.s64 + 3014;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r23.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r7,r22
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r22.u32);
	// subf r8,r9,r31
	ctx.r8.u64 = r31.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823fadec
	if (ctx.cr0.gt) goto loc_823FADEC;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r31,0(r30)
	r31.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FADEC:
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x823fae68
	goto loc_823FAE68;
loc_823FADF4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823fae5c
	if (ctx.cr6.eq) goto loc_823FAE5C;
	// lbz r9,12004(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r7,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r3.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x823fae48
	if (ctx.cr0.gt) goto loc_823FAE48;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r31,0(r30)
	r31.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823FAE48:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x823fae68
	goto loc_823FAE68;
loc_823FAE5C:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_823FAE68:
	// lwz r7,4(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r7,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r7.u32);
	// stw r6,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// b 0x823fae8c
	goto loc_823FAE8C;
loc_823FAE7C:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
	// stwx r6,r7,r27
	REX_STORE_U32(ctx.r7.u32 + r27.u32, ctx.r6.u32);
loc_823FAE8C:
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r6,r9,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r9.u64;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// and r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subf r6,r7,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r7.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823faed4
	if (!ctx.cr6.lt) goto loc_823FAED4;
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// bge cr6,0x823faed4
	if (!ctx.cr6.lt) goto loc_823FAED4;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_823FAEBC:
	// lbzu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r6,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt 0x823faebc
	if (ctx.cr0.gt) goto loc_823FAEBC;
	// b 0x823faf60
	goto loc_823FAF60;
loc_823FAED4:
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// ble cr6,0x823faf24
	if (!ctx.cr6.gt) goto loc_823FAF24;
	// addi r6,r9,-17
	ctx.r6.s64 = ctx.r9.s64 + -17;
	// add r31,r29,r4
	r31.u64 = r29.u64 + ctx.r4.u64;
	// rlwinm r6,r6,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// add r3,r7,r29
	ctx.r3.u64 = ctx.r7.u64 + r29.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
loc_823FAF04:
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r21,r3
	temp.u32 = r21.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r21
	ea = r31.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x823faf04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FAF04;
loc_823FAF24:
	// lvlx128 v63,r7,r29
	temp.u32 = ctx.r7.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r29,r4
	ctx.r6.u64 = r29.u64 + ctx.r4.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// lvlx128 v62,r29,r4
	temp.u32 = r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvrx128 v61,r21,r6
	temp.u32 = r21.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r21,r7
	temp.u32 = r21.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v0,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvsr v12,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vor128 v13,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vcmpgtub v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vsel v12,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvlx v12,r29,r4
	ea = r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvrx v12,r6,r21
	ea = ctx.r6.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
loc_823FAF60:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// blt cr6,0x823fabd4
	if (ctx.cr6.lt) goto loc_823FABD4;
loc_823FAF68:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r3,r28,r4
	ctx.r3.u64 = ctx.r4.u64 - r28.u64;
	// stb r8,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r8.u8);
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// stw r9,11960(r11)
	REX_STORE_U32(ctx.r11.u32 + 11960, ctx.r9.u32);
loc_823FAF84:
	// b 0x826a1cd0
	return;
loc_823FAF88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823faf84
	goto loc_823FAF84;
}

DEFINE_REX_FUNC(sub_824149C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x824149dc
	goto loc_824149DC;
loc_824149D4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,92(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
loc_824149DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824149d4
	if (!ctx.cr6.eq) goto loc_824149D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824149f4
	if (ctx.cr6.eq) goto loc_824149F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_824149F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82414a18
	if (ctx.cr6.eq) goto loc_82414A18;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bge cr6,0x82414a14
	if (!ctx.cr6.lt) goto loc_82414A14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82414A14:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82414A18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82416628) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x82415480
	ctx.lr = 0x82416640;
	sub_82415480(ctx, base);
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x8241669c
	goto loc_8241669C;
loc_82416654:
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82416660:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// beq 0x82416684
	if (ctx.cr0.eq) goto loc_82416684;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82416660
	if (ctx.cr6.eq) goto loc_82416660;
loc_82416684:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x824166bc
	if (ctx.cr0.lt) goto loc_824166BC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824166a8
	if (ctx.cr6.eq) goto loc_824166A8;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
loc_8241669C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82416654
	if (!ctx.cr6.eq) goto loc_82416654;
	// b 0x824166bc
	goto loc_824166BC;
loc_824166A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bl 0x82415a50
	ctx.lr = 0x824166BC;
	sub_82415A50(ctx, base);
loc_824166BC:
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

DEFINE_REX_FUNC(sub_8241A9D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8241A9E0;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x8241ab38
	if (ctx.cr6.gt) goto loc_8241AB38;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,24608
	ctx.r12.s64 = ctx.r12.s64 + 24608;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32190
	ctx.r12.s64 = -2109603840;
	// nop 
	// addi r12,r12,-21980
	ctx.r12.s64 = ctx.r12.s64 + -21980;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8241AA24;
	case 1:
		goto loc_8241AA30;
	case 2:
		goto loc_8241AA4C;
	case 3:
		goto loc_8241AA5C;
	case 4:
		goto loc_8241AA6C;
	case 5:
		goto loc_8241AA7C;
	case 6:
		goto loc_8241AAA0;
	case 7:
		goto loc_8241AAC4;
	case 8:
		goto loc_8241AAE8;
	case 9:
		goto loc_8241AB0C;
	case 10:
		goto loc_8241AB14;
	case 11:
		goto loc_8241AB38;
	case 12:
		goto loc_8241AB20;
	case 13:
		goto loc_8241AB2C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8241AA24:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,24904
	ctx.r5.s64 = ctx.r11.s64 + 24904;
	// b 0x8241ab40
	goto loc_8241AB40;
loc_8241AA30:
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
loc_8241AA34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,24892
	ctx.r5.s64 = ctx.r11.s64 + 24892;
loc_8241AA3C:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x8241AA48;
	sub_82404168(ctx, base);
	// b 0x8241ab4c
	goto loc_8241AB4C;
loc_8241AA4C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r11,24876
	ctx.r5.s64 = ctx.r11.s64 + 24876;
	// b 0x8241aa3c
	goto loc_8241AA3C;
loc_8241AA5C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r11,24860
	ctx.r5.s64 = ctx.r11.s64 + 24860;
	// b 0x8241aa3c
	goto loc_8241AA3C;
loc_8241AA6C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r11,24844
	ctx.r5.s64 = ctx.r11.s64 + 24844;
	// b 0x8241aa3c
	goto loc_8241AA3C;
loc_8241AA7C:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r11,24832
	ctx.r5.s64 = ctx.r11.s64 + 24832;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x8241AA9C;
	sub_82404168(ctx, base);
	// b 0x8241ab4c
	goto loc_8241AB4C;
loc_8241AAA0:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,24820
	ctx.r5.s64 = ctx.r11.s64 + 24820;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x8241AAC0;
	sub_82404168(ctx, base);
	// b 0x8241ab4c
	goto loc_8241AB4C;
loc_8241AAC4:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,24808
	ctx.r5.s64 = ctx.r11.s64 + 24808;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82404168
	ctx.lr = 0x8241AAE4;
	sub_82404168(ctx, base);
	// b 0x8241ab4c
	goto loc_8241AB4C;
loc_8241AAE8:
	// lfd f1,8(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,24796
	ctx.r5.s64 = ctx.r11.s64 + 24796;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82404168
	ctx.lr = 0x8241AB08;
	sub_82404168(ctx, base);
	// b 0x8241ab4c
	goto loc_8241AB4C;
loc_8241AB0C:
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8241aa34
	goto loc_8241AA34;
loc_8241AB14:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,24780
	ctx.r5.s64 = ctx.r11.s64 + 24780;
	// b 0x8241ab40
	goto loc_8241AB40;
loc_8241AB20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,24768
	ctx.r5.s64 = ctx.r11.s64 + 24768;
	// b 0x8241ab40
	goto loc_8241AB40;
loc_8241AB2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,24756
	ctx.r5.s64 = ctx.r11.s64 + 24756;
	// b 0x8241ab40
	goto loc_8241AB40;
loc_8241AB38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,24748
	ctx.r5.s64 = ctx.r11.s64 + 24748;
loc_8241AB40:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x8241AB4C;
	sub_82404168(ctx, base);
loc_8241AB4C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,24716
	ctx.r6.s64 = ctx.r11.s64 + 24716;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8241a4f0
	ctx.lr = 0x8241AB68;
	sub_8241A4F0(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824362B8) {
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
	ctx.lr = 0x824362C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x824362e0
	if (ctx.cr6.eq) goto loc_824362E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243641c
	goto loc_8243641C;
loc_824362E0:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x824362F8;
	sub_823F02B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8243630c
	if (!ctx.cr0.eq) goto loc_8243630C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824363f8
	goto loc_824363F8;
loc_8243630C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82436330
	if (ctx.cr6.eq) goto loc_82436330;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82436330
	if (ctx.cr0.eq) goto loc_82436330;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82436328:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82436328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82436328;
loc_82436330:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82434350
	ctx.lr = 0x82436344;
	sub_82434350(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824363f8
	if (ctx.cr0.lt) goto loc_824363F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82423f70
	ctx.lr = 0x82436374;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824363f8
	if (ctx.cr0.lt) goto loc_824363F8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824363cc
	if (ctx.cr6.eq) goto loc_824363CC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_8243638C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824363b0
	if (!ctx.cr6.lt) goto loc_824363B0;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x824363b4
	goto loc_824363B4;
loc_824363B0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824363B4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824363c4
	if (ctx.cr6.eq) goto loc_824363C4;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_824363C4:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8243638c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243638C;
loc_824363CC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,16(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,132(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82427cf8
	ctx.lr = 0x824363F4;
	sub_82427CF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824363F8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0350
	ctx.lr = 0x82436404;
	sub_823F0350(ctx, base);
	// lwz r11,76(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82436418
	if (ctx.cr6.eq) goto loc_82436418;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82436418:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8243641C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8243F068) {
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
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8243F094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// stw r3,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r3.u32);
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r7,-5392
	ctx.r10.s64 = ctx.r7.s64 + -5392;
	// addi r4,r8,-4032
	ctx.r4.s64 = ctx.r8.s64 + -4032;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r6,-4608
	ctx.r8.s64 = ctx.r6.s64 + -4608;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r7,r5,-6256
	ctx.r7.s64 = ctx.r5.s64 + -6256;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8243F0DC:
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// addi r8,r9,-6256
	ctx.r8.s64 = ctx.r9.s64 + -6256;
	// stw r8,-64(r10)
	REX_STORE_U32(ctx.r10.u32 + -64, ctx.r8.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243f0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243F0DC;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// addi r8,r10,-6680
	ctx.r8.s64 = ctx.r10.s64 + -6680;
	// addi r7,r9,-6680
	ctx.r7.s64 = ctx.r9.s64 + -6680;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r7,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,444(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 444);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r11,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// stw r11,164(r6)
	REX_STORE_U32(ctx.r6.u32 + 164, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82442B20) {
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
	ctx.lr = 0x82442B28;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c84
	ctx.lr = 0x82442B30;
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r6,1084(r1)
	REX_STORE_U32(ctx.r1.u32 + 1084, ctx.r6.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f23,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f23.f64 = double(temp.f32);
	// beq cr6,0x82442bb0
	if (ctx.cr6.eq) goto loc_82442BB0;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82442B64:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// bge cr6,0x82442b74
	if (!ctx.cr6.lt) goto loc_82442B74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82442B74:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82442b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82442B64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x82442ba0
	if (!ctx.cr6.eq) goto loc_82442BA0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// sth r9,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// b 0x824434fc
	goto loc_824434FC;
loc_82442BA0:
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82442bb4
	goto loc_82442BB4;
loc_82442BB0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82442BB4:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82442bd0
	if (ctx.cr6.eq) goto loc_82442BD0;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826a2e60
	ctx.lr = 0x82442BD0;
	sub_826A2E60(ctx, base);
loc_82442BD0:
	// addi r4,r1,532
	ctx.r4.s64 = ctx.r1.s64 + 532;
	// lwz r16,1084(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// addi r28,r1,328
	r28.s64 = ctx.r1.s64 + 328;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// addi r18,r1,344
	r18.s64 = ctx.r1.s64 + 344;
	// subf r3,r31,r4
	ctx.r3.u64 = ctx.r4.u64 - r31.u64;
	// subf r4,r31,r28
	ctx.r4.u64 = r28.u64 - r31.u64;
	// subf r24,r31,r9
	r24.u64 = ctx.r9.u64 - r31.u64;
	// subf r21,r31,r6
	r21.u64 = ctx.r6.u64 - r31.u64;
	// subf r28,r31,r18
	r28.u64 = r18.u64 - r31.u64;
	// stw r24,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r24.u32);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// stw r21,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r21.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r18,-32256
	r18.s64 = -2113929216;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r27,r1,332
	r27.s64 = ctx.r1.s64 + 332;
	// lfs f27,-28792(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -28792);
	f27.f64 = double(temp.f32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r17,r1,528
	r17.s64 = ctx.r1.s64 + 528;
	// lfs f19,15196(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15196);
	f19.f64 = double(temp.f32);
	// subf r23,r31,r8
	r23.u64 = ctx.r8.u64 - r31.u64;
	// lfs f21,17280(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 17280);
	f21.f64 = double(temp.f32);
	// subf r26,r31,r27
	r26.u64 = r27.u64 - r31.u64;
	// addi r27,r9,-28792
	r27.s64 = ctx.r9.s64 + -28792;
	// stw r23,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r23.u32);
	// subf r19,r31,r5
	r19.u64 = ctx.r5.u64 - r31.u64;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subf r8,r31,r17
	ctx.r8.u64 = r17.u64 - r31.u64;
	// stw r19,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r19.u32);
	// addi r7,r1,316
	ctx.r7.s64 = ctx.r1.s64 + 316;
	// addi r11,r1,348
	ctx.r11.s64 = ctx.r1.s64 + 348;
	// lfs f29,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	f29.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f28,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	f28.f64 = double(temp.f32);
	// lis r17,-32254
	r17.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r15,-32255
	r15.s64 = -2113863680;
	// lis r14,-32255
	r14.s64 = -2113863680;
	// lfs f20,20208(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20208);
	f20.f64 = double(temp.f32);
	// lis r18,-32255
	r18.s64 = -2113863680;
	// lfs f22,-8120(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + -8120);
	f22.f64 = double(temp.f32);
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// lfs f6,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f6.f64 = double(temp.f32);
	// subf r22,r31,r7
	r22.u64 = ctx.r7.u64 - r31.u64;
	// lfs f30,20236(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20236);
	f30.f64 = double(temp.f32);
	// subf r20,r31,r11
	r20.u64 = ctx.r11.u64 - r31.u64;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r30,r1,280
	r30.s64 = ctx.r1.s64 + 280;
	// lfs f7,20228(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 20228);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r1,312
	r29.s64 = ctx.r1.s64 + 312;
	// lfs f31,20232(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 20232);
	f31.f64 = double(temp.f32);
	// addi r25,r1,336
	r25.s64 = ctx.r1.s64 + 336;
	// lfs f8,20224(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 20224);
	ctx.f8.f64 = double(temp.f32);
	// stw r22,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, r22.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r20,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, r20.u32);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// subf r29,r31,r29
	r29.u64 = r29.u64 - r31.u64;
	// subf r25,r31,r25
	r25.u64 = r25.u64 - r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82442CD8:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82442d10
	if (ctx.cr6.eq) goto loc_82442D10;
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r9,r1,276
	ctx.r9.s64 = ctx.r1.s64 + 276;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f11,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
loc_82442D10:
	// fmadds f11,f13,f8,f23
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, f23.f64)));
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// fmadds f10,f12,f7,f23
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, f23.f64)));
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// fmadds f9,f0,f8,f23
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, f23.f64)));
	// stfsx f6,r3,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fctiwz f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f11.u64);
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// lwa r9,196(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 196));
	// fctiwz f10,f9
	ctx.f10.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f10,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.f10.u64);
	// stfd f11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.f11.u64);
	// std r9,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// lwa r17,244(r1)
	r17.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 244));
	// lfd f10,208(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r17,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r17.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwa r18,196(r1)
	r18.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 196));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r18,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, r18.u64);
	// lfd f11,264(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r18,r17
	r18.u64 = r17.u64;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfsx f10,r10,r6
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// stfsx f11,r10,r5
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x82442e60
	if (ctx.cr6.eq) goto loc_82442E60;
	// clrlwi r9,r7,30
	ctx.r9.u64 = ctx.r7.u32 & 0x3;
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// beq cr6,0x82442ddc
	if (ctx.cr6.eq) goto loc_82442DDC;
	// lfsx f5,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f22,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f5.f64)));
	// lfsx f3,r23,r11
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f22,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f4.f64)));
	// fmadds f3,f0,f22,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f3.f64)));
	// stfsx f5,r30,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r24,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r23,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r23.u32 + ctx.r11.u32, temp.u32);
loc_82442DDC:
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bge cr6,0x82442e60
	if (!ctx.cr6.lt) goto loc_82442E60;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82442e10
	if (ctx.cr6.eq) goto loc_82442E10;
	// lfsx f5,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r22,r11
	temp.u32 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f21,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f5.f64)));
	// lfsx f3,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f21,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f21.f64, ctx.f4.f64)));
	// fmadds f3,f0,f21,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f3.f64)));
	// stfsx f5,r29,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(r29.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r22,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r21,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r21.u32 + ctx.r11.u32, temp.u32);
loc_82442E10:
	// lfsx f5,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// lfsx f4,r26,r11
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f5,f13,f20,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f5.f64)));
	// lfsx f3,r25,r11
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f12,f20,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f4.f64)));
	// fmadds f3,f0,f20,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, ctx.f3.f64)));
	// stfsx f5,r4,r11
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// stfsx f4,r26,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f3,r25,r11
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r25.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x82442e60
	if (ctx.cr6.eq) goto loc_82442E60;
	// lfsx f5,r28,r11
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f5
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f19.f64, ctx.f5.f64)));
	// lfsx f4,r20,r11
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f5,r19,r11
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f12,f19,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f4.f64)));
	// fmadds f0,f0,f19,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, ctx.f5.f64)));
	// stfsx f13,r28,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r20,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r19,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r19.u32 + ctx.r11.u32, temp.u32);
loc_82442E60:
	// fmuls f0,f10,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f10.f64 * f27.f64));
	// stfsx f0,r10,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// fmuls f0,f11,f28
	ctx.f0.f64 = double(float(ctx.f11.f64 * f28.f64));
	// stfsx f0,r10,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// fmuls f0,f9,f29
	ctx.f0.f64 = double(float(ctx.f9.f64 * f29.f64));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82442cd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82442CD8;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824426a0
	ctx.lr = 0x82442EA0;
	sub_824426A0(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lfs f11,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-28776
	ctx.r10.s64 = ctx.r11.s64 + -28776;
	// lfs f10,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-28776(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28776);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x824422e8
	ctx.lr = 0x82442F04;
	sub_824422E8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x824422e8
	ctx.lr = 0x82442F10;
	sub_824422E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r18,4
	ctx.cr6.compare<uint32_t>(r18.u32, 4, ctx.xer);
	// bne cr6,0x82442f44
	if (!ctx.cr6.eq) goto loc_82442F44;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82442f44
	if (!ctx.cr6.eq) goto loc_82442F44;
	// lwz r10,1060(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// sth r3,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x824434fc
	goto loc_824434FC;
loc_82442F44:
	// rlwinm r9,r8,21,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1F;
	// lwz r17,1060(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// std r9,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// rlwinm r7,r11,27,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rlwinm r10,r11,21,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1F;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// rlwinm r9,r8,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3F;
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lfd f13,208(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// std r10,208(r1)
	REX_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// std r9,264(r1)
	REX_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// lfd f9,264(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f10,208(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r6,r18,-3
	ctx.r6.s64 = r18.s64 + -3;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r5,-1
	ctx.r5.s64 = -1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// subfc r10,r9,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subfze r10,r5
	temp.u8 = ~ctx.r5.u32 + ctx.xer.ca < ~ctx.r5.u32;
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmuls f8,f12,f30
	ctx.f8.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f0,f27,f13
	ctx.f0.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fmuls f12,f11,f29
	ctx.f12.f64 = double(float(ctx.f11.f64 * f29.f64));
	// fmuls f11,f10,f27
	ctx.f11.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fmuls f13,f9,f28
	ctx.f13.f64 = double(float(ctx.f9.f64 * f28.f64));
	// fmuls f10,f8,f28
	ctx.f10.f64 = double(float(ctx.f8.f64 * f28.f64));
	// fmuls f9,f7,f29
	ctx.f9.f64 = double(float(ctx.f7.f64 * f29.f64));
	// bne cr6,0x82443044
	if (!ctx.cr6.eq) goto loc_82443044;
	// lfs f8,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// sth r8,0(r17)
	REX_STORE_U16(r17.u32 + 0, ctx.r8.u16);
	// lfs f7,252(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// sth r11,2(r17)
	REX_STORE_U16(r17.u32 + 2, ctx.r11.u16);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x8244306c
	goto loc_8244306C;
loc_82443044:
	// lfs f8,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// sth r11,0(r17)
	REX_STORE_U16(r17.u32 + 0, ctx.r11.u16);
	// lfs f7,204(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// sth r8,2(r17)
	REX_STORE_U16(r17.u32 + 2, ctx.r8.u16);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8244306C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f7,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x82443118
	if (!ctx.cr6.eq) goto loc_82443118;
	// addi r11,r1,127
	ctx.r11.s64 = ctx.r1.s64 + 127;
	// stfs f23,92(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f23,84(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,143
	ctx.r8.s64 = ctx.r1.s64 + 143;
	// stfs f23,88(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f23,80(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r6,4
	ctx.r6.s64 = 4;
	// vperm128 v63,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsr v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// li r29,12
	r29.s64 = 12;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r28,r11,19600
	r28.s64 = ctx.r11.s64 + 19600;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r3
	ea = (ctx.r4.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r30,r29
	ea = (r30.u32 + r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8244325c
	goto loc_8244325C;
loc_82443118:
	// addi r10,r1,127
	ctx.r10.s64 = ctx.r1.s64 + 127;
	// lwz r18,96(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r17,1060(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,143
	ctx.r6.s64 = ctx.r1.s64 + 143;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,12
	ctx.r11.s64 = 12;
	// lvx128 v61,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,4
	ctx.r8.s64 = 4;
	// lvx128 v60,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f0,10980(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 10980);
	ctx.f0.f64 = double(temp.f32);
	// vperm128 v63,v61,v60,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r14,r11
	r14.u64 = ctx.r11.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r22,r1,143
	r22.s64 = ctx.r1.s64 + 143;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvsr v7,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,112
	r24.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,127
	r29.s64 = ctx.r1.s64 + 127;
	// lis r20,-32256
	r20.s64 = -2113929216;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// addi r19,r1,128
	r19.s64 = ctx.r1.s64 + 128;
	// addi r16,r1,160
	r16.s64 = ctx.r1.s64 + 160;
	// addi r15,r1,160
	r15.s64 = ctx.r1.s64 + 160;
	// lvsr v6,r0,r16
	temp.u32 = r16.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r16,r1,160
	r16.s64 = ctx.r1.s64 + 160;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lvsl v7,r0,r19
	temp.u32 = r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvsl v0,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r19,r1,160
	r19.s64 = ctx.r1.s64 + 160;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-8136
	r28.s64 = ctx.r11.s64 + -8136;
	// stvewx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stvewx128 v63,r30,r14
	ea = (r30.u32 + r14.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,236(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lvx128 v60,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r21,228(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f0,17180(r20)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r20.u32 + 17180);
	ctx.f0.f64 = double(temp.f32);
	// lwz r20,260(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// lvx128 v63,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v0,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r24,224(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vsubfp128 v13,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v12,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r23,256(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// vmaddfp v0,v13,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vperm128 v63,v0,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvewx128 v63,r0,r19
	ea = (r19.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r19,232(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// stvewx128 v63,r16,r8
	ea = (r16.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r16,1084(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 1084);
	// stvewx128 v63,r15,r10
	ea = (r15.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r14
	ea = (ctx.r6.u32 + r14.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
loc_8244325C:
	// addi r11,r18,-1
	ctx.r11.s64 = r18.s64 + -1;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f27,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f26,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f26.f64 = double(temp.f32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f25,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f25.f64 = double(temp.f32);
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - f26.f64));
	// lfs f11,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// frsp f24,f0
	f24.f64 = double(float(ctx.f0.f64));
	// lfs f28,3716(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	f28.f64 = double(temp.f32);
	// fsubs f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 - f25.f64));
	// beq cr6,0x824432bc
	if (ctx.cr6.eq) goto loc_824432BC;
	// fmuls f0,f12,f12
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fdivs f0,f24,f0
	ctx.f0.f64 = double(float(f24.f64 / ctx.f0.f64));
	// b 0x824432c0
	goto loc_824432C0;
loc_824432BC:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64;
loc_824432C0:
	// fmuls f31,f0,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// li r29,0
	r29.s64 = 0;
	// fmuls f30,f0,f12
	f30.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fmuls f29,f0,f11
	f29.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// beq cr6,0x824432e8
	if (ctx.cr6.eq) goto loc_824432E8;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x826a2e60
	ctx.lr = 0x824432E8;
	sub_826A2E60(ctx, base);
loc_824432E8:
	// li r11,16
	ctx.r11.s64 = 16;
	// lfs f10,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r1,536
	ctx.r7.s64 = ctx.r1.s64 + 536;
	// lfs f9,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// lfs f8,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// addi r5,r1,324
	ctx.r5.s64 = ctx.r1.s64 + 324;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r15,r1,356
	r15.s64 = ctx.r1.s64 + 356;
	// subf r3,r31,r7
	ctx.r3.u64 = ctx.r7.u64 - r31.u64;
	// subf r7,r31,r4
	ctx.r7.u64 = ctx.r4.u64 - r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// subf r30,r31,r10
	r30.u64 = ctx.r10.u64 - r31.u64;
	// subf r6,r31,r6
	ctx.r6.u64 = ctx.r6.u64 - r31.u64;
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// subf r4,r31,r15
	ctx.r4.u64 = r15.u64 - r31.u64;
loc_82443338:
	// cmplwi cr6,r18,3
	ctx.cr6.compare<uint32_t>(r18.u32, 3, ctx.xer);
	// bne cr6,0x82443358
	if (!ctx.cr6.eq) goto loc_82443358;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, f23.f64);
	// bge cr6,0x82443358
	if (!ctx.cr6.lt) goto loc_82443358;
	// rlwinm r10,r29,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// oris r29,r10,49152
	r29.u64 = ctx.r10.u64 | 3221225472;
	// b 0x824434e4
	goto loc_824434E4;
loc_82443358:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// beq cr6,0x82443394
	if (ctx.cr6.eq) goto loc_82443394;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lfs f0,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfsx f7,r30,r11
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
loc_82443394:
	// fsubs f0,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - f26.f64));
	// fsubs f7,f11,f25
	ctx.f7.f64 = double(float(ctx.f11.f64 - f25.f64));
	// fsubs f6,f13,f27
	ctx.f6.f64 = double(float(ctx.f13.f64 - f27.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fmadds f0,f7,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, ctx.f0.f64)));
	// fmadds f0,f6,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, f31.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x824433bc
	if (ctx.cr6.gt) goto loc_824433BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x824433e4
	goto loc_824433E4;
loc_824433BC:
	// fcmpu cr6,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// blt cr6,0x824433cc
	if (ctx.cr6.lt) goto loc_824433CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x824433e4
	goto loc_824433E4;
loc_824433CC:
	// fadds f0,f0,f23
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f23.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
loc_824433E4:
	// rlwinm r31,r10,30,0,1
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000;
	// rlwinm r29,r29,30,2,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// or r29,r31,r29
	r29.u64 = r31.u64 | r29.u64;
	// beq cr6,0x824434e4
	if (ctx.cr6.eq) goto loc_824434E4;
	// rlwinm r31,r10,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f7,r3,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r27,r1,112
	r27.s64 = ctx.r1.s64 + 112;
	// addi r15,r1,116
	r15.s64 = ctx.r1.s64 + 116;
	// addi r14,r1,120
	r14.s64 = ctx.r1.s64 + 120;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// lfsx f0,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f6,r31,r15
	temp.u32 = REX_LOAD_U32(r31.u32 + r15.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f13,r31,r14
	temp.u32 = REX_LOAD_U32(r31.u32 + r14.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f12,f11,f7
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// beq cr6,0x82443460
	if (ctx.cr6.eq) goto loc_82443460;
	// lfsx f11,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r23,r11
	temp.u32 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f22,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f22.f64, ctx.f11.f64)));
	// lfsx f6,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f22,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f22.f64, ctx.f7.f64)));
	// fmadds f6,f12,f22,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f6.f64)));
	// stfsx f11,r24,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r23,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r23.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r6,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
loc_82443460:
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bge cr6,0x824434e4
	if (!ctx.cr6.lt) goto loc_824434E4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82443494
	if (ctx.cr6.eq) goto loc_82443494;
	// lfsx f11,r22,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f21,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f21.f64, ctx.f11.f64)));
	// lfsx f6,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f21,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f21.f64, ctx.f7.f64)));
	// fmadds f6,f12,f21,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f21.f64, ctx.f6.f64)));
	// stfsx f11,r22,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r22.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r21,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r21.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r5,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
loc_82443494:
	// lfsx f11,r26,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// lfsx f7,r25,r11
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f0,f20,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, f20.f64, ctx.f11.f64)));
	// lfsx f6,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f7,f13,f20,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f13.f64, f20.f64, ctx.f7.f64)));
	// fmadds f6,f12,f20,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, f20.f64, ctx.f6.f64)));
	// stfsx f11,r26,r11
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r26.u32 + ctx.r11.u32, temp.u32);
	// stfsx f7,r25,r11
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r25.u32 + ctx.r11.u32, temp.u32);
	// stfsx f6,r7,r11
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x824434e4
	if (ctx.cr6.eq) goto loc_824434E4;
	// lfsx f11,r20,r11
	temp.u32 = REX_LOAD_U32(r20.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f0,f19,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, ctx.f11.f64)));
	// lfsx f7,r19,r11
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f11,r4,r11
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f13,f19,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f19.f64, ctx.f7.f64)));
	// fmadds f12,f12,f19,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f11.f64)));
	// stfsx f0,r20,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r20.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r19,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r19.u32 + ctx.r11.u32, temp.u32);
	// stfsx f12,r4,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
loc_824434E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x82443338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82443338;
	// rotlwi r11,r29,16
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 16);
	// stw r11,4(r17)
	REX_STORE_U32(r17.u32 + 4, ctx.r11.u32);
loc_824434FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cd0
	ctx.lr = 0x8244350C;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824AAB40) {
	REX_FUNC_PROLOGUE();
	// lis r11,24656
	ctx.r11.s64 = 1615855616;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824aab8c
	if (ctx.cr6.eq) goto loc_824AAB8C;
	// lis r11,24736
	ctx.r11.s64 = 1621098496;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824aab8c
	if (ctx.cr6.eq) goto loc_824AAB8C;
	// lis r11,24576
	ctx.r11.s64 = 1610612736;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824aab8c
	if (ctx.cr6.eq) goto loc_824AAB8C;
	// lis r11,29408
	ctx.r11.s64 = 1927282688;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824aab8c
	if (ctx.cr6.eq) goto loc_824AAB8C;
	// lis r11,24688
	ctx.r11.s64 = 1617952768;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824aab8c
	if (ctx.cr6.eq) goto loc_824AAB8C;
	// lis r11,24816
	ctx.r11.s64 = 1626341376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_824AAB8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824AB540) {
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
	ctx.lr = 0x824AB548;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824ab570
	if (ctx.cr6.eq) goto loc_824AB570;
loc_824AB568:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824ab790
	goto loc_824AB790;
loc_824AB570:
	// lwz r10,260(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 260);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r27,r10,12
	r27.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ab5b4
	if (ctx.cr0.eq) goto loc_824AB5B4;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824AB5B4:
	// lwz r10,108(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 108);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ab61c
	if (ctx.cr0.eq) goto loc_824AB61C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824ab61c
	if (ctx.cr6.eq) goto loc_824AB61C;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_824AB5D4:
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824ab5f0
	if (ctx.cr0.eq) goto loc_824AB5F0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824AB5F0:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824ab604
	if (ctx.cr6.eq) goto loc_824AB604;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_824AB604:
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ab614
	if (ctx.cr0.eq) goto loc_824AB614;
	// li r6,1
	ctx.r6.s64 = 1;
loc_824AB614:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x824ab5d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AB5D4;
loc_824AB61C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824ab568
	if (ctx.cr6.eq) goto loc_824AB568;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AB62C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824ab640
	if (ctx.cr0.eq) goto loc_824AB640;
	// bl 0x824773d0
	ctx.lr = 0x824AB638;
	sub_824773D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824ab644
	goto loc_824AB644;
loc_824AB640:
	// li r31,0
	r31.s64 = 0;
loc_824AB644:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824ab658
	if (!ctx.cr6.eq) goto loc_824AB658;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x824ab78c
	goto loc_824AB78C;
loc_824AB658:
	// li r11,517
	ctx.r11.s64 = 517;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b60
	ctx.lr = 0x824AB678;
	sub_82477B60(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824ab774
	if (ctx.cr0.lt) goto loc_824AB774;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x824AB68C;
	sub_82477420(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824ab774
	if (ctx.cr0.lt) goto loc_824AB774;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25328
	ctx.r4.s64 = ctx.r11.s64 + 25328;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,785
	ctx.r5.s64 = 785;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824786b8
	ctx.lr = 0x824AB6B0;
	sub_824786B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824ab6e0
	if (ctx.cr6.eq) goto loc_824AB6E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfd f1,4296(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 4296);
	// bl 0x82478758
	ctx.lr = 0x824AB6D4;
	sub_82478758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x824ab6ec
	if (!ctx.cr6.eq) goto loc_824AB6EC;
loc_824AB6E0:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x824ab774
	goto loc_824AB774;
loc_824AB6EC:
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x824AB704;
	sub_826A1E70(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 260);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x826a1e70
	ctx.lr = 0x824AB718;
	sub_826A1E70(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824ab734
	if (ctx.cr6.eq) goto loc_824AB734;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_824AB724:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bdnz 0x824ab724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AB724;
loc_824AB734:
	// lwz r11,256(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 256);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824ab75c
	if (ctx.cr6.eq) goto loc_824AB75C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130e88
	ctx.lr = 0x824AB754;
	sub_82130E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477b20
	ctx.lr = 0x824AB75C;
	sub_82477B20(ctx, base);
loc_824AB75C:
	// lwz r11,256(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 256);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r31.u32);
	// li r31,0
	r31.s64 = 0;
loc_824AB774:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824ab78c
	if (ctx.cr6.eq) goto loc_824AB78C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x824AB784;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82477b20
	ctx.lr = 0x824AB78C;
	sub_82477B20(ctx, base);
loc_824AB78C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824AB790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824BD460) {
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
	ctx.lr = 0x824BD468;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824bd4b0
	if (!ctx.cr6.gt) goto loc_824BD4B0;
	// li r29,0
	r29.s64 = 0;
loc_824BD484:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// bl 0x824605a0
	ctx.lr = 0x824BD49C;
	sub_824605A0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824bd484
	if (ctx.cr6.lt) goto loc_824BD484;
loc_824BD4B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824bd9fc
	if (!ctx.cr6.gt) goto loc_824BD9FC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// lis r28,28768
	r28.s64 = 1885339648;
	// lis r22,8240
	r22.s64 = 540016640;
	// lis r23,4208
	r23.s64 = 275775488;
	// lis r24,20528
	r24.s64 = 1345323008;
	// lis r25,29600
	r25.s64 = 1939865600;
	// lis r26,29488
	r26.s64 = 1932525568;
	// lis r27,29728
	r27.s64 = 1948254208;
	// ori r29,r11,16385
	r29.u64 = ctx.r11.u64 | 16385;
loc_824BD4E4:
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bd518
	if (ctx.cr6.eq) goto loc_824BD518;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x824bd518
	if (!ctx.cr6.eq) goto loc_824BD518;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
loc_824BD518:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bd3d0
	ctx.lr = 0x824BD520;
	sub_824BD3D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824bda00
	if (ctx.cr0.lt) goto loc_824BDA00;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bgt cr6,0x824bd7b8
	if (ctx.cr6.gt) goto loc_824BD7B8;
	// beq cr6,0x824bd77c
	if (ctx.cr6.eq) goto loc_824BD77C;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bgt cr6,0x824bd68c
	if (ctx.cr6.gt) goto loc_824BD68C;
	// beq cr6,0x824bd680
	if (ctx.cr6.eq) goto loc_824BD680;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bgt cr6,0x824bd608
	if (ctx.cr6.gt) goto loc_824BD608;
	// beq cr6,0x824bd5fc
	if (ctx.cr6.eq) goto loc_824BD5FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824bd5f0
	if (ctx.cr6.eq) goto loc_824BD5F0;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5e4
	if (ctx.cr6.eq) goto loc_824BD5E4;
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5d8
	if (ctx.cr6.eq) goto loc_824BD5D8;
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5cc
	if (ctx.cr6.eq) goto loc_824BD5CC;
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5c0
	if (ctx.cr6.eq) goto loc_824BD5C0;
	// lis r10,4176
	ctx.r10.s64 = 273678336;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5b4
	if (ctx.cr6.eq) goto loc_824BD5B4;
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bbea0
	ctx.lr = 0x824BD5B0;
	sub_824BBEA0(ctx, base);
	// b 0x824bd9e4
	goto loc_824BD9E4;
loc_824BD5B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bbb60
	ctx.lr = 0x824BD5BC;
	sub_824BBB60(ctx, base);
	// b 0x824bd9e4
	goto loc_824BD9E4;
loc_824BD5C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD5CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD5D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD5E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD5F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD5FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD608:
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8cc
	if (ctx.cr6.eq) goto loc_824BD8CC;
	// lis r10,4384
	ctx.r10.s64 = 287309824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5e4
	if (ctx.cr6.eq) goto loc_824BD5E4;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd9ec
	if (ctx.cr6.eq) goto loc_824BD9EC;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5e4
	if (ctx.cr6.eq) goto loc_824BD5E4;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd674
	if (ctx.cr6.eq) goto loc_824BD674;
	// lis r10,8208
	ctx.r10.s64 = 537919488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd668
	if (ctx.cr6.eq) goto loc_824BD668;
	// lis r10,8224
	ctx.r10.s64 = 538968064;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD668:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD674:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD680:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD68C:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bgt cr6,0x824bd734
	if (ctx.cr6.gt) goto loc_824BD734;
	// beq cr6,0x824bd728
	if (ctx.cr6.eq) goto loc_824BD728;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd71c
	if (ctx.cr6.eq) goto loc_824BD71C;
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd710
	if (ctx.cr6.eq) goto loc_824BD710;
	// lis r10,8304
	ctx.r10.s64 = 544210944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd704
	if (ctx.cr6.eq) goto loc_824BD704;
	// lis r10,8320
	ctx.r10.s64 = 545259520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd9ec
	if (ctx.cr6.eq) goto loc_824BD9EC;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd5e4
	if (ctx.cr6.eq) goto loc_824BD5E4;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd6f8
	if (ctx.cr6.eq) goto loc_824BD6F8;
	// lis r10,20496
	ctx.r10.s64 = 1343225856;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD6F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,180(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD704:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,260(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD710:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD71C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD728:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD734:
	// lis r10,28672
	ctx.r10.s64 = 1879048192;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd7ac
	if (ctx.cr6.eq) goto loc_824BD7AC;
	// lis r10,28688
	ctx.r10.s64 = 1880096768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd7a0
	if (ctx.cr6.eq) goto loc_824BD7A0;
	// lis r10,28704
	ctx.r10.s64 = 1881145344;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd794
	if (ctx.cr6.eq) goto loc_824BD794;
	// lis r10,28720
	ctx.r10.s64 = 1882193920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd788
	if (ctx.cr6.eq) goto loc_824BD788;
	// lis r10,28736
	ctx.r10.s64 = 1883242496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd788
	if (ctx.cr6.eq) goto loc_824BD788;
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
loc_824BD77C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD788:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD794:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD7A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD7AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD7B8:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bgt cr6,0x824bd8e4
	if (ctx.cr6.gt) goto loc_824BD8E4;
	// beq cr6,0x824bd8c0
	if (ctx.cr6.eq) goto loc_824BD8C0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bgt cr6,0x824bd878
	if (ctx.cr6.gt) goto loc_824BD878;
	// beq cr6,0x824bd82c
	if (ctx.cr6.eq) goto loc_824BD82C;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd77c
	if (ctx.cr6.eq) goto loc_824BD77C;
	// lis r10,28816
	ctx.r10.s64 = 1888485376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd86c
	if (ctx.cr6.eq) goto loc_824BD86C;
	// lis r10,28880
	ctx.r10.s64 = 1892679680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd860
	if (ctx.cr6.eq) goto loc_824BD860;
	// lis r10,28928
	ctx.r10.s64 = 1895825408;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd854
	if (ctx.cr6.eq) goto loc_824BD854;
	// lis r10,29440
	ctx.r10.s64 = 1929379840;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd838
	if (ctx.cr6.eq) goto loc_824BD838;
	// lis r10,29456
	ctx.r10.s64 = 1930428416;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd82c
	if (ctx.cr6.eq) goto loc_824BD82C;
	// lis r10,29472
	ctx.r10.s64 = 1931476992;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824bd83c
	goto loc_824BD83C;
loc_824BD82C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD838:
	// li r4,0
	ctx.r4.s64 = 0;
loc_824BD83C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BD850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824bd9e4
	goto loc_824BD9E4;
loc_824BD854:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824bb760
	ctx.lr = 0x824BD85C;
	sub_824BB760(ctx, base);
	// b 0x824bd9e4
	goto loc_824BD9E4;
loc_824BD860:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD86C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD878:
	// lis r10,29504
	ctx.r10.s64 = 1933574144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8d8
	if (ctx.cr6.eq) goto loc_824BD8D8;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8cc
	if (ctx.cr6.eq) goto loc_824BD8CC;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8cc
	if (ctx.cr6.eq) goto loc_824BD8CC;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8cc
	if (ctx.cr6.eq) goto loc_824BD8CC;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8cc
	if (ctx.cr6.eq) goto loc_824BD8CC;
	// lis r10,29584
	ctx.r10.s64 = 1938817024;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
loc_824BD8C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD8CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD8D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,300(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 300);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD8E4:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x824bd95c
	if (ctx.cr6.gt) goto loc_824BD95C;
	// beq cr6,0x824bd950
	if (ctx.cr6.eq) goto loc_824BD950;
	// lis r10,29616
	ctx.r10.s64 = 1940914176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8c0
	if (ctx.cr6.eq) goto loc_824BD8C0;
	// lis r10,29632
	ctx.r10.s64 = 1941962752;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd8c0
	if (ctx.cr6.eq) goto loc_824BD8C0;
	// lis r10,29648
	ctx.r10.s64 = 1943011328;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd82c
	if (ctx.cr6.eq) goto loc_824BD82C;
	// lis r10,29664
	ctx.r10.s64 = 1944059904;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd82c
	if (ctx.cr6.eq) goto loc_824BD82C;
	// lis r10,29680
	ctx.r10.s64 = 1945108480;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd82c
	if (ctx.cr6.eq) goto loc_824BD82C;
	// lis r10,29696
	ctx.r10.s64 = 1946157056;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd82c
	if (ctx.cr6.eq) goto loc_824BD82C;
	// lis r10,29712
	ctx.r10.s64 = 1947205632;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,244(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD950:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,236(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 236);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD95C:
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd9bc
	if (ctx.cr6.eq) goto loc_824BD9BC;
	// lis r10,29776
	ctx.r10.s64 = 1951399936;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd9bc
	if (ctx.cr6.eq) goto loc_824BD9BC;
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd9bc
	if (ctx.cr6.eq) goto loc_824BD9BC;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd9bc
	if (ctx.cr6.eq) goto loc_824BD9BC;
	// lis r10,29856
	ctx.r10.s64 = 1956642816;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824bd9b0
	if (ctx.cr6.eq) goto loc_824BD9B0;
	// lis r10,29872
	ctx.r10.s64 = 1957691392;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bda08
	if (!ctx.cr6.eq) goto loc_824BDA08;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD9B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// b 0x824bd9d0
	goto loc_824BD9D0;
loc_824BD9BC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824bd9e0
	if (ctx.cr0.eq) goto loc_824BD9E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
loc_824BD9D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824BD9DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824bd9e4
	goto loc_824BD9E4;
loc_824BD9E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_824BD9E4:
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// beq cr6,0x824bda08
	if (ctx.cr6.eq) goto loc_824BDA08;
loc_824BD9EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824bd4e4
	if (ctx.cr6.lt) goto loc_824BD4E4;
loc_824BD9FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824BDA00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_824BDA08:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4532
	ctx.r5.s64 = 4532;
	// addi r6,r10,13008
	ctx.r6.s64 = ctx.r10.s64 + 13008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824BDA24;
	sub_82489C30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824bda00
	goto loc_824BDA00;
}

DEFINE_REX_FUNC(sub_824D9190) {
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
	// bl 0x826a1c84
	ctx.lr = 0x824D9198;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D91AC;
	sub_824D7948(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r15,r10,21636
	r15.s64 = ctx.r10.s64 + 21636;
	// addi r16,r11,28488
	r16.s64 = ctx.r11.s64 + 28488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D91CC;
	sub_824EAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8700
	ctx.lr = 0x824D91D4;
	sub_824D8700(ctx, base);
	// lwz r10,4(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824d9324
	if (!ctx.cr6.lt) goto loc_824D9324;
	// lis r28,-32252
	r28.s64 = -2113667072;
	// lis r29,-32241
	r29.s64 = -2112946176;
	// lis r30,-32252
	r30.s64 = -2113667072;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r28,21228
	r28.s64 = r28.s64 + 21228;
	// addi r29,r29,-28324
	r29.s64 = r29.s64 + -28324;
	// addi r30,r30,21624
	r30.s64 = r30.s64 + 21624;
	// addi r20,r3,17996
	r20.s64 = ctx.r3.s64 + 17996;
	// addi r19,r4,18000
	r19.s64 = ctx.r4.s64 + 18000;
	// addi r18,r5,18004
	r18.s64 = ctx.r5.s64 + 18004;
	// addi r22,r6,-26856
	r22.s64 = ctx.r6.s64 + -26856;
	// addi r17,r7,28512
	r17.s64 = ctx.r7.s64 + 28512;
	// addi r26,r8,21584
	r26.s64 = ctx.r8.s64 + 21584;
	// addi r25,r9,21576
	r25.s64 = ctx.r9.s64 + 21576;
	// addi r24,r10,21544
	r24.s64 = ctx.r10.s64 + 21544;
	// addi r23,r11,21608
	r23.s64 = ctx.r11.s64 + 21608;
loc_824D9250:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7948
	ctx.lr = 0x824D9258;
	sub_824D7948(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824eac90
	ctx.lr = 0x824D9268;
	sub_824EAC90(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r6,r11,12,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// bl 0x824eac90
	ctx.lr = 0x824D9280;
	sub_824EAC90(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U8(r27.u32 + 0);
	// bl 0x826a0568
	ctx.lr = 0x824D9290;
	sub_826A0568(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824D92A0;
	sub_824D7B08(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824d92b4
	if (!ctx.cr0.eq) goto loc_824D92B4;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_824D92B4:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// bne 0x824d92c4
	if (!ctx.cr0.eq) goto loc_824D92C4;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_824D92C4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bne 0x824d92d4
	if (!ctx.cr0.eq) goto loc_824D92D4;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_824D92D4:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bne 0x824d92e4
	if (!ctx.cr0.eq) goto loc_824D92E4;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_824D92E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0568
	ctx.lr = 0x824D92F0;
	sub_826A0568(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d7b08
	ctx.lr = 0x824D9300;
	sub_824D7B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d86b0
	ctx.lr = 0x824D9308;
	sub_824D86B0(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824d9250
	if (ctx.cr6.lt) goto loc_824D9250;
loc_824D9324:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d79a8
	ctx.lr = 0x824D9330;
	sub_824D79A8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_824E19A8) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E2260) {
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
	ctx.lr = 0x824E2268;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// addi r8,r11,-21472
	ctx.r8.s64 = ctx.r11.s64 + -21472;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r5,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,18
	ctx.r7.s64 = 18;
	// addi r11,r11,-22224
	ctx.r11.s64 = ctx.r11.s64 + -22224;
	// stw r6,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r14,r11,20
	r14.s64 = ctx.r11.s64 + 20;
	// lis r30,-32128
	r30.s64 = -2105540608;
	// lis r29,-32243
	r29.s64 = -2113077248;
	// lis r31,-32241
	r31.s64 = -2112946176;
	// lis r3,-32241
	ctx.r3.s64 = -2112946176;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r25,r30,-21760
	r25.s64 = r30.s64 + -21760;
	// addi r23,r29,-19772
	r23.s64 = r29.s64 + -19772;
	// addi r22,r31,19072
	r22.s64 = r31.s64 + 19072;
	// addi r18,r3,19212
	r18.s64 = ctx.r3.s64 + 19212;
	// addi r21,r4,19228
	r21.s64 = ctx.r4.s64 + 19228;
	// addi r20,r5,28480
	r20.s64 = ctx.r5.s64 + 28480;
	// addi r17,r6,19324
	r17.s64 = ctx.r6.s64 + 19324;
	// addi r16,r7,19332
	r16.s64 = ctx.r7.s64 + 19332;
	// addi r27,r8,28576
	r27.s64 = ctx.r8.s64 + 28576;
	// addi r24,r9,25884
	r24.s64 = ctx.r9.s64 + 25884;
	// addi r19,r10,-26232
	r19.s64 = ctx.r10.s64 + -26232;
	// addi r15,r11,-6700
	r15.s64 = ctx.r11.s64 + -6700;
loc_824E2318:
	// lwz r7,284(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824e2330
	if (ctx.cr6.eq) goto loc_824E2330;
	// lwz r11,-4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824e2598
	if (ctx.cr6.eq) goto loc_824E2598;
loc_824E2330:
	// lbz r9,0(r14)
	ctx.r9.u64 = REX_LOAD_U8(r14.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// bgt cr6,0x824e241c
	if (ctx.cr6.gt) goto loc_824E241C;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,23440
	ctx.r12.s64 = ctx.r12.s64 + 23440;
	// lbzx r0,r12,r9
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32178
	ctx.r12.s64 = -2108817408;
	// nop 
	// addi r12,r12,9068
	ctx.r12.s64 = ctx.r12.s64 + 9068;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_824E236C;
	case 1:
		goto loc_824E2374;
	case 2:
		goto loc_824E237C;
	case 3:
		goto loc_824E2384;
	case 4:
		goto loc_824E238C;
	case 5:
		goto loc_824E2394;
	case 6:
		goto loc_824E23A0;
	case 7:
		goto loc_824E23A8;
	case 8:
		goto loc_824E23B0;
	case 9:
		goto loc_824E23B8;
	case 10:
		goto loc_824E23C0;
	case 11:
		goto loc_824E23C8;
	case 12:
		goto loc_824E23D4;
	case 13:
		goto loc_824E23E4;
	case 14:
		goto loc_824E23F0;
	case 15:
		goto loc_824E23FC;
	case 16:
		goto loc_824E2408;
	case 17:
		goto loc_824E2414;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824E236C:
	// clrlwi r31,r26,26
	r31.u64 = r26.u32 & 0x3F;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E2374:
	// rlwinm r31,r26,24,26,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 24) & 0x3F;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E237C:
	// rlwinm r31,r26,16,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E2384:
	// rlwinm r31,r26,15,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 15) & 0x1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E238C:
	// rlwinm r31,r26,14,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 14) & 0x1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E2394:
	// rlwinm r31,r26,13,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 13) & 0x1;
loc_824E2398:
	// li r29,1
	r29.s64 = 1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23A0:
	// rlwinm r31,r26,12,28,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0xF;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23A8:
	// rlwinm r31,r26,8,29,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0x7;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23B0:
	// rlwinm r31,r26,5,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0x1;
	// b 0x824e2398
	goto loc_824E2398;
loc_824E23B8:
	// rlwinm r31,r26,4,29,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0x7;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23C0:
	// rlwinm r31,r26,1,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x1;
	// b 0x824e2398
	goto loc_824E2398;
loc_824E23C8:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi r31,r11,31
	r31.u64 = ctx.r11.u32 & 0x1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23D4:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// li r29,1
	r29.s64 = 1;
	// rlwinm r31,r11,31,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23E4:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,30,30,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23F0:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,24,24,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E23FC:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,16,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E2408:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x824e241c
	goto loc_824E241C;
loc_824E2414:
	// lwz r11,316(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,14,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
loc_824E241C:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824e2430
	if (!ctx.cr6.eq) goto loc_824E2430;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824e2434
	if (ctx.cr6.eq) goto loc_824E2434;
loc_824E2430:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824E2434:
	// lwz r8,300(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824e24a0
	if (ctx.cr6.eq) goto loc_824E24A0;
	// lwz r11,-12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + -12);
loc_824E2448:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824e24a8
	if (!ctx.cr6.eq) goto loc_824E24A8;
loc_824E2450:
	// lwz r6,-8(r14)
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + -8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x824e2468
	if (ctx.cr6.eq) goto loc_824E2468;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x824e246c
	if (!ctx.cr0.eq) goto loc_824E246C;
loc_824E2468:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824E246C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x824e247c
	if (ctx.cr6.eq) goto loc_824E247C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824E247C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x824e24b4
	if (ctx.cr6.eq) goto loc_824E24B4;
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x824e24b4
	if (!ctx.cr6.eq) goto loc_824E24B4;
	// rlwinm. r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e24b0
	if (ctx.cr0.eq) goto loc_824E24B0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824e24b4
	goto loc_824E24B4;
loc_824E24A0:
	// lwz r11,-16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + -16);
	// b 0x824e2448
	goto loc_824E2448;
loc_824E24A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824e2450
	goto loc_824E2450;
loc_824E24B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824E24B4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824e2598
	if (ctx.cr0.eq) goto loc_824E2598;
	// clrlwi. r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq 0x824e24dc
	if (ctx.cr0.eq) goto loc_824E24DC;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x824e21f8
	ctx.lr = 0x824E24D8;
	sub_824E21F8(ctx, base);
	// b 0x824e24f0
	goto loc_824E24F0;
loc_824E24DC:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E24E4;
	sub_824E0480(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E24F0;
	sub_824DF9F0(ctx, base);
loc_824E24F0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,-20(r14)
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + -20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824df9f0
	ctx.lr = 0x824E2504;
	sub_824DF9F0(ctx, base);
	// lbz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U8(r14.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x824e2524
	if (!ctx.cr6.eq) goto loc_824E2524;
	// addi r11,r25,-32
	ctx.r11.s64 = r25.s64 + -32;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x824e2564
	goto loc_824E2564;
loc_824E2524:
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x824e253c
	if (!ctx.cr6.eq) goto loc_824E253C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r5,r11,r25
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// b 0x824e2564
	goto loc_824E2564;
loc_824E253C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e255c
	if (ctx.cr0.eq) goto loc_824E255C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// bne cr6,0x824e2554
	if (!ctx.cr6.eq) goto loc_824E2554;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_824E2554:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x824e2564
	goto loc_824E2564;
loc_824E255C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_824E2564:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E256C;
	sub_824DF9F0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824e2580
	if (!ctx.cr6.eq) goto loc_824E2580;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E2580;
	sub_824E0480(ctx, base);
loc_824E2580:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e0480
	ctx.lr = 0x824E258C;
	sub_824E0480(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824df9f0
	ctx.lr = 0x824E2598;
	sub_824DF9F0(ctx, base);
loc_824E2598:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r14,r14,24
	r14.s64 = r14.s64 + 24;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x824e2318
	if (!ctx.cr0.eq) goto loc_824E2318;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,324(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824FCF78) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x824fcfd4
	if (ctx.cr6.gt) goto loc_824FCFD4;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x824fcfc0
	if (!ctx.cr6.lt) goto loc_824FCFC0;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x824fcfe8
	if (ctx.cr6.lt) goto loc_824FCFE8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bge cr6,0x824fd018
	if (!ctx.cr6.lt) goto loc_824FD018;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x824fcfe8
	goto loc_824FCFE8;
loc_824FCFC0:
	// lbz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fd018
	if (ctx.cr0.eq) goto loc_824FD018;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x824fcfe8
	goto loc_824FCFE8;
loc_824FCFD4:
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x824fcfe8
	if (ctx.cr6.eq) goto loc_824FCFE8;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bne cr6,0x824fd018
	if (!ctx.cr6.eq) goto loc_824FD018;
	// li r7,1
	ctx.r7.s64 = 1;
loc_824FCFE8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x824fd034
	if (ctx.cr6.gt) goto loc_824FD034;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bge cr6,0x824fd02c
	if (!ctx.cr6.lt) goto loc_824FD02C;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// blt cr6,0x824fd070
	if (ctx.cr6.lt) goto loc_824FD070;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// blt cr6,0x824fd024
	if (ctx.cr6.lt) goto loc_824FD024;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// blt cr6,0x824fd070
	if (ctx.cr6.lt) goto loc_824FD070;
loc_824FD018:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_824FD024:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x824fd070
	goto loc_824FD070;
loc_824FD02C:
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x824fd06c
	goto loc_824FD06C;
loc_824FD034:
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// blt cr6,0x824fd018
	if (ctx.cr6.lt) goto loc_824FD018;
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// ble cr6,0x824fd060
	if (!ctx.cr6.gt) goto loc_824FD060;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x824fd070
	if (ctx.cr6.eq) goto loc_824FD070;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// ble cr6,0x824fd018
	if (!ctx.cr6.gt) goto loc_824FD018;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// bgt cr6,0x824fd018
	if (ctx.cr6.gt) goto loc_824FD018;
	// b 0x824fd070
	goto loc_824FD070;
loc_824FD060:
	// lbz r11,40(r6)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r6.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fd018
	if (ctx.cr0.eq) goto loc_824FD018;
loc_824FD06C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_824FD070:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x824fd018
	if (ctx.cr6.gt) goto loc_824FD018;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bgt cr6,0x824fd018
	if (ctx.cr6.gt) goto loc_824FD018;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fd090
	if (ctx.cr0.eq) goto loc_824FD090;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fd018
	if (ctx.cr0.eq) goto loc_824FD018;
loc_824FD090:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82503F48) {
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
	ctx.lr = 0x82503F50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r26,0
	r26.s64 = 0;
loc_82503F70:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8250408c
	if (ctx.cr6.eq) goto loc_8250408C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824f75b8
	ctx.lr = 0x82503F80;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82504084
	if (ctx.cr0.eq) goto loc_82504084;
	// lwz r30,12(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15360
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15360, ctx.xer);
	// beq cr6,0x82504084
	if (ctx.cr6.eq) goto loc_82504084;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82503fcc
	if (!ctx.cr6.eq) goto loc_82503FCC;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r10,r11,0,15,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82503fcc
	if (ctx.cr0.eq) goto loc_82503FCC;
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bne cr6,0x82503fcc
	if (!ctx.cr6.eq) goto loc_82503FCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r23)
	REX_STORE_U8(r23.u32 + 0, ctx.r11.u8);
loc_82503FCC:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82503FD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82504004
	if (ctx.cr6.eq) goto loc_82504004;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// beq cr6,0x8250400c
	if (ctx.cr6.eq) goto loc_8250400C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f75b8
	ctx.lr = 0x82503FE8;
	sub_824F75B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82503ffc
	if (ctx.cr0.eq) goto loc_82503FFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82504004
	if (ctx.cr6.eq) goto loc_82504004;
loc_82503FFC:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82503fd0
	goto loc_82503FD0;
loc_82504004:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x82504084
	if (!ctx.cr6.eq) goto loc_82504084;
loc_8250400C:
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82504010:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82504064
	if (ctx.cr6.eq) goto loc_82504064;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8250405c
	if (ctx.cr6.eq) goto loc_8250405C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8250405c
	if (ctx.cr6.eq) goto loc_8250405C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r8,r10,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8250405c
	if (ctx.cr0.eq) goto loc_8250405C;
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8250405c
	if (ctx.cr6.eq) goto loc_8250405C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r10,r11,27,5,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r11,r10,12,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7FF;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x82504070
	if (ctx.cr6.eq) goto loc_82504070;
loc_8250405C:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82504010
	goto loc_82504010;
loc_82504064:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
loc_82504070:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82504084:
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// b 0x82503f70
	goto loc_82503F70;
loc_8250408C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// subf r3,r11,r26
	ctx.r3.u64 = r26.u64 - ctx.r11.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82516D80) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x82516770
	ctx.lr = 0x82516D9C;
	sub_82516770(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82516db0
	if (!ctx.cr6.eq) goto loc_82516DB0;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82516DB0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-256
	ctx.r3.s64 = ctx.r11.s64 + -256;
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

DEFINE_REX_FUNC(sub_8251E4B0) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm. r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// blt 0x8251e4f0
	if (ctx.cr0.lt) goto loc_8251E4F0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8251E4D0:
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// andc r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8251e4f8
	if (!ctx.cr6.eq) goto loc_8251E4F8;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x8251e4d0
	if (!ctx.cr0.lt) goto loc_8251E4D0;
loc_8251E4F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8251E4F8:
	// cntlzd r8,r8
	ctx.r8.u64 = ctx.r8.u64 == 0 ? 64 : __builtin_clzll(ctx.r8.u64);
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// subfic r11,r8,63
	ctx.xer.ca = ctx.r8.u32 <= 63;
	ctx.r11.u64 = static_cast<uint64_t>(63) - ctx.r8.u64;
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srd r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r8.u8 & 0x7F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8251FE00) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bgt cr6,0x8251fe28
	if (ctx.cr6.gt) goto loc_8251FE28;
	// li r30,10
	r30.s64 = 10;
loc_8251FE28:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7d10
	ctx.lr = 0x8251FE38;
	sub_824F7D10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
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
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_82524978) {
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
	ctx.lr = 0x82524980;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,74
	ctx.r6.s64 = 74;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825249A8;
	sub_825BB860(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// beq cr6,0x825249cc
	if (ctx.cr6.eq) goto loc_825249CC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825249C8;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825249CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825249D4;
	sub_8250AD28(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// beq cr6,0x825249f8
	if (ctx.cr6.eq) goto loc_825249F8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825249F4;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825249F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82524A00;
	sub_8250AD28(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82524a40
	if (ctx.cr6.eq) goto loc_82524A40;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r30,-36
	ctx.r10.s64 = r30.s64 + -36;
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
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82524A40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8252EBC0) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252ec4c
	if (!ctx.cr0.eq) goto loc_8252EC4C;
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252ec4c
	if (!ctx.cr0.eq) goto loc_8252EC4C;
	// rlwinm r31,r11,25,25,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// blt cr6,0x8252ebfc
	if (ctx.cr6.lt) goto loc_8252EBFC;
	// cmplwi cr6,r31,102
	ctx.cr6.compare<uint32_t>(r31.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8252ec00
	if (!ctx.cr6.gt) goto loc_8252EC00;
loc_8252EBFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252EC00:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252ec4c
	if (ctx.cr0.eq) goto loc_8252EC4C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824f7708
	ctx.lr = 0x8252EC10;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252ec4c
	if (!ctx.cr0.eq) goto loc_8252EC4C;
	// cmplwi cr6,r31,96
	ctx.cr6.compare<uint32_t>(r31.u32, 96, ctx.xer);
	// beq cr6,0x8252ec4c
	if (ctx.cr6.eq) goto loc_8252EC4C;
	// cmplwi cr6,r31,97
	ctx.cr6.compare<uint32_t>(r31.u32, 97, ctx.xer);
	// beq cr6,0x8252ec3c
	if (ctx.cr6.eq) goto loc_8252EC3C;
	// cmplwi cr6,r31,99
	ctx.cr6.compare<uint32_t>(r31.u32, 99, ctx.xer);
	// beq cr6,0x8252ec3c
	if (ctx.cr6.eq) goto loc_8252EC3C;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(r31.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8252ec40
	if (!ctx.cr6.eq) goto loc_8252EC40;
loc_8252EC3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252EC40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8252ec50
	if (ctx.cr0.eq) goto loc_8252EC50;
loc_8252EC4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252EC50:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_82533760) {
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
	ctx.lr = 0x82533768;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// stw r4,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// li r22,0
	r22.s64 = 0;
	// stw r5,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stb r8,415(r1)
	REX_STORE_U8(ctx.r1.u32 + 415, ctx.r8.u8);
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r22,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r22.u32);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// bl 0x826a2e60
	ctx.lr = 0x825337B8;
	sub_826A2E60(ctx, base);
	// clrlwi. r16,r30,24
	r16.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// mr r24,r22
	r24.u64 = r22.u64;
	// bne 0x82533810
	if (!ctx.cr0.eq) goto loc_82533810;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252e9b0
	ctx.lr = 0x825337DC;
	sub_8252E9B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825337ec
	if (!ctx.cr0.eq) goto loc_825337EC;
loc_825337E4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82534554
	goto loc_82534554;
loc_825337EC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252e9b0
	ctx.lr = 0x82533800;
	sub_8252E9B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825337e4
	if (ctx.cr0.eq) goto loc_825337E4;
	// li r24,1
	r24.s64 = 1;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
loc_82533810:
	// mulli r10,r24,20
	ctx.r10.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(20));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r21,r23,44
	r21.s64 = r23.s64 + 44;
	// mr r17,r22
	r17.u64 = r22.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// subf r18,r23,r20
	r18.u64 = r20.u64 - r23.u64;
loc_82533830:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825339cc
	if (!ctx.cr6.lt) goto loc_825339CC;
	// lwzx r29,r18,r27
	r29.u64 = REX_LOAD_U32(r18.u32 + r27.u32);
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r30,12(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r28,12(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x8253386c
	if (ctx.cr6.eq) goto loc_8253386C;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// bne cr6,0x82533870
	if (!ctx.cr6.eq) goto loc_82533870;
loc_8253386C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82533870:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825339c0
	if (!ctx.cr0.eq) goto loc_825339C0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r9,125
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 125, ctx.xer);
	// beq cr6,0x82533894
	if (ctx.cr6.eq) goto loc_82533894;
	// cmplwi cr6,r9,124
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 124, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// bne cr6,0x82533898
	if (!ctx.cr6.eq) goto loc_82533898;
loc_82533894:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82533898:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825339c0
	if (!ctx.cr0.eq) goto loc_825339C0;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x825339c0
	if (ctx.cr6.eq) goto loc_825339C0;
	// cmplwi cr6,r9,120
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 120, ctx.xer);
	// beq cr6,0x825339c0
	if (ctx.cr6.eq) goto loc_825339C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addi r25,r25,20
	r25.s64 = r25.s64 + 20;
	// bne 0x82533974
	if (!ctx.cr0.eq) goto loc_82533974;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r22.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r22,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r22.u32);
	// bl 0x825321e0
	ctx.lr = 0x825338F4;
	sub_825321E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// beq 0x82533948
	if (ctx.cr0.eq) goto loc_82533948;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82533904:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8252e9b0
	ctx.lr = 0x82533910;
	sub_8252E9B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825337e4
	if (ctx.cr0.eq) goto loc_825337E4;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r8,11,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x3;
	// rlwinm r9,r11,29,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x825337e4
	if (ctx.cr6.gt) goto loc_825337E4;
	// rlwinm r10,r8,14,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x18;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r10,r11,0,29,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7) | (ctx.r10.u64 & 0x38);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// b 0x825339c0
	goto loc_825339C0;
loc_82533948:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825321e0
	ctx.lr = 0x82533960;
	sub_825321E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533974
	if (ctx.cr0.eq) goto loc_82533974;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// b 0x82533904
	goto loc_82533904;
loc_82533974:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252e9b0
	ctx.lr = 0x82533988;
	sub_8252E9B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825337e4
	if (ctx.cr0.eq) goto loc_825337E4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// beq cr6,0x825339c0
	if (ctx.cr6.eq) goto loc_825339C0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252e9b0
	ctx.lr = 0x825339AC;
	sub_8252E9B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825337e4
	if (ctx.cr0.eq) goto loc_825337E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r26
	ctx.r11.u64 = r26.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r26.u8 & 0x3F));
	// or r17,r11,r17
	r17.u64 = ctx.r11.u64 | r17.u64;
loc_825339C0:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// b 0x82533830
	goto loc_82533830;
loc_825339CC:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82533b00
	if (ctx.cr6.eq) goto loc_82533B00;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
loc_825339DC:
	// addi r26,r11,1
	r26.s64 = ctx.r11.s64 + 1;
loc_825339E0:
	// mulli r10,r26,20
	ctx.r10.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(20));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r27,r26
	r27.u64 = r26.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825339F0:
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(r27.u32, r24.u32, ctx.xer);
	// bge cr6,0x82533af0
	if (!ctx.cr6.lt) goto loc_82533AF0;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533a5c
	if (ctx.cr0.eq) goto loc_82533A5C;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// clrlwi r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
loc_82533A14:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82533a44
	if (ctx.cr6.eq) goto loc_82533A44;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82533A28:
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82533a68
	if (ctx.cr6.eq) goto loc_82533A68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82533a28
	if (ctx.cr6.lt) goto loc_82533A28;
loc_82533A44:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533a14
	if (ctx.cr6.lt) goto loc_82533A14;
loc_82533A5C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// b 0x825339f0
	goto loc_825339F0;
loc_82533A68:
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82533A70:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8252dde0
	ctx.lr = 0x82533A84;
	sub_8252DDE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825337e4
	if (ctx.cr0.eq) goto loc_825337E4;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533a70
	if (ctx.cr6.lt) goto loc_82533A70;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r9,r10,29,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7;
	// rlwinm r8,r11,29,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bgt cr6,0x825337e4
	if (ctx.cr6.gt) goto loc_825337E4;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r9,r27,r24
	ctx.r9.u64 = r24.u64 - r27.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r9,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(20));
	// rlwimi r8,r11,0,29,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7) | (ctx.r8.u64 & 0x38);
	// addi r5,r10,-20
	ctx.r5.s64 = ctx.r10.s64 + -20;
	// stw r8,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r8.u32);
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82533AE4;
	sub_8269CC20(ctx, base);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x825339e0
	goto loc_825339E0;
loc_82533AF0:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(r26.u32, r24.u32, ctx.xer);
	// blt cr6,0x825339dc
	if (ctx.cr6.lt) goto loc_825339DC;
loc_82533B00:
	// mr r19,r22
	r19.u64 = r22.u64;
loc_82533B04:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82533ce4
	if (!ctx.cr6.lt) goto loc_82533CE4;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r11,r18,r21
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + r21.u32);
	// slw r10,r10,r19
	ctx.r10.u64 = r19.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r19.u8 & 0x3F));
	// and. r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 & r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82533cc8
	if (ctx.cr0.eq) goto loc_82533CC8;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// lwz r22,12(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r20,12(r10)
	r20.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bne cr6,0x82533b74
	if (!ctx.cr6.eq) goto loc_82533B74;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82533b74
	if (ctx.cr0.eq) goto loc_82533B74;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_82533B50:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// beq cr6,0x825337e4
	if (ctx.cr6.eq) goto loc_825337E4;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// beq cr6,0x825337e4
	if (ctx.cr6.eq) goto loc_825337E4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82533b50
	if (ctx.cr6.lt) goto loc_82533B50;
loc_82533B74:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82533cc8
	if (!ctx.cr6.gt) goto loc_82533CC8;
	// li r24,5
	r24.s64 = 5;
	// addi r25,r1,148
	r25.s64 = ctx.r1.s64 + 148;
loc_82533B8C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533cb0
	if (ctx.cr0.eq) goto loc_82533CB0;
loc_82533B9C:
	// add r11,r27,r24
	ctx.r11.u64 = r27.u64 + r24.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r10
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// beq cr6,0x82533bbc
	if (ctx.cr6.eq) goto loc_82533BBC;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(r26.u32, r20.u32, ctx.xer);
	// bne cr6,0x82533c0c
	if (!ctx.cr6.eq) goto loc_82533C0C;
loc_82533BBC:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533c0c
	if (ctx.cr0.eq) goto loc_82533C0C;
loc_82533BCC:
	// add r11,r27,r24
	ctx.r11.u64 = r27.u64 + r24.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwzx r26,r11,r10
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825c3328
	ctx.lr = 0x82533BF0;
	sub_825C3328(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825337e4
	if (ctx.cr0.eq) goto loc_825337E4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533bcc
	if (ctx.cr6.lt) goto loc_82533BCC;
loc_82533C0C:
	// li r31,1
	r31.s64 = 1;
	// li r28,5
	r28.s64 = 5;
	// addi r29,r1,148
	r29.s64 = ctx.r1.s64 + 148;
loc_82533C18:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(r31.u32, r23.u32, ctx.xer);
	// beq cr6,0x82533c84
	if (ctx.cr6.eq) goto loc_82533C84;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533c84
	if (ctx.cr0.eq) goto loc_82533C84;
loc_82533C30:
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x825c4ba0
	ctx.lr = 0x82533C4C;
	sub_825C4BA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82533c6c
	if (!ctx.cr0.eq) goto loc_82533C6C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533c30
	if (ctx.cr6.lt) goto loc_82533C30;
	// b 0x82533c84
	goto loc_82533C84;
loc_82533C6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// rlwinm r11,r11,6,22,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3C0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
loc_82533C84:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,5
	r28.s64 = r28.s64 + 5;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533c18
	if (ctx.cr6.lt) goto loc_82533C18;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533b9c
	if (ctx.cr6.lt) goto loc_82533B9C;
loc_82533CB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,5
	r24.s64 = r24.s64 + 5;
	// addi r25,r25,20
	r25.s64 = r25.s64 + 20;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533b8c
	if (ctx.cr6.lt) goto loc_82533B8C;
loc_82533CC8:
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lwz r20,380(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// lwz r23,388(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// li r22,0
	r22.s64 = 0;
	// b 0x82533b04
	goto loc_82533B04;
loc_82533CE4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82533e7c
	if (ctx.cr6.eq) goto loc_82533E7C;
	// addi r28,r1,128
	r28.s64 = ctx.r1.s64 + 128;
loc_82533CF0:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r24,r28,-16
	r24.s64 = r28.s64 + -16;
	// li r23,0
	r23.s64 = 0;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r10,r10,29,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x825337e4
	if (ctx.cr6.gt) goto loc_825337E4;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533e08
	if (ctx.cr6.eq) goto loc_82533E08;
	// mr r26,r24
	r26.u64 = r24.u64;
loc_82533D20:
	// lwz r27,0(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533d34
	if (ctx.cr0.eq) goto loc_82533D34;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
loc_82533D34:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_82533D38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533d78
	if (ctx.cr6.eq) goto loc_82533D78;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533d68
	if (ctx.cr6.eq) goto loc_82533D68;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82533d68
	if (!ctx.cr6.eq) goto loc_82533D68;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82533d70
	if (!ctx.cr0.eq) goto loc_82533D70;
loc_82533D68:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82533d38
	goto loc_82533D38;
loc_82533D70:
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x82533d7c
	goto loc_82533D7C;
loc_82533D78:
	// li r29,0
	r29.s64 = 0;
loc_82533D7C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82533de0
	if (ctx.cr6.eq) goto loc_82533DE0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533de0
	if (ctx.cr0.eq) goto loc_82533DE0;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82533D98:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x82533dc8
	if (ctx.cr6.eq) goto loc_82533DC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// beq cr6,0x82533dc8
	if (ctx.cr6.eq) goto loc_82533DC8;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c4ba0
	ctx.lr = 0x82533DC0;
	sub_825C4BA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825337e4
	if (!ctx.cr0.eq) goto loc_825337E4;
loc_82533DC8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533d98
	if (ctx.cr6.lt) goto loc_82533D98;
loc_82533DE0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533d20
	if (ctx.cr6.lt) goto loc_82533D20;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82533e08
	if (ctx.cr6.eq) goto loc_82533E08;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825337e4
	if (!ctx.cr6.eq) goto loc_825337E4;
loc_82533E08:
	// lwz r11,16(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 16);
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
loc_82533E10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533e5c
	if (ctx.cr6.eq) goto loc_82533E5C;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// slw r8,r8,r22
	ctx.r8.u64 = r22.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r22.u8 & 0x3F));
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrlwi. r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825337e4
	if (!ctx.cr0.eq) goto loc_825337E4;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x82533e10
	goto loc_82533E10;
loc_82533E5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533cf0
	if (ctx.cr6.lt) goto loc_82533CF0;
	// lwz r23,388(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rotlwi r24,r11,0
	r24.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r22,0
	r22.s64 = 0;
loc_82533E7C:
	// mr r19,r22
	r19.u64 = r22.u64;
	// mr r20,r22
	r20.u64 = r22.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8253452c
	if (ctx.cr6.eq) goto loc_8253452C;
loc_82533E8C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mulli r10,r20,20
	ctx.r10.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(20));
	// add r21,r10,r11
	r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// clrlwi. r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82534520
	if (ctx.cr0.eq) goto loc_82534520;
	// lwz r31,0(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82533EC0:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// beq cr6,0x82533ef8
	if (ctx.cr6.eq) goto loc_82533EF8;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82533ee8
	if (ctx.cr6.lt) goto loc_82533EE8;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82533eec
	if (!ctx.cr6.gt) goto loc_82533EEC;
loc_82533EE8:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82533EEC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82533ef8
	if (!ctx.cr0.eq) goto loc_82533EF8;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82533EF8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x82533f04
	if (ctx.cr6.eq) goto loc_82533F04;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82533F04:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82533F08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533f40
	if (ctx.cr6.eq) goto loc_82533F40;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533f38
	if (ctx.cr6.eq) goto loc_82533F38;
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r30,r30,0,18,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r30,14080
	ctx.cr6.compare<uint32_t>(r30.u32, 14080, ctx.xer);
	// bne cr6,0x82533f38
	if (!ctx.cr6.eq) goto loc_82533F38;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r30,r30,0,4,6
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82533f44
	if (!ctx.cr0.eq) goto loc_82533F44;
loc_82533F38:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82533f08
	goto loc_82533F08;
loc_82533F40:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82533F44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533f70
	if (ctx.cr6.eq) goto loc_82533F70;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82533f5c
	if (!ctx.cr6.eq) goto loc_82533F5C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x82533f6c
	goto loc_82533F6C;
loc_82533F5C:
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_82533F6C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82533F70:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82533ec0
	if (ctx.cr6.lt) goto loc_82533EC0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82534520
	if (ctx.cr6.eq) goto loc_82534520;
	// lbz r11,415(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 415);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82533fac
	if (ctx.cr0.eq) goto loc_82533FAC;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82534520
	if (ctx.cr6.eq) goto loc_82534520;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82534520
	if (!ctx.cr6.eq) goto loc_82534520;
	// add r19,r3,r19
	r19.u64 = ctx.r3.u64 + r19.u64;
	// b 0x82534520
	goto loc_82534520;
loc_82533FAC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82533fbc
	if (ctx.cr6.eq) goto loc_82533FBC;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82534520
	if (ctx.cr6.eq) goto loc_82534520;
loc_82533FBC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x82533ffc
	if (!ctx.cr6.eq) goto loc_82533FFC;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82533FCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,380(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82533fe4
	if (ctx.cr6.eq) goto loc_82533FE4;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, ctx.xer);
	// bne cr6,0x82533ff4
	if (!ctx.cr6.eq) goto loc_82533FF4;
loc_82533FE4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82533fcc
	if (ctx.cr6.lt) goto loc_82533FCC;
loc_82533FF4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82534520
	if (ctx.cr6.eq) goto loc_82534520;
loc_82533FFC:
	// lwz r31,380(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x825bb9c8
	ctx.lr = 0x82534010;
	sub_825BB9C8(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// li r23,0
	r23.s64 = 0;
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
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 16);
	// clrlwi. r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// beq 0x825342c8
	if (ctx.cr0.eq) goto loc_825342C8;
	// mr r22,r21
	r22.u64 = r21.u64;
loc_82534064:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8253406C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825340ac
	if (ctx.cr6.eq) goto loc_825340AC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253409c
	if (ctx.cr6.eq) goto loc_8253409C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8253409c
	if (!ctx.cr6.eq) goto loc_8253409C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825340a4
	if (!ctx.cr0.eq) goto loc_825340A4;
loc_8253409C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8253406c
	goto loc_8253406C;
loc_825340A4:
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// b 0x825340b0
	goto loc_825340B0;
loc_825340AC:
	// li r25,0
	r25.s64 = 0;
loc_825340B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825342b0
	if (ctx.cr6.eq) goto loc_825342B0;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(r25.u32, r30.u32, ctx.xer);
	// beq cr6,0x825342b0
	if (ctx.cr6.eq) goto loc_825342B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c4a48
	ctx.lr = 0x825340D8;
	sub_825C4A48(ctx, base);
	// addi r11,r24,10
	ctx.r11.s64 = r24.s64 + 10;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// addi r28,r25,44
	r28.s64 = r25.s64 + 44;
loc_825340F4:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82534164
	if (!ctx.cr6.lt) goto loc_82534164;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r9,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534154
	if (ctx.cr0.eq) goto loc_82534154;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82534138;
	sub_8250AD28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r24,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r24.u32 << (r31.u8 & 0x3F));
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// andc r11,r26,r11
	ctx.r11.u64 = r26.u64 & ~ctx.r11.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82534154:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x825340f4
	goto loc_825340F4;
loc_82534164:
	// addi r8,r25,4
	ctx.r8.s64 = r25.s64 + 4;
loc_82534168:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534218
	if (ctx.cr6.eq) goto loc_82534218;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82534204
	if (ctx.cr6.eq) goto loc_82534204;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82534198
	goto loc_82534198;
loc_82534190:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82534198:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82534190
	if (!ctx.cr6.eq) goto loc_82534190;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// beq 0x82534204
	if (ctx.cr0.eq) goto loc_82534204;
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r26,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r26,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r6.u8 & 0x3F));
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
loc_82534204:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82534168
	if (!ctx.cr6.eq) goto loc_82534168;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82534168
	goto loc_82534168;
loc_82534218:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253429c
	if (ctx.cr0.eq) goto loc_8253429C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253429c
	if (!ctx.cr0.eq) goto loc_8253429C;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x82534240;
	sub_82516448(ctx, base);
	// sth r3,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82534278
	if (!ctx.cr0.eq) goto loc_82534278;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534278
	if (ctx.cr0.eq) goto loc_82534278;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82534284
	if (!ctx.cr6.gt) goto loc_82534284;
loc_82534278:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82534280;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82534284:
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
loc_8253429C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 652);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x825342B0;
	sub_825C2288(ctx, base);
loc_825342B0:
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82534064
	if (ctx.cr6.lt) goto loc_82534064;
loc_825342C8:
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82534438
	if (!ctx.cr6.lt) goto loc_82534438;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82534438
	if (ctx.cr6.eq) goto loc_82534438;
	// mr r27,r21
	r27.u64 = r21.u64;
loc_825342E0:
	// lwz r28,0(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
loc_825342E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534320
	if (ctx.cr6.eq) goto loc_82534320;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82534318
	if (ctx.cr6.eq) goto loc_82534318;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82534318
	if (!ctx.cr6.eq) goto loc_82534318;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82534324
	if (!ctx.cr0.eq) goto loc_82534324;
loc_82534318:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825342e8
	goto loc_825342E8;
loc_82534320:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82534324:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82534420
	if (!ctx.cr6.eq) goto loc_82534420;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c4b00
	ctx.lr = 0x82534340;
	sub_825C4B00(ctx, base);
	// addi r11,r24,10
	ctx.r11.s64 = r24.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r31,r11,31,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_82534354:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8253439c
	if (ctx.cr6.eq) goto loc_8253439C;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r5,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82534378;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82534384;
	sub_8250AD28(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// b 0x82534354
	goto loc_82534354;
loc_8253439C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534420
	if (ctx.cr0.eq) goto loc_82534420;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82534420
	if (!ctx.cr0.eq) goto loc_82534420;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x825343C4;
	sub_82516448(ctx, base);
	// sth r3,18(r30)
	REX_STORE_U16(r30.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825343fc
	if (!ctx.cr0.eq) goto loc_825343FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825343fc
	if (ctx.cr0.eq) goto loc_825343FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82534408
	if (!ctx.cr6.gt) goto loc_82534408;
loc_825343FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x82534404;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82534408:
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
loc_82534420:
	// lwz r11,16(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 16);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825342e0
	if (ctx.cr6.lt) goto loc_825342E0;
loc_82534438:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82548eb8
	ctx.lr = 0x82534444;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// beq 0x82534508
	if (ctx.cr0.eq) goto loc_82534508;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
loc_82534460:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82534508
	if (!ctx.cr6.lt) goto loc_82534508;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825344fc
	if (!ctx.cr0.eq) goto loc_825344FC;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x82534494;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825344d8
	if (!ctx.cr0.eq) goto loc_825344D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825344d8
	if (ctx.cr0.eq) goto loc_825344D8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825344e4
	if (!ctx.cr6.gt) goto loc_825344E4;
loc_825344D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x825344E0;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825344E4:
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
loc_825344FC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// b 0x82534460
	goto loc_82534460;
loc_82534508:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825335b8
	ctx.lr = 0x82534514;
	sub_825335B8(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r23,388(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// li r22,0
	r22.s64 = 0;
loc_82534520:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplw cr6,r20,r24
	ctx.cr6.compare<uint32_t>(r20.u32, r24.u32, ctx.xer);
	// blt cr6,0x82533e8c
	if (ctx.cr6.lt) goto loc_82533E8C;
loc_8253452C:
	// lbz r11,415(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 415);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82534550
	if (!ctx.cr0.eq) goto loc_82534550;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,380(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c4a48
	ctx.lr = 0x82534550;
	sub_825C4A48(ctx, base);
loc_82534550:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_82534554:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825B87F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bgt cr6,0x825b887c
	if (ctx.cr6.gt) goto loc_825B887C;
	// beq cr6,0x825b8870
	if (ctx.cr6.eq) goto loc_825B8870;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// beq cr6,0x825b8864
	if (ctx.cr6.eq) goto loc_825B8864;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// beq cr6,0x825b885c
	if (ctx.cr6.eq) goto loc_825B885C;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// beq cr6,0x825b8844
	if (ctx.cr6.eq) goto loc_825B8844;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x825b8894
	if (!ctx.cr6.eq) goto loc_825B8894;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8250a620
	sub_8250A620(ctx, base);
	return;
loc_825B8844:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,10,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x8250a620
	sub_8250A620(ctx, base);
	return;
loc_825B885C:
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x825b88dc
	goto loc_825B88DC;
loc_825B8864:
	// li r10,11
	ctx.r10.s64 = 11;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x825b88e0
	goto loc_825B88E0;
loc_825B8870:
	// li r10,15
	ctx.r10.s64 = 15;
	// rlwimi r11,r10,9,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x825b88e0
	goto loc_825B88E0;
loc_825B887C:
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x825b88d8
	if (ctx.cr6.eq) goto loc_825B88D8;
	// cmplwi cr6,r10,61
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61, ctx.xer);
	// beq cr6,0x825b88c0
	if (ctx.cr6.eq) goto loc_825B88C0;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x825b88a8
	if (ctx.cr6.eq) goto loc_825B88A8;
loc_825B8894:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x824e4368
	sub_824E4368(ctx, base);
	return;
loc_825B88A8:
	// li r10,61
	ctx.r10.s64 = 61;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x8250a620
	sub_8250A620(ctx, base);
	return;
loc_825B88C0:
	// li r10,31
	ctx.r10.s64 = 31;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x8250a620
	sub_8250A620(ctx, base);
	return;
loc_825B88D8:
	// li r10,59
	ctx.r10.s64 = 59;
loc_825B88DC:
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
loc_825B88E0:
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825BDF00) {
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
	ctx.lr = 0x825BDF08;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825bdf3c
	if (ctx.cr6.eq) goto loc_825BDF3C;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_825BDF30:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x825bdf30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825BDF30;
loc_825BDF3C:
	// li r10,7
	ctx.r10.s64 = 7;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,7
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(7));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825be048
	if (ctx.cr6.eq) goto loc_825BE048;
	// clrlwi r25,r24,24
	r25.u64 = r24.u32 & 0xFF;
loc_825BDF6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// bne cr6,0x825bdfd0
	if (!ctx.cr6.eq) goto loc_825BDFD0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bdfa0
	if (ctx.cr0.eq) goto loc_825BDFA0;
	// lwz r11,540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 540);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r31,540(r30)
	REX_STORE_U32(r30.u32 + 540, r31.u32);
	// b 0x825be03c
	goto loc_825BE03C;
loc_825BDFA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825BDFB8;
	sub_824F71B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,35
	ctx.r6.s64 = 35;
	// bl 0x824f7a20
	ctx.lr = 0x825BDFCC;
	sub_824F7A20(ctx, base);
	// b 0x825be03c
	goto loc_825BE03C;
loc_825BDFD0:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825bdff0
	if (ctx.cr0.eq) goto loc_825BDFF0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825be038
	if (!ctx.cr6.eq) goto loc_825BE038;
loc_825BDFF0:
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// blt cr6,0x825be038
	if (ctx.cr6.lt) goto loc_825BE038;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825be030
	if (ctx.cr6.eq) goto loc_825BE030;
	// addi r10,r26,-4
	ctx.r10.s64 = r26.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
loc_825BE014:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// and r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 & ctx.r7.u64;
	// bdnz 0x825be014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825BE014;
loc_825BE030:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825be078
	if (!ctx.cr0.eq) goto loc_825BE078;
loc_825BE038:
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
loc_825BE03C:
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825bdf6c
	if (!ctx.cr6.eq) goto loc_825BDF6C;
loc_825BE048:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bd9c0
	ctx.lr = 0x825BE05C;
	sub_825BD9C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r11.u32);
	// b 0x825be07c
	goto loc_825BE07C;
loc_825BE078:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BE07C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825CB440) {
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
	// bl 0x826a1cac
	ctx.lr = 0x825CB448;
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
	// beq cr6,0x825cb47c
	if (ctx.cr6.eq) goto loc_825CB47C;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825CB478;
	sub_82408848(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825CB47C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cb498
	if (ctx.cr6.eq) goto loc_825CB498;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825CB494;
	sub_825C7448(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825CB498:
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
	// lfs f31,3716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3716);
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
	// bne 0x825cb500
	if (!ctx.cr0.eq) goto loc_825CB500;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x825cb508
	goto loc_825CB508;
loc_825CB500:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_825CB508:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cb560
	if (ctx.cr6.eq) goto loc_825CB560;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lfs f12,16224(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16232(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16228(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
loc_825CB530:
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
	// blt cr6,0x825cb530
	if (ctx.cr6.lt) goto loc_825CB530;
loc_825CB560:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825cb578
	if (ctx.cr6.eq) goto loc_825CB578;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409a88
	ctx.lr = 0x825CB578;
	sub_82409A88(ctx, base);
loc_825CB578:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825cb780
	if (!ctx.cr6.gt) goto loc_825CB780;
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lfd f8,20216(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 20216);
	// lfs f9,15196(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15196);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20208(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,17280(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,20328(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 20328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,20204(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20204);
	ctx.f7.f64 = double(temp.f32);
loc_825CB5D8:
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
	// beq cr6,0x825cb700
	if (ctx.cr6.eq) goto loc_825CB700;
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
loc_825CB700:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x825cb710
	if (ctx.cr6.lt) goto loc_825CB710;
	// li r11,255
	ctx.r11.s64 = 255;
loc_825CB710:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cb728
	if (!ctx.cr6.gt) goto loc_825CB728;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x825cb72c
	if (ctx.cr6.lt) goto loc_825CB72C;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x825cb72c
	goto loc_825CB72C;
loc_825CB728:
	// li r5,0
	ctx.r5.s64 = 0;
loc_825CB72C:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x825cb73c
	if (ctx.cr6.lt) goto loc_825CB73C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_825CB73C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825cb754
	if (!ctx.cr6.gt) goto loc_825CB754;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x825cb758
	if (ctx.cr6.lt) goto loc_825CB758;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x825cb758
	goto loc_825CB758;
loc_825CB754:
	// li r6,0
	ctx.r6.s64 = 0;
loc_825CB758:
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
	// blt cr6,0x825cb5d8
	if (ctx.cr6.lt) goto loc_825CB5D8;
loc_825CB780:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825DA550) {
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
	ctx.lr = 0x825DA558;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825da67c
	if (!ctx.cr6.eq) goto loc_825DA67C;
	// lwz r3,168(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x825fd0a0
	ctx.lr = 0x825DA574;
	sub_825FD0A0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,9792
	r28.s64 = ctx.r10.s64 + 9792;
	// beq cr6,0x825da5a8
	if (ctx.cr6.eq) goto loc_825DA5A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,10276
	ctx.r5.s64 = ctx.r11.s64 + 10276;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,2604
	ctx.r7.s64 = 2604;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA5A8;
	sub_824EA978(ctx, base);
loc_825DA5A8:
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_825DA5C4:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x825da5d4
	if (!ctx.cr6.gt) goto loc_825DA5D4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x825da5e0
	goto loc_825DA5E0;
loc_825DA5D4:
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_825DA5E0:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825da5f8
	if (ctx.cr0.eq) goto loc_825DA5F8;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x825da5c4
	goto loc_825DA5C4;
loc_825DA5F8:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825f9ad0
	ctx.lr = 0x825DA604;
	sub_825F9AD0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f4,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x825faab8
	ctx.lr = 0x825DA638;
	sub_825FAAB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d82d0
	ctx.lr = 0x825DA644;
	sub_825D82D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825fcb18
	ctx.lr = 0x825DA650;
	sub_825FCB18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825f9b60
	ctx.lr = 0x825DA658;
	sub_825F9B60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825da67c
	if (!ctx.cr0.eq) goto loc_825DA67C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,10184
	ctx.r5.s64 = ctx.r11.s64 + 10184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,2616
	ctx.r7.s64 = 2616;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825DA67C;
	sub_824EA978(ctx, base);
loc_825DA67C:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x825da6ac
	goto loc_825DA6AC;
loc_825DA68C:
	// lwz r9,228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825da6a4
	if (ctx.cr0.eq) goto loc_825DA6A4;
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x825da6b8
	if (ctx.cr6.eq) goto loc_825DA6B8;
loc_825DA6A4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_825DA6AC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x825da68c
	if (!ctx.cr6.eq) goto loc_825DA68C;
	// b 0x825da6bc
	goto loc_825DA6BC;
loc_825DA6B8:
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
loc_825DA6BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825E6A68) {
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
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825e6a94
	if (!ctx.cr6.eq) goto loc_825E6A94;
	// lfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82609eb8
	ctx.lr = 0x825E6A90;
	sub_82609EB8(ctx, base);
	// b 0x825e6ab8
	goto loc_825E6AB8;
loc_825E6A94:
	// lha r11,116(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 116));
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r10,r10,-29256
	ctx.r10.s64 = ctx.r10.s64 + -29256;
	// lha r6,118(r1)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 118));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r4,r8,13752
	ctx.r4.s64 = ctx.r8.s64 + 13752;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x826a0568
	ctx.lr = 0x825E6AB8;
	sub_826A0568(ctx, base);
loc_825E6AB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EAAF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825EAAF8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAB1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eabd4
	if (ctx.cr0.eq) goto loc_825EABD4;
	// lwz r11,236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825eab38
	if (ctx.cr6.eq) goto loc_825EAB38;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x825eab3c
	goto loc_825EAB3C;
loc_825EAB38:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
loc_825EAB3C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mulli r9,r11,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r11,r10,-17760
	ctx.r11.s64 = ctx.r10.s64 + -17760;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// lbzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825eab64
	if (ctx.cr0.eq) goto loc_825EAB64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x825eab68
	if (!ctx.cr6.gt) goto loc_825EAB68;
loc_825EAB64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EAB68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825eabd4
	if (ctx.cr0.eq) goto loc_825EABD4;
	// li r31,0
	r31.s64 = 0;
loc_825EAB74:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EAB90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x825eabc0
	if (ctx.cr0.lt) goto loc_825EABC0;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x825eabc0
	if (ctx.cr6.gt) goto loc_825EABC0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EABB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x825eabd4
	if (ctx.cr6.eq) goto loc_825EABD4;
loc_825EABC0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x825eab74
	if (ctx.cr6.lt) goto loc_825EAB74;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825eabd8
	goto loc_825EABD8;
loc_825EABD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825EABD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F3818) {
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
	ctx.lr = 0x825F3820;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r9,1873(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1873);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,18176
	r28.s64 = ctx.r10.s64 + 18176;
	// beq 0x825f386c
	if (ctx.cr0.eq) goto loc_825F386C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,18348
	ctx.r5.s64 = ctx.r11.s64 + 18348;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,482
	ctx.r7.s64 = 482;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F386C;
	sub_824EA978(ctx, base);
loc_825F386C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r31,912
	ctx.r11.s64 = r31.s64 + 912;
loc_825F3874:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825f38b8
	if (ctx.cr6.eq) goto loc_825F38B8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x825f3874
	if (ctx.cr6.lt) goto loc_825F3874;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,19324
	ctx.r5.s64 = ctx.r11.s64 + 19324;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,499
	ctx.r7.s64 = 499;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825F38AC;
	sub_824EA978(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_825F38B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_825F38B8:
	// addi r11,r3,244
	ctx.r11.s64 = ctx.r3.s64 + 244;
	// addi r10,r3,260
	ctx.r10.s64 = ctx.r3.s64 + 260;
	// addi r9,r3,228
	ctx.r9.s64 = ctx.r3.s64 + 228;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,33
	ctx.cr6.compare<int32_t>(r30.s32, 33, ctx.xer);
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// stwx r27,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, r27.u32);
	// stwx r26,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r26.u32);
	// beq cr6,0x825f38b0
	if (ctx.cr6.eq) goto loc_825F38B0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r3,69
	ctx.r9.s64 = ctx.r3.s64 + 69;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825F38F8:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r10,r31
	REX_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r8.u32);
	// bdnz 0x825f38f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F38F8;
	// b 0x825f38b0
	goto loc_825F38B0;
}

DEFINE_REX_FUNC(sub_825F73F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_825F7718) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825F7720;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825f774c
	if (!ctx.cr6.gt) goto loc_825F774C;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x825f774c
	goto loc_825F774C;
loc_825F7744:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825F774C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f7744
	if (!ctx.cr6.lt) goto loc_825F7744;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825b33a0
	ctx.lr = 0x825F7768;
	sub_825B33A0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x825F777C;
	sub_826A1E70(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x825b3528
	ctx.lr = 0x825F7788;
	sub_825B3528(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825F97B8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x825f7fb8
	ctx.lr = 0x825F97D8;
	sub_825F7FB8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28816
	ctx.r11.s64 = ctx.r11.s64 + 28816;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1424);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,1424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1424(r30)
	REX_STORE_U32(r30.u32 + 1424, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_825FAA08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825FAA10;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 952);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r11,1393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825faa50
	if (ctx.cr0.eq) goto loc_825FAA50;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,30240
	ctx.r6.s64 = ctx.r11.s64 + 30240;
	// addi r5,r10,13968
	ctx.r5.s64 = ctx.r10.s64 + 13968;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,184
	ctx.r7.s64 = 184;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FAA50;
	sub_824EA978(ctx, base);
loc_825FAA50:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x825f9f38
	ctx.lr = 0x825FAA64;
	sub_825F9F38(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825faab0
	if (!ctx.cr6.gt) goto loc_825FAAB0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825faab0
	if (!ctx.cr6.eq) goto loc_825FAAB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FAA9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x825faab0
	if (!ctx.cr6.gt) goto loc_825FAAB0;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
loc_825FAAB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825FD008) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_825FD01C:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x825fd02c
	if (!ctx.cr6.gt) goto loc_825FD02C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x825fd038
	goto loc_825FD038;
loc_825FD02C:
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r3,r6,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
loc_825FD038:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825fd058
	if (ctx.cr0.eq) goto loc_825FD058;
	// lwz r9,128(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x825fd01c
	goto loc_825FD01C;
loc_825FD058:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82607770) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607778;
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
	ctx.lr = 0x82607798;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x826077bc
	if (ctx.cr0.eq) goto loc_826077BC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f9550
	ctx.lr = 0x826077B8;
	sub_825F9550(ctx, base);
	// b 0x826077c0
	goto loc_826077C0;
loc_826077BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826077C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82609408) {
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
	ctx.lr = 0x82609410;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// li r5,380
	ctx.r5.s64 = 380;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x826a2e60
	ctx.lr = 0x82609438;
	sub_826A2E60(ctx, base);
	// mulli r11,r29,12
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x826a1e70
	ctx.lr = 0x8260944C;
	sub_826A1E70(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r26,1456(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 1456);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825b33a0
	ctx.lr = 0x8260945C;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// beq 0x82609480
	if (ctx.cr0.eq) goto loc_82609480;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x82609484
	goto loc_82609484;
loc_82609480:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82609484:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// addic. r29,r29,1
	ctx.xer.ca = r29.u32 > 4294967294;
	r29.s64 = r29.s64 + 1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ble 0x82609508
	if (!ctx.cr0.gt) goto loc_82609508;
loc_826094B8:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826094d4
	if (!ctx.cr6.eq) goto loc_826094D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_826094D4:
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82609110
	ctx.lr = 0x826094E8;
	sub_82609110(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826092f8
	ctx.lr = 0x826094FC;
	sub_826092F8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// blt cr6,0x826094b8
	if (ctx.cr6.lt) goto loc_826094B8;
loc_82609508:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8260E310) {
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
	ctx.lr = 0x8260E318;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r24,r3,4
	r24.s64 = ctx.r3.s64 + 4;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260E348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r25,0
	r25.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// bl 0x8260de10
	ctx.lr = 0x8260E35C;
	sub_8260DE10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x8260e398
	if (ctx.cr6.eq) goto loc_8260E398;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(r29.u32, 8, ctx.xer);
	// bgt cr6,0x8260e398
	if (ctx.cr6.gt) goto loc_8260E398;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82615088
	ctx.lr = 0x8260E378;
	sub_82615088(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8260e398
	if (!ctx.cr6.eq) goto loc_8260E398;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mulli r11,r11,240
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(240));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r28,r11,-1880
	r28.s64 = ctx.r11.s64 + -1880;
	// b 0x8260e46c
	goto loc_8260E46C;
loc_8260E398:
	// lwz r10,15424(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15424);
	// b 0x8260e3e0
	goto loc_8260E3E0;
loc_8260E3A0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8260e3b8
	if (ctx.cr6.eq) goto loc_8260E3B8;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8260e3bc
	goto loc_8260E3BC;
loc_8260E3B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8260E3BC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bne cr6,0x8260e3e0
	if (!ctx.cr6.eq) goto loc_8260E3E0;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// bne cr6,0x8260e3e0
	if (!ctx.cr6.eq) goto loc_8260E3E0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// beq cr6,0x8260e3ec
	if (ctx.cr6.eq) goto loc_8260E3EC;
loc_8260E3E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8260e3a0
	if (!ctx.cr6.eq) goto loc_8260E3A0;
	// b 0x8260e3f4
	goto loc_8260E3F4;
loc_8260E3EC:
	// addic. r28,r11,12
	ctx.xer.ca = ctx.r11.u32 > 4294967283;
	r28.s64 = ctx.r11.s64 + 12;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8260e474
	if (!ctx.cr0.eq) goto loc_8260E474;
loc_8260E3F4:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// li r4,252
	ctx.r4.s64 = 252;
	// bl 0x8260b5b8
	ctx.lr = 0x8260E410;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8260e430
	if (ctx.cr0.eq) goto loc_8260E430;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x8260d048
	ctx.lr = 0x8260E42C;
	sub_8260D048(ctx, base);
	// b 0x8260e434
	goto loc_8260E434;
loc_8260E430:
	// li r31,0
	r31.s64 = 0;
loc_8260E434:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8260e4c4
	if (ctx.cr6.eq) goto loc_8260E4C4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,15400
	ctx.r3.s64 = r30.s64 + 15400;
	// bl 0x8260dfa0
	ctx.lr = 0x8260E448;
	sub_8260DFA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260e458
	if (ctx.cr0.eq) goto loc_8260E458;
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// b 0x8260e46c
	goto loc_8260E46C;
loc_8260E458:
	// addi r11,r31,12
	ctx.r11.s64 = r31.s64 + 12;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x8260c698
	ctx.lr = 0x8260E464;
	sub_8260C698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8260E46C;
	sub_8264C3D0(ctx, base);
loc_8260E46C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8260e4c4
	if (ctx.cr6.eq) goto loc_8260E4C4;
loc_8260E474:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8260e49c
	if (!ctx.cr6.eq) goto loc_8260E49C;
	// bl 0x8260df18
	ctx.lr = 0x8260E494;
	sub_8260DF18(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x8260e4c4
	goto loc_8260E4C4;
loc_8260E49C:
	// bl 0x8260e138
	ctx.lr = 0x8260E4A0;
	sub_8260E138(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x8260e4c4
	if (ctx.cr0.eq) goto loc_8260E4C4;
loc_8260E4A8:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8260e4a8
	if (!ctx.cr0.eq) goto loc_8260E4A8;
loc_8260E4C4:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260E4D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82617C58) {
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
	ctx.lr = 0x82617C60;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,64(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82617dc0
	if (ctx.cr6.lt) goto loc_82617DC0;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lwz r7,56(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f31,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f31.f64 = double(temp.f32);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x82617d78
	if (!ctx.cr6.eq) goto loc_82617D78;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x82617d14
	if (ctx.cr6.eq) goto loc_82617D14;
	// lwz r7,72(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82617D10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82617d20
	goto loc_82617D20;
loc_82617D14:
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823ef2f8
	ctx.lr = 0x82617D20;
	sub_823EF2F8(ctx, base);
loc_82617D20:
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82617dd4
	if (ctx.cr6.eq) goto loc_82617DD4;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82617D4C;
	sub_826A1E70(ctx, base);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82617D74;
	sub_826A1E70(ctx, base);
	// b 0x82617dd4
	goto loc_82617DD4;
loc_82617D78:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82617D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82617dd4
	if (!ctx.cr6.eq) goto loc_82617DD4;
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82617dd4
	if (!ctx.cr6.eq) goto loc_82617DD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r10.u32);
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x82617dd4
	goto loc_82617DD4;
loc_82617DC0:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x826a2e60
	ctx.lr = 0x82617DD4;
	sub_826A2E60(ctx, base);
loc_82617DD4:
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826277A8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826275b0
	sub_826275B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82627D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82627D50;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82627d88
	if (!ctx.cr6.eq) goto loc_82627D88;
	// lwz r3,148(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 148);
	// bl 0x82642a98
	ctx.lr = 0x82627D84;
	sub_82642A98(ctx, base);
	// b 0x82627dec
	goto loc_82627DEC;
loc_82627D88:
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
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8260b5b8
	ctx.lr = 0x82627DA4;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82627db8
	if (!ctx.cr0.eq) goto loc_82627DB8;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82627dec
	goto loc_82627DEC;
loc_82627DB8:
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82628898
	ctx.lr = 0x82627DDC;
	sub_82628898(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82627dec
	if (!ctx.cr0.lt) goto loc_82627DEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627DEC;
	sub_8264C3D0(ctx, base);
loc_82627DEC:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627E00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8262DB88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
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
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bne cr6,0x8262dca8
	if (!ctx.cr6.eq) goto loc_8262DCA8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8262DBF4:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8262dc6c
	if (ctx.cr6.eq) goto loc_8262DC6C;
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f13,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f5.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f4,f0,f12,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f3.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f2,f0,f11,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f7,f0,f10,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f6.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f5,f0,f9,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f4.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f3,f0,f8,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262dc9c
	goto loc_8262DC9C;
loc_8262DC6C:
	// fmuls f7,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262DC9C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8262dbf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262DBF4;
	// blr 
	return;
loc_8262DCA8:
	// lfs f7,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f6,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8262DCEC:
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// dcbt r10,r8
	// dcbt r11,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8262dd64
	if (ctx.cr6.eq) goto loc_8262DD64;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f10,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f0,f0,f8,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f1.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262dd94
	goto loc_8262DD94;
loc_8262DD64:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262DD94:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f13,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// bdnz 0x8262dcec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262DCEC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82641AC0) {
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
	ctx.lr = 0x82641AC8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x8260b5b8
	ctx.lr = 0x82641AF8;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82641b38
	if (ctx.cr0.eq) goto loc_82641B38;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-15996
	ctx.r10.s64 = ctx.r10.s64 + -15996;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x82641b3c
	goto loc_82641B3C;
loc_82641B38:
	// li r31,0
	r31.s64 = 0;
loc_82641B3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82641b50
	if (!ctx.cr6.eq) goto loc_82641B50;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82641b84
	goto loc_82641B84;
loc_82641B50:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826418a8
	ctx.lr = 0x82641B64;
	sub_826418A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82641b74
	if (ctx.cr0.lt) goto loc_82641B74;
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// b 0x82641b84
	goto loc_82641B84;
loc_82641B74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82641840
	ctx.lr = 0x82641B7C;
	sub_82641840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82641B84;
	sub_8264C3D0(ctx, base);
loc_82641B84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82643218) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82643220;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826432c4
	if (ctx.cr6.eq) goto loc_826432C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82643270
	if (ctx.cr0.eq) goto loc_82643270;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82643270
	if (!ctx.cr6.eq) goto loc_82643270;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x826432c4
	goto loc_826432C4;
loc_82643270:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r10,0,3,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// beq cr6,0x8264329c
	if (ctx.cr6.eq) goto loc_8264329C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8264329C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8264329C:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826432b4
	if (ctx.cr6.eq) goto loc_826432B4;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r28.u32);
	// b 0x826432b8
	goto loc_826432B8;
loc_826432B4:
	// bl 0x8264c3d0
	ctx.lr = 0x826432B8;
	sub_8264C3D0(ctx, base);
loc_826432B8:
	// stw r28,184(r31)
	REX_STORE_U32(r31.u32 + 184, r28.u32);
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// stw r28,192(r31)
	REX_STORE_U32(r31.u32 + 192, r28.u32);
loc_826432C4:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82643330
	if (ctx.cr6.eq) goto loc_82643330;
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
loc_826432D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82642cf8
	ctx.lr = 0x826432DC;
	sub_82642CF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r11,0,3,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// beq cr6,0x82643308
	if (ctx.cr6.eq) goto loc_82643308;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643308:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264331c
	if (ctx.cr6.eq) goto loc_8264331C;
	// stw r28,36(r30)
	REX_STORE_U32(r30.u32 + 36, r28.u32);
	// b 0x82643324
	goto loc_82643324;
loc_8264331C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82643324;
	sub_8264C3D0(ctx, base);
loc_82643324:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826432d4
	if (!ctx.cr6.eq) goto loc_826432D4;
loc_82643330:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82643358
	if (!ctx.cr6.eq) goto loc_82643358;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82643358
	if (ctx.cr6.eq) goto loc_82643358;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82643358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264CD88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8264CD90;
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
	// bl 0x82793824
	ctx.lr = 0x8264CDAC;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	ctx.r11.s64 = 537526272;
	// ori r11,r11,12800
	ctx.r11.u64 = ctx.r11.u64 | 12800;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8264cdfc
	if (ctx.cr6.lt) goto loc_8264CDFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,12264
	ctx.r3.s64 = ctx.r11.s64 + 12264;
	// bl 0x82794274
	ctx.lr = 0x8264CDCC;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264cdfc
	if (ctx.cr0.lt) goto loc_8264CDFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x82793bf4
	ctx.lr = 0x8264CDE4;
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
	// b 0x8264ce00
	goto loc_8264CE00;
loc_8264CDFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8264CE00:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8264ce28
	if (ctx.cr6.eq) goto loc_8264CE28;
	// lis r6,8235
	ctx.r6.s64 = 539688960;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r6,r6,39936
	ctx.r6.u64 = ctx.r6.u64 | 39936;
	// bctrl 
	ctx.lr = 0x8264CE24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8264ce2c
	goto loc_8264CE2C;
loc_8264CE28:
	// bl 0x82794044
	ctx.lr = 0x8264CE2C;
	__imp__NetDll_WSAStartup(ctx, base);
loc_8264CE2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8264EA98) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lhz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 40);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8264eac4
	if (ctx.cr6.lt) goto loc_8264EAC4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8264eae0
	goto loc_8264EAE0;
loc_8264EAC4:
	// lhz r9,42(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 42);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8264EADC;
	sub_826A1E70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8264EAE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264F890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8264f8b4
	if (!ctx.cr6.lt) goto loc_8264F8B4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_8264F8B4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8264f908
	if (ctx.cr6.eq) goto loc_8264F908;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
loc_8264F8D0:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264f8f0
	if (ctx.cr6.eq) goto loc_8264F8F0;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r8,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r11,r8,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x8264f8f4
	goto loc_8264F8F4;
loc_8264F8F0:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_8264F8F4:
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bdnz 0x8264f8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264F8D0;
loc_8264F908:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82652980) {
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
	ctx.lr = 0x82652988;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// lwz r10,240(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 240);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// rlwinm r27,r10,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r25,r3,240
	r25.s64 = ctx.r3.s64 + 240;
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r3,260
	ctx.r3.s64 = 260;
	// lwz r28,236(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 236);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// addi r24,r11,68
	r24.s64 = ctx.r11.s64 + 68;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x8265d838
	ctx.lr = 0x826529D8;
	sub_8265D838(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x826529ec
	if (!ctx.cr0.eq) goto loc_826529EC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82652bb0
	goto loc_82652BB0;
loc_826529EC:
	// lwz r10,740(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 740);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82652a00
	if (ctx.cr0.eq) goto loc_82652A00;
	// ori r11,r26,1
	ctx.r11.u64 = r26.u64 | 1;
loc_82652A00:
	// rlwinm. r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82652a0c
	if (ctx.cr0.eq) goto loc_82652A0C;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_82652A0C:
	// rlwinm. r9,r10,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82652a1c
	if (ctx.cr0.eq) goto loc_82652A1C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82652a28
	goto loc_82652A28;
loc_82652A1C:
	// rlwinm. r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82652a28
	if (ctx.cr0.eq) goto loc_82652A28;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82652A28:
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82652a34
	if (ctx.cr0.eq) goto loc_82652A34;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82652A34:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,380
	ctx.r9.s64 = r31.s64 + 380;
loc_82652A3C:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82652a5c
	if (!ctx.cr6.eq) goto loc_82652A5C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82652a3c
	if (ctx.cr6.lt) goto loc_82652A3C;
	// b 0x82652a78
	goto loc_82652A78;
loc_82652A5C:
	// addi r10,r10,95
	ctx.r10.s64 = ctx.r10.s64 + 95;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r10,396(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82652a78
	if (ctx.cr0.eq) goto loc_82652A78;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_82652A78:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// ld r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 40);
	// addi r26,r31,228
	r26.s64 = r31.s64 + 228;
	// std r9,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r9.u64);
	// stw r22,16(r30)
	REX_STORE_U32(r30.u32 + 16, r22.u32);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 228);
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// lwz r9,524(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 524);
	// sth r9,28(r30)
	REX_STORE_U16(r30.u32 + 28, ctx.r9.u16);
	// sth r11,30(r30)
	REX_STORE_U16(r30.u32 + 30, ctx.r11.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stb r11,32(r30)
	REX_STORE_U8(r30.u32 + 32, ctx.r11.u8);
	// lbz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 168);
	// stb r11,33(r30)
	REX_STORE_U8(r30.u32 + 33, ctx.r11.u8);
	// lbz r11,169(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 169);
	// stb r11,34(r30)
	REX_STORE_U8(r30.u32 + 34, ctx.r11.u8);
	// lbz r11,170(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 170);
	// stb r11,35(r30)
	REX_STORE_U8(r30.u32 + 35, ctx.r11.u8);
	// lbz r11,171(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 171);
	// stb r11,36(r30)
	REX_STORE_U8(r30.u32 + 36, ctx.r11.u8);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r10,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82652b00
	if (ctx.cr6.eq) goto loc_82652B00;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8265ed30
	ctx.lr = 0x82652AFC;
	sub_8265ED30(ctx, base);
	// b 0x82652b10
	goto loc_82652B10;
loc_82652B00:
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82652B10;
	sub_826A2E60(ctx, base);
loc_82652B10:
	// addi r6,r30,37
	ctx.r6.s64 = r30.s64 + 37;
	// stw r23,8(r29)
	REX_STORE_U32(r29.u32 + 8, r23.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,20(r29)
	REX_STORE_U32(r29.u32 + 20, r28.u32);
	// stw r6,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r6.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8265d140
	ctx.lr = 0x82652B3C;
	sub_8265D140(ctx, base);
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// stw r27,28(r29)
	REX_STORE_U32(r29.u32 + 28, r27.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8265c7c0
	ctx.lr = 0x82652B5C;
	sub_8265C7C0(ctx, base);
	// lwz r5,524(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 524);
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82652B6C;
	sub_826A1E70(ctx, base);
	// lwz r11,524(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 524);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8265de48
	ctx.lr = 0x82652B80;
	sub_8265DE48(ctx, base);
	// stw r30,0(r21)
	REX_STORE_U32(r21.u32 + 0, r30.u32);
	// stw r24,0(r20)
	REX_STORE_U32(r20.u32 + 0, r24.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// cmplwi cr6,r28,1147
	ctx.cr6.compare<uint32_t>(r28.u32, 1147, ctx.xer);
	// bgt cr6,0x82652ba8
	if (ctx.cr6.gt) goto loc_82652BA8;
	// subfic r10,r28,1147
	ctx.xer.ca = r28.u32 <= 1147;
	ctx.r10.u64 = static_cast<uint64_t>(1147) - r28.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, ctx.xer);
	// blt cr6,0x82652ba8
	if (ctx.cr6.lt) goto loc_82652BA8;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82652BA8:
	// stw r11,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82652BB0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8265FD40) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FD60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265fd90
	if (ctx.cr0.eq) goto loc_8265FD90;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265fd84
	if (ctx.cr6.eq) goto loc_8265FD84;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8265fd94
	if (!ctx.cr6.gt) goto loc_8265FD94;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8265fd94
	goto loc_8265FD94;
loc_8265FD84:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,997
	ctx.r3.u64 = ctx.r3.u64 | 997;
	// b 0x8265fd94
	goto loc_8265FD94;
loc_8265FD90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265FD94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82661F98) {
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
	ctx.lr = 0x82661FA0;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,72(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82675d00
	ctx.lr = 0x82661FEC;
	sub_82675D00(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826621cc
	if (ctx.cr6.eq) goto loc_826621CC;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82661FFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,72(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82675d00
	ctx.lr = 0x82662038;
	sub_82675D00(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826621b4
	if (ctx.cr0.eq) goto loc_826621B4;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r7,48
	ctx.r7.s64 = 48;
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,204(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r3,208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,224(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r31,232(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r25,236(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r24,240(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r5,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// stw r9,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stw r25,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// stw r24,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r24.u32);
	// beq 0x826620b4
	if (ctx.cr0.eq) goto loc_826620B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
loc_826620B4:
	// lwz r10,228(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826620c8
	if (ctx.cr0.eq) goto loc_826620C8;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
loc_826620C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82661a30
	ctx.lr = 0x826620D8;
	sub_82661A30(ctx, base);
	// b 0x826621b0
	goto loc_826621B0;
loc_826620DC:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826620f0
	if (ctx.cr0.eq) goto loc_826620F0;
	// rlwinm r31,r11,0,29,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x8266210c
	goto loc_8266210C;
loc_826620F0:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82662104
	if (ctx.cr0.eq) goto loc_82662104;
	// rlwinm r31,r11,0,28,26
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8266210c
	goto loc_8266210C;
loc_82662104:
	// rlwinm r31,r11,0,27,25
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8266210C:
	// stw r31,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r31.u32);
	// lis r9,-32646
	ctx.r9.s64 = -2139488256;
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,60
	ctx.r7.s64 = 60;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// ori r9,r9,4114
	ctx.r9.u64 = ctx.r9.u64 | 4114;
	// lwz r6,200(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// li r25,6
	r25.s64 = 6;
	// lwz r24,204(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r23,208(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r7,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r8,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r6,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stw r24,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r24.u32);
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82662168;
	sub_826A1E70(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// clrlwi. r9,r31,31
	ctx.r9.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r30.u32);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// beq 0x82662190
	if (ctx.cr0.eq) goto loc_82662190;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_82662190:
	// rlwinm. r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826621a0
	if (ctx.cr0.eq) goto loc_826621A0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
loc_826621A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82661b30
	ctx.lr = 0x826621B0;
	sub_82661B30(ctx, base);
loc_826621B0:
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
loc_826621B4:
	// rlwinm. r10,r11,0,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x38;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826620dc
	if (!ctx.cr0.eq) goto loc_826620DC;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82661ffc
	if (ctx.cr6.lt) goto loc_82661FFC;
loc_826621CC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82671908) {
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
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267195c
	if (ctx.cr6.eq) goto loc_8267195C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267195c
	if (ctx.cr0.eq) goto loc_8267195C;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-12
	ctx.r3.s64 = ctx.r11.s64 + -12;
loc_82671938:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82671938
	if (!ctx.cr0.eq) goto loc_82671938;
	// bl 0x82672140
	ctx.lr = 0x82671958;
	sub_82672140(ctx, base);
	// b 0x82671960
	goto loc_82671960;
loc_8267195C:
	// li r31,0
	r31.s64 = 0;
loc_82671960:
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

DEFINE_REX_FUNC(sub_82673978) {
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
	ctx.lr = 0x82673980;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,20(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// li r21,0
	r21.s64 = 0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subf r9,r11,r28
	ctx.r9.u64 = r28.u64 - ctx.r11.u64;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r22,r21
	r22.u64 = r21.u64;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r24,r21
	r24.u64 = r21.u64;
	// rlwinm r23,r9,27,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq 0x826739e0
	if (ctx.cr0.eq) goto loc_826739E0;
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826739e0
	if (!ctx.cr6.eq) goto loc_826739E0;
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r21,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, r21.u32);
	// b 0x82673c18
	goto loc_82673C18;
loc_826739E0:
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// addi r30,r31,61
	r30.s64 = r31.s64 + 61;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// lbz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 60);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82673a2c
	if (!ctx.cr6.eq) goto loc_82673A2C;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// b 0x82673a30
	goto loc_82673A30;
loc_82673A2C:
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82673A30:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r20,100(r31)
	r20.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 60);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// bl 0x82676750
	ctx.lr = 0x82673A60;
	sub_82676750(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82673a74
	if (!ctx.cr0.eq) goto loc_82673A74;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x82673c1c
	goto loc_82673C1C;
loc_82673A74:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82673b18
	if (ctx.cr6.eq) goto loc_82673B18;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r11,r30
	r22.u64 = ctx.r11.u64 + r30.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// bne cr6,0x82673aec
	if (!ctx.cr6.eq) goto loc_82673AEC;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// beq cr6,0x82673ad8
	if (ctx.cr6.eq) goto loc_82673AD8;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
loc_82673AD8:
	// stw r25,0(r22)
	REX_STORE_U32(r22.u32 + 0, r25.u32);
	// addi r24,r22,4
	r24.s64 = r22.s64 + 4;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82673AEC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// lbz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 60);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r6,56(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 56);
	// addi r5,r30,61
	ctx.r5.s64 = r30.s64 + 61;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673B18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82673B18:
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// beq cr6,0x82673b2c
	if (ctx.cr6.eq) goto loc_82673B2C;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(r27.s32, 3, ctx.xer);
	// bne cr6,0x82673b3c
	if (!ctx.cr6.eq) goto loc_82673B3C;
loc_82673B2C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// stw r21,52(r31)
	REX_STORE_U32(r31.u32 + 52, r21.u32);
	// b 0x82673b48
	goto loc_82673B48;
loc_82673B3C:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,116(r29)
	REX_STORE_U32(r29.u32 + 116, ctx.r11.u32);
loc_82673B48:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82673b48
	if (!ctx.cr0.eq) goto loc_82673B48;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82673BA4:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r7,0,r31
	ea = r31.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82673ba4
	if (!ctx.cr0.eq) goto loc_82673BA4;
	// lis r11,4626
	ctx.r11.s64 = 303169536;
	// ori r11,r11,4626
	ctx.r11.u64 = ctx.r11.u64 | 4626;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82673c28
	if (ctx.cr6.eq) goto loc_82673C28;
	// stw r9,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r9.u32);
loc_82673BD4:
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82673c0c
	if (ctx.cr6.eq) goto loc_82673C0C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bge cr6,0x82673c08
	if (!ctx.cr6.lt) goto loc_82673C08;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673C04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82673C08:
	// stw r26,120(r30)
	REX_STORE_U32(r30.u32 + 120, r26.u32);
loc_82673C0C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672c40
	ctx.lr = 0x82673C18;
	sub_82672C40(ctx, base);
loc_82673C18:
	// mr r28,r21
	r28.u64 = r21.u64;
loc_82673C1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce8
	return;
loc_82673C28:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82673bd4
	if (!ctx.cr6.eq) goto loc_82673BD4;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82673c7c
	if (ctx.cr6.eq) goto loc_82673C7C;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r9,r29,28
	ctx.r9.s64 = r29.s64 + 28;
	// b 0x82673c6c
	goto loc_82673C6C;
loc_82673C50:
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82673c68
	if (!ctx.cr6.eq) goto loc_82673C68;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82673c68
	if (!ctx.cr0.eq) goto loc_82673C68;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82673C68:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82673C6C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82673c7c
	if (ctx.cr6.eq) goto loc_82673C7C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82673c50
	if (!ctx.cr0.eq) goto loc_82673C50;
loc_82673C7C:
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82673ca0
	if (!ctx.cr6.eq) goto loc_82673CA0;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// bne 0x82673ca0
	if (!ctx.cr0.eq) goto loc_82673CA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
loc_82673CA0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672e28
	ctx.lr = 0x82673CAC;
	sub_82672E28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672ce8
	ctx.lr = 0x82673CBC;
	sub_82672CE8(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82673cd4
	if (!ctx.cr6.eq) goto loc_82673CD4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672e90
	ctx.lr = 0x82673CCC;
	sub_82672E90(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x82673d5c
	if (!ctx.cr0.eq) goto loc_82673D5C;
loc_82673CD4:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82673d10
	if (!ctx.cr6.lt) goto loc_82673D10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82673cf0
	if (ctx.cr6.lt) goto loc_82673CF0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82673d10
	if (!ctx.cr6.eq) goto loc_82673D10;
loc_82673CF0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq cr6,0x82673d04
	if (ctx.cr6.eq) goto loc_82673D04;
	// lis r11,13364
	ctx.r11.s64 = 875823104;
	// ori r11,r11,13364
	ctx.r11.u64 = ctx.r11.u64 | 13364;
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
loc_82673D04:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672e90
	ctx.lr = 0x82673D0C;
	sub_82672E90(ctx, base);
	// b 0x82673d54
	goto loc_82673D54;
loc_82673D10:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r11.u32);
loc_82673D18:
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
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
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
	// bne 0x82673d18
	if (!ctx.cr0.eq) goto loc_82673D18;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82673D54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82673D54:
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82673c0c
	if (ctx.cr0.eq) goto loc_82673C0C;
loc_82673D5C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672e28
	ctx.lr = 0x82673D68;
	sub_82672E28(ctx, base);
loc_82673D68:
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// bne 0x82673d68
	if (!ctx.cr0.eq) goto loc_82673D68;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x82673d9c
	if (!ctx.cr6.eq) goto loc_82673D9C;
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// stw r21,0(r22)
	REX_STORE_U32(r22.u32 + 0, r21.u32);
loc_82673D9C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672c40
	ctx.lr = 0x82673DA8;
	sub_82672C40(ctx, base);
	// b 0x82673c1c
	goto loc_82673C1C;
}

DEFINE_REX_FUNC(sub_8268CB98) {
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
	ctx.lr = 0x8268CBA0;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8268CBC8;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r21,0
	r21.s64 = 0;
	// bne 0x8268cbe0
	if (!ctx.cr0.eq) goto loc_8268CBE0;
loc_8268CBD4:
	// lis r24,-32761
	r24.s64 = -2147024896;
	// ori r24,r24,14
	r24.u64 = r24.u64 | 14;
	// b 0x8268cf00
	goto loc_8268CF00;
loc_8268CBE0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,156(r31)
	REX_STORE_U32(r31.u32 + 156, r22.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r21,80(r31)
	REX_STORE_U32(r31.u32 + 80, r21.u32);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lbz r9,210(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 210);
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r8,r11,23380
	ctx.r8.s64 = ctx.r11.s64 + 23380;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,9000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 9000);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// bl 0x82794184
	ctx.lr = 0x8268CC4C;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x8268cc60
	if (ctx.cr6.eq) goto loc_8268CC60;
	// lis r24,-32768
	r24.s64 = -2147483648;
	// ori r24,r24,16389
	r24.u64 = r24.u64 | 16389;
	// b 0x8268cf00
	goto loc_8268CF00;
loc_8268CC60:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x823f02b8
	ctx.lr = 0x8268CC70;
	sub_823F02B8(ctx, base);
	// stw r3,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268cbd4
	if (ctx.cr0.eq) goto loc_8268CBD4;
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x8268f0e8
	ctx.lr = 0x8268CC98;
	sub_8268F0E8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8268cf00
	if (ctx.cr0.lt) goto loc_8268CF00;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r31,64
	ctx.r9.s64 = r31.s64 + 64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8268CCB0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r10,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r10.u32);
	// stw r21,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r21.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8268cce4
	if (ctx.cr6.eq) goto loc_8268CCE4;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8268cce8
	goto loc_8268CCE8;
loc_8268CCE4:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_8268CCE8:
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x8268ccb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8268CCB0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823ef5f0
	ctx.lr = 0x8268CD04;
	sub_823EF5F0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823ef5f0
	ctx.lr = 0x8268CD14;
	sub_823EF5F0(ctx, base);
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8268cda8
	if (ctx.cr6.eq) goto loc_8268CDA8;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
loc_8268CD24:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// bge cr6,0x8268cda8
	if (!ctx.cr6.lt) goto loc_8268CDA8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CD48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8268cda8
	if (ctx.cr0.lt) goto loc_8268CDA8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CD68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r11,r7,r9
	REX_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt cr6,0x8268cd24
	if (ctx.cr6.lt) goto loc_8268CD24;
loc_8268CDA8:
	// addi r11,r31,44
	ctx.r11.s64 = r31.s64 + 44;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8268cf00
	if (ctx.cr6.lt) goto loc_8268CF00;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r25,r21
	r25.u64 = r21.u64;
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_8268CDC8:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r29,r21
	r29.u64 = r21.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8268CDDC;
	sub_823EF5F0(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
loc_8268CDE8:
	// add r11,r25,r30
	ctx.r11.u64 = r25.u64 + r30.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268ce20
	if (ctx.cr6.eq) goto loc_8268CE20;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CE14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r28.u32 = ea;
loc_8268CE20:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// blt cr6,0x8268cde8
	if (ctx.cr6.lt) goto loc_8268CDE8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8268ceb0
	if (ctx.cr6.eq) goto loc_8268CEB0;
	// addi r7,r27,4
	ctx.r7.s64 = r27.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8268ed18
	ctx.lr = 0x8268CE4C;
	sub_8268ED18(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8268cec0
	if (ctx.cr0.lt) goto loc_8268CEC0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_8268CE64:
	// add r11,r25,r29
	ctx.r11.u64 = r25.u64 + r29.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268cea4
	if (ctx.cr6.eq) goto loc_8268CEA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268CE98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x8268cec0
	if (ctx.cr0.lt) goto loc_8268CEC0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8268CEA4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x8268ce64
	if (ctx.cr6.lt) goto loc_8268CE64;
loc_8268CEB0:
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(r25.u32, 6, ctx.xer);
	// blt cr6,0x8268cdc8
	if (ctx.cr6.lt) goto loc_8268CDC8;
loc_8268CEC0:
	// stw r26,56(r31)
	REX_STORE_U32(r31.u32 + 56, r26.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x8268cf00
	if (ctx.cr6.lt) goto loc_8268CF00;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82691e70
	ctx.lr = 0x8268CEE8;
	sub_82691E70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r20,0(r31)
	REX_STORE_U32(r31.u32 + 0, r20.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// bge 0x8268cf0c
	if (!ctx.cr0.lt) goto loc_8268CF0C;
loc_8268CF00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268c9f0
	ctx.lr = 0x8268CF08;
	sub_8268C9F0(ctx, base);
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8268CF0C:
	// stw r31,0(r19)
	REX_STORE_U32(r19.u32 + 0, r31.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826A1200) {
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
	// bne cr6,0x826a122c
	if (!ctx.cr6.eq) goto loc_826A122C;
	// bl 0x826a33d0
	ctx.lr = 0x826A1218;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A1224;
	sub_8269CB20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1234
	goto loc_826A1234;
loc_826A122C:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
loc_826A1234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_29) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(sub_826A2940) {
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
	// bl 0x826a3a68
	ctx.lr = 0x826A2958;
	sub_826A3A68(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a296c
	if (ctx.cr6.eq) goto loc_826A296C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826a2970
	if (!ctx.cr6.eq) goto loc_826A2970;
loc_826A296C:
	// bl 0x826af230
	ctx.lr = 0x826A2970;
	sub_826AF230(ctx, base);
loc_826A2970:
	// bl 0x826a3a68
	ctx.lr = 0x826A2974;
	sub_826A3A68(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826a2990
	if (!ctx.cr6.eq) goto loc_826A2990;
	// bl 0x826a3a68
	ctx.lr = 0x826A2984;
	sub_826A3A68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// b 0x826a29c8
	goto loc_826A29C8;
loc_826A2990:
	// bl 0x826a3a68
	ctx.lr = 0x826A2994;
	sub_826A3A68(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a29c4
	if (ctx.cr6.eq) goto loc_826A29C4;
loc_826A29A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826a29dc
	if (ctx.cr6.eq) goto loc_826A29DC;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826a29a8
	if (!ctx.cr6.eq) goto loc_826A29A8;
loc_826A29C4:
	// bl 0x826af230
	ctx.lr = 0x826A29C8;
	sub_826AF230(ctx, base);
loc_826A29C8:
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
loc_826A29DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x826a29c8
	goto loc_826A29C8;
}

DEFINE_REX_FUNC(__savevmx_112) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_106) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AA2F8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe. r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826aa33c
	if (!ctx.cr0.eq) goto loc_826AA33C;
	// bl 0x826a33d0
	ctx.lr = 0x826AA328;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AA334;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826aa364
	goto loc_826AA364;
loc_826AA33C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e120
	ctx.lr = 0x826AA344;
	sub_8269E120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a9fa0
	ctx.lr = 0x826AA350;
	sub_826A9FA0(ctx, base);
	// std r3,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r3.u64);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = r31.s64 + 112;
	// bl 0x826aa39c
	ctx.lr = 0x826AA360;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826AA39C(ctx, base);
	r30 = ctx.r30;
	r31 = ctx.r31;
	// ld r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + 80);
loc_826AA364:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

DEFINE_REX_FUNC(sub_826ADFB0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x826a9928
	ctx.lr = 0x826ADFD4;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826ae034
	if (ctx.cr6.eq) goto loc_826AE034;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r9,r11,9456
	ctx.r9.s64 = ctx.r11.s64 + 9456;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_826ADFF4:
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826ae024
	if (ctx.cr6.eq) goto loc_826AE024;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826ae018
	if (ctx.cr6.eq) goto loc_826AE018;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826adff4
	goto loc_826ADFF4;
loc_826AE018:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8269d770
	ctx.lr = 0x826AE024;
	sub_8269D770(ctx, base);
loc_826AE024:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8269d770
	ctx.lr = 0x826AE02C;
	sub_8269D770(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_826AE034:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = r31.s64 + 112;
	// bl 0x826ae058
	ctx.lr = 0x826AE040;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826AE058(ctx, base);
	r30 = ctx.r30;
	r31 = ctx.r31;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
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

DEFINE_REX_FUNC(sub_826B29D8) {
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
	// lwz r9,12(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826b2a0c
	if (!ctx.cr6.eq) goto loc_826B2A0C;
	// bl 0x826a33d0
	ctx.lr = 0x826B29F8;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B2A04;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826b2b24
	goto loc_826B2B24;
loc_826B2A0C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x826b2a2c
	if (!ctx.cr6.eq) goto loc_826B2A2C;
	// bl 0x826a33d0
	ctx.lr = 0x826B2A18;
	sub_826A33D0(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_826B2A1C:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826B2A24;
	sub_8269CB20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826b2b24
	goto loc_826B2B24;
loc_826B2A2C:
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// rlwinm r11,r5,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// li r8,0
	ctx.r8.s64 = 0;
	// addme r11,r11
	temp.u8 = (ctx.r11.u32 + 0xFFFFFFFFu < ctx.r11.u32) | (ctx.r11.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r11.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// stb r8,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826b2a5c
	if (ctx.cr6.gt) goto loc_826B2A5C;
	// bl 0x826a33d0
	ctx.lr = 0x826B2A54;
	sub_826A33D0(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x826b2a1c
	goto loc_826B2A1C;
loc_826B2A5C:
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// stb r7,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// ble cr6,0x826b2aa0
	if (!ctx.cr6.gt) goto loc_826B2AA0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
loc_826B2A7C:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x826b2a90
	if (ctx.cr0.eq) goto loc_826B2A90;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x826b2a94
	goto loc_826B2A94;
loc_826B2A90:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_826B2A94:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x826b2a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826B2A7C;
loc_826B2AA0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blt cr6,0x826b2adc
	if (ctx.cr6.lt) goto loc_826B2ADC;
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,53
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 53, ctx.xer);
	// blt cr6,0x826b2adc
	if (ctx.cr6.lt) goto loc_826B2ADC;
	// b 0x826b2ac4
	goto loc_826B2AC4;
loc_826B2AC0:
	// stb r7,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
loc_826B2AC4:
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,57
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 57, ctx.xer);
	// beq cr6,0x826b2ac0
	if (ctx.cr6.eq) goto loc_826B2AC0;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_826B2ADC:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x826b2af8
	if (!ctx.cr6.eq) goto loc_826B2AF8;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// b 0x826b2b20
	goto loc_826B2B20;
loc_826B2AF8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_826B2AFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826b2afc
	if (!ctx.cr6.eq) goto loc_826B2AFC;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x8269cc20
	ctx.lr = 0x826B2B20;
	sub_8269CC20(ctx, base);
loc_826B2B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2B24:
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

DEFINE_REX_FUNC(sub_826BC560) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x822a5468
	ctx.lr = 0x826BC574;
	sub_822A5468(ctx, base);
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

DEFINE_REX_FUNC(sub_826BEBF8) {
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
	ctx.lr = 0x826BEC00;
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r24,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r24.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// mr r29,r24
	r29.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826BEC28;
	sub_826A2E60(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x826a2e60
	ctx.lr = 0x826BEC3C;
	sub_826A2E60(ctx, base);
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r25,r24
	r25.u64 = r24.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826befb0
	if (ctx.cr6.eq) goto loc_826BEFB0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826befb0
	if (ctx.cr6.eq) goto loc_826BEFB0;
	// lwz r28,0(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x826befb0
	if (ctx.cr6.eq) goto loc_826BEFB0;
	// lwz r11,528(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826befb0
	if (ctx.cr6.eq) goto loc_826BEFB0;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r23,1
	r23.s64 = 1;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lhz r9,36(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826bece8
	if (!ctx.cr6.gt) goto loc_826BECE8;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_826BEC94:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826becb4
	if (!ctx.cr6.eq) goto loc_826BECB4;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r23,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r23.u32);
	// b 0x826becd0
	goto loc_826BECD0;
loc_826BECB4:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r5,r10,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bne cr6,0x826beccc
	if (!ctx.cr6.eq) goto loc_826BECCC;
	// stwx r7,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x826becd0
	goto loc_826BECD0;
loc_826BECCC:
	// stwx r24,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, r24.u32);
loc_826BECD0:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x826bec94
	if (ctx.cr6.lt) goto loc_826BEC94;
loc_826BECE8:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
loc_826BECF8:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x826bed38
	if (ctx.cr6.eq) goto loc_826BED38;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x826bed20
	if (!ctx.cr6.eq) goto loc_826BED20;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x826befb0
	if (ctx.cr6.eq) goto loc_826BEFB0;
loc_826BED20:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826bed30
	if (!ctx.cr6.eq) goto loc_826BED30;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x826befb0
	if (ctx.cr6.eq) goto loc_826BEFB0;
loc_826BED30:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_826BED38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x826becf8
	if (ctx.cr6.lt) goto loc_826BECF8;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_826BED60:
	// lbzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x826bef58
	if (!ctx.cr6.eq) goto loc_826BEF58;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6cf0
	ctx.lr = 0x826BED80;
	sub_826C6CF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826befa0
	if (ctx.cr6.lt) goto loc_826BEFA0;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(r31.u32, 128, ctx.xer);
	// bge cr6,0x826beea8
	if (!ctx.cr6.lt) goto loc_826BEEA8;
loc_826BED9C:
	// addi r27,r1,96
	r27.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r27.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x826bee98
	if (!ctx.cr6.eq) goto loc_826BEE98;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6cf0
	ctx.lr = 0x826BEDC0;
	sub_826C6CF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826befa0
	if (ctx.cr6.lt) goto loc_826BEFA0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x826bee98
	if (!ctx.cr6.eq) goto loc_826BEE98;
	// addi r11,r26,3
	ctx.r11.s64 = r26.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x826bee00
	if (ctx.cr6.eq) goto loc_826BEE00;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826bee44
	if (!ctx.cr6.eq) goto loc_826BEE44;
loc_826BEE00:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826bee44
	if (!ctx.cr6.eq) goto loc_826BEE44;
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826bee44
	if (!ctx.cr6.eq) goto loc_826BEE44;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826beec4
	if (ctx.cr6.eq) goto loc_826BEEC4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x826beec4
	if (ctx.cr6.eq) goto loc_826BEEC4;
loc_826BEE44:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826bee98
	if (!ctx.cr6.eq) goto loc_826BEE98;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x826bee68
	if (ctx.cr6.eq) goto loc_826BEE68;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826bee98
	if (!ctx.cr6.eq) goto loc_826BEE98;
loc_826BEE68:
	// addi r11,r31,3
	ctx.r11.s64 = r31.s64 + 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r28.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826bee84
	if (ctx.cr6.eq) goto loc_826BEE84;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826bee98
	if (!ctx.cr6.eq) goto loc_826BEE98;
loc_826BEE84:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x826beef8
	if (ctx.cr6.eq) goto loc_826BEEF8;
loc_826BEE98:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(r31.u32, 128, ctx.xer);
	// blt cr6,0x826bed9c
	if (ctx.cr6.lt) goto loc_826BED9C;
loc_826BEEA8:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bef2c
	if (!ctx.cr6.eq) goto loc_826BEF2C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x826bef3c
	goto loc_826BEF3C;
loc_826BEEC4:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x826be3c0
	ctx.lr = 0x826BEEE4;
	sub_826BE3C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826befa0
	if (ctx.cr6.lt) goto loc_826BEFA0;
	// stbx r24,r31,r27
	REX_STORE_U8(r31.u32 + r27.u32, r24.u8);
	// b 0x826bef58
	goto loc_826BEF58;
loc_826BEEF8:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x826be3c0
	ctx.lr = 0x826BEF18;
	sub_826BE3C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826befa0
	if (ctx.cr6.lt) goto loc_826BEFA0;
	// stbx r24,r31,r27
	REX_STORE_U8(r31.u32 + r27.u32, r24.u8);
	// b 0x826bef58
	goto loc_826BEF58;
loc_826BEF2C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r10,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_826BEF3C:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826be2d8
	ctx.lr = 0x826BEF4C;
	sub_826BE2D8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826befa0
	if (ctx.cr6.lt) goto loc_826BEFA0;
loc_826BEF58:
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(r30.u32, 128, ctx.xer);
	// blt cr6,0x826bed60
	if (ctx.cr6.lt) goto loc_826BED60;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_826BEF7C:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r5,r28
	REX_STORE_U32(ctx.r5.u32 + r28.u32, ctx.r7.u32);
	// blt cr6,0x826bef7c
	if (ctx.cr6.lt) goto loc_826BEF7C;
loc_826BEFA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826bd9a0
	ctx.lr = 0x826BEFA8;
	sub_826BD9A0(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x826a1cf4
	return;
loc_826BEFB0:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826DE738) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826DE740;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826de76c
	if (!ctx.cr6.eq) goto loc_826DE76C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826DE76C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826de848
	if (ctx.cr6.eq) goto loc_826DE848;
loc_826DE780:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// blt cr6,0x826de848
	if (ctx.cr6.lt) goto loc_826DE848;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826de838
	if (!ctx.cr6.eq) goto loc_826DE838;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826DE7B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de848
	if (ctx.cr6.lt) goto loc_826DE848;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826de7fc
	if (ctx.cr6.eq) goto loc_826DE7FC;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x826de804
	goto loc_826DE804;
loc_826DE7FC:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_826DE804:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x826de820
	if (!ctx.cr0.eq) goto loc_826DE820;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_826DE820:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x826c68d8
	ctx.lr = 0x826DE830;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826de848
	if (ctx.cr6.lt) goto loc_826DE848;
loc_826DE838:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x826de780
	if (!ctx.cr6.eq) goto loc_826DE780;
loc_826DE848:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826E36A8) {
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
	ctx.lr = 0x826E36B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x826e37c0
	if (!ctx.cr6.gt) goto loc_826E37C0;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826E36D4;
	sub_826E07E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// bne cr6,0x826e36f0
	if (!ctx.cr6.eq) goto loc_826E36F0;
loc_826E36E0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_826E36F0:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826E3700;
	sub_826A2E60(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826e37c0
	if (!ctx.cr6.gt) goto loc_826E37C0;
	// li r29,0
	r29.s64 = 0;
loc_826E3714:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826e07e0
	ctx.lr = 0x826E3720;
	sub_826E07E0(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r3,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826e36e0
	if (ctx.cr6.eq) goto loc_826E36E0;
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a2e60
	ctx.lr = 0x826E374C;
	sub_826A2E60(ctx, base);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826e37ac
	if (!ctx.cr6.gt) goto loc_826E37AC;
	// li r30,0
	r30.s64 = 0;
loc_826E3760:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x826e07e0
	ctx.lr = 0x826E3768;
	sub_826E07E0(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826e36e0
	if (ctx.cr6.eq) goto loc_826E36E0;
	// li r5,28
	ctx.r5.s64 = 28;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826E3798;
	sub_826A2E60(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e3760
	if (ctx.cr6.lt) goto loc_826E3760;
loc_826E37AC:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826e3714
	if (ctx.cr6.lt) goto loc_826E3714;
loc_826E37C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826F0C50) {
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
	ctx.lr = 0x826F0C58;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r3,224
	r29.s64 = ctx.r3.s64 + 224;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r28,r4,1776
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r24,r9,r10
	r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r25,r11,r28
	r25.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x826f1f78
	ctx.lr = 0x826F0C94;
	sub_826F1F78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0da4
	if (ctx.cr6.lt) goto loc_826F0DA4;
	// lhz r11,114(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 114);
	// li r23,1
	r23.s64 = 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x826f0cd0
	if (ctx.cr6.gt) goto loc_826F0CD0;
	// lwz r11,132(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826f0cd0
	if (ctx.cr6.eq) goto loc_826F0CD0;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
	// b 0x826f0d00
	goto loc_826F0D00;
loc_826F0CD0:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F0CE4;
	sub_826E58B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0da4
	if (ctx.cr6.lt) goto loc_826F0DA4;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
loc_826F0D00:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x826f0d54
	if (!ctx.cr6.eq) goto loc_826F0D54;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826f0d54
	if (!ctx.cr6.eq) goto loc_826F0D54;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F0D34;
	sub_826E58B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0da4
	if (ctx.cr6.lt) goto loc_826F0DA4;
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,436(r9)
	REX_STORE_U32(ctx.r9.u32 + 436, ctx.r8.u32);
loc_826F0D54:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x826f0da0
	if (!ctx.cr6.eq) goto loc_826F0DA0;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826f0da0
	if (!ctx.cr6.eq) goto loc_826F0DA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r26,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, r26.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r26,124(r31)
	REX_STORE_U32(r31.u32 + 124, r26.u32);
	// lwz r9,304(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 304);
	// lwz r11,320(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a1e70
	ctx.lr = 0x826F0DA0;
	sub_826A1E70(ctx, base);
loc_826F0DA0:
	// stw r23,4(r24)
	REX_STORE_U32(r24.u32 + 4, r23.u32);
loc_826F0DA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826FAD28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826FAD38:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826fad38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826FAD38;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FB118) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826fb1b0
	if (ctx.cr6.eq) goto loc_826FB1B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x826fb1b0
	if (ctx.cr6.eq) goto loc_826FB1B0;
loc_826FB150:
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// bl 0x82716b40
	ctx.lr = 0x826FB170;
	sub_82716B40(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lwz r10,15504(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15504);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x826fb1a4
	if (!ctx.cr6.eq) goto loc_826FB1A4;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x82716398
	ctx.lr = 0x826FB1A4;
	sub_82716398(ctx, base);
loc_826FB1A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fb150
	if (!ctx.cr6.eq) goto loc_826FB150;
loc_826FB1B0:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82702D98) {
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
	ctx.lr = 0x82702DA0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82702df8
	if (ctx.cr6.eq) goto loc_82702DF8;
	// lwz r11,20696(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82702df8
	if (!ctx.cr6.eq) goto loc_82702DF8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823ecc50
	ctx.lr = 0x82702DE4;
	sub_823ECC50(ctx, base);
	// ld r11,20672(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 20672);
	// ld r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// stw r22,20696(r31)
	REX_STORE_U32(r31.u32 + 20696, r22.u32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// std r9,20672(r31)
	REX_STORE_U64(r31.u32 + 20672, ctx.r9.u64);
loc_82702DF8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702e10
	if (ctx.cr6.eq) goto loc_82702E10;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_82702E10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82702fc4
	if (ctx.cr6.eq) goto loc_82702FC4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82702fc4
	if (ctx.cr6.eq) goto loc_82702FC4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82702fc4
	if (ctx.cr6.eq) goto loc_82702FC4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82702fc4
	if (ctx.cr6.eq) goto loc_82702FC4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82702fc4
	if (ctx.cr6.eq) goto loc_82702FC4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82702fc4
	if (ctx.cr6.eq) goto loc_82702FC4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82702fc4
	if (ctx.cr6.eq) goto loc_82702FC4;
	// lwz r11,22264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82702ea8
	if (!ctx.cr6.eq) goto loc_82702EA8;
loc_82702E54:
	// stw r30,22372(r31)
	REX_STORE_U32(r31.u32 + 22372, r30.u32);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r28,22376(r31)
	REX_STORE_U32(r31.u32 + 22376, r28.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r22,22368(r31)
	REX_STORE_U32(r31.u32 + 22368, r22.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r27,22380(r31)
	REX_STORE_U32(r31.u32 + 22380, r27.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,22384(r31)
	REX_STORE_U32(r31.u32 + 22384, r26.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r25,22388(r31)
	REX_STORE_U32(r31.u32 + 22388, r25.u32);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r24,22392(r31)
	REX_STORE_U32(r31.u32 + 22392, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82701cf8
	ctx.lr = 0x82702E90;
	sub_82701CF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc950
	ctx.lr = 0x82702E9C;
	sub_826FC950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_82702EA8:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fbd38
	ctx.lr = 0x82702EB8;
	sub_826FBD38(ctx, base);
	// lwz r11,22340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22340);
	// lwz r23,96(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,104(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82702ed8
	if (!ctx.cr6.eq) goto loc_82702ED8;
	// lwz r10,22344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22344);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82702e54
	if (ctx.cr6.eq) goto loc_82702E54;
loc_82702ED8:
	// lwz r10,22348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82702f3c
	if (!ctx.cr6.eq) goto loc_82702F3C;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// bgt cr6,0x82702ef4
	if (ctx.cr6.gt) goto loc_82702EF4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82702EF4:
	// lwz r11,22344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22344);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82702f04
	if (!ctx.cr6.gt) goto loc_82702F04;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82702F04:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8271b190
	ctx.lr = 0x82702F18;
	sub_8271B190(ctx, base);
	// addi r10,r3,127
	ctx.r10.s64 = ctx.r3.s64 + 127;
	// stw r3,22348(r31)
	REX_STORE_U32(r31.u32 + 22348, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r9,22352(r31)
	REX_STORE_U32(r31.u32 + 22352, ctx.r9.u32);
	// bne cr6,0x82702f3c
	if (!ctx.cr6.eq) goto loc_82702F3C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_82702F3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,22352(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22352);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// stw r11,22368(r31)
	REX_STORE_U32(r31.u32 + 22368, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82701cf8
	ctx.lr = 0x82702F64;
	sub_82701CF8(ctx, base);
	// lis r4,12338
	ctx.r4.s64 = 808583168;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,22352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22352);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r9,22344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22344);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r8,22340(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 22340);
	// ori r4,r4,13385
	ctx.r4.u64 = ctx.r4.u64 | 13385;
	// stw r22,22368(r31)
	REX_STORE_U32(r31.u32 + 22368, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,22372(r31)
	REX_STORE_U32(r31.u32 + 22372, r30.u32);
	// stw r28,22376(r31)
	REX_STORE_U32(r31.u32 + 22376, r28.u32);
	// stw r27,22380(r31)
	REX_STORE_U32(r31.u32 + 22380, r27.u32);
	// stw r26,22384(r31)
	REX_STORE_U32(r31.u32 + 22384, r26.u32);
	// stw r25,22388(r31)
	REX_STORE_U32(r31.u32 + 22388, r25.u32);
	// stw r24,22392(r31)
	REX_STORE_U32(r31.u32 + 22392, r24.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x826fbe18
	ctx.lr = 0x82702FAC;
	sub_826FBE18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc950
	ctx.lr = 0x82702FB8;
	sub_826FC950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
loc_82702FC4:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8271D5C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8271D5C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r29,r11,32769
	r29.u64 = ctx.r11.u64 | 32769;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8271D5E4;
	sub_823F02B8(ctx, base);
	// stw r3,15236(r31)
	REX_STORE_U32(r31.u32 + 15236, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// li r30,0
	r30.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x8271D610;
	sub_823F02B8(ctx, base);
	// stw r3,1900(r31)
	REX_STORE_U32(r31.u32 + 1900, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x8271D620;
	sub_823F02B8(ctx, base);
	// stw r3,1904(r31)
	REX_STORE_U32(r31.u32 + 1904, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x8271D630;
	sub_823F02B8(ctx, base);
	// stw r3,1908(r31)
	REX_STORE_U32(r31.u32 + 1908, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x8271D640;
	sub_823F02B8(ctx, base);
	// lwz r11,1900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1900);
	// stw r3,1912(r31)
	REX_STORE_U32(r31.u32 + 1912, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// lwz r10,1904(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1904);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// lwz r10,1908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1908);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8271D680;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1904(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1904);
	// bl 0x826a2e60
	ctx.lr = 0x8271D690;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1908(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1908);
	// bl 0x826a2e60
	ctx.lr = 0x8271D6A0;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1912(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1912);
	// bl 0x826a2e60
	ctx.lr = 0x8271D6B0;
	sub_826A2E60(ctx, base);
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// lwz r10,1900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8271d6ec
	if (!ctx.cr6.eq) goto loc_8271D6EC;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r8,1900(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1900);
	// sth r11,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
	// lwz r7,1904(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1904);
	// sth r11,16(r7)
	REX_STORE_U16(ctx.r7.u32 + 16, ctx.r11.u16);
	// lwz r6,1904(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1904);
	// sth r11,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// stw r9,3924(r31)
	REX_STORE_U32(r31.u32 + 3924, ctx.r9.u32);
	// b 0x8271d710
	goto loc_8271D710;
loc_8271D6EC:
	// li r11,128
	ctx.r11.s64 = 128;
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r9,1900(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1900);
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// lwz r8,1904(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1904);
	// sth r11,16(r8)
	REX_STORE_U16(ctx.r8.u32 + 16, ctx.r11.u16);
	// lwz r7,1904(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1904);
	// sth r11,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// stw r30,3924(r31)
	REX_STORE_U32(r31.u32 + 3924, r30.u32);
loc_8271D710:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8271d744
	if (ctx.cr6.lt) goto loc_8271D744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,3364(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// bl 0x8276f8b0
	ctx.lr = 0x8271D728;
	sub_8276F8B0(ctx, base);
	// stw r3,1996(r31)
	REX_STORE_U32(r31.u32 + 1996, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// bl 0x8276f488
	ctx.lr = 0x8271D738;
	sub_8276F488(ctx, base);
	// stw r3,1988(r31)
	REX_STORE_U32(r31.u32 + 1988, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
loc_8271D744:
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8271d798
	if (ctx.cr6.lt) goto loc_8271D798;
	// lwz r11,352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8271d774
	if (!ctx.cr6.eq) goto loc_8271D774;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823f02b8
	ctx.lr = 0x8271D768;
	sub_823F02B8(ctx, base);
	// stw r3,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
loc_8271D774:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,832
	ctx.r3.s64 = 832;
	// bl 0x823f02b8
	ctx.lr = 0x8271D780;
	sub_823F02B8(ctx, base);
	// stw r3,15248(r31)
	REX_STORE_U32(r31.u32 + 15248, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,15252(r31)
	REX_STORE_U32(r31.u32 + 15252, ctx.r10.u32);
loc_8271D798:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1568
	ctx.r3.s64 = 1568;
	// bl 0x823f02b8
	ctx.lr = 0x8271D7A4;
	sub_823F02B8(ctx, base);
	// stw r3,1880(r31)
	REX_STORE_U32(r31.u32 + 1880, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271d7e8
	if (ctx.cr6.eq) goto loc_8271D7E8;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// li r3,832
	ctx.r3.s64 = 832;
	// stw r10,1884(r31)
	REX_STORE_U32(r31.u32 + 1884, ctx.r10.u32);
	// bl 0x823f02b8
	ctx.lr = 0x8271D7C8;
	sub_823F02B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// stw r11,1872(r31)
	REX_STORE_U32(r31.u32 + 1872, ctx.r11.u32);
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,1876(r31)
	REX_STORE_U32(r31.u32 + 1876, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8271D7E8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82728058) {
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
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x82728060;
	// li r11,416
	ctx.r11.s64 = 416;
	// lvx128 v62,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,480
	ctx.r9.s64 = 480;
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,384
	ctx.r10.s64 = 384;
	// vcsxwfp128 v60,v62,11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r8,448
	ctx.r8.s64 = 448;
	// vcsxwfp128 v61,v63,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// li r27,208
	r27.s64 = 208;
	// lvx128 v59,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,240
	r29.s64 = 240;
	// lvx128 v56,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v57,v59,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v58,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v56,11
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v56.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v54,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v55,v58,11
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v52,v54,11
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v54.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r26,192
	r26.s64 = 192;
	// li r28,224
	r28.s64 = 224;
	// lvx128 v50,r6,r27
	ea = (ctx.r6.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,352
	ctx.r7.s64 = 352;
	// lvx128 v46,r6,r29
	ea = (ctx.r6.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v50,0
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// vcsxwfp128 v43,v46,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lvx128 v51,r6,r26
	ea = (ctx.r6.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,32
	r31.s64 = 32;
	// lvx128 v47,r6,r28
	ea = (ctx.r6.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v51,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// lvx128 v44,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v45,v47,0
	simde_mm_store_ps(ctx.v45.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vcsxwfp128 v42,v44,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// vmulfp128 v41,v57,v1
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v1.f32)));
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// vmulfp128 v39,v53,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r30,176
	r30.s64 = 176;
	// vmulfp128 v40,v55,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vmulfp128 v38,v52,v1
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v1.f32)));
	// li r3,48
	ctx.r3.s64 = 48;
	// li r4,64
	ctx.r4.s64 = 64;
	// lvx128 v35,r22,r31
	ea = (r22.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,80
	ctx.r5.s64 = 80;
	// vcsxwfp128 v56,v35,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v35.u32)));
	// li r8,128
	ctx.r8.s64 = 128;
	// lvx128 v37,r22,r30
	ea = (r22.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,160
	ctx.r10.s64 = 160;
	// lvx128 v36,r22,r11
	ea = (r22.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// lvx128 v34,r22,r3
	ea = (r22.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx128 v33,r22,r4
	ea = (r22.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r21,288
	r21.s64 = 288;
	// lvx128 v32,r22,r5
	ea = (r22.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// vcsxwfp128 v62,v37,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)));
	// li r20,256
	r20.s64 = 256;
	// vmsum4fp128 v50,v41,v48
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v48.f32), 0xFF));
	// li r19,320
	r19.s64 = 320;
	// vmsum4fp128 v41,v39,v43
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v43.f32), 0xFF));
	// vcsxwfp128 v58,v36,0
	simde_mm_store_ps(ctx.v58.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmsum4fp128 v46,v40,v49
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v39,v38,v45
	simde_mm_store_ps(ctx.v39.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// lvx128 v63,r22,r6
	ea = (r22.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r22,r7
	ea = (r22.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v54,v34,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)));
	// lvx128 v57,r22,r8
	ea = (r22.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v33,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// lvx128 v55,r23,r21
	ea = (r23.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v37,v42,v1
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v53,r22,r9
	ea = (r22.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v35,v32,0
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// lvx128 v51,r22,r10
	ea = (r22.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r23,r20
	ea = (r23.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r23,r10
	ea = (r23.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r23,r8
	ea = (r23.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r23,r31
	ea = (r23.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r23,r19
	ea = (r23.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v34,v63,0
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// lvx128 v42,r23,r6
	ea = (r23.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v63,v55,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v37,v37,v62
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vcsxwfp128 v55,v44,11
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v44.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r6,496
	ctx.r6.s64 = 496;
	// vcsxwfp128 v32,v57,0
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// lvx128 v57,r23,r28
	ea = (r23.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v33,v59,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// li r10,400
	ctx.r10.s64 = 400;
	// vcsxwfp128 v44,v40,11
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r8,304
	ctx.r8.s64 = 304;
	// vcsxwfp128 v59,v47,11
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v47,r23,r26
	ea = (r23.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v40,v38,11
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v38,r23,r4
	ea = (r23.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v36,v36,11
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v36.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r4,432
	ctx.r4.s64 = 432;
	// vcsxwfp128 v57,v57,11
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r31,272
	r31.s64 = 272;
	// vcsxwfp128 v47,v47,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r28,464
	r28.s64 = 464;
	// vcsxwfp128 v42,v42,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v42.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// li r26,368
	r26.s64 = 368;
	// vcsxwfp128 v38,v38,11
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v0,r23,r6
	ea = (r23.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v13,r23,r4
	ea = (r23.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v53,v53,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)));
	// lvx128 v12,r23,r10
	ea = (r23.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v55,v55,v1
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v11,r23,r8
	ea = (r23.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v51,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// lvx128 v10,r23,r31
	ea = (r23.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v44,v44,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v9,r23,r28
	ea = (r23.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v59,v1
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v8,r23,r26
	ea = (r23.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v40,v40,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v36,v36,v1
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v57,v57,v1
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v60,v60,v1
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v47,v47,v1
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v42,v42,v1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v38,v38,v1
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v63,v63,v53
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v53.f32), 0xFF));
	// vcfpuxws128 v50,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v50.f32)));
	// vmsum4fp128 v55,v55,v35
	simde_mm_store_ps(ctx.v55.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v35.f32), 0xFF));
	// vcfpuxws128 v46,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpuxws128 v41,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v41.f32)));
	// vcfpuxws128 v39,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v39.f32)));
	// vmsum4fp128 v44,v44,v52
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v59,v59,v32
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v32.f32), 0xFF));
	// vcfpuxws128 v37,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v37.f32)));
	// vmsum4fp128 v40,v40,v58
	simde_mm_store_ps(ctx.v40.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// vcfsx v7,v0,11
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v36,v36,v51
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v51.f32), 0xFF));
	// vcfsx v6,v13,11
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v57,v57,v33
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v33.f32), 0xFF));
	// vcfsx v5,v12,11
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v60,v60,v61
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// vcfsx v4,v11,11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v11.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v47,v47,v34
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v34.f32), 0xFF));
	// vcfsx v3,v10,11
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v10.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v42,v42,v54
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vcfsx v2,v9,11
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v38,v38,v56
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// vrlimi128 v46,v50,4,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 228), 4));
	// vrlimi128 v39,v41,1,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 228), 1));
	// vcfpuxws128 v50,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v63.f32)));
	// vcfpuxws128 v63,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v55.f32)));
	// vrlimi128 v46,v39,3,0
	simde_mm_store_ps(ctx.v46.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v46.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v39.f32), 228), 3));
	// vcfpuxws128 v41,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v59.f32)));
	// vcfpuxws128 v59,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vcfpuxws128 v55,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v40.f32)));
	// vcfpuxws128 v44,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v36.f32)));
	// vcfpuxws128 v40,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v57.f32)));
	// vcfpuxws128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpuxws128 v39,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v47.f32)));
	// vcfpuxws128 v36,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v42.f32)));
	// vcfpuxws128 v57,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// li r6,336
	ctx.r6.s64 = 336;
	// vrlimi128 v60,v55,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v55.f32), 228), 4));
	// vrlimi128 v41,v50,4,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v50.f32), 228), 4));
	// lvx128 v55,r23,r30
	ea = (r23.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r23,r9
	ea = (r23.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v59,v63,4,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 4));
	// lvx128 v38,r23,r29
	ea = (r23.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v55,11
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v55.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vcsxwfp128 v42,v50,11
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v63,r23,r27
	ea = (r23.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v50,v38,11
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v44,v37,1,0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v37.f32), 228), 1));
	// vcsxwfp128 v55,v8,11
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// lvx128 v38,r23,r6
	ea = (r23.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v37,v63,11
	simde_mm_store_ps(ctx.v37.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v57,v36,1,0
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v36.f32), 228), 1));
	// vcsxwfp128 v63,v38,11
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v38.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vrlimi128 v39,v40,1,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v40.f32), 228), 1));
	// vmulfp128 v38,v6,v1
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vrlimi128 v41,v44,3,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v44.f32), 228), 3));
	// vmulfp128 v31,v7,v1
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v40,v5,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vrlimi128 v60,v57,3,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 3));
	// vmulfp128 v44,v2,v1
	simde_mm_store_ps(ctx.v44.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vrlimi128 v59,v39,3,0
	simde_mm_store_ps(ctx.v59.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v39.f32), 228), 3));
	// vmulfp128 v36,v4,v1
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v30,v3,v1
	simde_mm_store_ps(v30.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v39,v47,v1
	simde_mm_store_ps(ctx.v39.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v47.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v47,r23,r3
	ea = (r23.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v42,v42,v1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vpkswus128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// vmulfp128 v50,v50,v1
	simde_mm_store_ps(ctx.v50.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v57,v55,v1
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vpkswus128 v55,v41,v46
	simde_mm_store_si128((simde__m128i*)ctx.v55.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.s32), simde_mm_load_si128((simde__m128i*)ctx.v41.s32)));
	// vmulfp128 v41,v37,v1
	simde_mm_store_ps(ctx.v41.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v46,r23,r11
	ea = (r23.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v1
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v37,r23,r7
	ea = (r23.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v59,v38,v48
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v48.f32), 0xFF));
	// vcsxwfp128 v48,v47,11
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v38,v31,v43
	simde_mm_store_ps(ctx.v38.f32, simde_mm_dp_ps(simde_mm_load_ps(v31.f32), simde_mm_load_ps(ctx.v43.f32), 0xFF));
	// vpkuhus128 v43,v60,v55
	vTemp.u8[15] = ctx.v60.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[7];
	vTemp.u8[7] = ctx.v55.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[7];
	vTemp.u8[14] = ctx.v60.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[6];
	vTemp.u8[6] = ctx.v55.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[6];
	vTemp.u8[13] = ctx.v60.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[5];
	vTemp.u8[5] = ctx.v55.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[5];
	vTemp.u8[12] = ctx.v60.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[4];
	vTemp.u8[4] = ctx.v55.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[4];
	vTemp.u8[11] = ctx.v60.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[3];
	vTemp.u8[3] = ctx.v55.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[3];
	vTemp.u8[10] = ctx.v60.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[2];
	vTemp.u8[2] = ctx.v55.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[2];
	vTemp.u8[9] = ctx.v60.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[1];
	vTemp.u8[1] = ctx.v55.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[1];
	vTemp.u8[8] = ctx.v60.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v60.u16[0];
	vTemp.u8[0] = ctx.v55.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v55.u16[0];
	ctx.v43 = vTemp;
	// vmsum4fp128 v47,v40,v49
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v49.f32), 0xFF));
	// vcsxwfp128 v49,v46,11
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v60,v44,v45
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v45.f32), 0xFF));
	// lvx128 v40,r23,r5
	ea = (r23.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v46,v36,v53
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v53.f32), 0xFF));
	// vcsxwfp128 v55,v40,11
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v36,v30,v32
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v32.f32), 0xFF));
	// vcsxwfp128 v32,v37,11
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3A000000)))));
	// vmsum4fp128 v53,v39,v35
	simde_mm_store_ps(ctx.v53.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v35.f32), 0xFF));
	// vmsum4fp128 v52,v42,v52
	simde_mm_store_ps(ctx.v52.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v52.f32), 0xFF));
	// vmsum4fp128 v44,v50,v33
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v33.f32), 0xFF));
	// stvlx128 v43,r0,r25
	ea = r25.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// vmsum4fp128 v45,v57,v62
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvrx128 v43,r25,r11
	ea = r25.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// vmsum4fp128 v42,v41,v34
	simde_mm_store_ps(ctx.v42.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v34.f32), 0xFF));
	// vmsum4fp128 v41,v63,v51
	simde_mm_store_ps(ctx.v41.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v51.f32), 0xFF));
	// vmulfp128 v40,v48,v1
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v51,v49,v1
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vcfpuxws128 v39,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v59.f32)));
	// vcfpuxws128 v35,v38,0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v38.f32)));
	// vcfpuxws128 v37,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v47.f32)));
	// vcfpuxws128 v63,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v60.f32)));
	// vcfpuxws128 v34,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpuxws128 v33,v36,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v36.f32)));
	// vcfpuxws128 v62,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v53.f32)));
	// vcfpuxws128 v60,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v52.f32)));
	// vcfpuxws128 v57,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vmsum4fp128 v50,v40,v58
	simde_mm_store_ps(ctx.v50.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// vcfpuxws128 v59,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpuxws128 v53,v42,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v42.f32)));
	// vcfpuxws128 v52,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v41.f32)));
	// vmulfp128 v49,v32,v1
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vrlimi128 v37,v39,4,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v39.f32), 228), 4));
	// vrlimi128 v63,v35,1,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v35.f32), 228), 1));
	// vrlimi128 v33,v34,4,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v34.f32), 228), 4));
	// vrlimi128 v60,v62,4,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v37,v63,3,0
	simde_mm_store_ps(ctx.v37.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 3));
	// vrlimi128 v53,v57,1,0
	simde_mm_store_ps(ctx.v53.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v57.f32), 228), 1));
	// vrlimi128 v52,v59,1,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 1));
	// vmulfp128 v48,v55,v1
	simde_mm_store_ps(ctx.v48.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v1.f32)));
	// vmsum4fp128 v46,v51,v61
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v45,v49,v54
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// vcfpuxws128 v43,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v50.f32)));
	// vrlimi128 v33,v52,3,0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v52.f32), 228), 3));
	// vrlimi128 v60,v53,3,0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v53.f32), 228), 3));
	// vpkswus128 v47,v33,v37
	simde_mm_store_si128((simde__m128i*)ctx.v47.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.s32), simde_mm_load_si128((simde__m128i*)ctx.v33.s32)));
	// vmsum4fp128 v44,v48,v56
	simde_mm_store_ps(ctx.v44.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// vcfpuxws128 v42,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v46.f32)));
	// vcfpuxws128 v41,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v45.f32)));
	// vcfpuxws128 v40,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, rex::ppc::simde_mm_vctuxs(simde_mm_load_ps(ctx.v44.f32)));
	// vrlimi128 v42,v43,4,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v43.f32), 228), 4));
	// vrlimi128 v40,v41,1,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 228), 1));
	// vrlimi128 v42,v40,3,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v40.f32), 228), 3));
	// vpkswus128 v39,v42,v60
	simde_mm_store_si128((simde__m128i*)ctx.v39.u16, simde_mm_packus_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v42.s32)));
	// vpkuhus128 v38,v39,v47
	vTemp.u8[15] = ctx.v39.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[7];
	vTemp.u8[7] = ctx.v47.u16[7] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[7];
	vTemp.u8[14] = ctx.v39.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[6];
	vTemp.u8[6] = ctx.v47.u16[6] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[6];
	vTemp.u8[13] = ctx.v39.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[5];
	vTemp.u8[5] = ctx.v47.u16[5] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[5];
	vTemp.u8[12] = ctx.v39.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[4];
	vTemp.u8[4] = ctx.v47.u16[4] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[4];
	vTemp.u8[11] = ctx.v39.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[3];
	vTemp.u8[3] = ctx.v47.u16[3] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[3];
	vTemp.u8[10] = ctx.v39.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[2];
	vTemp.u8[2] = ctx.v47.u16[2] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[2];
	vTemp.u8[9] = ctx.v39.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[1];
	vTemp.u8[1] = ctx.v47.u16[1] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[1];
	vTemp.u8[8] = ctx.v39.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v39.u16[0];
	vTemp.u8[0] = ctx.v47.u16[0] > 0xFF ? 0xFF : (uint8_t)ctx.v47.u16[0];
	ctx.v38 = vTemp;
	// stvlx128 v38,r0,r24
	ea = r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvrx128 v38,r24,r11
	ea = r24.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v38.u8[i]);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_8276A948) {
	REX_FUNC_PROLOGUE();
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
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r6,112
	ctx.r6.s64 = 112;
	// vspltish v11,4
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x4)));
	// li r7,48
	ctx.r7.s64 = 48;
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// li r8,80
	ctx.r8.s64 = 80;
	// lvx128 v3,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vslh v26,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v10,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v8,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v4,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lvx128 v7,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v1,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r11,96
	ctx.r11.s64 = 96;
	// vadduhm v24,v10,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// lvx128 v31,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v23,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v6,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v22,v9,v7
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vspltish v30,1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x1)));
	// vslh v21,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vspltish v12,6
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x6)));
	// vadduhm v19,v2,v24
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// lvx128 v5,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubuhm v8,v23,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v20,v1,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vslh v18,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v10,v22,v22
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v22.u8));
	// vadduhm v16,v1,v21
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v1,v8,v20
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v29,v8,v19
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v15,v18,v2
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vor v8,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vslh v14,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v15,v8
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v27,v8,v16
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v23,v25,v4
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vor v8,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// vadduhm v22,v3,v24
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v21,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v14,v26
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v18,v8,v23
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v17,v8,v22
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v15,v9,v9
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v8,v20,v21
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vadduhm v2,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v16,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vslh v7,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v31,v5,v5
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v26,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v10,v16,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v2,v8
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v24,v6,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v7,v9
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v21,v26,v31
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v20,v4,v15
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v19,v3,v14
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubuhm v9,v2,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v1,v1,v18
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v31,v29,v17
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v7,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v8,v21,v24
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vsubuhm v18,v10,v20
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v17,v10,v19
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vor v11,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v25.u8));
	// vadduhm v5,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// vsubuhm v11,v11,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// li r31,16
	r31.s64 = 16;
	// vadduhm v8,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// addi r4,r4,-25840
	ctx.r4.s64 = ctx.r4.s64 + -25840;
	// vadduhm v10,v28,v18
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vspltish v16,8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_set1_epi16(short(0x8)));
	// vadduhm v6,v27,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubuhm v9,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v15,v8,v1
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v5,v10
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v7,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v6,v11,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsubuhm v4,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v2,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vsrah v11,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v10,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v3,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v1,v9,v31
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vsrah v8,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v31,v11,v10
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v7,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrglh v29,v11,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vsrah v6,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v9,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v11,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vmrghh v28,v7,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v22,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglh v27,v7,v6
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvx128 v7,r4,r31
	ea = (ctx.r4.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v26,v9,v8
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v6,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v25,v5,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglh v24,v5,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglh v23,v9,v8
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_unpacklo_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vmrghw128 v63,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrghw128 v59,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglw128 v56,v27,v24
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v24.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vmrglw128 v60,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrglw128 v62,v31,v26
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrglw128 v58,v28,v25
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v25.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrghw128 v61,v29,v23
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v23.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrghw128 v57,v27,v24
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v24.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vperm128 v11,v63,v59,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v10,v60,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v9,v62,v58,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v8,v61,v57,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vperm128 v4,v63,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v7,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vperm128 v3,v61,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v31,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v5,v62,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v21,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v2,v60,v56,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v20,v1,v11
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vslh v19,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v10,v10
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v16,v31,v21
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vsubuhm v11,v19,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v28,v7,v7
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vadduhm v14,v31,v17
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v6,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v29,v11,v20
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsubuhm v31,v11,v16
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v15,v18,v1
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vor v11,v28,v28
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// vadduhm v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v25,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v9,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v6,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v24,v9,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v23,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v4,v4
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v28,v11,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsubuhm v27,v11,v14
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v19,v25,v10
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v11,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// vadduhm v18,v1,v24
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v17,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubuhm v16,v23,v6
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v15,v5,v5
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vslh v14,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v9,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v4,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vslh v3,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v26,v2,v5
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v25,v11,v19
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vsubuhm v24,v11,v18
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v23,v10,v8
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v21,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v1,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vor v11,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vadduhm v19,v15,v5
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v9,v14,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v10,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vslh v0,v26,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v0.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v18,v3,v2
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubuhm v17,v11,v23
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vsubuhm v16,v11,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v15,v21,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v11,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v9,v0,v18
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vsubuhm v0,v0,v15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsrah v8,v7,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsubuhm v4,v31,v25
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vsrah v13,v6,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v1,v28,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vadduhm v3,v29,v24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vadduhm v5,v27,v16
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsubuhm v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubuhm v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vadduhm v6,v1,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v10,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v13,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v8,v3,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v14,v7,v6
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v5,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v4,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v2,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vsubuhm v1,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vsubuhm v31,v9,v10
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsubuhm v30,v7,v6
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_sub_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vsrah v29,v14,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v24,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v28,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v23,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v27,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v26,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v23,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B7840) {
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
	ctx.lr = 0x827B7848;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r9,1120
	ctx.r9.s64 = 1120;
	// vspltish v8,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0x3)));
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// lwz r30,1164(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 1164);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v26,7
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_set1_epi16(short(0x7)));
	// subf r10,r4,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v10,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, result);
	}
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// li r31,1
	r31.s64 = 1;
	// lvx128 v11,r6,r9
	ea = (ctx.r6.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltish v31,1
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_set1_epi16(short(0x1)));
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// vaddshs v1,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r28,-32
	r28.s64 = -32;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// li r29,-16
	r29.s64 = -16;
	// vsubshs v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vspltish v30,5
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_set1_epi16(short(0x5)));
	// slw r9,r31,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r8.u8 & 0x3F));
	// li r3,16
	ctx.r3.s64 = 16;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bne cr6,0x827b79f0
	if (!ctx.cr6.eq) goto loc_827B79F0;
	// lvx128 v60,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
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
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b7bd0
	if (!ctx.cr6.gt) goto loc_827B7BD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_827B7914:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// vadduhm v22,v6,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v57,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v29,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v28,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v27,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v21,v3,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v20,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v9,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v29,v2
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vadduhm v15,v27,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v29,v17,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v2,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v28,v21,v15
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v14,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v24
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v24,v2,v3
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vsubshs v20,v7,v6
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v23,v0,v23
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v19,v24,v1
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v17,v21,v27
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v16,v20,v23
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v18,v22,v1
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v6,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v3,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsrah v15,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// blt cr6,0x827b7914
	if (ctx.cr6.lt) goto loc_827B7914;
	// b 0x827b7bd0
	goto loc_827B7BD0;
loc_827B79F0:
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
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvrx128 v49,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v9,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r31,r11
	temp.u32 = r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v2,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b7bd0
	if (!ctx.cr6.gt) goto loc_827B7BD0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
loc_827B7A74:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vor v29,v11,v11
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v28,v10,v10
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v6,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v11,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v1,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v42,v1
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vslh v22,v10,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v3
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v2
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v19
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v2,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v24,v23,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vor v27,v9,v9
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v22,v20,v10
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v16,v24,v15
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v21,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v19,v23
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v29,v22,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v9,v30
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v4,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vadduhm v15,v29,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v28,v24,v28
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vor128 v1,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v31
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vsubshs v18,v0,v21
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v23,v3,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsubshs v22,v2,v19
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vadduhm v20,v15,v1
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v15,v29,v14
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v21,v17,v1
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vadduhm v14,v24,v28
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v29,v23,v18
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v28,v22,v16
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v19,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v22,v21,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v21,v20,v28
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vsubshs v27,v0,v19
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubshs v24,v4,v17
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vadduhm v23,v14,v15
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vsrah v18,v22,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v20,v24,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// stvx128 v18,r10,r28
	ea = (ctx.r10.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r29
	ea = (ctx.r10.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vsrah v15,v16,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// blt cr6,0x827b7a74
	if (ctx.cr6.lt) goto loc_827B7A74;
loc_827B7BD0:
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// li r11,0
	ctx.r11.s64 = 0;
	// vspltish v12,-1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vspltish v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vslh v9,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// bne cr6,0x827b7c58
	if (!ctx.cr6.eq) goto loc_827B7C58;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b7cf4
	if (!ctx.cr6.gt) goto loc_827B7CF4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,4
	ctx.r9.s64 = 4;
loc_827B7C04:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v12,v13,v40,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 12));
	// vsldoi128 v10,v13,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 14));
	// vsldoi128 v7,v13,v40,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), 10));
	// vadduhm v12,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v6,v13,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v5,v12,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vadduhm v3,v12,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vadduhm v2,v3,v25
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v1,v2,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v31,v1,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v39,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v31.u8)));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b7c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B7C04;
	// b 0x827b7cf4
	goto loc_827B7CF4;
loc_827B7C58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827b7cf4
	if (!ctx.cr6.gt) goto loc_827B7CF4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_827B7C70:
	// lvx128 v13,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v13,v38,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 12));
	// vsldoi128 v7,v13,v38,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 14));
	// vsldoi128 v6,v13,v38,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), 10));
	// vsldoi v5,v12,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vsldoi v4,v12,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v12,v13,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 10));
	// vadduhm v1,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v13,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v12,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v0,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v13,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v0,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v24,v10,v29
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v23,v13,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v22,v24,v25
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v21,v23,v25
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v12,v22,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v20,v21,v30
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v19,v12,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v20,v26
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v37,v11,v19
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)v19.u8)));
	// vpkshus128 v36,v19,v18
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v11,v37,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)v18.u8)));
	// stvx128 v36,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bdnz 0x827b7c70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B7C70;
loc_827B7CF4:
	// vand v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
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

